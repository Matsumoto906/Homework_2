#include <iostream>
using namespace std;

int f(int x){
    if (x == 0 || x == 1)
        return x+1;
    if (x > 1){
        return f(x-1) + f(x/2);
    }
}

int main(){
    int n;
    cin >> n;
    cout << f(n) << endl;
    return 0;
}