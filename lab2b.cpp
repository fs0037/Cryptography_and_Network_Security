#include <iostream>
using namespace std;

int main() {
    char message[100];
    int key;

    cout << "Write a message (Uppercase only): ";
    cin >> message;

    cout << "Enter a secret key (number): ";
    cin >> key;

    for (int i = 0; message[i] != '\0'; i++) {
        if (message[i] >= 'A' && message[i] <= 'Z') {
            message[i] = (message[i] - 'A' + key) % 26 + 'A';
        }
    }
    cout << "Encrypted Text: " << message << endl;

    for (int i = 0; message[i] != '\0'; i++) {
        if (message[i] >= 'A' && message[i] <= 'Z') {
            message[i] = (message[i] - 'A' - key + 26) % 26 + 'A';
        }
    }
    cout << "Decrypted Text: " << message << endl;

    return 0;
}