#include<bits/stdc++.h>
using namespace std;

auto init = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();

int main(){

    int N;
    cin >> N;

    long long D;
    cin >> D;

    vector<long long> powers(N);
    for(int i = 0; i<N; ++i) cin >> powers[i];

    sort(powers.begin(), powers.end());

    int res = 0;

    int l = 0;
    int r = N-1;
    
    while(l<=r){
        
        long long v = powers[r];

        long long need = (D+v-1)/v;
        if((need*v) == D) ++need;

        long long available = r-l+1;
        if(available >= need){
            ++res;
            l += need-1;
        }
        else{
            break;
        }

        --r;
    }

    cout << res << "\n";
    return 0;
}

//50 60 70 80 90 100