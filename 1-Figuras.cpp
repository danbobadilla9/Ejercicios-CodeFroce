#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int cantidad;
    cin>> cantidad;
    for(int i = 1; i <= cantidad; i++){
        for(int j = 0; j < i; j++){
            cout <<"*";
        }
        cout << endl;
    }
    return 0;
}




/*

*
**
***
****
*****
******

*/
