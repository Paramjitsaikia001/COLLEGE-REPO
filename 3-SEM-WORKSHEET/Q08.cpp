/*define a class "time" to store the as hour,minute and second.all being integer valurs.writte member functiond to display time in standard formats.also overload the ++ and - operators to increase and decrease a given time by one second where the minute and hours values will have to be updated whenever necessary*/

#include <iostream>
using namespace std;

class Time {
    int hours;
    int minute;
    int sec;

public:
    void getinput() {
        cout << "Enter the Hour: ";
        cin >> hours;
        cout << "Enter the Minute: ";
        cin >> minute;
        cout << "Enter the Second: ";
        cin >> sec;
    }

    void display() {
        // Improved validation
        if ((hours < 0 || hours > 23) || (minute < 0 || minute > 59) || (sec < 0 || sec > 59)) {
            cout << "Invalid Time" << endl;
            return;
        }

        cout << "Time: ";
        if (hours < 10) cout << '0';
        cout << hours << " : ";
        if (minute < 10) cout << '0';
        cout << minute << " : ";
        if (sec < 10) cout << '0';
        cout << sec << endl;
    }

    // Increment operator overload
    Time &operator++() {
        ++sec;
        if (sec == 60) {
            sec = 0;
            ++minute;
            if (minute == 60) {
                minute = 0;
                ++hours;
                if (hours == 24) {
                    hours = 0;
                }
            }
        }
        return *this;
    }

    // Decrement operator overload
    Time &operator--() {
        if (sec == 0) {
            sec = 59;
            if (minute == 0) {
                minute = 59;
                if (hours == 0) {
                    hours = 23;
                } else {
                    --hours;
                }
            } else {
                --minute;
            }
        } else {
            --sec;
        }
        return *this;
    }
};

int main() {
    Time t;
    t.getinput();
    t.display();

    ++t;
    cout << "Incremented Time: " << endl;
    t.display();

    --t;
    cout << "Decremented Time: " << endl;
    t.display();

    return 0;
}
