
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int entry[n];
    int exit[n];
    for (int i = 0; i < n; i++)
    {
        cin >> entry[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> exit[i];
    }

    int guest = 0;
    int maxG = INT_MIN;

    for(int i = 0; i < n; i++){
        int diff = entry[i] - exit[i];
        guest += diff;

        maxG = max(maxG, guest);
    }

    cout << maxG << endl;
    return 0;
}