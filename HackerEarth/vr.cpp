#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--) {

		string s;

		cin >> s;

		int b = 0;
		int c = s.size();

		for(int i = 0; i<s.size(); i++) {

			if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U') {

				c = c-i;
				b += (i+1)*c;
				c = s.size();

			}

		}

		cout << b << endl;

	}

	return 0;

}
