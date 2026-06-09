#include<bits/stdc++.h>
using namespace std;

auto init = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();

int solve(const string&a, const string& b){

    const int aSize = a.size();
    const int bSize = b.size();

    vector<vector<int>> dp(aSize+1, vector<int>(bSize+1, 0));
    int maxima = 0;
    
    for(int i = 1; i<=aSize; ++i){
        for(int j = 1; j<=bSize; ++j){
            int res = 0;
            if(a[i-1]==b[j-1]) res = dp[i-1][j-1]+1;
            dp[i][j] = res;
            maxima = max(maxima, res);
        }
    }

    return maxima;
}

int main(){

    int T;
    cin >> T;

    while(T--){

        string a,b;
        cin >> a >> b;

        int lcss = solve(a,b);

        cout << a.size()+b.size()-(lcss<<1) << "\n";
    }

    return 0;
}

/*

we must minimize the no of deletion for either array 
so its just the size of the longest common substring

res = a + b -2lcss

*/