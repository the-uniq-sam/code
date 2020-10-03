#include <iostream>
#include <string>

using namespace std;

int main()
{
	int sum = 0;
	string s;
	cin >> s;

	if(s[2]=='A' || s[2]=='E' || s[2]=='I' || s[2]=='O' || s[2]=='U' || s[2]=='Y') {
		sum++;
	}

	int a = s[0];
	int b = s[1];

	a = a+b;

	if((a%2)!=0) {
		sum++;
	}

        a = s[1];
        b = s[3];

        a = a+b;

        if((a%2)!=0) {
                sum++;
        }

        a = s[3];
        b = s[4];

        a = a+b;

        if((a%2)!=0) {
                sum++;
        }

        a = s[4];
        b = s[5];

        a = a+b;

        if((a%2)!=0) {
                sum++;
        }

        a = s[5];
        b = s[7];

        a = a+b;

        if((a%2)!=0) {
                sum++;
        }

        a = s[7];
        b = s[8];

        a = a+b;

        if((a%2)!=0) {
                sum++;
        }

	if(sum==0) {
		cout << "valid" << endl;
	}
	else
	{
		cout << "invalid" << endl;
	}

	return 0;

}


