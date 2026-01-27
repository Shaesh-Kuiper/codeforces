#include<bits/stdc++.h>
using namespace std;

auto init = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();

int main(){

    int w;
    cin >> w;

    if((w>2) && ((w&1)==0)) cout << "YES";
    else cout << "NO";

    return 0;
}