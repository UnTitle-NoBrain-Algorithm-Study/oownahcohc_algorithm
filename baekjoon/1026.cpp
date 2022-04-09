/**
 * *길이가 N인 정수 배열 A와 B가 있다
 * *S = A[0] × B[0] + ... + A[N-1] × B[N-1]
 * *S의 값을 가장 작게 만들기 위해 A의 수를 재배열하자. 단, B에 있는 수는 재배열하면 안 된다.
 * TODO: 첫째 줄에 S의 최솟값을 출력한다.
 * *A의 제일 작은 놈이랑 B의 제일 큰놈이랑 곱하게 해야지 ㅇㅇ
 * *A는 오름차순, B는 내림차순으로 조지고 곱하자 ㅇㅇ
*/

/**
 * *array 사용
 */

#include <iostream>
#include <algorithm>

void initializeArray(int number, int array[]) {
    for (int i = 0; i < number; i++) {
        std::cin >> array[i];
    }
}

int main () {
    int num(0);
    std::cin >> num;

    int A_array[num];
    int B_array[num];

    initializeArray(num, A_array);
    initializeArray(num, B_array);

    std::sort(A_array, A_array + num); // 오름차순
    std::sort(B_array, B_array + num, std::greater<int>()); // 내림차순

    int result(0);
    for (int i = 0; i < num; i++) {
        result += (A_array[i] * B_array[i]);
    }

    std::cout << result;
    return 0;
}





/**
 * *vector 사용
 */

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void initializeVector(int number, vector<int>& vector) {
    for (int i = 0; i < number; i++) {
        int input;
        cin >> input;
        vector.push_back(input);
    }
}

int main() {
	int num;
	cin >> num;

	vector<int> A_vec;
	vector<int> B_vec;

    initializeVector(num, A_vec);
    initializeVector(num, B_vec);

	sort(A_vec.begin(), A_vec.end());
	sort(B_vec.begin(), B_vec.end(), greater<int>());

	int result(0);
	for (int i = 0; i < num; i++) {
		result += A_vec[i] * B_vec[i];
	}

	cout << result;
    return 0;
}