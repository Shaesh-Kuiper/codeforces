#include <bits/stdc++.h>
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

        string s;
        cin >> s;

        int maxWindow = 0;

        int window = 0;
        int start = 0;
        
        for(int i = 0; i<N; ++i){
            if(s[start]!=s[i]){
                maxWindow = max(maxWindow, window);
                start = i;
                window = 1;
            }
            else{
                ++window;
            }
        }

        maxWindow = max(maxWindow, window);
        cout << maxWindow+1 << "\n";
    }

    return 0;
}

/*
a completely monotonic problem
all i need to know is the max size of the region
a region here means ma xno of conc elements of same type 
more like climbing up an ddoown a hill 
then longest climb or descent dictates the no of unique emenets
*/