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

        int N, K;
        cin >> N >> K;

        const int Size = N*K;

        vector<int> nums(Size);
        for(int i=0; i<Size; ++i) cin >> nums[i];

        int m = (N+1)>>1;
        int idx = (m-1)*K;
        int jump = N-m+1;

        long long sum = 0LL;

        for(int i = 0; i<K; ++i){
            sum += nums[idx];
            idx += jump;
        }

        cout << sum << "\n";
    }


    return 0;
}