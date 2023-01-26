//https://codeforces.com/contest/271/problem/A
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;


int main() {
    
    string data;
    cin >> data;
    int  numero = stoi(data)+1;
    while(true){
        int a = numero/1000 %10; 
        int b = numero/100 % 10;
        int c = numero/10 %10;
        int d = numero %10;
        if(a != b && a != b && a != c && a != d && b != c && b != d && c != d){
            cout << numero;
            break;
        }
        numero++;
    }
    
}
