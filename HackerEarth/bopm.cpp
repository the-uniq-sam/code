#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s;

	cin >> s;

	int sum = 0;

	int a;
	int b = 0;

	if(s.size()!=10) {

		sum++;

	}

	for(int i = 1; i<11; i++) {

		char ch = s[i-1];

		a = ch;
		a = a-48;

		b = b+(a*i);

	}

	if(b%11!=0) {

		sum++;

	}

	if(sum==0) {
		cout << "Legal ISBN" << endl;

	}

	else
	{
		cout << "Illegal ISBN" << endl;
	}

	return 0;

}

