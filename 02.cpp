#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    string s = " ";
    getline(cin, s);

    int n = s.length();
    int a = 0;
    int b = 0;

    for(int i = 0; i < n; i++){
        if(s[i] == '#'){
            a++;
        }
        else if(s[i] == '*'){
            b++;
        }
    }

    cout<<b-a<<endl;

    return 0;
}