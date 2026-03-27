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

        int val;
        cin >> val;

        int temp;
        for(int i = 0; i<N-1; ++i) cin >> temp;

        if(val == 1) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}