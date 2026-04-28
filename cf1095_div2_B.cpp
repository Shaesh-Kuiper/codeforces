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

        int count = 0;
        
        int prev;
        cin >> prev;

        for(int i = 1; i<N; ++i){
            int curr;
            cin >> curr;

            if(std::gcd(curr,prev) == abs(curr-prev)) ++count;
            
            prev = curr;
        }

        cout << count << "\n";
    }

    return 0;
}

// for a perfectly sorted permutationn
// then can be n-1 good arrays
// ans any array involving more than size 2 
// then gcd will be 1 and max - min > 1
// if unsorted we sure know the no of good subarray is gonna be less than that or >=0 
// so i can never for a good subarray of size greater than 2 
// so i just need to check if the prev element and current elemnt 
// aka gcd(prev,curr) == abs(prev-curr);
// if true add 1 else add 0