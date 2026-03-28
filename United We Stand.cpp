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

        int maxCount = 0;
        int maxima = 1;

        vector<int> A(N);
        
        for(int i = 0; i<N; ++i){

            int temp;
            cin >> temp;
            A[i] = temp;

            if(temp > maxima){
                maxima = temp;
                maxCount = 1;
            }
            else if(temp == maxima){
                ++maxCount;
            }
        }

        if(maxCount == N){
            cout << -1 << "\n";
        }
        else{

            cout << N-maxCount << " " << maxCount << "\n";

            for(int x : A){
                if(x!=maxima) cout << x << " ";
            }

            cout << "\n";

            for(int i = 0; i<maxCount; ++i){
                cout << maxima << " ";
            }
            cout <<"\n";
        }
    }

    return 0;
}