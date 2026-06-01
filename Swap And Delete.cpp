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

        string s;
        cin >> s;

        const int Size = s.size();
        int count[2] = {0};

        for(char c : s){
            if(c == '0') ++count[0];
            else ++count[1];
        }

        int res = 0;
        for(int i = 0; i<Size; ++i){

            int v = s[i]-'0'; int c = 1-v;

            if(count[c] == 0){
                res = Size-i;
                break;
            }

            --count[c];
        }

        cout << res << "\n";
    }

    return 0;
}

/*

since we can swap any two elements -> we can get any arbitary configuration after arbitary no of moves at 0 cost

only cost is the no of deletetions reuired

say the entire string has 
count 1s = a
coutn 0s = b

total size of the string is a+b

if a==b then for every 1 we have a 0 to complement it 
we cqn jus tmake t such that t[i] = s[i]-1
no of deletions is 0

if a>b then for b 1's i have b 0s and the rest a-b 1s dont have a pair and must be removed

//101011 = s
//0101 = t

//111100 = s
//00   = t 

this test cases note that the count alone isn't enough the position also matters

so we just get the counts a and b 
and start iterating from the index 1 of s 
and try putting t[i] as s[i] complement 
s[i] == 1 then --count0
s[i] == 0 then --count1 

if there happens a pos s[i] where the complement count is 0 then after that pos and including it we need to delete all
so that will be Size-i+1
*/

