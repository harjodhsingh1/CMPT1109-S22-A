#include <iostream>
#include <fstream>

using namespace std;

int main() {
	ifstream inStream;
	
	while (true) {
		inStream.open("ans.txt");
		cout << "Enter your next quetion";
		string q;
		cin >> q;
		char ans[100];


		int i = 0;
		bool ignore = false;
		inStream.get(ans[i++]);

		while (!inStream.eof()) {
			if (ans[i-1] =='\n') {
				cout << ans << endl;
				i = 0;
			}
			else if (ans[i - 1] == '#')
			{
				int x = 16; 
				if (x >= 10)
				{
					ans[i - 1] = '1';
					ans[i++] = (x - 10) + '0'; 
				}
				else
				{
					ans[i - 1] = x + '0';
				}
				ignore = true;
			}
			else if (ignore && ans[i - 1] == 'N')
			{
				i--;
				inStream.get(ans[i++]);
				continue;
			}
				inStream.get(ans[i++]);
		}
	}
	return 0;
}