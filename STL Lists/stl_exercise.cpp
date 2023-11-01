#include <iostream>
#include <string>
#include <list>
#include <fstream>
#include <algorithm> //for .sort() function

using namespace std;





struct currStudent{
    string firstName;
    string lastName;

    currStudent() {}; //constructor
    currStudent(const string& first, const string& last) : firstName(first), lastName(last) {};

};

ostream &operator<<(ostream &os, const currStudent &student) {
        cout<<student.firstName<<" "<<student.lastName<<endl;
        return os;
    }

bool operator<(const currStudent& student1, const currStudent& student2) {
        return student1.lastName < student2.lastName;
   }




int main() {
    //create list to store data
    list<currStudent> students;

    ifstream input("input.txt"); //open the input file
    

    if (!input) {
        cout <<"File does not exist.";
    } else {
           string first,last;

           while (input >> first >> last) {
            currStudent student(first, last);
            students.push_back(student);
           }

           cout << "Unsorted list of students:"<<endl;
           for (const currStudent& student : students) {
            cout<<student<<endl;
           }

           students.sort();

           cout << "Sorted list of students:"<<endl;
           for (const currStudent& student : students) {
            cout<<student<<endl;
           }
    }
}