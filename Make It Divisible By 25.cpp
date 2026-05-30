#include <bits/stdc++.h>
using namespace std;

auto init = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();

int solve(long long val, int targ){

    int ops = 0;  
    int matched = 0;

    while(val && matched<2){

        if(val%10LL == targ%10LL){
            targ /= 10;
            matched++;
        }
        else ++ops;

        val /= 10LL;
    }

    if(matched<2) return INT_MAX;
    return ops;
}

int main(){

    int T;
    cin >> T;

    while(T--){

        long long N;
        cin >> N;

        int res = INT_MAX;

        res = min(res, solve(N, 25));
        res = min(res, solve(N, 75));
        res = min(res, solve(N, 50));
        res = min(res, solve(N,100));

        cout << res << "\n";
    }

    return 0;
}

/*
i need need to find a subsequence of the given number 
then the no of ops is len(orginal) - len(subsequence)

100k is always divisible by 25 
so the last 2 digits is what matter 

25,50,75,100, 125...
so the last 2 digits must be 25 or 50 or 00 or 75 
then rest of the digits dosent matter

we can do this 4 times  one for each 00 25 50 75
and return the minima between the 4 

convert the number to a string and iterate from the last for string matching 
*/