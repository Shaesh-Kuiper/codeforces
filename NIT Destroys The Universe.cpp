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

        int prefix = 0; 
        int suffix = 0;
        int count = 0;

        for(int i = 0; i<N; ++i){
            
            int temp;
            cin >> temp;

            if(temp == 0){
                ++count;
                if(prefix == i) ++prefix;
                ++suffix;
            }
            else suffix = 0;
        }

        int res;
        if(N==prefix) res = 0; 
        else if(prefix+suffix == count) res = 1; 
        else res = 2; 

        cout << res << "\n";

    }

    return 0;
}

/*
for a set of integers we define mex(S) as the smallest non negative integer not appearing in S 
so this includes 0 
basically if the set S contains ant -ve number and any+ve integer then mex(S) is 0 
or clearly I can choose any subarray [l,r] that does not contain a 0 then the mex(S) will be 0 

i need to minimize this ops

if there is one 0 at pos p , 1<p<N then it defintely gonna take 2 operations (either selecting whole array and makeing it k(nonzero) and 
again the whole array will be 0 on 2nd ops , ot selecting the right and left half and individually make it 0)

if one 0 and is at pos 1 or N then 1 operation 

if there are more than 1 0 at p1 and p2 , 1<p1<p2<N
then it makes about 3 regions : [1,p1), (p1,p2), (p2,N]

if i choose entire array it will become, then mex(S) will be some non zero +ve integer then again choosing the entier array will make mex(S) to 0
2ops 
that choosein region1 and making it 0 and region 2 making it 0 ... : 3 ops
so at max no matter the no of 0s appearing its goona be at max 2 operations 

we hve 0 ops as lower limit when all the valeus are already 0 

so the range of operatios is 0 to 2 

given multipel 0s pi at 1<pi<N for every i and either a1,aN or both is len(i) = 0 means 1 ops else 2 ops 

____________

if all values are 0 then 0 ops 
if no 0s then 1 ops 
if there is 0s and form prefix or suffix then 1 operation 
if there is 0s that are not part of prefix or suffix then 2 operations 
*/