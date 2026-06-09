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

        int n, k;
        cin >> n >> k;

        string strip;
        cin >> strip;

        int count = 0;
        for(int i = 0; i<k; ++i) count += (strip[i] == 'W');

        int res = count;
        int r = k;
        int l = 0;

        while(r<n){

            count += (strip[r]=='W');
            count -= (strip[l]=='W');
            ++l; ++r;

            res = min(res, count);
        }

        cout << res << "\n";
    }

    return 0;
}

/*
white = 1
balck = 0
seize of k
1010101
look into a winow of size k 
calculate the need as k-cout_of_0s_in_window

*/