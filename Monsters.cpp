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

        int N, k;
        cin >> N >> k;

        vector<pair<int,int>> nums(N);
        for(int i = 0; i<N; ++i){

            int temp;
            cin >> temp;

            temp = temp%k;
            if(temp==0) temp = k;

            nums[i].first = temp;
            nums[i].second = i;
        }

        sort(nums.begin(), nums.end(), [](const auto& a, const auto& b){
            if(a.first == b.first) return a.second < b.second;
            return a.first > b.first;
        });

        for(int i = 0; i<N; ++i){
            cout << nums[i].second + 1 << " ";
        }

        cout << "\n";
    }

    return 0;
}

/*
given a array A
let ai = mik+ri

then i might have some elements <k and some =k and some >k 

ill first attack ai>k
then after one or more attack at some point ai will become =k or <k 
in either case I'll then proceed to attack aj where aj=k and j<i if exist

as for the ai<k i dont attack them until very late

as u can see noting is going to be removed until all the values in the A <= k
then the values close to k will be removed first in that order

so we run through the entire array and replace ai = (ai%k == 0) ? k : ai%k

now the remove order is among all the values i first remove those whose value is close to k and if same dist from k then based on thier initial position

*/