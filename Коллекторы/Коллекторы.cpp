#include <iostream>
using namespace std;

int main() {
    cout << "The Colletor." << endl;
    cout << "Your name? " << endl;
    string name;
    cin >> name;
    cout << "The amount of debt? ";
    int debt;
    cin >> debt;
    if (debt < 0) {
        cout << name << ". I am not sure that I have managed to owe you " << -debt << " rubles!" << endl;
    }
    else {
        int payment = 0;
        bool isRepaid = payment >= debt;
        while (!isRepaid) {
            cout << name << ". How much money are you returning? ";
            cin >> payment;
            isRepaid = payment >= debt;
            if (!isRepaid) { cout << "This is not enough to pay off the debt!" << endl; }
        }
        cout << "Congratulations, " << name << "! Your debt has been fully paid.\n";
    }
}