/**
 * TODO: input = one4seveneight -> output = 1478
 */

#include <iostream>

using namespace std;

int main () {
    string inputStr;
    cin >> inputStr;

    string result("");
    for (int i = 0;  i < inputStr.length(); i++) {

        if (inputStr[i] >= 'a' && inputStr[i] <= 'z') {

            if (inputStr[i] == 'o') { // one
                result += '1';
                i += 2; // 후치연산이니깐 ~ 
            } 
            else if (inputStr[i] == 't') {
                
                if (inputStr.substr(i, 3) == "two") {
                    result += '2';
                    i += 2;
                }
                else {
                    result += '3';
                    i += 4;
                }

            }
            else if (inputStr[i] == 'f') {

                if (inputStr.substr(i, 4) == "four") {
                    result += '4';
                    i += 3;
                }
                else {
                    result += '5';
                    i += 3;
                }

            }
            else if (inputStr[i] == 's') {

                if (inputStr.substr(i, 3) == "six") {
                    result += '6';
                    i += 2;
                }
                else {
                    result += '7';
                    i += 4;
                }

            }
            else if (inputStr[i] == 'e') { // eight
                result += '8';
                i += 4;
            }
            else if (inputStr[i] == 'n') { // nine
                result += '9';
                i += 3;
            }
            else if (inputStr[i] == 'z') { // zero
                result += '0';
                i += 3;
            }
        }
        else {
            result += inputStr[i];
        }

    }

    cout << result << endl;
}