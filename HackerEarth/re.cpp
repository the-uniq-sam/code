#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,q;

	cin >> n >> q;

	vector<int> v(n);

	for(int i = 0; i<n; i++) {

		cin >> v[i];

	}

	for(int i = 0; i<q; i++) {

	int a,b;

	cin >> a >> b;

	vector<int>u,w;

	u = v;

	swap(u[a-1],u[b-1]);

	int sum = 0;

	for(int j = 0; j<u.size(); j++) {

		int c = 0;

		for(int k = j; k<u.size(); k++) {

			c += u[k];

			if(c>sum) {

				sum = c;

			}


		}


	}

	cout << sum << endl;

	}

	

	return 0;

}

