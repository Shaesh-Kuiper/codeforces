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

        int half = N/2;

        vector<int> D;

        for(int i = 1; i*i<=N; ++i){
            if(N%i == 0){

                if(i<=half) D.push_back(i);

                if(i*i!=N){
                    if((N/i)<=half) D.push_back(N/i);
                }
            }
        }

        sort(D.begin(), D.end());

        int a = D.back();
        int b = N-a;

        cout << a << " " << b << "\n";
    }
    return 0;
}

/*
a+b=n 
then we need lcm(a, b) = lcm(a, n-a)
we need to minimize this

we know lcm(a, n-a) >= max(a, n-a)
and the equality happens when max(a,n-a)%min(a,n-a) and the result will be max(a, n-a)

if we want a <= n-a then we just need to check all the values fo a[1,n/2]

now a is the smaller one 
we can conclude 

n-a = ka 
then n = (1+k)a 
a is a divisor of n

s be the set of all the divisors of n <= n/2

since max(a,n-a) = n-a 
to minimize this we need divisor close to n as possible

can find all the divisors in sqrt(n) (only add those <= n/2)
sort that set and find the max value (for 1e9 we have about less than 1200 divisors =)
*/