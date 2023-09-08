
#include <iostream>

int main () {

    //FACTORIAL WITH INT

    int integer;
    int factorial =1;

    std::cout << "Please provide an integer:";
    
    while(true){
    std::cin >> integer;
    if (integer >= 0) break;
    std::cout <<"Error! You entered a negative integer, but only positive integers are allowed. Please provide positive integer:";
    }
   
    for (int i = 1; i <=integer ; ++i)
    {
        factorial *=i;
    }

    std::cout <<"Here is factorial from integer:"<<factorial<<std::endl;
    
    //FACTORIAL WITH DOUBLE

    double doubleValue;
    double factorialDouble =1.0;

    std::cout << "Please provide a double:";

    while(true){
    std::cin >> doubleValue;
    if (doubleValue >= 0) break;
    std::cout <<"Error! You entered a negative double, but only positive doubles are allowed. Please provide positive double:";
    }

    for (double j = 1.0; j <=doubleValue ; ++j)
    {
        factorialDouble *=j;
    }

    std::cout <<"Here is factorial from double:"<<factorialDouble<<std::endl;

    std::cout <<"CONCLUSION: When the result exceeds the max value of the type, it first uses negative numbers and if there is not enough becomes 0." <<std::endl;
    std::cout <<"The difference between int and double is that double can represent larger values, but with potential loss of precision for very large values." <<std::endl;
    return 0;
}
