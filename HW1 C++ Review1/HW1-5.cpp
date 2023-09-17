#include <iostream>
#include <string>
using namespace std;

int main () {

    // Prompt the user for input
    cout << "Enter a string with punctuation: ";
    string str_1;
    getline(cin, str_1);  // Read the entire line, including spaces

    for (int i=0, len = str_1.size(); i< len; i++ ) {

        //check if character is punctuation or not
        if (ispunct(str_1[i])) {
            str_1.erase(i--,1);
            len=str_1.size();
        }
    }
    std::cout <<str_1 <<endl;

    return 0;
}