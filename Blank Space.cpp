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

        int maxima = 0;
        int size = 0;

        for(int i = 0; i<N; ++i){

            int temp;
            cin >> temp;

            if(temp == 1){
                maxima = max(maxima, size);
                size = 0; 
            }
            else{
                ++size;
            }
        }
        maxima = max(maxima, size);
        cout << maxima << "\n";
    }
    return 0;
}