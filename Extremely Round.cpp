#include<bits/stdc++.h>
using namespace std;

int powers[8];

auto init = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int s = 1;
    for(int i = 0; i<8; ++i){
        powers[i] = s;
        s *= 10;
    }

    return 0;
}();

int main(){

    int T;
    cin >> T;

    while(T--){
        int N;
        cin >> N;

        int res = 0;
        for(int i = 0; i<8; ++i){
            if(N/powers[i] < 10){
                res = (9*i) + (N/powers[i]);
                break;
            }
        }

        cout << res << "\n";
    }

    return 0;
}