#include<bits/stdc++.h>
using namespace std;

auto init = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();

int dp(int idx, int currBuild, int K, const vector<int>& nums, const vector<int>& D, vector<vector<int>>& memo){

    if(currBuild == K) return 0;
    if(idx == nums.size()) return 1e9;

    int index = lower_bound(D.begin(), D.end(), currBuild) - D.begin();
    if(memo[idx][index]!=-1) return memo[idx][index];

    int res = 1e9;
    int a = nums[idx];

    for(int d : D){

        int x = (d-(a%d))%d;
        int newBuild = gcd(K, (a+x)*currBuild);

        int total = x + dp(idx+1, newBuild, K, nums, D, memo);
        res = min(res, total);
    }

    return memo[idx][index] = res;
}

int main(){

    int T;
    cin >> T;

    while(T--){

        int N, K;
        cin >> N >> K;

        vector<int> nums(N);
        for(int i = 0; i<N; ++i) cin >> nums[i];

        vector<int> D; D.reserve(120);

        for(int i = 1; i*i<=K; ++i){
            if(K%i == 0){
                D.push_back(i);
                if((i*i) != K){
                    D.push_back(K/i);
                }   
            }
        }  

        sort(D.begin(), D.end());

        vector<vector<int>> memo(N, vector<int>(D.size(), -1));
        cout << dp(0, 1, K,nums, D, memo) << "\n";
    }
    
    return 0;
}
