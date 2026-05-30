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

        int a,b,c;
        cin >> a >> b >> c;

        if((a+c)%(2*b) == 0) cout << "YES\n";
        else if(((2*b)-c)%a == 0 && ((2*b)-c)>0) cout << "YES\n";
        else if(((2*b)-a)%c == 0 && ((2*b)-a)>0) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}

/*

in AP 

B = A+C/2

keeping A and C constant
then A+C must be a even 

now mb = B = A+C/2 = K => m = K/b must be an integer too 

if we keep A and B constants
2B-A = C = mc
then 2b-a/c must be an integer

if we keep B and C constant then 
2B-C = A = ma
then 2b-c/a must be an integer

overall it must satisfy any of the conditions 
1) a+c%2b == 0
2) 2b-a % c  == 0 and 2b-a is non zero  
3) 2b-c % a == 0 and 2b-c is non zero as m cannot be 0

else false

*/