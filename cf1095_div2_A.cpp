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

    constexpr int MOD = 676767677;

    while(T--){
        int N;
        cin >> N;

        long long sum = 0LL;
        int last;

        for(int i = 0; i<N; ++i){
            int temp;
            cin >> temp;
            
            if(temp!=1) sum += temp;
            last = temp;
        }
        
        if(last == 1) ++sum;
        sum = (sum%MOD);
        cout << sum << "\n";
    }

    return 0;
}

// both in ascending and descending case its the sum of all the elements
// even in unseored case it beter remove 1 bby one
// we just need to find the no of ones we have and subtract it
// the idea is that
// 1 is all of the problem
// it dosent matter if multiple 1 exist
// all i have to know abt the infor is that if 1 has occured
// how many 1 has occured
// and if there exist even one non 1 integer after the occurance of 1
// if not occured then add 1 
// if occured then dont add 1 
// as the numbers stream fnd theirr sum
// 