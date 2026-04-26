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

        int ub = N*100;

        vector<bool> vals(ub+1, false);
        vals[0] = true;
        vals[ub] = true;

        for(int i = 0; i<N; ++i){

            int a;
            cin >> a;

            int unit = 100/a;
            int curr = unit;

            while(curr<=ub){
                vals[curr] = true;
                curr += unit;
            }
        }

        bool possible = true;

        for(int i = 0; i<=ub; ++i){
            if(!vals[i]){
                possible = false;
                break;
            }
        }

        if(possible) cout << "Yes\n";
        else cout << "No\n";
    }

    return 0;
}