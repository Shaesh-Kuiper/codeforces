#include<bits/stdc++.h>
using namespace std;

auto init = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();

long long solve(int l, int r, int k){

    long long len = r-l+1;
    long long mSize = len-k+1;

    long long t1 = (len+1)*mSize;
    long long t2 = ((k+len)*mSize)>>1;

    return t1-t2;
}

int main(){

    int T;
    cin >> T;

    while(T--){

        int n,k,q;
        cin >> n >> k >> q;

        int l = 0;
        int r = 0;

        long long res = 0LL;

        for(int i = 0; i<n; ++i){

            int temp;
            cin >> temp;

            if(temp>q){
                if((r-l+1) >= k && (l!=i)) res += solve(l,r,k);
                l=r=i+1;
            }
            else{
                r = i;
            }
        }

        if(((r-l+1) >= k) && (l!=n)) res += solve(l,r,k);


        cout << res << "\n";
    }

    return 0;
}

/*
got n days in total 
and i need to choose k or more days and the temperature must be <= q throught
allocated days must be concecutive

so ill first find a streak of days (two pointers) [l,r] where r-l+1>=k and ai <=q i=once i come across an ai>q i stop the current iteration 
now ill have the l ad r and ill check if the r-l+1 >= k then ill continue

let len = r-l+1 
can start on len-k+1 diff days so that many ways 

he can go on M = [k, k+1 .. len] days -> lenght mSize = len-k+1

lets say he goes for m days
then he can do that in  vj = len-mj+1 ways

now i need to sum this sum(vj) over all j 

(mSize*len) + mSize - sum(mj) =>  (len+1)*mSize - mSize/2(k+len) => ((len+2-k)*mSize)/2

i do this for all interval over the updaating two pointer
*/