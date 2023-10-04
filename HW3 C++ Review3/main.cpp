#include <iostream>
#include "phone.h"
#include <string>
using namespace std;

int main()
{
PhoneNumber phone; // create object phone

string area_code;
string _exchange;
string _line;
string phoneInput;
char dash;

cout << "Enter phone number in the form “456-789-0123: ";
// Read the phone number here.
getline(cin,phoneInput);

//split the input string without dash

size_t firstDash = phoneInput.find('-'); //find location of the first index

area_code = phoneInput.substr(0,firstDash); //area code is anything before first dash

size_t secondDash = phoneInput.find('-', firstDash+1);

_exchange = phoneInput.substr(firstDash+1, secondDash - firstDash-1);

_line = phoneInput.substr(secondDash+1);


phone.setAreaCode(area_code);
phone.setExchange(_exchange);
phone.setLine(_line);

cout << "The phone number entered was: ";
// Display the phone number here.
cout << phone.getAreaCode() << "-" << phone.getExchange() << "-" << phone.getLine() << endl;

cout << "The area code of the number was: ";
// Display just the area code here.
cout <<phone.getAreaCode()<<endl;
return 0;
}