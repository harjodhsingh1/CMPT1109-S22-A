#include <iostream>
using namespace std;
void  product_type1() {
	cout << "Enter first 7 digits of product code:";
	int p_code[7];
	for (int i = 0; i < 7; i++) {
		cin >> p_code[i];
	}
	cout << endl;
	int s1 = 0, s2 = 0, s3 = 0;
	for (int k = 0; k < 7; k = k + 2) {
		s1 = s1 + p_code[k];
	}
	for (int m = 1; m < 7; m = m + 2) {
		s2 = s2 + p_code[m];
	}
	s3 = (s1 * 3) + s2;
	do {
		s3 = s3 - 10;
	} while (s3 > 10);
	s3 = 10 - s3;
	if (s3 == 10)
	{
		s3 == 0;
	}
	cout << "The check digit is:" << s3 << endl;
	cout << "The product code is  ";
	for (int j = 0; j < 7; j++) {
		cout << p_code[j];
	}cout << s3;
}
void  product_type2() {
	cout << "Enter first 11 digits of product code:";
	int p_code[11];
	for (int i = 0; i < 11; i++) {
		cin >> p_code[i];
	}
	cout << endl;
	int s1 = 0, s2 = 0, s3 = 0;
	for (int k = 0; k < 11; k = k + 2) {
		s1 = s1 + p_code[k];
	}
	for (int m = 1; m < 11; m = m + 2) {
		s2 = s2 + p_code[m];
	}
	s3 = (s1 * 3) + s2;
	do {
		s3 = s3 - 10;
	} while (s3 > 10);
	s3 = 10 - s3;
	if (s3 == 10)
	{
		s3 == 0;
	}
	cout << "The check digit is:" << s3 << endl;
	cout << "The product code is  ";
	for (int j = 0; j < 11; j++) {
		cout << p_code[j];
	}cout << s3;
}
void  product_type3() {
	cout << "Enter first 12 digits of product code:";
	int p_code[12];
	for (int i = 0; i < 12; i++) {
		cin >> p_code[i];
	}
	cout << endl;
	int s1 = 0, s2 = 0, s3 = 0;
	for (int k = 0; k < 12; k = k + 2) {
		s1 = s1 + p_code[k];
	}
	for (int m = 1; m < 12; m = m + 2) {
		s2 = s2 + p_code[m];
	}
	s3 = (s2 * 3) +s1;
	do {
		s3 = s3 - 10;
	} while (s3 > 10);
	s3 = 10 - s3;
	
	cout << "The check digit is:" << s3 << endl;
	cout << "The product code is  ";
	for (int j = 0; j < 12; j++) {
		cout << p_code[j];
	}cout << s3;
}
void  product_type4() {
	cout << "Enter first 13 digits of product code:";
	int p_code[13];
	for (int i = 0; i < 13; i++) {
		cin >> p_code[i];
	}
	cout << endl;
	int s1 = 0, s2 = 0, s3 = 0;
	for (int k = 0; k < 13; k = k + 2) {
		s1 = s1 + p_code[k];
	}
	for (int m = 1; m < 13; m = m + 2) {
		s2 = s2 + p_code[m];
	}
	s3 = (s1 * 3) + s2;
	do {
		s3 = s3 - 10;
	} while (s3 > 10);
	s3 = 10 - s3;
	if (s3 == 10)
	{
		s3 == 0;
	}
	cout << "The check digit is:" << s3 << endl;
	cout << "The product code is  ";
	for (int j = 0; j < 13; j++) {
		cout << p_code[j];
	}cout << s3;
}
void  product_type5() {
	cout << "Enter first 17 digits of product code:";
	int p_code[17];
	for (int i = 0; i < 17; i++) {
		cin >> p_code[i];
	}
	cout << endl;
	int s1 = 0, s2 = 0, s3 = 0;
	for (int k = 0; k < 17; k = k + 2) {
		s1 = s1 + p_code[k];
	}
	for (int m = 1; m < 17; m = m + 2) {
		s2 = s2 + p_code[m];
	}
	s3 = (s1 * 3) + s2;
	do {
		s3 = s3 - 10;
	} while (s3 > 10);
	s3 = 10 - s3;
	if (s3 == 10)
	{
		s3 == 0;
	}
	cout << "The check digit is:" << s3 << endl;
	cout << "The product code is  ";
	for (int j = 0; j < 17; j++) {
			cout << p_code[j];
		}cout << s3;
	
	}

int main() {
	cout << "CHECK DIGIT CALCULATOR\n ---------------\n";
	cout << "1.EAN-8\n";
	cout << "2.UPC-A\n";
	cout << "3.EAN-13\n";
	cout << "4.EAN-14\n";
	cout << "5.SSCC\n";
	cout << "-------------------\n ";
	int type, c;

	cout << "Choose your product type:";
	cin >> type; cout << endl;
	if (type == 1) {
		product_type1();
		cout << "\n-----------";
	}
	else if (type == 2) {
		product_type2();
		cout << "\n-----------";
	}
	else if (type == 3) {
		product_type3();
		cout << "\n-----------";
	}
	else if (type == 4) {
		product_type4();
		cout << "\n-----------";
	}
	else if (type == 5) {
		product_type5();
		cout << "\n-----------";
	}
	else
		cout << "Invaild menu choice";

}