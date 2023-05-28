#include <iostream>
using namespace std;
int compareString(const char str1[], const char str2[]) {
    int i = 0;
    while (str1[i] == str2[i]) {
        if (str1[i] == '\0' || str2[i] == '\0')
            break;
        i++;
    }
    if (str1[i] == '\0' && str2[i] == '\0') {
        return 0;
    }
    else {
        return 1;
    }
}

int main() {
    int flag;
    char str1[50], str2[50];
    cout << "Please enter the first string: ";
    cin.getline(str1, 50);
    cout << "Please enter the second string: ";
    cin.getline(str2, 50);
    flag = compareString(str1, str2);
    if (flag == 0) {
        cout << "Both strings are equal." << endl;
    } else {
        cout << "Both strings are not equal." << endl;
    }
    return 0;
}
