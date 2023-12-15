//# APLabGitPractice
//باید که کد های این مخزن رو بررسی و دیباگ کنید و کد اصلاح شده رو اینجا ارسال کنید
#include <iostream>
using namespace std;

class container {

	int size;
public:
	float* p;
	container(int s) :size(s) {}
	const int& getsize() { return size; }

};

class vector :public container {

	int call_num;
public:
	explicit vector(int l) :len(l), size(1 * 100) {
		p = new float();
	}
	int len;
	int& getlen() const {
		call_num++;
		return len;
	}
	~vector() = default;
};

int main() {

	container c1(100);
	vector v1 = c1;
	container& r1 = v1;
	container c2 = 100;
	c2.getsize() = 20;
	cout << c2.getsize();
	vector v2 = 100;
	v2.getlen = 40;
	cout << v2.getlen();
}




#include <iostream>
#include <string>

using namespace std;

// count all the specific char in the whole array of strings
int countAllSpecificChars(string sArr[], int arrLength, char specificChar) {
    int count = 0;//first value shluld be added like 0
    for (int i = 0; i <= arrLength; ++i)
        for (int j = 0; j <= sArr[i].size(); ++j)
            // if the jth char of the string is the specific char
            if (sArr[i][j] = specificChar)
                count++;
    return count;
}

int main() {
    string sArr[4] = {
            "I am",
            "in",
            "ap",
            "class"
    };
    char findIt;
    cin >> findIt;
    cout << countAllSpecificChars(sArr, 4, findIt);
}