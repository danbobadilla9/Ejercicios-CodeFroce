#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int cantidad;
    cin>> cantidad;
    cantidad*=2;
    char asteriscos[cantidad+1];
    for(int i = 1; i <= cantidad; i++){
        asteriscos[i] = '\0';
    }
    
    for(int i = 1; i <= (cantidad/2); i++){
        if( i != cantidad){
            asteriscos[i] = '*';
            asteriscos[cantidad-(i-1)] = '*';
        }else{
            asteriscos[i] = '*';
        }
        for(int j = 1; j <= cantidad; j++){
            cout << asteriscos[j];
        }
        cout << endl;
        
    }
    return 0;
}




/*

*            *
**          **
***        ***
****      ****
*****    *****
******  ******
**************

*/
