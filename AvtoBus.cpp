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

        long long W;
        cin >> W;

        if(W&1 || W<4) cout << -1 << "\n";
        else{
            long long maxima = W/4LL;
            long long minima = W/6LL + ((W%6LL > 0) ? 1 : 0);
            cout << minima << " " << maxima << "\n";
        }
    }
    return 0;
}

/*
so there are two types of buses
A: with 4 wheels 
B: wiht 6 wheels

we know the total no of wheels W

need to find the max and min no of buses in total in the fleet

so the max no of buses will be thee if all the bus is of type A 
then Na = W/4

and the min no of buses will be if all the bus is of type B
then Nb = W/6;

if there exist k 
then (W-k)/4 + k/6 => W/4 + k/6 - k/4 => W/4 + k/2(1/3-1/2) => W/4 - k/12 

k at max can be W
then W/4-W/12 => W/4 (1-1/3) = W/4*2/3=>W/6 

W/6 <= W/4-k/12 <= W/4 

so there is no use in having a non 0 k for finding extremes 

4(NA) + 6(NB) = W
NA>=0 and NB>=0 

then the W must be a k*gcd(4,6) and W >= 4  for some k  [gcd(4,6)=2] 

4,6,8,10,12,14,....

if w is <=2 or odd res is -1 

minima is W/6 + ceil((W%6)/4)
maxima is W/4 


*/