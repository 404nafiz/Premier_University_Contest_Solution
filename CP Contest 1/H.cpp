#include<bits/stdc++.h>
using namespace std;


int main() {

 char a;
    cin >> a;
    
    if (a >= 'a' && a <= 'z')

        cout << char(a - 32) << endl;
    else

        cout << char(a + 32) << endl;



}