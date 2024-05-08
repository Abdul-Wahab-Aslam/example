#include <iostream>

class Time {
private:
    int hour;
    int min;
    int sec;
    static std::string state; // PM or AM

public:
    // Constructor
    Time(int h = 0, int m = 0, int s = 0) {
        setTime(h, m, s);
    }

    
    void setTime(int h, int m, int s) {
        sec = s % 60;
        min = (m + s / 60) % 60;
        hour = (h + m / 60) % 12;
        state = (h + m / 60) / 12 ? "PM" : "AM";
    }

   
    void displayTime() const {
        std::cout << "Time: " << hour << ":" << min << ":" << sec << " " << state << std::endl;
    }

    
    void updateTime() {
        if (hour >= 12 || hour < 0) {
            hour = 0;
            state = "AM";
        }
        if (min >= 60 || min < 0) {
            min = 0;
            hour++;
        }
        if (sec >= 60 || sec < 0) {
            sec = 0;
            min++;
        }
        hour %= 12;
        state = (hour >= 12) ? "PM" : "AM";
    }
};

std::string Time::state = "AM"; 
int main() {
    Time t(15, 75, 80); // Invalid time values
    t.displayTime();    // Before update
    t.updateTime();     
    t.displayTime();    

    return 0;
}

