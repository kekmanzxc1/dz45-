#include <iostream>
#include <string>
using namespace std;
/*
//Завдання 1
string remove(string str, int index) {
    if (index >= 0 && index < str.length()) {
        str.erase(index, 1);
    }
    return str;


int main() {
    string str;
    int index;
    cout << "Enter the string: ";
    getline(cin, str);
    cout << "Enter the character index to delete: ";
    cin >> index;

    cout << "Result: " << remove(str, index) << endl;
    return 0;
}
*/

/*
//Завдання 2 

string remove(string str, char ch) {
    str.erase(remove(str.begin(), str.end(), ch), str.end());
    return str;


int main() {
    string str;
    char ch;
    cout << "Enter the string: ";
    getline(cin, str);
    cout << "Enter a character to delete: ";
    cin >> ch;

    cout << "Result: " << remove(str, ch) << endl;
    return 0;
}
*/

/*
//Завдання 3 

string insert(string str, int index, char ch) {
    if (index >= 0 && index <= str.length()) {
        str.insert(index, 1, ch);
    }
    return str;
}

int main() {
    string str;
    int index;
    char ch;
    cout << "Enter the string: ";
    getline(cin, str);
    cout << "Enter the position to insert: ";
    cin >> index;
    cout << "Enter a character to insert: ";
    cin >> ch;

    cout << "Result: " << insert(str, index, ch) << endl;
    return 0;
}
*/

/*
//Завдання 4 

string replace(string str) {
    for (char& ch : str) {
        if (ch == '.') {
            ch = '!';
        }
    }
    return str;
}

int main() {
    string str;
    cout << "Enter the string: ";
    getline(cin, str);

    cout << "Result: " << replace(str) << endl;
    return 0;
}
*/


//Завдання 5 

int count(string str, char ch) {
    return count(str.begin(), str.end(), ch);
}

int main() {
    string str;
    char ch;
    cout << "Enter the string: ";
    getline(cin, str);
    cout << "Enter the character you are looking for: ";
    cin >> ch;

    cout << "Number of entries: " << count(str, ch) << endl;
    return 0;
}
