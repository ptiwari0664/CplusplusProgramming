#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student{
private:
    int age;
    string firstName;
    string lastName;
    int standard;

public:
    void set_age(int in_age);
    void set_standard(int in_stan);
    void set_first_name(string in_fn); 
    void set_last_name(string in_ln);

    int get_age();
    int get_standard();
    string get_first_name();
    string get_last_name();

    string to_string();
};

void Student::set_age(int in_age){age = in_age;}
int Student::get_age(){return age;}

void Student::set_standard(int in_stan){standard = in_stan;}
int Student::get_standard(){return standard;}

void Student::set_first_name(string in_fn){ firstName = in_fn;}
string Student::get_first_name(){return firstName;}

void Student::set_last_name(string in_ln){ lastName = in_ln;}
string Student::get_last_name(){return lastName;}

string Student::to_string(){
    stringstream ss;  
    string s, com=",";

    ss<<age << com 
      <<firstName << com
      << lastName << com << standard;
    ss>>s;

    return s;
}

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}


