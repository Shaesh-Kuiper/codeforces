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

        int global_min = INT_MAX;
        long long secMinSum = 0LL;
        int min_secMin = INT_MAX;

        for(int i = 0; i<N; ++i){

            int n;
            cin >> n;

            int mn1 = INT_MAX;
            int mn2 = INT_MAX;

            for(int j = 0; j<n; ++j){

                int temp;
                cin >> temp;

                global_min = min(global_min, temp);

                if(temp <= mn1){
                    mn2 = mn1;
                    mn1 = temp;
                }

                if(temp != mn1) mn2 = min(mn2, temp);
            }
            
            if(mn2 == INT_MAX) mn2 = mn1;
            secMinSum += mn2;
            min_secMin = min(min_secMin, mn2);
        }
        
        long long tot = secMinSum-min_secMin;
        long long res = tot + global_min;

        cout << res << "\n";
    }
    return 0;
}

/*
there are N sequences 
let MinSequence be the sequence with the lowest minimum of all the minimums 

the value a sequence gives is the min of that sequence
so because of the allowed operation we can either get min(seq) or second_min(seq)

what if second_min(MinSequence) is a very large number
then the startegy of transferring the n-1 minimas to minSeqnce will fail to maximize 

ofc this min(MinSequence) is 100% going to be included in the final resukt 

but its about chooseing the n-1 other minimums and prefferably it is second_min(seqi) as it the max value it can contribue 
we will transfer all the minimas to the jth sqe such that second_min(seqj) is the smallest then it's min(seqj) will be the glaobal minimas 
then rest of the seq will hace secod_min_j as their new minima
*/