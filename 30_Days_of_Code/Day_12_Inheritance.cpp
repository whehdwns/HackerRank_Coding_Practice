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
         Student (
            string firstName_,
            string lastName_,
            int identification_,
            vector<int> testScores_
        ) :
            Person(firstName_, lastName_, identification_),
            testScores(testScores_)
        {}
        /*  
        *   Function Name: calculate
        *   Return: A character denoting the grade.
        */
        // Write your function here
         char calculate (
            void
            ) {
            char letterGrade = '?';
            float average = 0.0;
            
            // Calculate average
            for (auto & score : testScores) {
                average += score;
            }
            
            average /= testScores.size();
            // Assign letter grade
            return ( average > 89 ? 'O' : 
                     average > 79 ? 'E' : 
                     average > 69 ? 'A' : 
                     average > 54 ? 'P' :
                     average > 39 ? 'D' : 'T' );
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