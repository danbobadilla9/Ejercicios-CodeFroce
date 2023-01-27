//https://codeforces.com/contest/59/problem/A
#include <bits/stdc++.h>
 
using namespace std;
 
 
int main() {
    
    string data;
    int contador = 0;
    cin >> data;
    for(int i = 0; i < data.size(); i++){
        if(isupper(data[i]))
            contador ++;
    }
    if(contador > (data.size()-contador)){
        transform(data.begin(), data.end(), data.begin(), ::toupper);
        cout<< data << endl;
    }else{
        transform(data.begin(), data.end(), data.begin(), ::tolower);
        cout<< data << endl;
    }
}
