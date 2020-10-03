#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n; 
	cin >> n;

	vector<long long int> C(n),D(n);

	long long int x = 0;

	for(int i = 0; i<n; i++) {

		cin >> D[i];

	}
	long long int y;
	int l = 0;
	y = D[0];
	for(int i = 0; i<n; i++) {
	    if(D[i]>0) {
	        l++;
	    }
	    if(y<D[i]) {
	        y = D[i];
	    }
	    
	}
	
	if(l==0) {
		cout << y << endl;
	    return 0;
	}
	
	for(int i = 0; i<n; i++) {
	    x += D[i];
	    C[i] = x;
	}

	long long int sum = 0;

	for(int i = 1; i<=n; i++) {

		long long int p = 0;
		long long int a = i-1;
		long long int b = 0;
		long long int c = 0;

		c = a+b;

		while(c<n) {

			b++;

			p += C[c];
			if(a!=0) {
				p -= C[a-1];
			}

			a += b;
			c = a+b;

		}

		if(p>sum) {
			sum = p;
		}


	}

	cout << sum << endl;

	return 0;

}

