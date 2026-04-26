#include<bits/stdc++.h>
using namespace std;

auto init = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();

class NumArray{
private:
    vector<int> seg;
    int sSize;
    int level;

    void build(int node, int lvl, int start, int end){
        if(start == end){
            cin >> seg[node];
            return;
        }

        int mid = start + ((end-start)>>1);
        build(2*node, lvl+1, start, mid);
        build(2*node+1, lvl+1, mid+1, end);

        int bottomDist = level-lvl;

        if(bottomDist&1) seg[node] = seg[2*node] | seg[2*node+1];
        else seg[node] = seg[2*node] ^ seg[2*node+1];
    }

    void updateSeg(int node, int lvl, int start, int end, int pos, int val){
        if(start == end){
            seg[node] = val;
            return;
        }

        int mid = start + ((end-start)>>1);
        if(pos>=start && pos<=mid){
            updateSeg(2*node, lvl+1, start, mid, pos, val);
        }
        else{
            updateSeg(2*node+1, lvl+1, mid+1, end, pos, val);
        }
        
        int bottomDist = level - lvl;
        if(bottomDist&1) seg[node] = seg[2*node] | seg[2*node+1];
        else seg[node]  = seg[2*node] ^ seg[2*node+1];
    }

public:
    NumArray(int n){
        sSize = (1<<n);
        level = n;
        seg.assign(4*sSize + 1, 0);
        build(1, 0, 0, sSize-1);
    }

    void update(int pos, int val){
        updateSeg(1, 0, 0, sSize-1, pos, val);
    }    

    int queryTot(){
        return seg[1];
    }
};

int main(){
    
    int n, m;
    cin >> n >> m;

    NumArray segTree(n);

    for(int i = 0; i<m; ++i){

        int pos, val;
        cin >> pos >> val;
        --pos;

        segTree.update(pos, val);
        cout << segTree.queryTot() << "\n";
    }  

    return 0;
}