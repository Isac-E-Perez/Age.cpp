#include <iostream>

using namespace std;

int main()
{
    int year = 0;
    int age = 0;

    string name = " ";

    cout << "What is your name?";

    cin >> name;

    /// Print a message to the user
    cout << "What year is your favorite?";

    /// Get the user's response and assign it to the year
    cin >> year;

    cout << "What age are you?";

    cin >> age;

    cout << "Your name is \n" << name << "\nYour favorite year is \n" << year << "\nYour age is \n" << age;
} 
