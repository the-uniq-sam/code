#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s;

	cin >> s;

	int k = s.size();

	int sum = 0;

	for(int i = 0; i<(k/2); i++) {

		if(s[i]!=s[k-1-i]){

			sum++;

		}

	}

	if(sum == 0) {

		cout << "YES" << endl;

	}

	else
	{
		cout << "NO" << endl;

	}


	return 0;

}

	
