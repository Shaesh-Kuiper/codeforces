#include<bits/stdc++.h>
#include<cmath>
using namespace std;

auto init = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();

int main(){

    long long n,m,a;
    cin >> n >> m >> a;

    cout << ( ((n+a-1)/a) * ((m+a-1)/a) );

    return 0;
}