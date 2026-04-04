#include<iostream>
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

        int val = N+1;

        for(int i = 1; i<=N; ++i){
            cout << i << " " << val++ << " " << val++ << " ";
        }

        cout << "\n";
    }
    return 0;
}
