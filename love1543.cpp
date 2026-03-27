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

        int n,m;
        cin>>n;
        cin>>m;
        
        vector<vector<int>> vec(n, vector<int>(m, 0));

        for(int i = 0; i<n; ++i){

            string s;
            cin >> s;

            for(int j = 0; j<m; ++j){
                vec[i][j] = s[j] - '0';
            }
        }


        for(auto v : vec){
            for(int x : v){
                cout << x << " ";
            }
            cout << "\n";
        }

    }
    return 0;
}