#include <bits/stdc++.h>
using namespace std;

auto init = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();

int solve(const vector<int>& nums, int N){

    if(N==1) return 0;

    int maxAdj = INT_MIN;
    int changeLast = INT_MIN;
    int changeFirst = INT_MIN;

    for(int i = 0; i<N; ++i){

        maxAdj = max(maxAdj, nums[i] - nums[(i+1)%N]);
        changeLast = max(changeLast, nums[i==0?1:i]-nums[0]);
        changeFirst = max(changeFirst, nums[N-1]-nums[i==N-1?0:i]);
    }

    return max({maxAdj, changeLast, changeFirst});
}

int main(){

    int T;
    cin >> T;

    while(T--){

        int N;
        cin >> N;

        vector<int> nums(N);
        for(int i = 0; i<N; ++i) cin >> nums[i];

        cout << solve(nums, N) << "\n";        
    }
     
    return 0;
}

/*
in this problem k does not matter, we just have to pick the right subsegment
this subsegment must contain an element that is far lower then the last emenet as possible 

1. whatever segment i choose must either contain pos 1 or pos n or both 
2. in case a1 is minima and an is maxima then that an-a1 is already maximised 
3. in case the an is maxima and the minima is not a1 then i can alway choose some k and segment [1,N-1] to get the minima to a1
4. in case the a1 is the minima and the maxima is not an then i can always choose soem k and segment [2,N] to get the maxima to an 
5. the problem is when minima and maxima not in either extrmes

a1 a2 a3 a4 a5 
a5 a1 a2 a3 a4 
a4 a5 a1 a2 a3 


a5-a4
a3-a4 
..
..
a2-a1

A) so we can see all the adj numbers are compared an-an-1 so we can do a runnign maxima 

B) or we can keep the last element const and [1,N-1] and keep it rotating an-ak k in range [1,N-1] and keep a runnnign maxima 
C) or we can keep the first element consant ans keep rotatiing, ak-a1 k in range [2,N] and keep the running maxima 

no other things can be done at all as it will need more than 1 operation 
so the steps A,B and C is enough and the maxima between then is the final result. 
*/