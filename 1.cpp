#include <iostream>
using namespace std;

class container {

	int size;
public:
	float* p= new float; // it is uninitialized
	container(int s) :size(s){}
	int& getsize() { return size;}// const was removed

};

class vector :public container {

	int call_num;
public:
	explicit vector(int l) :len(l),container(1 * 100) ,call_num(0){
		p = new float();
	}
	int len;
	int& getlen(){
		call_num ++;//const function can't have anything changed in itself and can't return a referenc
		return len;
	}
	~vector() = default;
};

int main() {

	container c1(100);
	vector v1(100);//object from child cant be equal to father
	container& r1 = v1;
	container c2 = 100;
	c2.getsize() = 20;
	cout << c2.getsize();
	vector v2 (100); // = operator isnt overloaded or casting from int to vector
	v2.getlen() = 40; // for calling function need ()
	cout << v2.getlen();
}
//out put: 2040