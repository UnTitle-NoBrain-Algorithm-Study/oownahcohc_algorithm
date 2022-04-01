// TODO: 정수 n을 입력받아 n의 약수를 모두 더한 값을 리턴하는 함수, solution을 완성해주세요.

#include <iostream>

using namespace std;

int main () {
    int number(0);
    cin >> number;

    int result(0);
    for (int i = 1; i <= number; i++) {

        if (number % i == 0) { // 나머지가 0인 놈만 데려간다
            result += i;
        }

    }

    cout << result << endl;
}
