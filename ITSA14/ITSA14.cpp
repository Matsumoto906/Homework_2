#include <string>
#include <iostream>
using namespace std;

int main(){

    string s1;
    cin >> s1;
    if (s1 == string(s1.rbegin(),s1.rend()))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}