#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t>0) {
		t--;

		int n;
		cin >> n;

		int a,b;

		a = n%12;
		b = n/12;

		if(a >= 0) {

			int k;

			if(n == 1 || a == 1) {

				k = 12*b + 12;

				cout << k << " " << "WS" << endl;

			}

                        if(n == 2 || a == 2) {

                                k = 12*b + 11;

                                cout << k << " " << "MS" << endl;

                        }

                        if(n == 3 || a == 3) {

                                k = 12*b + 10;

                                cout << k << " " << "AS" << endl;

                        }

                        if(n == 4 || a == 4) {

                                k = 12*b + 9;

                                cout << k << " " << "AS" << endl;

                        }

                        if(n == 5 || a == 5) {

                                k = 12*b + 8;

                                cout << k << " " << "MS" << endl;

                        }

                        if(n == 6 || a == 6) {

                                k = 12*b + 7;

                                cout << k << " " << "WS" << endl;

                        }

                        if(n == 7 || a == 7) {

                                k = 12*b + 6;

                                cout << k << " " << "WS" << endl;

                        }

                        if(n == 8 || a == 8) {

                                k = 12*b + 5;

                                cout << k << " " << "MS" << endl;

                        }

                        if(n == 9 || a == 9) {

                                k = 12*b + 4;

                                cout << k << " " << "AS" << endl;

                        }

                        if(n == 10 || a == 10) {

                                k = 12*b + 3;

                                cout << k << " " << "AS" << endl;

                        }

                        if(n == 11 || a == 11) {

                                k = 12*b + 2;

                                cout << k << " " << "MS" << endl;

                        }

                        if(n == 12 || a == 0) {

                                k = 12*(b-1) + 1;

                                cout << k << " " << "WS" << endl;

                        }
			
		}

	}


	return 0;

}


