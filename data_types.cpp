#include <iostream>

int main() {

    // interger (whole number)
    int age = 21;
    int year = 2025;
    int days = 7.5;

    // double (number including decimal)
    double price = 10.99;
    double gpa = 2.5;
    double temperature = 25.1;

    // char (single character)
    char grade = 'A';
    char initial = 'C';
    char dollarSign = '$';

    // boolean (true or false)
    bool student = false;
    bool power = true;
    bool forSale = true;

    // string (objects that represents a sequence of text)
    std::string name = "John Doe";
    std::string day = "Friday";
    std::string food = "Food";
    std::string address = "123 Fake St.";

    std::cout << "Hello, " << name << '\n';
    std::cout << "You are " << age << " years old";

    return 0;
}