#include<iostream>
#include<cstring>
using namespace std;

int main() {
    char str[100];
    char str1[100];

    cout << "Enter a string: ";
    cin.getline(str, 100); // Read a string until '$' is encountered

    strcpy(str1, str); // Copy original string

    // Reverse str in-place
    int st = 0, e = strlen(str) - 1;
    while(st <= e) {
        swap(str[st], str[e]);
        st++;
        e--;
    }

    // Compare str1 and reversed str
    int i = 0;
    bool isPalindrome = true;
    while(str1[i] != '\0' && str[i] != '\0') {
        if(str1[i] != str[i]) {
            isPalindrome = false;
            break;
        }
        i++;
    }

    // Ensure both strings ended


    if(isPalindrome) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}
