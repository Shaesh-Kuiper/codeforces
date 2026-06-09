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

        long long x, y, k;
        cin >> x >> y >> k;

        long long minNeed = ((1+y)*k) -1;
        long long gain = x-1;

        long long op1 = (minNeed+gain-1)/gain;
        
        cout << op1 + k << "\n";
    }

    return 0;
}

/*

everytime i gain x-1 sticks
start with 1 stick

if i need k coal i need ky extra sticks 
so i need at least k+ky sticks
1 + T(x-1) >= k+ky 
no of trade of type 1 is T = ceil( ((1+y)k -1)/(x-1)) 
and k trades for k coals so total T + k trades 
*/