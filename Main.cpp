#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Hello, World!";
    string prefix = "Hello";
    string suffix = "World!";

    bool hasPrefix = str.compare(0, prefix.length(), prefix) == 0;
    bool hasSuffix = str.compare(str.length() - suffix.length(), suffix.length(), suffix) == 0;

    if (hasPrefix) {
        cout << "String has the prefix." << endl;
    } else {
        cout << "String does not have the prefix." << endl;
    }

    if (hasSuffix) {
        cout << "String has the suffix." << endl;
    } else {
        cout << "String does not have the suffix." << endl;
    }

    return 0;
}
