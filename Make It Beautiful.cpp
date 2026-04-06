#include<bits/stdc++.h>
using namespace std;

auto init = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();

void printbeautiful(int N, vector<int>& a) noexcept {

    sort(a.begin(), a.end(), greater<int>());
    
    if(a[0] == a[1]){
        int val = a[0];
        auto it = find_if(a.begin(), a.end(), [&val](int x ){ return x!=val;});
        if(it == a.end()){
            cout << "NO\n";
            return;
        }
        else{
            std::swap(a[1], *it);
        }
    }
    
    cout << "Yes\n";
    for(int i = 0; i<N; ++i){
        cout << a[i] << " ";
    }
    cout << "\n";
}

int main(){
    int T;
    cin >> T;

    while(T--){

        int N;
        cin >> N;

        bool beautiful = true;
        int sum = 0;

        vector<int> a(N);

        for(int i = 0; i<N; ++i){

            int temp;
            cin >> temp;

            a[i] = temp;

            if(temp == sum) beautiful = false;
            sum += temp;
        }

        if(beautiful){
            cout << "Yes\n";
            for(int i = 0; i<N; ++i){
                cout << a[i] << " ";
            }
            cout << "\n";
        }
        else{
            printbeautiful(N,a);
        }
    }

    return 0;
}