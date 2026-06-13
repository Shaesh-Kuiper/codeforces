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

        int minima = INT_MAX;
        int maxima = INT_MIN;

        for(int i = 0; i<N; ++i){
            int temp;
            cin >> temp;

            minima = min(minima, temp);
            maxima = max(maxima, temp);
        }

        cout << maxima-minima+1 << "\n";
    }

    return 0;
}