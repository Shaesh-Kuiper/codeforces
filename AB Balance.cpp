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

        string s;
        cin >> s;

        if(s.front()!=s.back()) s[0] = s.back();

        cout << s << "\n";
    }

    return 0;
}

/*
so just count the no of ab and ba and we just need to make them equall 
AB(s) == BA(s) then no issue
AB(s) > BA(s) 
then i can either decrease AB or increase BA
the problem is ababa
the claim is that all the values must be alternating : no need actually abbaba
a diff of 0 is possible 
a diff of 1 is possible abab
a diff of 2 is not possible and for the rest too

since only a diff of only 1 is possible at max 
if AB(s) < BA(s) 
baaaaaba
then any one of the end must be having a b , just change it to a
if AB(s) > BA(s)
ababab then chnage a to b

if diff is 1 then it is garunteed that there is 1 a and 1 b at the ends 
ok if the count mismatch, just toggle a character at the end (any)
*/