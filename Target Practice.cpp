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
        
        int score = 0;

        for(int i = 0; i<10; ++i){
            for(int j = 0; j<10; ++j){

                char temp;
                cin >> temp;

                if(temp == 'X'){

                    int ridx = (i<5) ? i : 4 - (i%5);
                    int cidx = (j<5) ? j : 4 - (j%5);

                    int points = min(ridx, cidx) + 1;
                    score += points;
                }
            }
        }

        cout << score << "\n";
    }

    return 0;
}

