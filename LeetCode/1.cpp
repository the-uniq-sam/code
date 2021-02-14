// https://leetcode.com/problems/single-number-ii/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;  cin >> n;
    vector<int>v(n,0);
    for(int i = 0; i<n; i++)
        cin >> v[i];
    
    int a = 0;
    int b = 0;
    for(int i = 0; i<n; i++)
    {
        a = (a^v[i])&(~b);        //curios part
        b = (b^v[i])&(~a);        //curios part
        cout << "a b = " << a << " " << b << endl;
    }
    cout << a << endl;
    return 0;
}
