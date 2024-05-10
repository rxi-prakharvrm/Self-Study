#include <iostream>
using namespace std;

void birthdayStatus(int daysRemaining) {
    if(daysRemaining == 0) {
        cout << "Happy Birthday!" << endl;
        return;
    }

    if(daysRemaining == 1) {
        cout << daysRemaining << " day left for birthday!" << endl;
    }

    else {
        cout << daysRemaining << " days left for birthday!" << endl;
    }

    birthdayStatus(daysRemaining-1);
}

int main() {
    int daysRemaining;
    cout << "Enter remaining days: ";
    cin >> daysRemaining;
    birthdayStatus(daysRemaining);
    return 0;
}