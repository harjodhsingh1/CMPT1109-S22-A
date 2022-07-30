#include <iostream>

using namespace std;

class poly {
	int* arr;
	int a,b,c;

public:
	poly(int A,int B,int C) {
		a = A;
		b = B;
		c = C;

		arr = new int[2];
		for (int i = 0; i <= 2; i++) {
			if (i==0)
				arr[i] = A;
			if (i == 1)
				arr[i] = B;
			if (i == 2)
				arr[i] = C;
		}
	}
	void getnum() {
		for (int i = 2; i >=0; i--) {
			if (i == 0) {
				cout << arr[i] << endl;
			}
			else

				cout<< arr[i]<<"(x^"<<i<<")+";
		}
	}
};
int main() {

	poly poly1(2,3,4);
	poly1.getnum();


	return 0;
}