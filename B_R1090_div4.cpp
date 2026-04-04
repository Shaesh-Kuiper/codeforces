#include<bits/stdc++.h>
using namespace std;

auto init = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();

int main(){

    int T;
    cin>>T;

    while(T--){

        int total = 0;
        int maxima = INT_MIN;

        for(int i = 0; i<7; ++i){
            int temp;
            cin >> temp;

            maxima = max(maxima, temp);
            total += temp;
        }

        int res = (maxima<<1) - (total);
        cout << res << "\n";
    }
    
    return 0;
}