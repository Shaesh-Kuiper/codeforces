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

        int n, m;
        cin >> n >> m;

        int Min = INT_MAX;
        int count = 0;
        long long sum = 0LL;

        for(int i = 0; i<n; ++i){
            for(int j = 0; j<m; ++j){

                int temp;
                cin >> temp;

                count += (temp<0);
                sum += abs(temp);
                Min = min(Min, abs(temp));
            }
        }

        if(count&1) cout << sum-(2LL*Min) << "\n";
        else cout << sum << "\n";
    }

    return 0;
}

/*

key obs is that any value can reach any other value in the grid due to chain reaction 
so for ant aij i can select axy and flip both of their pairity (+ve or -ve)

so i can always select any 2 -ve values and make them +Ve 
we want max +ve as much as possible

if the no of neg numbers are even then all can be changed to +Ve 
if odd then one of them must remain -ve so i can choose the absolutest lowes val to be that neg

abs_sum be the sum of abs(aij)
then abs_min be the absolue min vlaue
count be no of -ve count

if count even then abs_sum is ans
if count odd then abs_sum-2abs_min is ans 


*/