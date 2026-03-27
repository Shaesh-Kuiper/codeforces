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

    for(int itr = 0; itr<T; ++itr){

        int N, x;
        cin >> N >> x;

        int lastStop =  0;
        int capacity = 0;
        int currStop = 0;

        for(int i = 0; i<N; ++i){
            cin >> currStop;
            int dist = currStop-lastStop;
            capacity = max(capacity, dist);
            lastStop = currStop;
        }

        int dist = (x - lastStop)<<1;
        capacity = max(capacity, dist);
        
        cout << capacity << "\n";
    }

    return 0;
}