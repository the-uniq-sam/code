#include <iostream>
#include <map>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--) {

		int n;
		cin >> n;

		string s,t;

		cin >> s >> t;

		int sum = 0;

		map<char,int> mp;

		for(int i = 0; i<n; i++) {
		
			if(s[i]!=t[i]) {
				mp[s[i]++];
				mp[t[i]++];
			}

		}

		if(mp.size()>2) {
			cout << "NO" << endl;
			continue;
		}

		for(auto it = mp.begin(); it!= mp.end(); it++) {

			if((*it).second%2!=0) {

				sum++;
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

	return 0;

}

