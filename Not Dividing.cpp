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

        int prev;
        cin >> prev;
        if(prev == 1) ++prev;
        cout << prev << " ";

        for(int i = 1; i<N; ++i){
            int curr;
            cin >> curr;
            if(curr==1) ++curr;
            if(curr%prev == 0) ++curr;
            cout << curr << " ";

            prev = curr;
        }

        cout << "\n";
    }   
    return 0;
}


// i just dont want the adj elements to be divisible by eachother
// i can add 1 to any element
// can i do a O(n) sweep 
// ai+1 should not be divisible by ai 
// so i can go from 1 to N-1 
// if aj+1 % aj == 0, then i increase aj+1 by 1 which garuntee the aj+1 % aj != 0
// everytie i update the current one , the previously corrected one is not affected and will hold true 
// and at max i take N operations only. 
// there is a chance the numbers will overflow but since a^n <= 1e9 no issue 

// input : 2 4 3 6
// 2 5 3 6 -> 2 5 3 7 
