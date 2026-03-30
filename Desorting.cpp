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

        int prev;
        cin >> prev;

        int diff = 1e9;

        for(int i = 1; i<N; ++i){
            int temp;
            cin >> temp;

            int d = temp-prev;
            diff = min(diff, d);

            prev = temp;
        }

        if(diff<0){
            cout << 0 << "\n";
        }
        else{
            int ops = (diff + 2) / 2;
            cout << ops << "\n";
        }
    }

    return 0;
}