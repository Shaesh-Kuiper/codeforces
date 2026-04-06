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

        long long k;
        long long n;

        cin >> n >> k;
        
        if(n&1 && !(k&1)){
            cout << "No\n";
        }
        else{
            cout << "Yes\n";
        }
        
    }
    return 0;
}