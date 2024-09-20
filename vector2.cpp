#include <iostream>
#include <vector>
using namespace std;

vector<string> capitalizeFirstChar(vector<string>& vec) {
    for (string& str : vec) {
        if (!str.empty()) {

            if (str[0] >= 'a' && str[0] <= 'z') {
                str[0] = str[0] - ('a' - 'A'); 
            }
        }
    }
    return vec;
}

int main() {
    vector<string> vec;
    string element;

    cout << "Enter the vector elements (press Enter on an empty line to stop):" << endl;
    while (true) {
        getline(cin, element);
        if (element.empty()) {
            break; 
        }
        vec.push_back(element);
    }

    vector<string> capitalizedVec = capitalizeFirstChar(vec);

   
    cout << "Capitalize the first character of each vector element: ";
    for (const string& str : capitalizedVec) {
        cout << str << " ";
    }
    cout << endl;

    return 0;
}
