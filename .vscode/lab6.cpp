#include <iostream>
using namespace std;

int main() {
	const int rows = 4;
	int columns[rows] = { 5,6,4,3 };
	int** arr = new int* [rows];
	arr[0] = new int[5];
	arr[1] = new int[6];
	arr[2] = new int[4];
	arr[3] = new int[3];

	int s, l, u;

	cout << "ENTER THE STATION NUMBER";
	cin >> s;
	cout << "ENTER THE LAB NUMBER";
	cin >> l;
	cout << "ENTER USER ID";
	cin >> u;

	arr[l - 1][s - 1] = u;

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns[i]; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}



	return 2;
}