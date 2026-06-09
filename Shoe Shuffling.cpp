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

        vector<int> res; res.reserve((n>>1));

        int a = 0;
        int count = 0;
        bool possible = true;
        int i = 1;

        for(; i<=n; ++i){

            int temp;
            cin >> temp;
            
            if(a!=0 && a!=temp){
                if(count<=1){
                    possible = false;
                    ++i;
                    break;
                }
                res.push_back(i);
                count = 0;
            }

            a = temp;
            ++count;
        }

        if(count<=1){ possible = false;}

        while(i<=n){ int temp; cin >> temp; ++i;}

        if(!possible){
            cout << -1 << "\n";
        }
        else{
            int start = 1;
            res.push_back(n+1);
            for(int x : res){
                if(start>n) break;
                for(int i = start+1; i<x; ++i){
                    cout << i << " ";
                }
                cout << start << " ";
                start = x;
            }
            cout << "\n";
        }
    }

    return 0;
}

/*

each get a shoe size greater than or equal to their original 

if there exist a unique minima j
then j can always be satisfied but there exist no one who can get js shoe
if there exist a unique maxima y
there exist no one who can donste to him

so we need two or more values of minima and maxima 
consider a suseq removing the extremes -> this subseq will also have extremes having same probl

so every value must occur more than once 

also 

si ≤ si+1
is already sorted
so i just consider blocks and each blocks must be >1 size
*/