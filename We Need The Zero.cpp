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

        int  xr = 0;

        for(int i = 0; i<N; ++i){
            int temp;
            cin >> temp;
            xr = (xr ^ temp);
        }

        if(N&1){
            cout << xr << "\n";
        }
        else{
            if(xr != 0){
                cout << -1 << "\n";
            }
            else{
                cout << 3 << "\n";
            }
        }
    }

    return 0;
}
