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

        int temp = N;
        int p2 = 0;
        while(!(temp&1)){
            ++p2;
            temp = (temp>>1);
        }

        temp = N;
        int p3 = 0;
        int m = 1;
        while(temp % 3 == 0){
            ++p3;
            temp = temp / 3;
            m *= 3;
        }

        if((m*(1<<p2)) != N){
            cout << -1 << "\n";
            continue;
        }

        if(p3>=p2) cout << (2*p3)-p2 << "\n";
        else cout << -1 << "\n";
    }
    
    return 0;
}

/*
given number be N
then N = (2^p2)*(3^p3)*k

we can reduce N to 1 if and only if N is divisible by 6 purely 
so k must be 1 , or in other words N must only have 2 and 3 as prime factors 

since we can add more 2s 
we need p2<=p3 or else we cannot reduce it to 1 as we;ll never be able to divide by 6 

no of doubling ops = p3-p2
no of dividing ops = p3
so total ops = 2p3-p2
*/