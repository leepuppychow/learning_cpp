#include <iostream>
#include <vector>
#include <map>
using namespace std;

void printVector(vector<int> input) {
    for (int value : input) {
        cout << value << endl;
    }
}

vector<int> _map(vector<int> input, int (*fn)(int)) {
    vector<int> result;
    for (int value : input) {
        result.push_back(fn(value));
    }
    return result;
};

vector<int> filter(vector<int> input, bool (*fn)(int)) {
    vector<int> result;
    for (int value : input) {
        if (fn(value)) {
            result.push_back(value);
        }
    }
    return result;
}

map<int, int> counts(vector<int> input) {
    map<int, int> result;

    for (int value : input) {
        if (!result.count(value)) {
            result[value] = 0;
        }
        result[value]++;
    }

    return result;
}

bool isEven(int num) {
    return num % 2 == 0;
}

int main() {
    vector<int> x{1,2,3,4,5};
    vector<int> y{1,1,3,3,5};
    vector<int> tripled, evens, odds;
    map<int, int> counter;

    evens = filter(x, &isEven); // Passing in pointer to function
    printVector(evens);

    odds = filter(x, [](int num) { return num % 2 != 0; }); // Using lambda function
    printVector(odds);

    tripled = _map(x, [](int num) { return num * 3; });
    printVector(tripled);

    counter = counts(y);
    for (auto entry : counter) {
        cout << entry.first << '\t' << entry.second << endl;
    }
    return 0;
}