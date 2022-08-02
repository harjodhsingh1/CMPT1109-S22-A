#include <iostream>

using namespace std;

class poly {
public:
	int* arr;
	int* arr1;
	int a, b, c,d;

public:
	poly() {
		arr = new int[3];
		arr1 = new int[3];
		for (int i = 0; i < 5; i++)
		{
			arr[i] = 0;
			arr1[i] = 0;
		}
		d = 0;
	}
	poly(int A, int B, int C) {
		a = A;
		b = B;
		c = C;

		arr = new int[2];
		for (int i = 0; i <= 2; i++) {
			if (i == 0)
				arr[i] = A;
			if (i == 1)
				arr[i] = B;
			if (i == 2)
				arr[i] = C;
		}
	}
	poly(int num) {
		d = num;
		arr = new int[2];
		for (int i = 0; i <= 2; i++) {
			if (i == 0)
				arr[i] = num;
			else
				arr[i] = 0;
		}
	}
	void getnum() {
		for (int i = 2; i >= 0; i--) {
			if (i == 0) {
				cout << arr[i] << endl;
			}
			else

				cout << arr[i] << "(x^" << i << ")+";
		}
	}

	void operator+(poly x) {
		arr1 = new int[2];
		for (int j = 0; j <= 2; j++) {
			for (int k = 0; k <= 2; k++) {
				if (j == k)
				{
					if (arr[j] == 0) {
						arr1[j] = x.arr[k];
					}
					else if(x.arr[k] == 0) {
						arr1[j] = arr[j];
					}else

						arr1[j] = arr[j] + x.arr[k];
				}

			}
		}
		cout << "Result of addition\n";
		for (int i = 2; i >= 0; i--) {
			if (i == 0) {
				cout << arr1[i] << endl;
			}
			else

				cout << arr1[i] << "(x^" << i << ")+";
		}
	}
	void operator-(poly x) {
		arr1 = new int[2];
		for (int j = 0; j <= 2; j++) {
			for (int k = 0; k <= 2; k++) {
				if (j == k)
				{
					if (arr[j] == 0) {
						arr1[j] = x.arr[k];
					}
					else if (x.arr[k] == 0) {
						arr1[j] = arr[j];
					}
					else

						arr1[j] = arr[j] - x.arr[k];
				}
			}
		}
		cout << "Result of subtraction\n";
		for (int i = 2; i >= 0; i--) {
			if (i == 0) {
				cout << arr1[i] << endl;
			}
			else

				cout << arr1[i] << "(x^" << i << ")+";
		}
	}
	void operator*(poly x) {
		arr1 = new int[2];
		for (int j = 0; j <= 2; j++) {
			for (int k = 0; k <= 2; k++) {
				if (j == k)
				{
					if (arr[j] == 0) {
						arr1[j] = x.arr[k];
					}
					else if (x.arr[k] == 0) {
						arr1[j] = arr[j];
					}
					else
						arr1[j] = arr[j] * x.arr[k];
				}
			}
		}
		cout << "Result of multiplication\n";
		for (int i = 2; i >= 0; i--) {
			if (i == 0) {
				cout << arr1[i] << endl;
			}
			else

				cout << arr1[i] << "(x^" << i << ")+";
		}
	}

};
int main() {

	poly poly1(2,3,4);
	poly1.getnum();
	poly poly2(5,1, 4);
	poly2.getnum();
	poly num(3);
	poly1 + poly2;
	poly1 - poly2;
	poly1* poly2;
	poly1 + num;
	num + poly1;
	poly1- num;
	num -poly1;
	poly1* num;
	num *poly1;
	return 0;
}