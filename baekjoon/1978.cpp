/**
 * TODO: 주어진 수 N개 중에서 소수가 몇 개인지 찾아서 출력하는 프로그램을 작성하시오. 주어진 수들 중 소수의 개수를 출력한다.
 * *input: 4, 1 3 5 7 -> output:  3
 * 
 * *소수가 뭐냐. 약수로 1과 자기 자신만 갖는 수 잖아
 * *1은 count하면 안됨. + 1, 자기 자신 제외한 수로 나눴을 떼 나머지가 0이면 안됨.
 * *2이상 자기 자신 제곱근(a의 제곱근 = 제곱해서 a가 되는 수)까지의 범위의 수에 나눠지지 않는 수. => 이 조합에서 다 탈락하게 돼 있음.
 */

#include <iostream>
#include <cmath>

int main () {
    int num(0);
    std::cin >> num;

    int count(num); // 전체 개수니깐
    unsigned int input[1000] = {0, };

    for (int i = 0; i < num; i++) {
        std::cin >> input[i];
        if (input[i] == 1) {
            count--;
        }
    }

    for (int i = 0; i < num; i++) {
        for (int j = 2; j <= sqrt(input[i]); j++) {
            if (input[i] % j == 0) {
                count--;
                break;
            }
        }
    }

    std::cout << count;
    return 0;
}
