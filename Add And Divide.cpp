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

        int a,b;
        cin >> a >> b;

        int minima = INT_MAX;

        for(int i = 0; i<32; ++i){
            if(b+i==1) continue;
            if(i>minima) break;

            int v = b+i;
            int temp = a;
            int count = 0;
            while(temp){
                temp /= v;
                ++count;
            }

            int cost = count+i;
            minima = min(minima, cost);
        }

        cout << minima << "\n";
    }

    return 0;
}

/*

op1 = floor(a/b)
op2 = ++b
 
min ops to get a to 0

starting at (a,b) i can reach (floor(a/b), b) or (a, b+1)
we might form a graph but it can tle too 

the worse case is when a = 1e9 adn b is 1 
1e9,2
1e9 will get reduced to 0 in less than 32 ops if u always trace the path 1 transniton (floor(a/b),b) -> repeated fdivision by 2 

also if b==1 then do a mandatory +1 ops2 to make it 2 to unecessary states 

*/