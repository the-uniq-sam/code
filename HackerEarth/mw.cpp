#include <bits/stdc++.h>

using namespace std;

int main()
{

	vector<int> v;

	for(int i = 66; i<=127; i++) {

		int z = 0;
		for(int j = 2; j<i; j++) {

			if((i%j) == 0) {

				z++;
			}

		}

		if(z==0) {
			v.push_back(i);

		}

	}

	int t;
	cin >> t;

	while(t>0) {

		t--;

		int n;
		cin >> n;

		string s;

		cin >> s;

		for(int i = 0; i<s.size(); i++) {

			int dis = 15;
			int d = 0;
			int e = 0;

			for(int j = 0; j<v.size(); j++) {

				d = s[i];
				d = d-v[j];

				if(d<0) {
					d = d*(-1);

				}

				if(d<dis) {
					dis = d;
					e = j;
				}

			}

			s[i] = v[e];

		}

		cout << s << endl;

	}

	return 0;

}
