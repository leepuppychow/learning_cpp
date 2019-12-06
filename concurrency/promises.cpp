#include <iostream>
#include <vector>
#include <future>
#include <chrono>
using namespace std;

int accumulator = 0;

int square(int x) {
    cout << "SQUARING: " << x << endl;
    return x * x;
}

int main() {
    vector<future<int>> promises;

    for (int i=0; i<=20; i++) {
        promises.push_back(async(&square, i));
    }

    for (auto& promise: promises) {
        accumulator += promise.get();
    }

    cout << "Final Sum: " << accumulator << endl;

    return 0;
}