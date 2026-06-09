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

        int pow = 31 - __builtin_clz(N-1);
        int pivot = (1<<pow);

        for(int i = N-1; i>=pivot; --i) cout << i << " ";
        for(int i = 0; i<pivot; ++i) cout << i << " ";

        cout << "\n";
    }
    
    return 0;
}

/*

find a pivot element and the partiton the array based on it
greatest power of 2 <= number 
31-clz(n) gives it

*/
