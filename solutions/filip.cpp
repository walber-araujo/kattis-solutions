#include <string>
#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<string> split(string str, char delimitador) {
    vector<string> strings;
    string string;
    istringstream strStream(str);
    
    while(getline(strStream, string, delimitador)) {
        strings.push_back(string);
    }
    return strings;
}

int main() {
    string str, str1, str2;
    int num1, num2;
    getline(cin, str);
    vector<string> strings = split(str, ' ');
    str1 = strings[0];
    str2 = strings[1];
    reverse(str1.begin(), str1.end());
    reverse(str2.begin(), str2.end());
    num1 = stoi(str1);
    num2 = stoi(str2);
    
    printf("%d\n", max(num1, num2));

    return 0;
}