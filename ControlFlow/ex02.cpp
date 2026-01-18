#include <iostream>
using namespace std;

int main() {
	int num1, num2, op,result;
	cout << "숫자1 숫자2 순으로 입력: ";
	cin >> num1 >> num2;
	cout << "1:+ 2:- 3:x 4:/ \n";
	cout << "연산자 선택: ";
	cin >> op;

	if (op == 1) {
		result = num1 + num2;
		cout << "두 수의 합은 " << result << "입니다. \n";
	}
	else if (op == 2) {
		result = num1 - num2;
		cout << "두 수의 차는 " << result << "입니다. \n";
	}
	else if (op == 3) {
		result = num1 * num2;
		cout << "두 수의 곱은 " << result << "입니다. \n";
	}
	else if (op == 4) {
		if (num1 == 0 || num2 == 0) {
			cout << "Error: 0으로 나눌 수 없습니다. \n";
		}
		else if (num1 > num2) {
			result = num1 / num2;
			cout << "두 수의 나눈결과 " << result << "입니다. \n";
		}
		else {
			result = num2 / num1;
			cout << "두 수의 나눈 결과 " << result << "입니다. \n";
		}
	}
}
/* 출력
	숫자1 숫자2 순으로 입력: 0 34
	1:+ 2:- 3:x 4:/
	연산자 선택: 4
	Error: 0으로 나눌 수 없습니다.
*/