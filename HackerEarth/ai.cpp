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

		int sum = 0;

		int a,b,c;

		cin >> a >> b >> c;

		if(a==1) {

			v[b] = c;

		}

		if(a==2) {

			if(c<=v.size()) {

				for(int j = b; j<=c; j++) {

					sum += v[j];

				}

			}

			cout << sum << endl;

		}

	}

	return 0;

}

