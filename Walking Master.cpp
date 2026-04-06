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

        int a,b,c,d;
        cin >> a >> b >> c >> d;

        if(b==d && a>=c){
            int ops = a-c;
            cout << ops << "\n";
        }
        else if(a == c && d>b){
            int ops = d-b;
            ops = (ops<<1);
            cout << ops << "\n";
        }
        else if(c<a && d>b){
            int ops = d-b;
            a = a+ops;
            ops += (a-c);
            cout << ops << "\n";
        }
        else if(c>a && d>b){
            int ops = d-b;
            a = a+ops;
            if(c>a){
                cout << -1 << "\n";
            }
            else{
                ops += (a-c);
                cout << ops << "\n";
            }
        }
        else{
            cout << -1 << "\n";
        }
    }
    return 0;
}