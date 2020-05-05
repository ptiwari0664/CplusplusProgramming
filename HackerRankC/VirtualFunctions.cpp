#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person{
protected:
    string name;
    int age;
public:
  virtual void getdata() = 0;
  virtual void putdata() = 0;
  virtual ~Person() {}

};

class Professor: public Person{
  int id;
  static int seq;
protected:
    int publications;
public:

    void getdata(){
        cin >> name;
        cin >> age;
        cin>> publications; 
    }

    void putdata(){
        cout << name << " " << age << " " << publications << " " << id << endl;
    }

  Professor() : id(++seq) {}
};

int Professor::seq = 0;

class Student : public Person{
  int id;
  static int seq;
protected:
    int marks[6];
    int cur_id;
    int sum=0;
public:
    void getdata(){
        cin >>  name;
        cin >> age;
        for(int i =0; i<6;i++)
            cin >> marks[i];
    }

    int marksSum(int marks[])
    {
        for(int i=0;i<6;i++)
            sum +=marks[i];
        return sum;
    }
    void putdata(){
        cout << name << " " << age << " " << marksSum(marks) << " " << id << endl;
    }

  Student() : id(++seq) {}
};
int Student::seq = 0;


int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}

