#include <iostream>
#include <string>

class Person {
private:
    std::string name;
    int day;
    int month;
    int year;
    const std::string Nationality;
    
public:
    // Constructor
    Person(const std::string &n, int d, int m, int y, const std::string &nationality) 
        : name(n), day(d), month(m), year(y), Nationality(nationality) {}

    // Function to calculate age
    int calculateAge() const {
        // Assuming current date is 03/04/2024
        int currentDay = 3;
        int currentMonth = 4;
        int currentYear = 2024;
        
        int age = currentYear - year;
        if (currentMonth < month || (currentMonth == month && currentDay < day)) {
            age--;
        }
        return age;
    }

    // Function to display person information
    void displayInfo() const {
        std::cout << "Name: " << name << std::endl;
        std::cout << "DOB: " << day << "/" << month << "/" << year << std::endl;
        std::cout << "Age: " << calculateAge() << std::endl;
        std::cout << "Nationality: " << Nationality << std::endl;
    }
};

int main() {
    std::string name;
    int day, month, year;
    std::string nationality;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    std::cout << "Enter your dob (format: ddmmyyyy): ";
    std::cin >> day >> month >> year;

    std::cout << "Enter your nationality: ";
    std::cin.ignore(); // Ignore the newline character left in the buffer
    std::getline(std::cin, nationality);

    Person person(name, day, month, year, nationality);
    person.displayInfo();

    return 0;
}


