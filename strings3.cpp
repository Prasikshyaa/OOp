#include <iostream>
#include <string> 
using namespace std;

string findLargestWord(const string& sentence) {
    int maxLength = 0;
    string largestWord = "";
    string currentWord = "";

    for (char ch : sentence) {
        if (ch == ' ' || ch == '.' || ch == ',') {  
            if (currentWord.length() > maxLength) {
                maxLength = currentWord.length();
                largestWord = currentWord;
            }
            currentWord = ""; 
        } else {
            currentWord += ch; 
        }
    }

    if (currentWord.length() > maxLength) {
        largestWord = currentWord;
    }

    return largestWord;
}

int main() {
    string sentence;
    
    cout << "Enter a sentence: ";
    getline(cin, sentence);  

    string largestWord = findLargestWord(sentence);

    cout << "The largest word is: " << largestWord << endl;

    return 0;
}
