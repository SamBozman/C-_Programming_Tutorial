//

#include <iostream>
#include <string>
using namespace std;
string header = " --- Demonstrates Unformatted Input ---";

int main()
{
    string word, rest;
    cout << header << "\n\nPress <return> to go on" << endl;

    // Read the new line
    // without saving.
    cin.get();

    cout << "\nPlease enter a sentence with several words!"
         << "\nEnd with <!> and <return>."
         << endl;

    // Read the first word
    // and the remaining text
    // up to the character
    cin >> word;
    getline(cin, rest, '!');

    cout << "\nThe first word: " << word << "\nRemaining text: " << rest << endl;
    return 0;
}
