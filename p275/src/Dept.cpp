#include <iostream>
using namespace std;
#include "Dept.h"

Dept::Dept(Dept& dept) {
	// TODO Auto-generated constructor stub

}

Dept::~Dept() {
	// TODO Auto-generated destructor stub

}

void Dept::read(){

	cout << "10개 점수 입력>> ";
	for(int i=0; i<10; i++){
		cin >> this->scores[i];
	}
}

bool Dept::isOver60(int index){
	if(this->scores[index]>=60){
		return true;
	}
	else{
		return false;
	}
}
