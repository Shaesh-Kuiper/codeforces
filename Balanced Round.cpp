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

        int N, K;        
        cin >> N >> K;

        bool violation = false;

        vector<int> vec(N);
        int prev;

        cin >> prev;
        vec[0] = prev;

        for(int i = 1; i<N; ++i){
            int temp;
            cin >> temp;

            if(abs(temp-prev) > K) violation = true;
            prev = temp;

            vec[i] = temp;
        }

        int res = 0;
        if(violation){

            sort(vec.begin(), vec.end());
            
            int window = 0;
            int start = 0;

            for(int i = 0; i<N-1; ++i){
                if(vec[i+1]-vec[i] > K){
                    window = max(window, i-start+1);
                    start = i+1;
                }
            }

            window = max(window, N-start); 
            res = (N-window);
        }

        cout << res << "\n";
    }

    return 0;
}



/*

well we can sort the array  -> this gives the maximum possible min diff between adj emelents

not even after this there could be adj elements with diff > k 

so we need to eliminate them 
elimination does not just stop with removing theneighbour alone , the entier side must be removed 
either the left or the right side : i just remive the side with least no of elements

now the problem is there can be more than one place where this conflict occurs
and we need to minimize the no of remove operation

i cna just find the largest region with no violation and 
the result is (totalSize-sizeof the said window) 

op sorting dosent coutn  as an operation

*/

//8 3 1 4 5 10 7 3 | 1
//1 3 3 4 5 7 8 10
// start = 0
// i = 0 vilation 
// window 0-0+1 = 1 window is 1 
// start 1 
// i=1, i=2 , i=3, pass
// i=4 fail
// 4-1+1 = 4 window is 4
// start = 5
// i=6 fail 6-5+1 = 2 window is still 4 
// i = 7 
// 8-1-7+1 =1 window is still4 
// 8-4 => 4 +1 = 5 