#include <iostream>
using namespace std;

void process();
void powerLightOn();

bool isComputerOn();
bool hasErrorMessage();
bool isPowerLightOn();
bool isPowerPlugged();

int main() {
    cout << "System Check..." << endl;
    process();
    cout << "END" << endl;
    return 0;
}

void process() {
    if (isComputerOn()) {
        if (hasErrorMessage()) {
            cout << "Diagnosis..." << endl;
        } else {
            cout << "Good Condition" << endl;
        }
    } else {
        powerLightOn();
    }
}

void powerLightOn() {
    if (isPowerLightOn()) {
        cout << "Call Specialist" << endl;
    } else {
        if (isPowerPlugged()) {
            process();
        } else {
            cout << "Plugged In" << endl;
            process();
        }
    }
}

bool isComputerOn() {
    char c; cout << "Computer ON? (y/n): "; cin >> c;
    return (c == 'y' || c == 'Y');
}

bool hasErrorMessage() {
    char c; cout << "Error Message? (y/n): "; cin >> c;
    return (c == 'y' || c == 'Y');
}

bool isPowerLightOn() {
    char c; cout << "Power Light ON? (y/n): "; cin >> c;
    return (c == 'y' || c == 'Y');
}

bool isPowerPlugged() {
    char c; cout << "Power Plugged? (y/n): "; cin >> c;
    return (c == 'y' || c == 'Y');
}
