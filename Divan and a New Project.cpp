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

        int N;
        cin >> N;

        vector<pair<int,int>> nums(N);
        for(int i = 0; i<N; ++i){
            cin >> nums[i].first;
            nums[i].second = i+1;
        }   

        sort(nums.begin(), nums.end(), greater<pair<int,int>>());

        vector<int> res(N+1);
        long long time = 0;

        res[0] = 0;
        int p = 1;
        int n = -1;

        for(int i = 0; i<N; ++i){

            int pos = nums[i].second;
            int frq = nums[i].first;

            int v;
            if(i&1) v = n--;
            else v = p++;

            res[pos] = v;
            time += 2LL*abs(v)*frq;
        }

        cout << time << "\n";
        for(int i = 0; i<=N; ++i){
            cout << res[i] << " ";
        }
        cout<<"\n";
    }

    return 0;
}