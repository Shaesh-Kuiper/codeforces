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
        
        long long x, n;
        cin >> x >> n;

        long long res;
        long long rem = n%4LL;
        bool odd = x&1LL;

        switch(rem){

            case 0 :
                cout << x << "\n";
                break;
            case 1 :
                if(odd) cout << x + n << "\n";
                else cout << x - n << "\n";
                break;
            case 2 : 
                if(odd) cout << x-1LL << "\n";
                else cout << x + 1LL << "\n";
                break;
            case 3 :
                if(odd) cout << x - (n+1LL) << "\n";
                else cout << x + (n+1LL) << "\n";
                break;
        }
    }

    return 0;
}

/*

p0 is odd

p1 = p0 + 1 is even; p1 = p0 - 1 is odd 
p2 = p1 - 2 is even; p2 = p1 + 2 is odd 
p3 = p2 - 3 is odd;  p3 = p2 + 3 is even 
p4 = p3 + 4 is odd;  p4 = p3 - 4 is even 
p5 = p4 + 5 is even; p5 = p4 - 5 is odd
p6 = p5 - 6 is even; p6 = p5 + 6 is odd 
p7 = p6 - 7 is odd;  p7 = p6 + 7 is even
p8 = p7 + 8 is odd;  p8 = p7 - 8 is even 
p9 = p8 + 9 is even 
p10 = p9 - 10 is even
p11 = p10 - 11 is odd   

p1 = p0 + 1 => p0 - 1
p2 = p0 - 1 => p0 + 1
p3 = p0 - 4 => p0 + 4
p4 = p0     => p0
p5 = p0 + 5 => p0 - 5
p6 = p0 - 1 => p0 + 1
p7 = p0 - 8 => p0 + 8
p8 = p0     => p0 
p9 = p0 + 9
p10 = p0 - 1
p11 = p0 - 12

so p0 is odd 
n%4 == 0 then p0 
n%4 == 1 then p0 + n
n%4 == 2 then p0 - 1
n%4 == 3 then p0 - (n+1)

p0 is even 
n%4 == 0 then p0
n%4 == 1 then p0 - n
n%4 == 2 then p0 + 1
n%4 == 3 then p0 + (n+1)

*/