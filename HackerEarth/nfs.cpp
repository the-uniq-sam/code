#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<vector<char> > v;

	for(int i = 0; i<n; i++) {

		string s;
		cin >> s;

		for(int j = 0; j<n; j++) {

			char ch;

			v[i].push_back(ch);

		}

	}

	for(int i = 0; i<n-1; i++) {

		for(int j = 0; j<n-1; j++) {

			if(v[i+1][j] == '.' && v[i][j+1] == '#') {

				cout << "D" ;
				j = n-2;
				j++;

			}


		        if(v[i+1][j] == '#' && v[i][j+1] == '.') {

				cout << "R";

			}

			if(v[i+1][j] == '#' && v[i][j+1] == '#') {

				if(v[i][j-1] == '#') {

					cout << "U";
					i--;
				}

				else
				{
					cout << "L";
				}

			}

		}

	}

	cout << endl;

	return 0;

}


