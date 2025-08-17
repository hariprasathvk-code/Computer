#include <iostream>
using namespace std;

void process();
int powerLightOn();

int main() {
    cout << "Check..." << endl;
    process();
    cout << "END" << endl;
    return 0;
}

void process() {
    while (true) {
        char c;
        cout << "Computer ON? (y/n): ";
        cin >> c;

        if (c == 'y' || c == 'Y') {
            cout << "Error Message? (y/n): ";
            cin >> c;
            if (c == 'y' || c == 'Y') {
                cout << "Diagnosis" << endl;
                continue;
            } else {
                cout << "Good Condition" << endl;
                return;
            }
        } else {
            int r = powerLightOn();
            if (r == 1) continue;
            else return;
        }
    }
}

int powerLightOn() {
    char c;
    cout << "Power Light ON? (y/n): ";
    cin >> c;

    if (c == 'y' || c == 'Y') {
        cout << "Find Specialist" << endl;
        return 0;
    } else {
        cout << "Power Plugged to wall? (y/n): ";
        cin >> c;
        if (c == 'y' || c == 'Y') {
            cout << "Find Specialist" << endl;
            return 0;
        } else {
            cout << "Plug Power, retry" << endl;
            return 1;
        }
    }
}
