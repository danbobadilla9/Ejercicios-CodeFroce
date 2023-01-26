//https://codeforces.com/contest/271/problem/A
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;


bool numeros(string numbers){
    bool bandera = false;
    for(int i = 0; i < numbers.size(); i++){
        if(count(numbers.begin(), numbers.end(), numbers[i]) > 1){
            bandera = true;
        }
    }
    return bandera;
}

int main() {
    
    string data;
    cin >> data;
    int numero = (stoi(data))+1;
    
    while(numeros(to_string(numero))){
        numero++;
    }
    cout << numero<<endl;
    
}
