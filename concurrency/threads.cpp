#include <iostream>
#include <vector>
#include <thread>
using namespace std;

void someFunc(int x) {
    cout << "THREAD: " << x << endl;
}

int main() {
    vector<thread> ths;

    for (int i=1; i<=20; i++) {
        ths.push_back(thread(&someFunc, i));
    }

    for (auto& th : ths) {
        th.join();
    }

    cout << "Threads done executing" << endl;

    return 0;
}