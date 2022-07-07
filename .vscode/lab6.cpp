#include <iostream>
using namespace std;
const int rows = 4;
int columns[rows] = { 5,6,4,3 };
int** arr = new int* [rows];
void display();

int main() {

	arr[0] = new int[5];
	arr[1] = new int[6];
	arr[2] = new int[4];
	arr[3] = new int[3];

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns[i]; j++) {
			arr[i][j] = 0;
		}
	}


	int opt;
	int s, l, u;
	do {
		cout << "CHOOSE THE OPTION \n";
		cout << "1-LOGIN \n";
		cout << "2-LOGOFF \n";
		cout << "3-SEARCH \n";
		cout << "4-EXIT\n";
		cin >> opt;
		switch (opt)
		{
		case 1: {
			cout << "ENTER THE LAB NUMBER";
			cin >> l;
			cout << "ENTER THE STATION NUMBER";
			cin >> s;
			cout << "ENTER USER ID";
			cin >> u;

			arr[l - 1][s - 1] = u;
			display();
			break;
		}
		case 2: {
			int srch;
			cout << "ENTER THER USER ID";
			cin >> srch;
			for (int i = 0; i < rows; i++) {
				for (int j = 0; j < columns[i]; j++) {
					if (arr[i][j] == srch) {
						arr[i][j] = 0;
					}
					else
						continue;

				}
			}
			display();
			break;
		}
		case 3: {
			int srch;
			cout << "ENTER THER USER ID";
			cin >> srch;
			for (int i = 0; i < rows; i++) {
				for (int j = 0; j < columns[i]; j++) {
					if (arr[i][j] == srch) {
						cout << "LAB NUMBER AND STATION--\n";
						cout << i + 1 << " ";
						cout << j + 1 << endl;
					}
				}
			}
			break;
		}
		default:
			break;
		}

	} while (opt != 4);


	return 2;
}
	void display() {
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < columns[i]; j++) {
				if (arr[i][j] == 0) {
					cout << "empty ";
				}
				else
					cout << arr[i][j] << " ";
			}
			cout << endl;
		}

	}