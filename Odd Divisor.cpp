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
        long long N;
        cin >> N;

        if(N&(N-1)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}

/*
if all the divisors of the number is even then its purely a power or 2
or else it has at least one odd divisor
*/