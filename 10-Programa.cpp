//https://codeforces.com/contest/110/problem/A
#include <bits/stdc++.h>
 
using namespace std;
 
 
int main() {
    
    string data;
    int contador = 0;
    cin >> data;
    for(int i = 0; i < data.size(); i++){
        if(data[i] == '7' || data[i] == '4')
            contador ++;
    }
    if(contador == 4 || contador == 7){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}
