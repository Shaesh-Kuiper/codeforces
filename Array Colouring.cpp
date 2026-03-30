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

        int count = 0;

        for(int i = 0; i<N; ++i){
            int temp = 0;
            cin >> temp;
            if(temp&1) ++count;
        }

        if(count&1) cout << "No\n";
        else cout << "Yes\n";
    }

    return 0;
}