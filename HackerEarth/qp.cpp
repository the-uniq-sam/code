#include <iostream>
#include <map>

using namespace std;

int main()
{

	int t;

	cin >> t;

	while(t>0) {

		t--;

		map<int, int> mp;
		map<int, int>::iterator it;

		int n,a,b;

		cin >> n >> a >> b;

		int sum = n*a;

		mp[sum] = 0;
		mp[0] = 0;
		
		for(int i = 0; i<n; i++) {

			sum = sum - a;

			mp[sum] = 0;

			sum = sum - b;

			mp[sum] = 0;

		}

		for(int i = 0; i<n; i++) {

			int x;

			x = a*i;

			mp[x] = 0;

		}

		cout << mp.size() << endl;

		for(it = mp.begin(); it!=mp.end(); it++) {

			cout << (*it).first << endl;
		}
	}


	return 0;

}


