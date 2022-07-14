#include <iostream>

using namespace std;

class movie {
public:
	string name;
	string MPAA;
	int terrible_count;
	int bad_count;
	int ok_count;
	int good_count;
	int great_count;

	movie(string Name, string MP) {
		name = Name;
		MPAA =MP;
		terrible_count = 0;
		bad_count = 0;
		ok_count = 0;
		good_count = 0;
		great_count=0;
	}
	movie() {
		terrible_count = 0;
		bad_count = 0;
		ok_count = 0;
		good_count = 0;
		great_count = 0;
	}
	void addrating(int a) {
		switch (a) {
		case 1:
			terrible_count++;
		case 2:
			bad_count++;
		case 3:
			ok_count++;
		case 4:
			good_count++;
	
		case 5:
			great_count++;

		}
	}

	void setname(int Name) {
		name = Name;
	}	
	void setmpaa(int MP) {
		MPAA=MP;
	}
	string getname() {
		return name;

	}
	string getmpaa() {
		return MPAA;
	}
	double getaverage() {
		return(terrible_count +
			bad_count +
			ok_count +
			good_count +
			great_count) / 5.0;
	}



};
int main() {
	movie movie1("Race", "PG");
	 movie1.addrating(1);
	 movie1.addrating(2);
	 movie1.addrating(2);
	 movie1.addrating(3);
	 movie1.addrating(3);
	 cout<<movie1.getname()<<endl;
	 cout << movie1.getmpaa() << endl;
	 cout << movie1.getaverage()<<endl;

	 movie movie2("Run", "G");
	 movie2.addrating(1);
	 movie2.addrating(3);
	 movie2.addrating(3);
	 movie2.addrating(5);
	 movie2.addrating(5);
	 cout << movie2.getname() << endl;
	 cout << movie2.getmpaa() << endl;
	 cout << movie2.getaverage()<<endl;

	return 0;
}