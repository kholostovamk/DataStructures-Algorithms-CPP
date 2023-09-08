#include <iostream>
#include <string>
using namespace std;


int main() {


    // intialize string
    string str_concat;
    bool keepRunning = true;

    while (keepRunning) {
        string strNew;

        //read string from the input
        cout << "Input string to concatenate. To exit program -  input 1."<<endl;
        cin >>strNew;

        if (strNew == "1") {
            keepRunning = false;
            continue;
        }
        
        //add string to one large string
        str_concat +=strNew;

        // print concatenated string
        cout << str_concat << endl;
    }


    return 0;
}







