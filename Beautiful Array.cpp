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

        long long n, k, b, s;
        cin >> n >> k >> b >> s;

        long long a1 = b*k;
        long long extra = s-a1;
        long long available = n*(k-1);

        if(extra < 0 || extra>available){ 
            cout << -1 << "\n";
            continue;
        }

        int v = min(extra, k-1);
        extra -= v;
        a1+=v;

        cout << a1 << " ";

        int idx = n-1;
        while(extra){
            int ai = min(extra, k-1);
            cout << ai << " ";
            extra -= ai;
            --idx;
        }

        while(idx--) cout << 0 << " ";
        cout << "\n";
    }

    return 0;
}

/*
n elements 

b = sigma(floor(ai/k))
s = sigma(ai) 

ai = qik + ri

floor(ai/k) = qi
=> b = sigma(qi)

sigma(ai) = sigma(qi) + sigma(ri)

0<=ri<k
0<=sigma(ri)<nk

i can focus on a1 alone and make a2.....aN all either 1 or 0 

a1 = bk, a2..an = 0
i can mae this n-1 places all k-1 at max
s-bk > (n-1)(k-1) then return -1 
extra = s-b
greedily set eachelement ai [2,N] = min(extra, k-1) update extra -= ai till extra ==0

3 6 3 12
extra 12-3 = 9
2*5 = 10
18 5 4 

*/