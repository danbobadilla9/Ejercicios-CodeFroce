//https://codeforces.com/contest/1294/problem/A
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {
    int casos = 0;
    int a = 0,b = 0,c = 0, n = 0,maxV = 0, aux = 0;
    cin >> casos;
    for(int i = 0; i < casos ; i++){
        cin >> a >> b >> c >> n;
        //Cual es el mas grande de todos ?
        maxV = max(a,b);
        maxV = max(maxV,c);
        //Realizamos la resta con el valor max y se va sumando 
        aux = (maxV-a)+(maxV-b)+(maxV-c);
        if(aux > n){
            cout << "NO"<< endl;
        }else if((n - aux) == 0){
            cout << "YES" << endl;
        }else if((n-aux) % 3 == 0){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }

    }
}