#include <bits/stdc++.h>
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
        int N;
        cin >> N;

        vector<int> nums(N);
        for(int i = 0; i<N; ++i) cin >> nums[i];

        sort(nums.begin(), nums.end());
        int maxfrq = 0;

        int block = 0;
        int prev = nums.front();

        for(int i = 0; i<N; ++i){
            if(nums[i] == prev){
                ++block;
            }
            else{
                maxfrq = max(maxfrq, block);
                prev = nums[i];
                block = 1;
            }
        }
        maxfrq = max(maxfrq, block);

        int ops = N-maxfrq;
        while(maxfrq<N){
            ++ops;
            maxfrq = (maxfrq<<1);
        }
    
        cout << ops << "\n";
    }

    return 0;
}

/*
we try to make the array where all elements are same , so we make all the elements same as the one with maxfrq

we may perform this we clone then do all swap operations 
after which the maxfrq doubles
and if we clone  the array then we will have about 4x the maxfrq

to simplify after any cloning process we will have 2*maxfrq of the maxfrequency number 
and no matter what it always take (N-maxfrq) no of swaps

so wen need to find how may time  we need to do the clone operations 

since the value doubles every time we need (2^k)(maxfrq) >= N
2^k >= N/maxfrq
lowest power of 2 which is greater than or equal to v = N/maxfrq
is 32-countleadingzeros(v)

non perfect power of 2 then its just 32-clz(v);
for perfect power of 2 then 8/2=>4 then its ctz(v);

*/