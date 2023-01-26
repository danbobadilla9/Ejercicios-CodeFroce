//https://codeforces.com/contest/32/problem/B
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;


int main() {
    
    string data;
    cin >> data;
    
    for(int i = 0; i < data.size();i++){
        if(data[i] == '.'){
            cout << 0;
        }
        if(data[i] == '-' && data[i+1] == '.'){
            cout << 1;
            i++;
        }
        if(data[i] == '-' && data[i+1] == '-'){
            cout << 2;
            i++;
        }
    }
    
    
}
