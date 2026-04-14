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

        long long a,b,n;
        cin >> a >> b >> n;

        --a;

        long long sum = b; 
        for(int i = 0; i<n; ++i){

            long long temp;
            cin >> temp;

            sum += min(a, temp);
        }

        cout << sum << "\n";
    }

    return 0;
}