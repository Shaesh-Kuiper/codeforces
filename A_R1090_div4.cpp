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

        if(N==67) cout << N <<"\n";
        else cout << N+1 << "\n";
    }

    return 0;
}