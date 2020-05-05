#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    add code for struct here.
*/
struct Student{
int age;
string firstName;
string secondName;
int standard;
};

int main() {
    Student st;
    
    cin >> st.age >> st.firstName >> st.secondName >> st.standard;
    cout << st.age << " " << st.firstName << " " << st.secondName << " " << st.standard;
    
    return 0;
}


