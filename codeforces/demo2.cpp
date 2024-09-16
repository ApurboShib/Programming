#include <iostream>
#include <iomanip>
#include <sstream>

// Function to get the number of days in a month
int getDaysInMonth(int month, int year) {
    if (month == 2) {
        // Check for leap year
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            return 29;
        } else {
            return 28;
        }
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        return 30;
    } else {
        return 31;
    }
}

// Function to print the calendar for a given month and year
void printCalendar(int month, int year) {
    std::cout << "|---------------------------|" << std::endl;
    std::cout << "|Sun|Mon|Tue|Wed|Thu|Fri|Sat|" << std::endl;
    std::cout << "|---------------------------|" << std::endl;

    // Get the first day of the month
    struct tm firstDay = {0, 0, 0, 1, month - 1, year - 1900};
    mktime(&firstDay);

    int daysInMonth = getDaysInMonth(month, year);
    int currentDay = 1;

    for (int week = 0; currentDay <= daysInMonth; week++) {
        std::cout << "|";
        for (int day = 0; day < 7; day++) {
            if ((week == 0 && day < firstDay.tm_wday) || currentDay > daysInMonth) {
                // Print dashes for blank cells before the 1st day and after the last day
                std::cout << std::setw(2) << " - " << "|";
            } else {
                // Print the day of the month
                std::cout << std::setw(2) << currentDay << "|";
                currentDay++;
            }
        }
        std::cout << std::endl << "|---------------------------|" << std::endl;
    }

    std::cout << std::endl;
}

int main() {
    int numTestCases;
    std::cin >> numTestCases;

    for (int i = 0; i < numTestCases; i++) {
        int day, month, year;
        char separator;
        std::cin >> day >> separator >> month >> separator >> year;
        
        // Print a blank line after each test case
        printCalendar(month, year);
    }

    return 0;
}
