#include<bits/stdc++.h>
using namespace std;

auto init = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();

bool solve(int N, const unordered_map<int,int>& mp) noexcept {

    if(mp.size()==1) return true;
    else if(mp.size()>=3) return false;

    N = (N>>1);
    for(auto [key,val] : mp){
        if(val == N) return true;
    }

    return false;
}

int main(){

    int T;
    cin >> T;

    while(T--){
        int N;
        cin >> N;

        unordered_map<int,int> mp;
        mp.reserve(3); mp.max_load_factor(0.25);

        for(int i=0; i<N; ++i){
            int val;
            cin >> val;

            if(mp.size()<=2) ++mp[val];
        }

        if(solve(N, mp)) cout << "Yes\n";
        else cout << "No\n";
    }

    return 0;
}