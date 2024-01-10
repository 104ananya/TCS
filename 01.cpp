#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    // program code goes here
    int v, w;
    cin >> v >> w;

    if((w < 2 )|| (w % 2 != 0 )|| (w <= v)){
        cout << "INVALID INPUT" << endl;
        return 0;
    }

    int x, y; // x = TW y = FW

    x = (4*v - w)/2;
    y = v - x;

    cout << "TW=" << x << " " << "FW=" << y;

    
}