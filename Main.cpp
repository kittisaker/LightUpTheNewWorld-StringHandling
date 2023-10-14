#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

int main() {
    string str = "apple,banana,cherry";
    vector<string> tokens;
    istringstream ss(str);
    string token;

    while (getline(ss, token, ',')) {
        tokens.push_back(token);
    }

    for (const string& t : tokens) {
        cout << t << endl;
    }

    return 0;
}
