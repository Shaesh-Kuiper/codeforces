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

        int count = 0;
        for(char c : s){
            if(c == '1') ++count;
        }

        int minima = min(count, (int)s.size()-count);

        if(minima&1) cout << "DA\n";
        else cout << "NET\n";
    }

    return 0;
}

/*
let no of ones be o
no of zeros be z 
then no matter the arrangement since they are one contiuous sequence of characters they must transition from 1 to 0 making an interface to make a move
so as far as there is non zero 1s and non zero count of 0s a player can make a move no matter their position

ever mover 1s and 0s count decrease by 1

so total no of moves possible is min(1count, 0count);
if its odd Alice wins or else she loose
*/