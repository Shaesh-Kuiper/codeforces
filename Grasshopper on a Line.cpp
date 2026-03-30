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

        int x, k;
        cin >> x >> k;


        if( x % k != 0){
            cout << 1 << "\n";
            cout << x << "\n";
        }
        else{ 
            cout << 2 << "\n";
            cout << x-1 << " " << 1 << "\n";
        }
    }
    
    return 0;
}
