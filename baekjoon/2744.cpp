// TODO: 영어 소문자와 대문자로 이루어진 단어를 입력받은 뒤, 대문자는 소문자로, 소문자는 대문자로 바꾸어 출력하는 프로그램을 작성하시오.
/**
 * *input : 영어 소문자, 대문자 섞인 단어 주어짐 (WrongAnswer)
 * *output : 소문자 -> 대문자, 대문자 -> 소문자 (wRONGaNSWER)
 */

#include <iostream>

using namespace std;

int main() {
    string str;
    cin >> str;

    // auto 사용 못하는지?
    for (int i = 0; i < str.length(); i++) {

        if (!isupper(str[i])) {
            str[i] = toupper(str[i]);
        } 
        else if (!islower(str[i])) { // else 로 가도 별로 시간 차이 없음
            str[i] = tolower(str[i]);
        }

    }

    cout << str <<endl;
}