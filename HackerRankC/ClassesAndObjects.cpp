#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

// Write your Student class here
class Student{
private:
    int a=0,b=0,c=0,d=0,e=0;
public:
    void input();
    int calculateTotalScore();
};

void Student::input(){
    cin >>a>>b>>c>>d>>e;
}

int Student::calculateTotalScore(){
    int sum =0;
    sum = a+b+c+d+e;
    return sum;
}
int main() {
