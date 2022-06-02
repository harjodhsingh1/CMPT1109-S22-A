#include <iostream>
using namespace std;


void triangle(int b, char c) {
	for (int i = 0; i < b; i++) {
		for (int j = b; j >= i; j--)
			cout << " ";
		for (int k = 1; k <= ((i + 1) * 2) - 1; k++)
			cout << c;
		cout << endl;
	}
}
void diamond(int b,char c) {
	for (int i = 0; i < b; i++) {
		for (int j = b; j >= i; j--)
			cout << " ";
		for (int k = 1; k <= ((i + 1) * 2) - 1; k++)
			cout << c;
		cout << endl;
	}
	int h = 2;
	for (int i = 0; i <= b - 1; i++) {
		for (int j = 0; j <= i + 3; j++)
			cout << " ";

		for (int k = ((h * 2) + 1); k > 0; k--)
			cout << c;
		h--;
		cout << endl;
	}
}
void upside_down(int b, char c) {
	int h = b;
	for (int i = 0; i < b; i++) {
		for (int j = 0; j <= i; j++)
			cout << " ";

		for (int k = (((h - 1) * 2) + 1); k > 0; k--)
			cout << c;
		h--;
		cout << endl;
	}
}
void sideway_triangle(int b, char c)
{
	for (int i = 0; i < b; i++) {
		for (int j = 0; j <= i; j++)
			cout << c;
		cout << endl;
	}
	for (int i = 0; i < b - 1; i++) {
		for (int j = b - 2; j >= i; j--)
			cout << c;

		cout << endl;
	}
}

int main()
{
	int a, b;
	char c;
	cout << "Choice which shape to draw\n";
	cout << "1.Triangle\n";
	cout << "2.diamond\n";
	cout << "3.Upside down triangle\n";
	cout << "4.Side-way trainglen\n";
	cout << "5.Quit\n";

	cin >> a;
 if (a == 5) {
	cout << "BYE! THANK U";
	}
	cout << "Which chracter to be used for drawing shape";
	cin >> c;
	cout << "Enter the size";
	cin >> b;

	if (a == 1) {

		triangle(b, c);
		return c;
	}
	else if (a == 2) {
		diamond(b, c);
		return c;

	}
	else if (a == 3)
	{
		upside_down(b, c);
		return c;
	}
	else if (a == 4)
	{
		sideway_triangle(b, c);
		return c;
	}
	
}


