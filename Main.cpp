#include <iostream>
#include <string>
using namespace std;

int main() {
    int number = 42;
    string str = "The answer is: " + to_string(number);

    cout << str << endl;  // Output: "The answer is: 42"

    return 0;
}
