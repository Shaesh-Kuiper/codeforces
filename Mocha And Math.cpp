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

        int res;
        cin >> res;
        
        for(int i = 1; i<N; ++i){
            int temp;
            cin >> temp;
             
            res = res&temp;
        }

        cout << res << "\n";
    }
    return 0;
}

/*
so i need to select an interval [l,r] 
then i symentrically do bitwise and within the range

idea is to minimize the max value in the seq

x&0 = 0
x&x = x
consider two numbers x and y such that x<=y then x&y <= x

a1 a2 a3 a4 be a sequence
then

select any 4 continuous number then i can make sure after performing 3 ops [1,4][1,3][2,4] all the values is less than minima if the seq

a1&a4 soem k1
a2&a3 some k2

k1 k2 k2 k1
k1 & k2 = k3
after [1,3] k3 k2 k3 k1
after [2,4] k3 k3 k3 k3

k3 = a1&a2&a3&a4

after this there is no use of performing any ops as all the values are same
same we can prove for  length 2
now for odd length

a1 a2 a3 
allowed ops are [1,2][2,3][1,3]

k1 k1 a3 
k2 k1 k2
or 

k1 k2 k1 
k1&k2 = k3
k1 k3 k3 
k3 & k1 = (k1&k2) & k1 = k1&k1&k2 = k3

k3 k3 k3 


odd or even lenght the final minimal value attainable is all values same which is bitwise and of all values

*/