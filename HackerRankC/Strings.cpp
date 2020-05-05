#include <iostream>
#include <string>
using namespace std;

int main() {
	// Read strings
    string firstString, secondString;
    cin >> firstString >> secondString ;

    cout << firstString.length()<< " " << secondString.length() << endl;
    cout << firstString + secondString << endl;

    char flipfirst, flipsec;
    flipfirst = firstString[0];
    flipsec = secondString[0];  

    firstString[0] = flipsec;
    secondString[0] = flipfirst;

    cout << firstString << " " << secondString << endl;
    return 0;
}


