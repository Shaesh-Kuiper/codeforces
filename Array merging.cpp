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

    int lim = 4e5;
    int blockA[lim+1];
    int blockB[lim+1];
    // vector<int> blockA(lim+1);
    // vector<int> blockB(lim+1);

    while(T--){

        // be weary of this memset as t can go up to 1e4 and the size of the array is 4e5 that 4e9 operations which migth tle

        // This is BAD 
        // memset(blockA, 0, sizeof(blockA));
        // memset(blockB, 0, sizeof(blockB));
        
        int N;
        cin >> N;

        memset(blockA, 0, sizeof(int)*(2*N+1));
        memset(blockB, 0, sizeof(int)*(2*N+1));

        // memset(blockA.data(), 0, sizeof(int)*blockA.size());
        // memset(blockB.data(), 0, sizeof(int)*blockB.size());

        int n = 0;
        int block = 0;

        for(int i = 0; i<N; ++i){

            int temp;
            cin >> temp;

            if(temp!=n){
                blockA[n] = max(blockA[n], block);
                n=temp;
                block=1;
            }
            else ++block;
        }

        blockA[n] = max(blockA[n], block);

        n=0;
        block=0;

        for(int i = 0; i<N; ++i){

            int temp;
            cin >> temp;

            if(temp!=n){
                blockB[n] = max(blockB[n], block);
                n=temp;
                block=1;
            }
            else ++block;
        }

        blockB[n] = max(blockB[n], block);

        int res = 0;
        for(int i = 1; i<=(2*N); ++i){
            res = max(res, blockA[i]+blockB[i]);
        }

        cout << res << "\n";
    }
    return 0;
}

/*
so lets find the no of  unique elements in the A
the unique elements in B 
and have a hashmap mp
such that mp[number] will gimme the largest contigius block size of that number 
so we'll have mpA and mpB
we will go throught every value of A and then search the value's block size in B
and we will dunamically update a global maxima such that mpA[num]+mpB[num]

this is becase i can add up the suffix of from any arry to C in any order from A and B but should be a strict suqseqence of either must exist in C
so i cannot change the relative order -> so only count contiguous segment not the frequency

since the limit of ai and bi <=4e5 which is 400*1e3 which 4bytes so 1600kb ~1.6mb 
and we will have 2 such to have ~3.2 mb instead of hashmpa to track the block size


*/