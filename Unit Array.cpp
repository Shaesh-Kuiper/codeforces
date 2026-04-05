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

        int pos = 0;
        int neg = 0;

        for(int i = 0; i<N; ++i){
            int temp;
            cin >> temp;
            pos += (temp==1);
            neg += (temp==-1);
        }

        int tot = pos - neg;
        int val = abs(min(tot,0));
        int ops = (val+1)>>1;
        
        neg -= ops;
        if(neg&1) ops++;

        cout << ops << "\n";
    }
    return 0;
}

