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

        long long N;
        cin >> N;

        int res = 0;
        for(int i = 1; ;++i){
            if(N%i != 0){
                res = i-1;
                break;
            }
        }

        cout << res << "\n";
    }

    return 0;
}
