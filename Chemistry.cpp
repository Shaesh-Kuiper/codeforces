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

        int n,k;
        cin >> n >> k;

        string word;
        cin >> word;
        
        int frq[26] = {};

        for(char c : word){
            int idx = c -'a';
            ++frq[idx];
        }

        int evens = 0;
        int ones = 0;

        for(int x : frq){
            if(x&1){
                evens += (x-1);
                ++ones;
            }
            else{
                evens += x;
            }
        }

        int len = n-k;

        if(len&1){
            if(k==ones) cout << "No\n";
            else if(k>ones){
                int kd = k-ones;
                if(kd&1) cout << "Yes\n";
                else cout << "No\n";
            }
            else{
                if(ones-k == 1) cout << "Yes\n";
                else cout << "No\n";
            }
        }
        else{
            int kd = k-ones;
            if(kd>=0){
                if(kd&1) cout << "No\n";
                else cout << "Yes\n";
            }
            else cout << "No\n";
        }
    }
        
    return 0;
}


