#include <iostream>
#include <vector>

using namespace std;


class Person{
	protected:
		string firstName;
		string lastName;
		int id;
	public:
		Person(string firstName, string lastName, int identification){
			this->firstName = firstName;
			this->lastName = lastName;
			this->id = identification;
		}
		void printPerson(){
			cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n"; 
		}
	
};

class Student :  public Person{
	private:
		vector<int> testScores;  
	public:
        /*	
        *   Class Constructor
        *   
        *   Parameters:
        *   firstName - A string denoting the Person's first name.
        *   lastName - A string denoting the Person's last name.
        *   id - An integer denoting the Person's ID number.
        *   scores - An array of integers denoting the Person's test scores.
        */
        // Write your constructor here
        Student(string firstN, string lastN, int idS, vector<int> scores): Person(firstN,       lastN,idS)
       {
         this->testScores=scores;
       }
        /*	
        *   Function Name: calculate
        *   Return: A character denoting the grade.
        */
        // Write your function here
        char calculate(){
            char grade='b';
            int sum_ = 0, avg_ = 0;

            for(int i=0;i<testScores.size();i++){
                sum_ +=testScores.at(i);
            }
            avg_ = sum_/testScores.size();
            if(avg_ >= 90 && avg_ <= 100 )
                grade = 'O';
            else if(avg_ >= 80 && avg_ < 90)
                grade = 'E';
            else if(avg_ >= 70 && avg_ < 80)
                grade = 'A';
            else if(avg_ >= 55 && avg_ < 70)
                grade = 'P';
            else if(avg_ >= 40 && avg_ < 55)
                grade = 'D';
            else
                grade = 'T';

            return grade;
        }
};

int main() {
	string firstName;
  	string lastName;
	int id;
  	int numScores;
	cin >> firstName >> lastName >> id >> numScores;
  	vector<int> scores;
  	for(int i = 0; i < numScores; i++){
	  	int tmpScore;
	  	cin >> tmpScore;
		scores.push_back(tmpScore);
	}
	Student* s = new Student(firstName, lastName, id, scores);
	s->printPerson();
	cout << "Grade: " << s->calculate() << "\n";
	return 0;
}