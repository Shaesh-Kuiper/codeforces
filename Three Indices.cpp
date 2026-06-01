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

        bool found = false;

        for(int i = 1; i<N-1; ++i){

            if( ((nums[i]-nums[i-1])>0) && ((nums[i+1]-nums[i])<0) ){

                cout << "YES\n";
                cout << i << " " << i+1 << " " << i+2 << "\n";
                found = true;
                break;
            }
        }

        if(!found) cout << "NO\n";
    }
    return 0;
}

/*

if the max is not in the extremers then [2,N-1]
then i can always choose 1, argmax(A), N
if maxima is at some end then i can consider the subarray [1,N-1] 
again apply that argmax argument

so basically if an array is sorted(asc or desc), all values keep of increasing (or desc) and we cannot find any triad
if not sorted i can always find a triad

we can use a running window of size 3 
instead of the sorting gimmic we can just use this window
ran from [2,N-1] and cheking i-1, i, i+1
we just want (nums[i]-nums[i-1])*(nums[i+1]-nums[i]) < 0 if yes then return i-1 i i+1

this should always exist as there can never be pleatues as no two number can be equal
*/