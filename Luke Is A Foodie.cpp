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

        long long x;
        cin >> x;

        long long minima = LLONG_MIN;
        long long maxima = LLONG_MAX;

        int cCount = 0;

        while(N--){
            
            long long temp;
            cin >> temp;

            minima = max(minima, temp-x);
            maxima = min(maxima, temp+x);

            if(maxima < minima){
                ++cCount;
                minima = temp-x;
                maxima = temp+x;
            }
        }  
        
        cout << cCount << "\n";
    }
    
    return 0;
}

/*
given v and x and ai 
min changes of vi need to optimally choose v
initially the range of values i can choose for v is [-inf, inf]

|v-ai|<=x
-x <= v-ai <= x
ai-x <= v-ai <= ai+x

(x is +ve)

minima = max(minima, ai-x)
maxima = min(maxima, ai+x)

the moment this range becomes invalidi need to stoar over so ++changeCount
reset bound to [-inf, inf]


*/