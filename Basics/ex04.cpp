#include <iostream>
using namespace std;

int main() {
	char alphabet;
	cout << "알파벳 입력: ";
	cin >> alphabet;
	char new_alphabet = alphabet + 1;
	cout << "다음 알파벳은 " << new_alphabet << "입니다. ";

	return 0;
}
/* 출력
알파벳 입력: c
다음 알파벳은 d입니다.
*/