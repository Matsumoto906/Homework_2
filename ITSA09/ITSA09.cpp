#include <iostream>
using namespace std;

int main(){

    int i,s,ans=0;
    cin >> s;
    for (i=1;i<=s;i++)
        if (i%3==0){
            ans += i;
        }
    
    cout << ans << endl;
    return 0;
}