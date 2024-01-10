
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;

    int matrix[r][c];
    int maxPark = INT_MIN;
    int ans = 0;

    for (int i = 0; i < r; i++)
    {
        int count = 0;

        for (int j = 0; j < c; j++)
        {
            cin >> matrix[i][j];

            if (matrix[i][j] == 1)
            {
                count++;
            }
        }

        if (count > maxPark)
        {   
            maxPark = count;
            ans = i + 1;
        }
    }

    cout << ans << endl;
    return 0;
}