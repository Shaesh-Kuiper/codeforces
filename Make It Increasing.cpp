#include <bits/stdc++.h>
using namespace std;

auto init = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();

int solve(vector<int>& nums, int N){

    if(N==1) return 0;

    int ops = 0;
    
    for(int i = N-2; i>=0; --i){
        
        if(nums[i]>=nums[i+1]){

            if(nums[i+1] == 0) return -1;

            int ratio = nums[i]/nums[i+1];
            int count = 32 - __builtin_clz(ratio);
            
            nums[i] = nums[i]>>count;
            ops += count;
        }
    }

    return ops;
}

int main(){

    int T;
    cin >> T;

    while(T--){

        int N;
        cin >> N;

        vector<int> nums(N);
        for(int i = 0; i<N; ++i) cin >> nums[i];

        cout << solve(nums, N) << "\n";
    }

    return 0;
}

/*

we need such that 

we need the lowest power of 2, k , such that ai/2^k < ai+1
then ai/ai+1 < 2^k
lowest vale of k such that 2^k > ai/ai+1 = m

0001 = 1 => 4-3 = 1 => 2
0010 = 2 => 4-2 = 2 => 4
0011 = 3 => 4-2 = 2 => 4
0100 = 4 => 4-1 = 
just count the leading zeros , clz, and total-clz is the value of k 

if ai/2^k == ai+1 then do ai/2 again 

4ai+1/ai+1 = 4 => 3 => ai becomes ai+1/2 
*/