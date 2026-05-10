#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;
    int width;

    cout << "Enter a message: ";
    getline(cin, text);
    cout << "Enter a width: ";
    cin >> width;

    string encrypted = "";
    for (int i = 0; i < width; i++) {
        for (int j = i; j < text.length(); j += width) {
            encrypted += text[j];
        }
    }
    cout << "Cipher Text: " << encrypted << endl;

    string decrypted = text;
    int index = 0;
    for (int i = 0; i < width; i++) {
        for (int j = i; j < text.length(); j += width) {
            decrypted[j] = encrypted[index++];
        }
    }
    cout << "Decipher Text: " << decrypted << endl;

    return 0;
}

