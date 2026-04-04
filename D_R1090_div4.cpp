#include<bits/stdc++.h>
using namespace std;

auto init = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();

const int MAX_VAL = 200000;
vector<long long> primes;
bool is_prime[MAX_VAL + 1];

void build_sieve(){

    for(int i = 2 ; i <= MAX_VAL; i++){
        is_prime[i] = true;
    }
    for(int p = 2 ; p * p <= MAX_VAL ; p++){
        if( is_prime[p]){

            for (int i = p * p; i <= MAX_VAL; i += p){
                is_prime[i] = false;
            }
        }
    }
    for(int p = 2; p<= MAX_VAL; p++){
        if(is_prime[p]){
            primes.push_back(p);
        }
    }
}

int main(){

    build_sieve();
    
    int T;
    cin >> T;

    while(T--){

        int n;
        cin >> n;
        
        for (int i = 0; i < n; i++) {

            cout << primes[i] * primes[i+1] << " ";
        }

        cout << "\n";
    }
    
    return 0;
}