#include <bits/stdc++.h>
using namespace std;

auto init = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();

int main() {

    int T;
    cin >> T;

    while(T--){

        int A,B,C;
        cin >> A >> B >> C;

        int xtake = (C+2-1)/2;
        int ytake = C-xtake;

        int xtot = A+xtake;
        int ytot = B+ytake;

        if(xtot<=ytot) cout << "Second\n";
        else cout << "First\n";
    }

    return 0;
}