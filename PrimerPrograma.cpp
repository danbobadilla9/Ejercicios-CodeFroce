//http://codeforces.com/problemset/problem/69/A
#include <iostream>
using namespace std;

int main() {
    
    int n,dx = 0,dy = 0,dz = 0;
    cin >> n;
    while(n--){
        int x = 0,y = 0,z = 0;
        cin >> x >> y >> z;
        dx += x;
        dy += y;
        dz += z;
    }

    if(dx == 0 && dy == 0 && dz == 0){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
	// your code goes here
	return 0;
}
