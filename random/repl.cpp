#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
	string input;

	for (int i=1; i<argc; i++) {
		cout << "ARG: " << argv[i] << endl;
	}

	while (true) {
		cout << "Please enter command: ";
		cin >> input;
		if (input == "\\q") {
			return 0;
		}	
		cout << "You entered: " << input << endl;
	};
}
