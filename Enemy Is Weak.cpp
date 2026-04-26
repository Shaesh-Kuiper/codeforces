#include<bits/stdc++.h>
using namespace std;

auto init = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();

long long query(int idx, const vector<long long>& tree){

    long long res = 0LL;

    while(idx > 0){
        res += tree[idx];
        idx -= (idx & -idx);
    }

    return res; 
}

void update(int idx, int val, vector<long long>& tree){
    while(idx<tree.size()){
        tree[idx] += val;
        idx += (idx & -idx);
    }
}

int main(){
    int n; 
    cin >> n; 

    vector<int> B(n);
    vector<int> A(n);

    for(int i = 0; i<n; ++i) {cin >> A[i]; B[i] = A[i];}

    sort(B.begin(), B.end());
    B.erase(unique(B.begin(), B.end()), B.end());

    for(int i = 0; i<n; ++i){
        A[i] = (lower_bound(B.begin(), B.end(), A[i])-B.begin()) + 1;
    }

    int maxima = B.size();
    vector<long long> res(n, 1LL);
    vector<long long> tree(maxima+1, 0);

    for(int i = 0; i<n; ++i){
        long long leftGreater = query(maxima, tree) - query(A[i], tree);
        res[i] *= leftGreater;

        update(A[i], 1, tree);
    }

    memset(tree.data(), 0, (maxima+1)*sizeof(long long));

    for(int i = n-1; i>=0; --i){
        long long rightSmaller = query(A[i]-1, tree);
        res[i] *= rightSmaller;

        update(A[i], 1, tree);
    }

    long long tot = 0LL;
    for(long long x : res) tot += x;

    cout << tot << "\n";

    return 0;
}   