#include <iostream>
#include <vector>
using namespace std;

class PackLeader {
	public:
		string name;
		int rank;
};

class Dog {
	public:
		string name;
		int age;
		vector<PackLeader> pack_leaders;

	int howManyPackLeaders() {
		return pack_leaders.size();
	}
};


int main() {
	PackLeader lee, heather;
	lee.name = "Lee";
	lee.rank = 1;
	heather.name = "Heather";
	heather.rank = 1;
	
	Dog boolean;
	boolean.name = "Boolean";
	boolean.age = 10;
	boolean.pack_leaders = vector<PackLeader>{lee, heather};

	cout << boolean.pack_leaders[0].name << endl;
	cout << boolean.pack_leaders[1].name << endl;
	cout << boolean.howManyPackLeaders() << endl;

	return 0;
}


