#include <iostream>
#include <string>
using namespace std;

int countMaxRepeats(const string& word) {
    int maxRepeats = 0;
    int counts[26] = {0};  

    for (char ch : word) {
        if (isalpha(ch)) {
            ch = tolower(ch);  
            int index = ch - 'a';  
            counts[index]++;
            if (counts[index] > maxRepeats) {
                maxRepeats = counts[index]; 
            }
        }
    }

    return maxRepeats;
}

int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    string word = "", maxWord = "";
    int maxRepeats = 0;

    for (char ch : sentence) {
        if (ch == ' ' || ch == '.' || ch == ',') {
            if (!word.empty()) {
                int repeats = countMaxRepeats(word);
                if (repeats > maxRepeats) {
                    maxRepeats = repeats;
                    maxWord = word;
                }
                word = ""; 
            }
        } else {
            word += ch; 
        }
    }

    if (!word.empty()) {
        int repeats = countMaxRepeats(word);
        if (repeats > maxRepeats) {
            maxWord = word;
        }
    }

    cout << "The word with the most repeated letters is: " << maxWord << endl;

    return 0;
}
