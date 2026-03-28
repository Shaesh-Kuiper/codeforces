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

        vector<int> res;
        res.reserve(2*N);

        int prev;
        cin >> prev;
        res.push_back(prev);

        for(int i = 1; i<N; ++i){

            int temp;
            cin >> temp;

            if(temp<prev){
                res.push_back(temp);
            }

            res.push_back(temp);
            prev = temp;
        }

        cout << res.size() << "\n";
        for(int x : res){
            cout << x << " ";
        }
        cout << "\n";
    }
    
    return 0;
}