/**
 * TODO: 알파벳 소문자로 이루어진 N개의 단어가 들어오면 아래와 같은 조건에 따라 정렬
 * *1. 길이가 짧은 것 부터
 * *2. 길이가 같으면 사전 순으로
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compareString (string a, string b) {
  if (a.length() == b.length()) {
    return a < b;
  }
  return a.length() < b.length();
}

int main() {
  int input(0);
  cin >> input;

  vector<string> vec;
  for (int i = 0; i < input; i++) {
    string str;
    cin >> str;
    if (find(vec.begin(), vec.end(), str) == vec.end()) {
      vec.push_back(str);
    }
  }
  sort(vec.begin(), vec.end(), compareString);

  for (int i = 0; i < vec.size(); i++) {
    cout << vec[i] << "\n";
  }
}