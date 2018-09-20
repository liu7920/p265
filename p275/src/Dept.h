#ifndef DEPT_H_
#define DEPT_H_

class Dept {
private:
	int size;
	int* scores;
public:
	Dept(int size){
		this->size = size;
		scores = new int[size];
	}
	Dept(Dept& dept);
	~Dept();
	int getSize() {
		return size;
	}
	void read();
	bool isOver60(int index);
};

#endif /* DEPT_H_ */
