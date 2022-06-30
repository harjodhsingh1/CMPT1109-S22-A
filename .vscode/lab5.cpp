#include <iostream>
#include <fstream>

using namespace std;
int main() {
	ifstream inStream;
	inStream.open("ans.txt");
	string ans;
	while (true) {
		cout << "Enter your next quetion";
		string q;
		cin >> q;
		if (inStream >> ans) {
			cout << ans << endl;
		}
		else{
			inStream.close();
			inStream.open("ans.txt");
			inStream >> ans;
			cout << ans << endl;
		}

	}
	return 0;
}