#include <iostream>
#include <string>
using namespace std;

#include "Morse.h"

int main() {
	Morse m;
	char text1[100];
	string text;
	int q;
	bool t;
	string morse;

	cout << "아래에 영문 텍스트를 입력하세요. 모스 부호로 바꿉니다." << endl;
	cout << "입력 : " ;
	cin.getline(text1,100,'\n');
	text = text1;
	m.text2Morse(text,morse);
	cout << "모스부호 출력 : ";
	cout << morse << endl;

	cout << "모스 부호를 다시 영문 텍스트로 바꿉니다." << endl;

	t = m.morse2Text(morse,text);
	cout << "\n" << text << endl;
	return 0;
}
