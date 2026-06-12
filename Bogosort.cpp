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
        int n;
        cin >> n;

        vector<int> nums(n);
        for(int i = 0; i<n; ++i) cin >> nums[i];

        sort(nums.begin(), nums.end(), greater<int>());

        for(int x : nums) cout << x << " ";
        cout << "\n";
    }

    return 0;
}

/*

if all the elements are equal then no need to bother as i and j will change

sort the array

if it happened j-aj == i-ai
j>i
aj>ai
if we swap the places
j>i 
aj<ai
j-aj' > j-aj j is not sub with a much smaller num
i-ai' < i-ai i is sub with a larger num 
lhs grows and rhs shrinks so they will never be equal 


no need to bother for [l,m] where all equall elements
all great but with which j will i compare this will make it n^2 + nlogn ops which will pass the test case

indexies is in ascending order
if we again assing then numbers in ascendin order then there is a chance that diff between them is exactly 
equal so some other index diff 

so we assin them numbers in desc order so small numbers paired with huge numbers and later in indexs larger number paired with smaller numbers 


this is a decreasing sequence but is it strictly dec 

b = a-k
i+d = j
then 

j-b = i-a 
i+d-a+k = i-a
i-a+d+k = i-a
d+k = 0
d=-k

since k>=0 d>0
this is not possible (0,0) is not allowed as d!=0

so strictly decreasing 
*/