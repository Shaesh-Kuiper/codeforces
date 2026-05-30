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

        long long o = 0;
        long long z = 0;

        for(int i = 0; i<N; ++i){
            int temp;
            cin >> temp;

            if(temp == 1) ++o;
            if(temp == 0) ++z;
        }

        long long res = 1LL * o * (1LL<<z);
        cout << res << "\n";
    }
    return 0;
}

/*
the no of 0 and no of 1's matter 

if there is 0 1's then there is 0 ways 
if there is only one 1 and no 0 then there is only 1 way
if there are only 1 one and multiple 0s
each of the 0s has a chance of being picked and not picked 
lets see the 0s in isolation
if 2 0s then 2*2 4 ways {{},{0},{0},{0,0}}
if 3 0s then 2*2*2 8 ways {{},{a},{b},{c},{ab},{bc},{ca},{abc}}
so if ther are n zeros then 2^n ways

now consider the case when multiple 1s are present
i can choose to leave any of the 1 
so it itself adds o ways given there are o 1's 

in total there is o * 2^z ways 
o is count of 1s and z is count of 0s
*/