/**
 * TODO: n이 주어졌을 때, n번째 피보나치 수를 구하는 프로그램을 작성
 * * 피보나치 수는 0과 1로 시작
 * *  Fn = Fn-1 + Fn-2 (n ≥ 2)
 * * n번째 피보나치 수를 출력
 */

#include <iostream>

using namespace std;

long long fibonacci[100] = {0, 1, };

long long fibo(int n) {

  if (n == 0 || n == 1) {
    return fibonacci[n];
  } 
  else if (fibonacci[n] == 0) {
    fibonacci[n] = fibo(n - 1) + fibo(n - 2);
  }
  return fibonacci[n];
}

int main () {
  int input(0);
  cin >> input;
  cout << fibo(input) << "\n";
}