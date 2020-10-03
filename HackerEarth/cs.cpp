#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s;
	cin >> s;

	int sum = 0;

	for(int i = 0; i<s.size(); i++) {

		char ch = s[i];

		sum = sum + (int)ch - 96;

	}

	cout << sum << endl;

	return 0;

}


