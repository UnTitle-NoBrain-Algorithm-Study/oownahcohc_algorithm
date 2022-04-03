/**
 * TODO: N개의 수가 주어졌을 때, 이를 오름차순으로 정렬하는 프로그램을 작성하시오.
 * *input: 5, 6 4 7 2 8 -> output:  2 4 6 7 8 
*/

#include <iostream>
#include <algorithm>

using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int input;
    cin >> input;

    int intArray[1000001];
    for (int i = 0; i < input; i++) {
        cin >> intArray[i];
    }

    sort(intArray, intArray + input);

    for (int i = 0;  i < input; i++) {
        cout << intArray[i] << '\n';
    }
}


// #include <iostream>
// #include <vector> // 이새끼 때문인가 속도 차이 ㅈㄴ 심하네
// #include <algorithm>

// using namespace std;

// int main () {
//     int inputNum;
//     cin >> inputNum;

//     vector<int> v;
//     for (int i = 0; i < inputNum; i++) {
//         int num;
//         cin >> num;
//         v.push_back(num);
//     }

//     sort(v.begin(), v.end());

//     for (int i = 0; i < inputNum; i++) {
//         cout << v[i] << endl;
//     }
// }
