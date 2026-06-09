#include<bits/stdc++.h>
using namespace std;

auto init = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();

int XOR(int n){
    int r = n%4;
    if(r==0) return n;
    if(r==1) return 1;
    if(r==2) return n+1;
    return 0;
}

int main(){

    int T;
    cin >> T;

    while(T--){

        int a, b;
        cin >> a >> b;

        int v = XOR(a-1);
        int res = a;

        if(v!=b){
            
            int x = b^v;

            if(x==a) res += 2;
            else res += 1;
        }

        cout << res << "\n";
    }

    return 0;
}

/*

to get a mex value of a 
then we must have all values from 0 to a-1 
and the xor of all the elements must be b 

xor[0,a-1] be v 

if v == b; a is the answer 

if v!=b we need or more element
x xor v = b 
x = b xor v 

if x == a then we need 2 more elements [v xor e1 xor e2 = b]
if x!= a then we can just one element 

*/