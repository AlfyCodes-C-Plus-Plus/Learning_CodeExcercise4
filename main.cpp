#include <iostream>
#include <string>

using namespace std;


int main() {

    int age {0};
    double hourlyWage {23.50};
    string name = "";

    cout << "Hello, what is your name?" << std::endl;
    cin >> name;

    cout << "How old are you " << name << "?" << std::endl;
    cin >> age;


    cout << "Thank you! I now know your name is " << name << " and you're " << age << " years old.";
    
    return 0;
}