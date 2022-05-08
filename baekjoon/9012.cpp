#include <stdio.h>
#include <stack>
#include <string.h>

using namespace std;

int main(){
	
	int T; // 테스트 케이스 수
	scanf("%d", &T);

	for (int i = 0; i < T; i++) {

		stack<char> s; // 스택
		char arr[55]; // 괄호 문자열

		scanf("%s", arr);
		int len = strlen(arr);

		for (int j = 0; j < len; j++) {
			if (arr[j] == '(')
				s.push(arr[j]);
			else {
				if (s.empty()) {
					s.push(arr[j]);
				}
				else {
					if (s.top() == '(') {
						s.pop();
					}
					else {
						s.push(arr[j]);
					}
				}
			}
		}
		if (s.empty())
			printf("YES\n");
		else
			printf("NO\n");
	}
	

	return 0;
}