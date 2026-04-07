#include<iostream>
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
        
        int last;
        cin >> last;

        int count = 0;

        for(int i = 1; i<N; ++i){
            int temp;
            cin >> temp;

            if((last&1) == (temp&1)) ++count;
            last = temp;
        }

        cout << count << "\n";
    }

    return 0;
}