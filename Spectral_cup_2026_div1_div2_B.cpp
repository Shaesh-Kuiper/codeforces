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

        int N,M;
        cin >> N >> M;

        int size = (N>>1) +1;


        vector<int> odd; odd.reserve(size);
        vector<int> even; even.reserve(size);

        for(int i = 1; i<=N; ++i){
            int temp;
            cin >> temp;

            if(i&1){
                odd.push_back(temp);
            }
            else{
                even.push_back(temp);
            }
        }


        sort(odd.begin(), odd.end());
        sort(even.begin(), even.end());

        int ocnt = 0;
        int ecnt = 0;

        for(int i = 0; i<M; ++i){
            int temp;
            cin>>temp;
            if(temp&1) ++ocnt;
            else ++ecnt;
        }

        int idx = odd.size()-1;
        bool of = false;
        bool ofirst = odd.empty() ? false : (odd.back() < 0);

        while(ocnt > 0 && idx>=0){

            if(odd[idx] >=0){
                odd[idx] = 0;
                --idx;
            }
            else{
                of=true;
            }
            --ocnt;
        }

        if(of && ofirst) odd[idx] = 0;

        idx = even.size()-1;
        bool ef = false;
        bool efirst = even.empty() ? false : (even.back() < 0);

        while(ecnt > 0 && idx>=0){

            if(even[idx] >= 0){
                even[idx] = 0;
                --idx;
            }
            else{
                ef = true;
            }

            --ecnt;
        }

        if(ef && efirst) even[idx] = 0;

        long long sum = 0LL;

        for(int x : odd) sum +=x;
        for(int x : even) sum += x;

        cout << sum << "\n";
    }

    return 0;
}

