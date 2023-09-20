#include <iostream>
#include <string>
#include <cmath>
#include <limits>
#include <sstream>

using namespace std;

class Time {
        public:
            Time(): minutes(0) {};
            
            void readTime(bool & errFlag);
            int subtractTimes(const Time &t);
        
        private:
        int minutes;
};

void Time::readTime(bool & errFlag) {



    string input;
    getline(cin, input);

    int HH, MM;
    string A;
    char colon; 

    stringstream ss(input);
    // Read the input in the format <HH>:<MM> <A>
    ss >> HH >> colon >> MM >> A;

    // Validate the input
    if (HH >= 1 && HH <= 12 && MM >= 0 && MM < 60 && (A == "AM" || A == "PM")) {
        // Convert the time to total minutes since 12:00 AM
        minutes = HH * 60 + MM;

        // Adjust for PM (note: 12:00 PM is noon so no need to add 12 hours)
        if (A == "PM" && HH != 12) {
            minutes += 12 * 60;
        }

        // Adjust for 12:00 AM (midnight)
        if (A == "AM" && HH == 12) {
            minutes = MM;
        }

        errFlag = false; // Valid time
    } else {
        errFlag = true; // Invalid time
        cin.clear(); // Clear any error flags
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard the rest of the line
    }
}

int Time::subtractTimes(const Time &t) {
    return minutes - t.minutes;
}

int main() {
  

    Time startTime, stopTime;
    double distance;
    bool errFlag;
    int timeDifMin, timeDifHours;

    cout << "Please provide distance travelled in miles: "<<endl;
    cin>>distance;
    
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard the rest of the line


    do {
        cout <<"Enter the start time in the format HH:MM AM/PM (e.g., 12:34 AM)" <<endl;
        startTime.readTime(errFlag);
        if (errFlag) {
            cout << "Invalid time! Please try again!";
            cin.clear(); // Clear any error flags
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard the rest of the line
    
        }
    } while (errFlag);

    do {
        cout <<"Enter the stop time in the format HH:MM AM/PM (e.g., 12:34 AM)" <<endl;
        stopTime.readTime(errFlag);
        if (errFlag) {
            cout << "Invalid time! Please try again!";
            cin.clear(); // Clear any error flags
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard the rest of the line
    
        }
    } while (errFlag);

    timeDifMin = stopTime.subtractTimes(startTime);
    
    timeDifHours = timeDifMin / 60;

    //Calculate speed.
    double speed = distance / timeDifHours;

    //Round speed
    speed = round(speed * 10) / 10;

    //Display the calculated speed.
    std::cout << "The speed is: " << speed << " miles per hour.\n";

    return 0;
}
