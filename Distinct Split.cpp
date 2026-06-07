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

        int frq[26] = {0};

        int n;
        cin >> n;

        string s;
        cin >> s;

        for(int i = 1; i<n; ++i) ++frq[s[i]-'a']; //not counting the first index 

        int unique = 0;
        for(int x : frq) if(x!=0) ++unique;


        int lookup[26] = {0};
        lookup[s[0]-'a'] = 1;

        int currUni = 1;

        int res = currUni + unique;

        for(int i = 1; i<n-1; ++i){
            
            int idx = s[i]-'a';
            
            if(--frq[idx] == 0) --unique;
            
            if(lookup[idx]==0){
                ++currUni;
                lookup[idx] = 1;
            }

            res = max(res, unique+currUni);
        }
        
        cout << res <<"\n";
    }

    return 0;
}

/*

int 26 ops i can find the no of unique vals 
lets have a frq map frq[c] = gives the frq of that c 
and the no of non 0 val is the no of unique characcters

now iterating from left to right [2,N-1]
start with currUniq = 0;
if i am visiting a char c i do frq[c]--; and if that vla become 0 unique--
we will have a secondary map where if lookup[c] = false means currUniq++
then f(a)+f(b) is currUniq + unique

*/