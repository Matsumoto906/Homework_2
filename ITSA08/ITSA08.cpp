#include <iostream>
using namespace std;

int main(){

    int s,i,key=0;
    cin >> s;
    for (i=2;i<s;i++){
        if (s%i == 0){
            key=1;
            break;
        }
    }
    if (key==1)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
    return 0;
}