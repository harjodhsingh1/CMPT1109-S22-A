#include <iostream>

using namespace std;

class movie {
public:
	string name;
	string MPAA;
	int* arr;

	movie(string Name, string MP) {
		name = Name;
		MPAA = MP;
		arr = new int[5]; 
		for (int i = 0; i < 5; i++)
		{
			arr[i] = 0;
		}
	}
	movie() {
		arr = new int[5];
		for (int i = 0; i < 5; i++)
		{
			arr[i] = 0;
		}
	}
	void addrating(int a) {
		switch (a) {
		case 1:
			arr[a-1]++;
		case 2:
			arr[a - 1]++;
		case 3:
			arr[a - 1]++;
		case 4:
			arr[a - 1]++;

		case 5:
			arr[a - 1]++;
	
		}
	}

	void setname(int Name) {
		name = Name;
	}
	void setmpaa(int MP) {
		MPAA = MP;
	}
	string getname() {
		return name;

	}
	string getmpaa() {
		return MPAA;
	}
	double getaverage() {
		int sum = 0;
		int sum2 = 0;
		for (int i = 0; i < 5; i++) {
			sum += arr[i] * (i + 1);
			sum2 += arr[i];
		}
		return sum / (sum2 * 1.0);
	}
	movie(movie& y) {
		
		this->arr = new int[5];
		for (int i = 0; i < 5; i++) {
			this->arr[i] = y.arr[i];
		}
	}
	
	void operator=(movie x) { 
		for (int i = 0; i < 5; i++) {
			this->arr[i] = x.arr[i];
		}
	}
		~movie() {
			delete[]arr;
		}

};
int main() {
	movie movie1("Race", "PG");
	movie1.addrating(1);
	cout << movie1.getname() << endl;
	cout << movie1.getmpaa() << endl;
	cout << movie1.getaverage() << endl;

	movie movie2("Run", "G");
	 movie1.addrating(1);               
	movie1.addrating(1);                
	movie1.addrating(3);                 
	movie1.addrating(3);                 
	movie1.addrating(5);
	cout << movie2.getname() << endl;
	cout << movie2.getmpaa() << endl;
	cout << movie2.getaverage() << endl;

	return 0;
}