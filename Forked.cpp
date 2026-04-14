#include<bits/stdc++.h>
using namespace std;

auto init = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();

constexpr int dirs[5] = {1,1,-1,-1,1};

bool possible(int rx, int ry, int a, int b, int kx, int ky){
    
    for(int i = 0; i<4; ++i){

        int dx1 = a*dirs[i];
        int dy1 = b*dirs[i+1];

        int dx2 = b*dirs[i];
        int dy2 = a*dirs[i+1];

        if((rx+dx1 == kx) && (ry+dy1 == ky))  return true;
        if((rx+dx2 == kx) && (ry+dy2 == ky))  return true;
    }

    return false;
}

int main() {

    int T;
    cin >> T;

    while(T--){

        int a,b;
        cin >> a >> b;

        int kx,ky;
        cin >> kx >> ky;

        int qx,qy;
        cin >> qx >> qy;

        int forked = 0;

        for(int i = 0; i<4; ++i){

            int dx1 = a*dirs[i];
            int dy1 = b*dirs[i+1];

            int dx2 = b*dirs[i];
            int dy2 = a*dirs[i+1];

            if(possible(qx+dx1, qy+dy1, a, b, kx, ky)) ++forked;
            if(possible(qx+dx2, qy+dy2, a, b, kx, ky)) ++forked;
        }

        if(a==b) forked = (forked >> 1);
        cout << forked << "\n";
    }

    return 0; 
}