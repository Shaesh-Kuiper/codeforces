#include<bits/stdc++.h>
using namespace std;

auto init = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();

int main(){
    
    int n;
    cin >> n;

    string s;
    cin >> s;

    int r = -1;
    int l = -1;

    for(int i = n-2; i>=0; --i){
        if(s[i]>s[i+1]){
            l = i;
            r = i+1;
            break;
        }
    }

    if(r!=-1){
        cout << "YES\n";
        cout << l+1 << " " << r+1 << "\n";
    }
    else cout << "NO\n";

    return 0;
}

/*
if at any position i,if i ahve encountered any element smaller thant it tot he right then we can swap that range 
it is necessary to have an element smaller tp the right
*/