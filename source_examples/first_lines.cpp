#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> msg {
        "Hello, World!",
        "Welcome to C++ programming.",
        "This is a simple program.",
        "Enjoy coding!",
        "Oh dam, i'm learning C++!",
    };
    for (const string& word : msg)
    {
        cout << word << endl;
    }
    cout << "This is a simple program." << endl;
}
