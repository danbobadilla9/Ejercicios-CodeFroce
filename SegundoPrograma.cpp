//https://codeforces.com/contest/281/problem/A
#include <bits/stdc++.h>
using namespace std;

int main() {
    int restador = 'a'-'A';
    string cadena;
    cin >> cadena;
    
    if(cadena.at(0) >= 'A' && cadena.at(0) <= 'Z'){
        cout << cadena << endl;
    }else{
        cout <<cadena.replace(0,1,1,char(cadena.at(0)-restador)) << endl;
        
    }
    
    
	return 0;
}