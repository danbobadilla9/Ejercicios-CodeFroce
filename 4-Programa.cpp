//https://codeforces.com/contest/275/problem/A
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

void modificar(int i, int j, int (&data)[3][3]){
    
    if( (i+1) <= 1 || (i-1) == 0){
        data[i+1][j] = ((data[i+1][j] -1) == 0)? 0: 1; 
    }
    if( (i+1) >= 2 ){
        data[i-1][j] = ((data[i-1][j] -1) == 0)? 0: 1;
    }
    if((j+1) <= 1 || (j-1) == 0){
        data[i][j+1] = ((data[i][j+1] -1) == 0)? 0: 1;
    }
    if((j+1) >= 2){
        data[i][j-1] = ((data[i][j-1] -1) == 0)? 0: 1;
    }
}

int main() {
    int base[3][3] = {{1,1,1},{1,1,1},{1,1,1}};
    int data[3][3];
    //Recolectando datos 
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> data[i][j];
        }
    }
    //Analizando datos 
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if( data[i][j] != 0  && data[i][j] % 2 != 0){
                modificar(i,j,base);
                base[i][j] = ((base[i][j] -1) == 0)? 0: 1;
            }
        }
    }
    for( int i = 0; i < 3; i++){
        cout<<base[i][0]<<base[i][1]<<base[i][2]<<endl;
    }
}

