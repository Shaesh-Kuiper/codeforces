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

        int n;
        cin >> n;

        long long x;
        cin >> x;

        long long totSum = 0LL;
        long long runningTot = 0LL;

        for(int i = 0; i<n; ++i){

            long long temp;
            cin >> temp;

            totSum += temp;
            runningTot += (temp+x-1)/x;
        }
        
        cout << (totSum+x-1)/x << " " << runningTot << "\n";
    }

    return 0;
}

/*

we know that 

sigma( ceil(ai/x)) >= ceil( seigma(ai)/x )

*/