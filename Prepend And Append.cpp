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

        int N;
        cin >> N;
        
        string S;
        cin >> S;

        int l = 0;
        int r = N-1;
        int count = 0;

        while(l<=r){

            if(S[l]==S[r]) break;

            if(l!=r)count += 2;
            else count += 1;
            ++l; --r;
        }

        cout << N-count << "\n";
    }

    return 0;
}