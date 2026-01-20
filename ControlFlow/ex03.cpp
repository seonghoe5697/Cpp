#include <iostream>
using namespace std;

int main() {
	int grade;
	cout << "점수 입력: ";
	cin >> grade;

	switch (grade /10) {
	case 10:
	case 9:
		cout << "A 학점 입니다." << endl;
		break;
	case 8:
		cout << "B 학점 입니다." << endl;
		break;
	case 7:
		cout << "C 학점 입니다." << endl;
		break;
	case 6:
		cout << "D 학점 입니다." << endl;
		break;
	default:
		cout << "재수강 대상 입니다." << endl;
		break;
	}
	return 0;
}
/* 출력 
점수 입력: 80
B 학점 입니다.
*/