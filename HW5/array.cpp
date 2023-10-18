#include <iostream>
#include <limits>
using namespace std;

int main () {

    //initializing array to hold numbers
    int array_of_numbers[20];
    
    //keep count how many number were already added
    int count = 0;


    for (int i =0; i < 20; i++) {

    int number;
    //Prompt the user for input.
    do
    {   
        
        cout << "Input integers between 20 and 100 one by one " << 20-i<<" times:\n";
        cin >> number;

        //making sure there is no strings or floats input 
        if (cin.fail())  
        {
            cout << "Error: Invalid input! Please enter a whole number.\n";
            cin.clear();  // Clear the fail state
            cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Discard bad input
            continue;  // Skip the rest of the loop and ask for input again
        }

         //Validate the input to ensure it's between 20 and 100.
        if (number < 20 || number >100) {
            cout << "Number is out of range, please enter integer from 20 to 100\n";
        }

    } while (number < 20 || number >100);

        //to make sure user knows how many integers left to input
        cout <<"You input " << i+1<< " int(s)."<< endl;

        //boolean to check added numbers in the array
        bool isDuplicate = false;

        for (int j=0; j< count; j++) {

            //Check if the number is a duplicate by iterating through the values already stored in the array.
            if (array_of_numbers[j] == number) {
                isDuplicate = true;
                break;
            }

            
        }

          //If it's not a duplicate, store it in the array.
            if (!isDuplicate) {
                array_of_numbers[count] = number;
                count++;
            }

    }
    
    //After reading all 20 numbers, iterate through the stored values in the array and display them using cout.
    cout << "Array is: ";
    for ( int m = 0; m < count; m++) {
        cout<< array_of_numbers[m]<< " ";
    }
    

}