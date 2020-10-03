#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s;

	cin >> s;

	int k,t;

	cin >> k;

	for(int i = 0; i<s.size(); i++) {

		if(s[i]>47 && s[i]<58){
			t = k%10;
			s[i] = s[i]+t;

			if(s[i]>57) {
				s[i]= s[i]-10;
			}
		}

		if(s[i]>64 && s[i]<91) {
			t = k%26;
			s[i] += t;

			if(s[i]>90) {
				s[i]= s[i]-26;
			}
		}

		if(s[i]>96 && s[i]<123) {
			t = k%26;
			s[i] = s[i]-26;
			s[i] += t;

			if(s[i]<97) {
				s[i] = s[i]+26;
			}
		}
			cout << s[i];


	}

	cout << endl;

	return 0;

}

