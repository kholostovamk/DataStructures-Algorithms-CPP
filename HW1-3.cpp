#include <iostream>
#include <string>
using namespace std;


void stringsCompare (string string1, string string2) {
   
   if (string1 == string2) 
        cout << "Strings are equal" << endl;
    else
        cout << "Strings are not equal" << endl;

}

void stringsLength (string string1, string string2) {
    if (string1.length() != string2.length()){
        cout << "Strings are not the same length" << endl;
        if (string1.length() > string2.length()) {
            cout<<"String " << string1 << " is greater than " << "string " << string2 << endl;
        } else {
            cout << string2 << " is greater than " << string1 << endl;
        }
    } else {
        cout << "Strings are ethe same length" << endl;
    }
}


int main() {

    string string1, string2;


    cout << "Provide 1st string to compare: ";
    cin >> string1;

    cout << "Provide 2nd string to compare: ";
    cin>> string2;

    stringsCompare(string1, string2);

    stringsLength(string1,string2);

    return 0;
}