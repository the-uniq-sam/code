#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t>0) {

		t--;

		int sum = 0;

		map<char,int> mp,np;
		map<char,int>::iterator it;

		string a,b;

		cin >> a >> b;

		for(int i = 0; i<a.size(); i++) {

			mp[a[i]]++;

		}

		for(int i = 0; i<b.size(); i++) {

			np[b[i]]++;

		}

		for(it = mp.begin(); it!=mp.end(); it++) {

			char ch = (*it).first;

			int m = (*it).second;

			int n = np[ch];

			if(m!=n) {

				sum++;

			}

		}

		for(it = np.begin(); it!=np.end(); it++) {

			char ch = (*it).first;

			int m = (*it).second;

			int n = mp[ch];

			if(m!=n) {

				sum ++;

			}

		}

		if(sum==0) {

			cout << "YES" << endl;

		}

		else
		{
			cout << "NO" << endl;

		}

	}

	return  0;

}

