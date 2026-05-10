#include <iostream>
using namespace std;

int main() {
    char lowercase_arr[26];
    char uppercase_arr[26];

    int index = 0;
    for (int i = 97; i <= 122; i++) {
        lowercase_arr[index] = (char)i;
        index++;
    }

    for (int i = 0; i < 26; i++) {
        uppercase_arr[i] = (char)(lowercase_arr[i] - 32);
    }

    cout << "Lowercase Letters: ";
    for (int i = 0; i < 26; i++) {
        cout << lowercase_arr[i] << " ";
    }

    cout << "\nUppercase Letters: ";
    for (int i = 0; i < 26; i++) {
        cout << uppercase_arr[i] << " ";
    }
    cout << endl;

    return 0;
}

