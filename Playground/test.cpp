#include <iostream>
using namespace std;

int main() {
    int n;
    char ans;
    while(true) {
        cout << "Continue program? (Y/N): ";
        cin >> ans;

        if(ans == 'N') {
            break;
        }

        cout << "Enter the value of n: ";
        cin >> n;
        for(int i = 1; i <= n; i++) {
            cout << "------------" << endl;
            cout << "i: " << i << endl;
            for(int j = 1; j <= i; j++) {
                cout << "------------" << endl;
                cout << "j: " << j << endl;
                for(int k = 1; k <= j; k++) {
                    cout << "------------" << endl;
                    cout << "k: " << k << endl;
                }
            }
            cout << "***********************************" << endl;
        }
    }
}