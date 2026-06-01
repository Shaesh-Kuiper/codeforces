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

        long long a,b;
        cin >> a >> b;

        if(a==b){
            cout << 0 << " " << 0 << "\n";
            continue;
        }

        long long g = abs(b-a);

        long long ops = a % g;
        ops = min(ops, g-ops);

        cout << g << " " << ops << "\n";
    }

    return 0;
}

/*

given 2 int a and b, i can do +1 or -1 and need to maximize gcd(a,b)

if gcd(a,b) = k
then a = km; b = kn

6,3  => 3
7, 4 =>1
8, 5 => 1
9, 6 => 3
10, 7 => 1
11, 8 -> 1
12, 9 -> 3
13,10=>1
14,11=>1
15,12=>3

this is periodic

9,5=>1
10,6=>2
11,7=>1
12,8=>4
13,9=>1
14,10=>2
15,11=>1
16,12=>4

this periodicity is the abs diff between the number 

but the probkem is 0<=a,b<=1e18

and if at exteme case a=1 b=1e18 we will happen to loop 1e18 time which will tle 

gcd(a,b) <= min(a,b)

i need to find a limit where look some K times is enough 

ouch the max gcd is just abs diff between two numbers

now if  we do eithe of the operations x times 
then new values are 

a+x and b+x
and the new gcd must be b-a 
originally 
gcd was k 
then
a = km
b = kn
b>a
ginal gcd is b-a
so
a+x = (b-a)k1 
b+x = (b-a)k2 

b-a = (b-a)(k2-k1)
(b-a) + (b-a)(k1-k2) = 0
(b-a)(k1-k2+1) = 0
k1+1 = k2

a+x = (b-a)k1
b+x = (b-a)(k1+1)
a+b+2x = (b-a)(2k1+1)
x = (b-a)(2k1+1)-(a+b)/2
k1 is +ve int
then x is min when k1 = 1
x = 3b-3a-a-b/2 => 2b-4a/2 = > b-2a
x = b-2a ops
bit b>=2a ouch

2k1b -2(k1+1)a/2 = > k1b-(k1+1)a >=0
so k1b >= (k1+1)a = k1a + a
k1(b-a) >= a
k1 >= a/(b-a)

ro get min x we need k1 = ceil(a/b-a)
eh? worng answer
*/