#include <bits/stdc++.h>
using namespace std;

auto init = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();

bool solve(const string& start, const string& end){
    if(end.size()>start.size()) return false;

    vector<bool> skipped(26, false);

    int i = start.size()-1;
    int idx = end.size()-1;

    for(;i>=0 && idx>=0; --i){
        if(start[i]==end[idx]){
            if(skipped[start[i]-'A']) return false; // trying to use a skipped character 
            --idx;
        }
        else skipped[start[i]-'A'] = true;
    }

    if(idx!=-1) return false;
    return true;
}

int main(){
    int N;
    cin >> N;

    while(N--){
        string start, end;
        cin >> start >> end;

        string res = solve(start, end) ? "YES" : "NO";
        cout << res << "\n";
    }
    return 0;
}

/*
the final word must be a subsequence of the starting word
i'll start iterating fromt he start and have a array "used" of size 26 all intially set to false
if i encounter a word in final word then i maek the used[char-'a'] = true; 
if I happen to compled to skip a characte where used is true then we cannot optabin the word
*/