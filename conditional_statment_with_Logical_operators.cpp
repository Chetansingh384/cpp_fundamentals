#include <iostream>

using namespace std;

int main() {
    int x, y;
    
    cout << "-: Welcome to LOGIN FORM :-" << endl;
    
    cout << "Enter your ID: ";
    cin >> x;

    cout << "Enter your password: ";
    cin >> y;


    if (x == 123456 && y == 384) {
        cout << "Login successful" << endl;
    } else {
        cout << "Enter valid ID and password" << endl;
    }

    return 0;
}

