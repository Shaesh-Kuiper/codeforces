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
        int n;
        cin >> n;

        string S;
        cin >> S;

        int sum = 0;
        int res = 0;

        for(char c : S){
            if(c == ')') --sum;
            else ++sum;

            if(sum<0){
                ++res;
                sum = 0;
            }
        }

        cout << res << "\n";
    }

    return 0;
}

/*

n=2m , m operning and m closing 

if in [1,j] 1 extra closing then [j+1,N] i less closing
equivalent to saying [1,j] one less opening and [j+, N] 1 extra opening


so just say [1,j] removing that 1 extra ) balances [1,j]
adding to end balances [j+1, N]


any non regualr bracket seq is a rotation of some regular seq
we can rotate clockwise or anticlockwise and in each dir its only n times at max beforce we see a proper seq
if after k rotaton in left to right rot we get a regualr seq then answer is min(n-k,k) n-k for anti clockwise

but this is better 
iterate from left to right , if u see '(' +1 else -1 if it happened at any pos i the sum is -ve add 1 to res and reset the sum to 0 

teh rinal res is answer
*/