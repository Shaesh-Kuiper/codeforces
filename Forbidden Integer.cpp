#include<bits/stdc++.h>
using namespace std;

auto init = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();

void caseThree(int N, int x){

    cout << "Yes\n";

    if(x == 2 || x == 3){
        cout << N << "\n";
        for(int i = 0; i<N; ++i){
            cout << 1 << " ";
        }
        cout << "\n";
    }
    else{
        if(N&1){
            N = N-3;
            int m = N/2;
            cout << m + 1 << "\n";
            cout << 3 << " ";
            for(int i = 0; i<m; ++i){
                cout << 2 << " ";
            }
            cout<< "\n";
        }
        else{
            int m = N/2;
            cout << m << "\n";
            for(int i = 0; i<m; ++i) cout << 2 << " ";
            cout << "\n";
        }
    }
}

int main(){

    int T;
    cin >> T;

    while(T--){
        int N, K, X;
        cin >> N >> K >> X;

        if(K==1){
            cout << "No\n";
        }
        else if( K == 2){
            if(X == 1){
                if(N&1) cout << "No\n";
                else{
                    cout << "Yes\n";
                    int m = N/2;
                    cout << m << "\n";
                    for(int i = 0; i<m ;++i){
                        cout << 2 << " ";
                    }
                    cout << "\n";
                }
            }
            else{
                cout<< "Yes\n";
                cout << N << "\n";
                for(int i = 0; i<N; ++i){
                    cout << 1 << " ";
                }
                cout << "\n";
            }
        }
        else{
            caseThree(N,X);
        }
    }
    return 0;
}