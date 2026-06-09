#include<bits/stdc++.h>
using namespace std;

auto init = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();

vector<int> primes;
auto preprocess = [](){

    constexpr int lim = 3e4;
    vector<int> nums(lim+1, 1);
    primes.reserve(2000);

    for(int i = 2; i*i<=lim; ++i){
        if(nums[i] == 1){
            int t = 2*i;
            while(t<=lim){
                nums[t] = 0;
                t += i;
            }
        }
    }

    for(int i = 2; i<=lim; ++i){
        if(nums[i] == 1) primes.push_back(i);
    }

    return 0;
}();


int main(){

    int T;
    cin >> T;

    while(T--){

        int d;
        cin >> d;

        int a = *lower_bound(primes.begin(), primes.end(), 1+d);
        int b = *lower_bound(primes.begin(), primes.end(), a+d);

        long long res = 1LL * a * b;

        cout << res << "\n";
    }
    
    return 0;
}


/*
a has at least 4 divisors 
diff between divisors is at least d

for a non 0 d i cannot use the same number as a divisor
to make a smallest 
d1 = 1
d2 = 1+d
d3 = 1+2d
d4 = (1+d)(1+2d) = 1+3d+2d^2

k(1+d) = (1+2d) = 1+d + d
k = 1 + d/1+d -> always a non integer as d!=0
d3%d2 != 0

so its the multiple of 2 smallest number differing by d and smallest d dist away from 1 
d4-d3 = 1+3d+2d^2 - 1-2d = d+2d^2

but whats the prood there exist no divisors in between 

if d2 is non prime then there exist some p<d2 which becomes the a divisor of d4 then dist between 1 and p and p and d2 <d failure
same for p<d3
either d3 must be a prime or d3 must be square of d2
pp-p = p-1*p > d then good 
if there exist some prime q<pp

p>d so p^2 can neber be d3 
so do binary search on set of primes d2+d lower_bound
since d up to 1e5
p can be up to 1e5 + 1 and d3 can go upwards of 1e5+1e5 + 1 => so safe to find primes till 3e5
*/