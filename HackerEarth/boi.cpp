#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    map<int, int> mp;
    map<int, int>::iterator it;
        
    string s;
    
    cin >> s;
    
    for(int i = 0; i<s.size(); i++) {

        mp[s[i]]++;
    }

    for(int i = 0; i<10; i++) {

        cout << i << " " << mp[i] << endl;
        
    }
    
    return 0;
    
}
