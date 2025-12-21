#include <iostream>
using namespace std;

int main() {
	int food, transport, people;
	cout << "식비를 입력하세요: ";
	cin >> food;
	cout << "교통비를 입력하세요: ";
	cin >> transport;
	cout << "인원수를 입력하세요: ";
	cin >> people;

	int total = food + transport;
	float perPerson = total / people;

	cout << "---결과---" << endl;
	cout << "총 지출 금액은 " << total << "원 입니다." << endl;
	cout << "1인당 금액은 " << perPerson << "원 입니다." << "\n";

	return 0;
}
/* 
	식비를 입력하세요: 10000
	교통비를 입력하세요: 5000
	인원수를 입력하세요: 3
	---결과---
	총 지출 금액은 15000원 입니다.
	1인당 금액은 5000원 입니다.
*/