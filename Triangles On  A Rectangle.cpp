#include<bits/stdc++.h>
using namespace std;

auto init = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();

int longest() {

    int k;
    cin >> k;

    int first;
    cin >> first;

    int last;
    for(int i = 1; i<k-1; ++i) cin >> last;

    cin >> last;

    return last-first;
}

int main(){

    int T;
    cin >> T;

    while(T--){

        int w, h;
        cin >> w >> h;

        int a = max(longest(), longest());
        int b = max(longest(), longest());
        
        long long A = 1LL*a*h;
        long long B = 1LL*b*w;

        cout << max(A,B) << "\n";
    }

    return 0;
}
