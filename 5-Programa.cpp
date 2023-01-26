//https://codeforces.com/contest/263/problem/A
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;


int main() {
    
    int data[5][5];
    vector<int> movimientosR,movimientosC;
    int aux = 0;
    for(int i = 0; i< 5; i++){
        for(int j = 0; j < 5; j++){
            cin >> data[i][j];
            if(data[i][j] == 1 ){
                aux = abs(2-i)+abs(2-j);
            }
            
        }
    }
    cout << aux << endl;
    
    
    
    
}
