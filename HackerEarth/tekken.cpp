#include <iostream>
#include <map>

using namespace std;

int main()
{
    int a;
    cin >> a;
    
    map<int, int> mp;
    map<int, int>::iterator it;
    
    for(int i = 2; i<a; i++) {
        
	if(a%i == 0) {
        
	int k = i;
	    
        
        
        int sum = 0 ;

        for(int j = 2; j<k; j++) {

                if(k%j == 0) {

                        sum++;
                }

                if(k == 2) {
                        sum = 0;
                }


        }

        if( sum == 0) {
                mp[k] = 0;
        }

	}

    }
    
    int r = 1;
    
    for(it = mp.begin(); it!= mp.end(); it++) {
        
        int d = (*it).first;

	cout << d << endl;

        r = r*d;
    }
    
    
    cout << r << endl;
    
    
    return 0;
    
}
