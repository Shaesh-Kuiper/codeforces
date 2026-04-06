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
        
        int tot = 0;
        vector<int> a(N);

        for(int i = 0; i<N; ++i){
            int temp;
            cin >> temp;

            if(temp == 2) ++tot;
            a[i] = tot;
        }

        if(tot == 0) cout << 1 << "\n";
        else if(tot&1) cout << -1 << "\n";
        else{
            int res=1;
            int half = (tot>>1);

            for(int i = 0; i<N-1; ++i){
                if(a[i] == half){
                    res = i+1;
                    break;
                }
            }

            cout << res << "\n";
        }
    }

    return 0;
}