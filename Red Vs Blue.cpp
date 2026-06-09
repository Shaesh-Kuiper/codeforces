#include<bits/stdc++.h>
using namespace std;

auto init = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();

int main(){

    int T;
    cin >> T;

    while(T--){
        
        int n,r,b;
        cin >> n >> r >> b;

        int blocks = b+1;
        int count = r/blocks;
        int extra = r%blocks;
        
        for(int i = 0; i<blocks; ++i){
            for(int j = 0; j<count; ++j) cout << 'R';
            if(extra>0) {cout << 'R'; --extra;}
            if(b>0) { cout << 'B'; --b; }
        }
        
        cout << "\n";
    
    }

    return 0;
}

/*

r>b r+b = n

n -> even
filling laternate places
r' = r-n/2 remains 
now these r' are to be placed near some r 
so that means 2rs for each 1b

i just want enough bs to break up the contiguous r sequence

1b can create 2 blocks
2b can vreate 3 blocks
nbs can create n+1 blocks

now the question is whats the max size of the block

if r is a perfect multiple of n+1 the the ans is r/b+1 
if not 

k = b+1
r = Qk+R
0<=R<k

then it is nexessay some of the blocks have extra 1 r

no of blocks of rs = RB = r/k where k = b+1;
no of blocks with extra r= r%k;

*/