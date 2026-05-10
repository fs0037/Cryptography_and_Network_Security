#include <iostream>
using namespace std;

int main() {
    char message[100];
    int key;

    cout << "Enter a message: ";
    cin >> message;

    cout << "Enter a key: ";
    cin >> key;

    for (int i = 0; message[i] != '\0'; i++) {
        char ch = message[i];

        if (ch >= 'A' && ch <= 'Z') {
            message[i] = (ch - 'A' + key) % 26 + 'A';
        }
        else if (ch >= 'a' && ch <= 'z') {
            message[i] = (ch - 'a' + key) % 26 + 'a';
        }
    }
    cout << "Cipher text: " << message << endl;

    for (int i = 0; message[i] != '\0'; i++) {
        char ch = message[i];

        if (ch >= 'A' && ch <= 'Z') {
            message[i] = (ch - 'A' - key + 26) % 26 + 'A';
        }
        else if (ch >= 'a' && ch <= 'z') {
            message[i] = (ch - 'a' - key + 26) % 26 + 'a';
        }
    }
    cout << "Decipher text: " << message << endl;

    return 0;
}

