#include<bits/stdc++.h>
using namespace std;

auto init = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();

int gcd(int a, int b){
    if(b==0) return a;
    return gcd(b, a%b);
}

int main(){

    int T;
    cin >> T;

    while(T--){

        int N;
        cin >> N;

        vector<int> a(N);
        for(int i = 0; i<N; ++i){
            cin >> a[i];
        }

        int minima = INT_MAX;

        for(int i = 0; i<N; ++i){
            for(int j = 0; j<N; ++j){
                minima = min(minima, gcd(a[i],a[j]));
            }
        }

        if(minima <= 2) cout << "Yes\n";
        else cout << "No\n";
    }

    return 0;
}