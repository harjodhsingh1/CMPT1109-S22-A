#include <iostream>
#include <fstream>
using namespace std;

class rat_num {
	int num;
	int den;
public:

	void read()
	{
		cout << "Enter Numerator for Rational Number" << endl;
		cin >> num;
		cout << "Enter Denominator for Rational Number" << endl;
		cin >> den;
	}
	void addition(rat_num a, rat_num b) {
		num = (a.num * b.den) + (a.den * b.num);
		den = a.den * b.den;

	}
	void subtraction(rat_num a, rat_num b) {
		num = a.num * b.den - a.den * b.num;
		den = a.den * b.den;
	}
	void multiplication(rat_num a, rat_num b) {
		num = a.num * b.num;
		den = a.den * b.den;
	}
	void division(rat_num a, rat_num b) {
		num = a.num * b.den;
		den = a.den * b.num;
	}
	void lessthan(rat_num a, rat_num b)
	{
		num = a.num * b.den;
		den = a.den * b.num;
		if (num < den)
			cout << "Rational Numbers less than opertion is true between two numbers " << endl;	
		else
			cout << "Rational Numbers less than opertion is false between two numbers " << endl;
	}
	void print()
	{
		cout << "Result is : " << num << "/" << den << endl;
	}
};
int main() {

	rat_num r1,r2,r3;
	r1.read(r1);
	r2.read();
	r3.addition(r1, r2);
	r3.print();
	r3.subtraction(r1, r2);
	r3.print();
	r3.multiplication(r1, r2);
	r3.print();
	r3.division(r1, r2);
	r3.print();	
	r3.lessthan(r1, r2);

	return 0;
}