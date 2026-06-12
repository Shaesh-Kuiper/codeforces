#include<bits/stdc++.h>
using namespace std;

auto init = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();

int solve(long long a, long long b){

    long long v = b/a;
    long long vd = (b+a-1)/a;

    if(vd!=v) return -1;
    if((v&(v-1)) != 0) return -1;

    int res = 0;
    while(v!=0 && ((v%8) == 0)){
        v >>= 3;
        ++res;
    }
    while(v!=0 && ((v%4) == 0)){
        v >>= 2;
        ++res;
    }
    while(v!=0 && ((v%2) == 0)){
        v >>= 1;
        ++res;
    }

    return res;
}

int main(){

    int T;
    cin >> T;

    while(T--){
        long long A, B;
        cin >> A >> B;

        int res = solve(min(A,B), max(A,B));
        cout << res << "\n";
    }

    return 0;
}

/*

conditions are 

A = min(a, b)
B = max(a, b)

v = B/A == (B+A-1)/A 
v & (v-1) == 0 
the it means B is pbtained purely by shifting A

to get the no mon of operatioons
take v 
while v is dibisible by 8 ++res
then keep v 
while with dubvisible by 4 ++res
then while with 2 ++res

but considering cpp long long can go only up to 1e18 64 bit int 
only edge canse to be weary about is when we keep left shifting to truncate some 1s in a 
then again right shift to get b with less 0s 
that means we can also obtain b=0 with a non zero a 


*/