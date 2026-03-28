#include<bits/stdc++.h>
using namespace std;

auto init = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();

bool match(const string& X, const string& S, int mul) noexcept {

    const int n = X.size();
    const int m = S.size();

    const int actualSize = n*mul;

    for(int i = 0; i+m <= actualSize; ++i){

        int idx = (i%n);
        bool matched = true;

        for(int j = 0; j<m; ++j, idx = (idx+1)%n){
            if(X[idx]!=S[j]){
                matched = false;
                break;
            }
        }   

        if(matched) return true;
    }

    return false;
}

int main(){

    // x of length n
    // s of length m 

    // case 1
    // m<=n
    // in either case the asnwer is either 0 if u can find s in x or inf i can find after doubling or -1 

    // m>n
    // double x untile the length becomes => m 
    // check if the u can find and return the no of itr it too to doubling 
    // if not again double it and find 
    // return -1 

    int T;
    cin >> T;

    while(T--){

        int N, M;
        cin >> N >> M;

        string X;
        cin >> X;

        string S;
        cin >> S;

        int cnt = 0;
        while(M>N){
            ++cnt;
            N = (N<<1);
        }

        int mul = (1<<cnt);

        if(match(X,S,mul)) cout << cnt << "\n";
        else if(match(X,S,(mul<<1))) cout << cnt+1 << "\n";
        else cout << -1 << "\n";
    }

    return 0;
}