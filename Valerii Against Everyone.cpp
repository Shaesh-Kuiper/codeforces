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

        int N;
        cin >> N;

        vector<int> nums(N);
        for(int i = 0; i<N; ++i) cin >> nums[i];
        
        sort(nums.begin(), nums.end());

        bool f = false;
        for(int i = 1; i<N; ++i){
            if(nums[i-1] == nums[i]){
                f = true;
                break;
            }
        }

        if(f) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}

/*

consider subarray A = [a1, a2,..ax] size x
B = [b1, b2, .. by] size y

2^a1 + 2^a2 + ....  2^ax = 2^b1 + 2^b2 + ... + 2^by

2^i + 2^j = 2^k
i<=j<=k

1 + 2^(j-i) = 2(k-i) not possiblt for any vals of i j and k 
only possible if i=j and k=i+1

so if i see duplicates i collapse them the pow+1

i can use a two arrays 

if at all i ever see any value repeated then yes 
if no value is repeated then no
oops that easy lol 
*/