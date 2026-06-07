#include<bits/stdc++.h>
using namespace std;

auto init = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();

int solve(const string& s, char signal){
    if(signal == 'g') return 0;

    int sSize = s.size();
    int res = 0;

    int i = 0;
    while(i<sSize && s[i]!=signal) ++i;

    while(i<sSize){

        int d = 0;
        while(s[i%sSize]!='g'){
            ++i;
            ++d;
        }

        res = max(res, d);

        while(i<sSize && s[i]!=signal) ++i;
    }

    return res;
}

int main(){

    int T;
    cin >> T;

    while(T--){

        int N;
        cin >> N;

        char signal;
        cin >> signal;

        string s;
        cin >> s;

        cout << solve(s, signal) << "\n";
    }
    return 0;
}

/*

*/