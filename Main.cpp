#include <iostream>
#include <sstream>
using namespace std;

int main(){
    stringstream ss;
    ss << "Hello";
    ss << " ";
    ss << "World";
    
    string result = ss.str();

    cout << result << endl; // Output: "Hello World"

    return 0;
}