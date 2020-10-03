#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--) {

		int a,b,c,d;

		cin >> a >> b >> c >> d;

		a = a*60;
		c = c*60;
		
		a = a+b;
		c = c+d;

		c = c-a;

		cout << c/60 << " " << c%60 << endl;

	}

	return 0;

}

