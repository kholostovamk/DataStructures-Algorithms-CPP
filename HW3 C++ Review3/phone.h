#include <iostream>
#include<string>
using namespace std;


class PhoneNumber {

    /*
    
Define a class PhoneNumber, in a header file (Phone.h,) to represent a phone
number in the format “123-456-7890”. The first three-digit number is the areaCode.
The second three-digit number is the exchange and the four-digit number is the
line. The three fields are of type string. You should reference the string class to
understand how to extract the three numbers and store them in the class. The three
numbers are treated as strings and stored in their own fields. The class defines
constructors and the usual get/set methods and overloads the operators, >> and <<, to
output and input telephone numbers in the format shown
    
    */

    private:
    string areaCode;
    string exchange;
    string line;

    public:

    //setters

    void setAreaCode(string area_code) {
        areaCode = area_code;
    }

    void setExchange(string _exchange) {
        exchange = _exchange;
    }

    void setLine(string _line) {
        line = _line;
    }
    
    //getters

    string getAreaCode(){
        return areaCode;
    }

    string getExchange() {
        return exchange;
    }

    string getLine() {
        return line;
    }


    friend ostream &operator<<(ostream &out, const PhoneNumber &number) {
        out<<number.areaCode<<"-"<<number.exchange<<"-"<<number.line<<endl;
        return out;
    }

    friend istream& operator>>(istream&in, PhoneNumber&number)  {
        char dash; //to consume the dash
        
        in>>number.areaCode>>dash>>number.exchange>>dash>>number.line;
     
        return in;
    }

};