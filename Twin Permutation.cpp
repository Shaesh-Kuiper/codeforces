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
        
        int cnst = N+1;
        
        for(int i = 0; i<N; ++i){
            int temp;
            cin >> temp;
            cout << cnst-temp << " ";
        }

        cout << "\n";
    }
    return 0;
}