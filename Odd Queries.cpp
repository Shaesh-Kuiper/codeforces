#include <bits/stdc++.h>
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

        int N, Q;
        cin >> N >> Q;

        vector<int> prefixPairity(N+1);
        prefixPairity[0] = 0; 
        

        for(int i = 1; i<=N; ++i){
            int temp;
            cin >> temp;

            prefixPairity[i] = ((temp&1) ^ prefixPairity[i-1]);
        }

        for(int i = 0; i<Q; ++i){

            int l,r,k;
            cin >> l >> r >> k;

            int size = r-l+1;
            int newSumPairity = (size&1) && (k&1) ? 1 : 0;

            int SumPairity = prefixPairity[r] ^ prefixPairity[l-1];

            int pairity = prefixPairity[N] ^ SumPairity;
            int res = pairity ^ newSumPairity;

            if(res == 1) cout << "Yes\n";
            else cout << "No\n";
        }
    }

    return 0;
}

/*
due to the ranges of the input arr value its not optimal to calculate the acutal prefixvalues
rather we just store the running pairity 
odd+odd && even+eevne is even 
rest odd 
val & 1 gives the paority 1 for odd and 0 for even
and xor (^) if  same gives 0 (even) 1 otherwise 

also even* odd or even times even is even 
odd time odd is only odd
*/