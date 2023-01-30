#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int cantidad;
    cin>> cantidad;
    for(int i = cantidad; i > 0 ; i--){
        
        for(int j = 0; j < i; j++){
            cout <<"*";
        }
        cout<< endl;
    }
    return 0;
}
/*

*****
****
***
**
*

*/
