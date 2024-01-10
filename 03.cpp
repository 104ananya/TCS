
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int count = 0;
    int maxEl = INT_MIN;

    while(n--){
        int curr;
        cin >> curr;
        if (curr > maxEl) {
            maxEl = curr;
            count++;
        }
    }

    cout<<count<<endl;

    return 0;
}