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

        int n, p;
        cin >> n >> p;

        vector<pair<int,int>> people(n);
        for(int i = 0; i<n; ++i) cin >> people[i].second;
        for(int i = 0; i<n; ++i) cin >> people[i].first;

        sort(people.begin(), people.end());

        long long accCost = 0;
        int remaining = n-1;

        for(int i = 0; (i<n) && (remaining!=0); ++i){

            int ai = people[i].second;
            int bi = people[i].first;

            if(bi >= p) break;

            int covered = min(remaining, ai);
            remaining -= covered;

            accCost += (1LL*covered*bi);
        }   

        long long res = 0LL + p + (1LL*remaining*p) + accCost;
        cout << res << "\n";
    }

    return 0;
}

/*
so ther are n residents and it taks cost p to inform 1 or more resident 
and the resident themselves can report to other residents at max ai no of other with bi for each 

p = min(p, min(b)) then i can directly share the info to everyone. 

if p not the minimum
and let b1,b2,..,bk be k people whose cost of sharing the info is lower than me then they can cover for people 
nInformed = sigma[1,k](ai)

let [b1,b2...bk] be some "eG" efficient group
then if i inform 1 person in this group then they themselves can inform the others in the group
k is the size of the group
if at lowest bi is 1 so if i inform only 1 person thn this entire group self sustain and and infor 1 extra person outside the group
so bor bi>1 no worries

so no matter what its enough to infor only 1 person from this group directly with cost p 
and they will inform and self sustain i

i need to slpen p to inform at least 1 to start this group 
then this group itself will sustain nInformed no of perople 
if there are n people in total 1 already informed by me 
and n-1 people to be infored in which nInformed are done so remaining n-1-nInformed are to be informed by me directly

therefore (1+max(0,n-1-nInformed))(p) + (a1b1+a2b2+aa3b3...akbk)

but the nInformed cna be overshooting such that t<k a1+a2..+at is enough to inform all of the people

merge A and B and sort based on b values
then do binary search on it to find the indxe where v[idx][1] < p (strictly lower)
i find the size of perople they can inform accumulating the no of informed and total const 
till T = sum (v[idx][0]*v[idx][1]) <= n-1 , accCost = sum(v[idx][1])
finally if T<n-1 then i neeed to manuallt inform n-1-T people 
tot cost is p + accCost + (n-1-T)(p)
*/