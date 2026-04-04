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

        vector<int> arr(N);

        for(int i = 0; i<N; ++i){
            cin >> arr[i];
        }

        int maxXor = 0;

        for(int  i =0; i<N; ++i){
            for(int j = 0; j<N; ++j){
                int xval = arr[i] ^ arr[j];
                maxXor = max(maxXor, xval);
            }
        }

        cout << maxXor << "\n";
    }

    return 0;
}
