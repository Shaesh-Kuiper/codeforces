#include<bits/stdc++.h>
using namespace std;

auto init = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();

bool perfect(long long n){

    long long temp = n;

    while(temp){

        int d = temp%10;
        temp /= 10;

        if(d!= 0 && n%d!=0) return false;
    }

    return true;
}

int main(){

    int T;
    cin >> T;

    while(T--){

        long long n;
        cin >> n;

        long long i = 0;
        for(; i<2520; ++i){
            if(perfect(n+i)){
                break;
            }
        }

        cout << i + n << "\n";
    }

    return 0;
}

/*
N = d1*10^0 + d2*10^1 + .... + dn*10^(n-1)
the divisors are d1, d2, ... dn
N to be divisible by all of D

N = k1d1 => N/k1 = d1
N = k2d2 => N/k2 = d2 
...
N = kndn => N/kn = dn 

N = 10^0 N/k1 + 10^1 N/k2 + .. + 10^(n-1) N/kn
  = N( 1/k1 + 10/k2 + 100/k3 .. + 10^(n-1)/kn) 
  = 

ok lets bruteforce 
n<=1e18 then thaer can be at max 19 digits and at max each digit will be 9 digits long
put them in a array and try changing each number -> but the problem is more than 1 number can change 

consider n digit number thenn n+1th digit 1 followed by n 0s is garunteed to be a perfect num 

ok we use digit dp 

lcm 8,2 is 8 
282/8

*/