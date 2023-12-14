#include <iostream>
using namespace std;

class container {

	int size;
public:
	float* p;
	container(int s) :size(s){}
	int& getsize() { return size;}//removing size so it can be used both as getter and as setter

};
class vector :public container {

	int call_num;
public:
	explicit vector(int l) :len(l),container(1 * 100){ //should use cunstrcutor
		p = new float();
	}
	int len;
	int& getlen() { //removing const becuase it's changing a value in the body
		call_num ++;
		return len;
	}
	~vector() = default;
};

int main() {

	container c1(100);
	//vector v1 = c1;
	//container& r1 = v1;
	container c2 = 100;
	c2.getsize() = 20;
	cout << c2.getsize();
	vector v2(100); //put it in () becuase the custrcutor is explicit
	v2.getlen() = 40;//it's a function so getlen() is correct
	cout << v2.getlen();
}