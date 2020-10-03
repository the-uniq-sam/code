#include <iostream>

using namespace std;

int main()
{
	int l,n;

	cin >> l >> n;

	for(int i = 0; i<n; i++) {

		int w,h;

		cin >> w >> h;

		if(w<l || h<l) {

			cout << "UPLOAD ANOTHER" << endl;

		}

		if(w>=l && h>=l) {

			if(w==h) {

				cout << "ACCEPTED" << endl;

			}

			if(w!=h)
			{
				cout << "CROP IT" << endl;

			}

		}

	}

	return 0;

}


