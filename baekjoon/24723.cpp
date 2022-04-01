/** // TODO: 녹색거탑의 정상에서 바닥으로 내려오는 경우의 수 출력
 *   
 * *input: 녹색거탑의 높이를 나타내는 정수 N (1 <= N <= 5)
 * *output: 녹색거탑의 정상에서 바닥으로 내려오는 경우의 수 출력
 * 
 */

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int height;
    cin >> height;

    int result(0.0);
    result = pow(2, height); // pow : 거듭제곱 함수

    cout << result << endl;
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;
// int n;
// int main(){
//     cin >> n;
//     cout << (1 << n);
// }

