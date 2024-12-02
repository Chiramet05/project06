#include<iostream>
using namespace std;

int main(){
    int i = 0;
    int integer[100];
    int x = -1;

    while (x != 0) {
        cout << "Enter an integer: ";
        cin >> x;
        if (x != 0){integer[i] = x;
        i++;}
    }
    int Even = 0,odd = 0;
    for (int limit = 0; limit < i; limit++) {
        if(integer[limit] % 2 == 0){
            Even++;
        }
        else {
            odd++;
        }
    }
    cout << "#Even numbers = " << Even << "\n";
    cout << "#Odd numbers = " << odd;
    return 0;
}
