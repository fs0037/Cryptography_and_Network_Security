#include <iostream>
using namespace std;

int main() {
    char plain[]  = "abcdefghijklmnopqrstuvwxyz";
    char cipher[] = "ZXVBNMLKJHGFDSAPOIUYTREWQW"; 
    char message[100];

    cout << "Enter a message: ";
    cin >> message;

    for (int i = 0; message[i] != '\0'; i++) {
        for (int j = 0; j < 26; j++) {
            if (message[i] == plain[j]) {
                message[i] = cipher[j];
                break;
            }
        }
    }
    cout << "Random Cipher text: " << message << endl;

    for (int i = 0; message[i] != '\0'; i++) {
        for (int j = 0; j < 26; j++) {
            if (message[i] == cipher[j]) {
                message[i] = plain[j];
                break;
            }
        }
    }
    cout << "Decipher text: " << message << endl;

    return 0;
}

