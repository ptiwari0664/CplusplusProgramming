#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    // Declare second integer, double, and String variables.
    int my_i = 0;
    double my_d = 0;
    string my_str ="";
    
     // getline is used as, cin just consider any input till space,
	//to  receive exact input use getline()
    // Read and save an integer, double, and String to your variables.
    getline(cin >> ws, my_str);
    my_i = stoi(my_str);
    my_str.clear();

    getline(cin >> ws, my_str);
    my_d = stod(my_str);
    my_str.clear();

    getline(cin >> ws, my_str);

    // Print the sum of both integer variables on a new line.
    std::cout << i + my_i << std::endl;

    // Print the sum of the double variables on a new line.

    // std::cout << "%.2lf" << d + my_d << std::endl;
    printf("%.1lf\n",d + my_d);

    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    std::cout << s.append(my_str) << std::endl;



    return 0;
