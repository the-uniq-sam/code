#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t>0) {

		t--;

		int sum = 0;

		map<char,int>mp,np;
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

			if(m>n) {

				sum+= m-n;

			}

			else
			{
				sum+= n-m;

			}

		}

		for(it = np.begin(); it!=np.end(); it++) {

			char ch = (*it).first;

			int m = (*it).second;

			int n = mp[ch];

			if(n==0) {

				sum+= m;

			}

		}

		cout << sum << endl;

	}


	return  0;

}


