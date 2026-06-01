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
        
        int n,m,a,b;
        cin >> n >> m >> a >> b;

        cout << 1 << " " << 1 << " " << n << " " << m << "\n";
    }
    return 0;
}

/*
x0,y0 be the initial pos
then to ravell to a,b
he must walk abs(a-x0) cells horizntally and (b-y0) cells vertically no matter what
if he pass diagonally or monotonically vertican then horizontal etc.. 
so the total no of steps is constant abs(b-y0) + abs(a-x0)

if we put the two yoyo at x1,y1 and x2,y2 such that yoyo 1 is relatively near him 

pos0->pos1
pos1->pos2
pos2->pos0
is a round trip
and is sum dist  = |pos0-pos1| + |pos1-pos2| + |pos2-pos0| 

pos0 pos1 pos2 may form a line but that will minimize the distance and we wnat them to form atringle 

[][][][]
[][][][]
[][][][]
[][][][]
[][][][]

i need to prooject the position to the edges 

nxm be the dimensions
then x,y be the initial position 

independent of the intital position, if i put the yoyos at the opposite edge, teyre forced to walk the perimeter distance of the grid
aka placed at ends of a diagonal

so its just 1,1 and n,m
*/