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

        bool seen = false;

        for(int i = 0; i<N; ++i){
            int temp;
            cin >> temp;

            if(temp == K) seen = true;
        }

        if(seen) cout << "Yes\n";
        else cout << "No\n";
    }

    return 0;
}