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

        string S;
        cin >> S;

        int last = -1;
        int maxGap = 0;
        int emptys = 0;

        for(int i = 0; i<N; ++i){
            if(S[i] == '.') ++emptys;
            if(S[i] == '#'){
                int gap = i-last-1;
                maxGap = max(maxGap, gap);
                last = i;
            }
        }

        maxGap = max(maxGap, N-1-last);
        
        if(maxGap>=3){
            cout << 2 << "\n"; 
        }
        else{
            cout << emptys << "\n";
        }
    }

    return 0;
}