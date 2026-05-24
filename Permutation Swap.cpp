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

        int N;
        cin >> N;

        int GCD = 0;

        for(int i = 1; i<=N; ++i){

            int temp;
            cin >> temp;

            GCD = gcd(GCD, abs(temp-i));
        }
        
        cout << GCD << "\n";
    }
    
    return 0;
}

/*
we can always choose k = 1 and we can always sort the array
but the question is aksing for the max value of k 
so for that consifer this
1 4 3 2 5 6 7 8 9 10 | k=2 is best
1 4 5 2 3 6 7 8 9 10 | k = 2 is the best here too 
1 4 5 2 3 10 7 8 9 6 | here too k 2 not 4 and 4 can be made up by 2 2s 

so basically we need the gcd of all corrections

*/