#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string str1 = "Hello";
    string str2 = "World";
    
    stringstream ss;
    ss << str1 << "-" << str2;
    
    string joined = ss.str();

    cout << joined << endl; // Output: "Hello-World"

    return 0;
}