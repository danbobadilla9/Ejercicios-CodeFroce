//https://codeforces.com/contest/266/problem/B
#include <bits/stdc++.h>

using namespace std;
 
 
int main() {
    
    string data;
    int contador = 0,n;
    cin >> n;
    cin >> data;
    for(int i = 1; i < n; i++){
        if(data[i-1] == data[i])
            contador++;
    }
    cout << contador<< endl;
}
