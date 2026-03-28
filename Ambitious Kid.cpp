#include<bits/stdc++.h>
using namespace std;

auto init = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();

int main(){
    
    int N;
    cin >> N;

    int minima = INT_MAX;

    for(int i = 0; i<N; ++i){

        int temp;
        cin >> temp;

        temp = std::abs(temp);
        minima = min(minima, temp);
    }

    cout << minima << "\n";
    
    return 0;
}