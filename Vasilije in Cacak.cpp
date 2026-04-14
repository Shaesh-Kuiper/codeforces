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
        
        long long n,k,x;
        cin >> n >> k >> x;

        
        long long minima = (k*(k+1LL))>>1LL;
        long long maxima = ((k)*((2LL*n)+1LL-k))>>1LL;
        
        if(x>=minima && x<=maxima) cout << "Yes\n";
        else cout << "No\n";
    }   

    return 0;
}