#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long int n,q;

	cin >> n >> q;

	vector<long long int> v(n);

	long long int sum = 0;

	for(long long int i = 0; i<n; i++) {

		cin >> v[i];
		sum += v[i];
		v[i] = sum;

	}

	long long int l,r;

	for(long long int i = 0; i<q; i++) {

		cin >> l >> r;

		sum = v[r-1];

		if(l!=1) {

			sum -= v[l-2];

		}

		l = l-1;

		r = r-l;

		cout << sum/r << endl;

	}

	return 0;

}
