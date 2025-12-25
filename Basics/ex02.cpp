#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int korean, math, english;
	
	cout << "국어 점수: ";
	cin >> korean;
	cout << "수학 점수: " ;
	cin >> math;
	cout << "영어 점수: " ;
	cin >> english;

	int total = korean + math + english;
	double average = (double)total / 3;
	cout << "총합: " << total << "점\n";
	cout << "평균: " << average << "점\n";

	return 0;
}
/* 출력
국어 점수: 77
수학 점수: 86
영어 점수: 81
총합: 244점
평균: 81.3333점
*/