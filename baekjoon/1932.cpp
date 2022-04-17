/**
 * * 첫째 줄에 삼각형의 크기 n(1 ≤ n ≤ 500)이 주어지고, 
 * * 둘째 줄부터 n+1번째 줄까지 정수 삼각형이 주어진다.
 * TODO: 첫째 줄에 합이 최대가 되는 경로에 있는 수의 합을 출력
 */

#include <iostream>
#include <algorithm>

using namespace std;

int triangle[500][500] = { 0, };

int main() {
	int input(0);
	cin >> input;
	for (int i = 0; i < input; i++) {
		for (int j = 0; j <= i; j++){
			cin >> triangle[i][j];
		}
	}

  int maxResult(0);
	for (int i = 0; i < input; i++) {
		for (int j = 0; j <= i; j++) {
			if (j == 0) {
        triangle[i][j] = triangle[i - 1][0] + triangle[i][j];
      }
			else if (i == j) {
				triangle[i][j] = triangle[i - 1][j - 1] + triangle[i][j];
      }
			else {
				triangle[i][j] = max(
          triangle[i - 1][j - 1] + triangle[i][j], 
          triangle[i - 1][j] + triangle[i][j]
        );
      }

			maxResult = max(maxResult, triangle[i][j]);
		}
	}

	cout << maxResult;
}