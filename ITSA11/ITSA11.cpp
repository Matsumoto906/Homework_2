#include <iostream>
using namespace std;

int main(){

    int num[50][50],i,j,x,y,n;

    cin >> x >> y;

    for (i=0;i<x;i++){
        for (j=0;j<y;j++){
            cin >> num[i][j];
        }
    }

    for (i=0;i<y;i++){
        for (j=0;j<x;j++){
            cout << num[j][i];
            if (j == x-1)
                cout << endl;
            else
                cout << ' ';
        }
    }
    
    return 0;
}