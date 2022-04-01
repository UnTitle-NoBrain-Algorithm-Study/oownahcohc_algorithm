/* 
 TODO 어떤 사람의 C언어 성적이 주어졌을 때, 평점은 몇 점인지 출력하는 프로그램을 작성하시오.
 *A+: 4.3, A0: 4.0, A-: 3.7
 *B+: 3.3, B0: 3.0, B-: 2.7
 *C+: 2.3, C0: 2.0, C-: 1.7
 *D+: 1.3, D0: 1.0, D-: 0.7
 *F: 0.0
 *
 *input: A0 -> output: 4.0
*/


#include <iostream>

using namespace std;

int main () {
    string grade;
    cout << "성적을 입력하세요 : ";
    cin >> grade; 

    if (grade == "F") {
        cout << "0.0";
        return 0;
    }

    double result(0.0);

    switch (grade[0])
    {
    case 'A':
        result = 4.0;
        break;
    case 'B':
        result = 3.0;
        break;
    case 'C':
        result = 2.0;
        break;
    case 'D':
        result = 1.0;
        break;
    }

    switch (grade[1])
    {
    case '+':
        result += 0.3;
        break;
    case '-':
        result -= 0.3;
        break;
    }
    
    cout.precision(1); // 소수점 아래 1자리
    cout<<fixed; // 까지 고정 출력
    cout << "당신의 학점은 : " << result << "점 입니다." << endl;

    return 0;
}