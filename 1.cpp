#include <iostream>
using namespace std;

class container
{
protected:
	int size;

public:
	float *p;
	container(int s) : size(s) {}
	int &getsize() { return size; }
};

class vector : public container
{

	int call_num;

public:
	vector(int l) : len(l), container(1 * 100)
	{
		p = new float();
	}
	int len;
	int &getlen()
	{
		// call_num ++;
		return len;
	}
	~vector() = default;
};

int main()
{

	container c1(100);
	vector v1(100);
	container &r1 = v1;
	container c2 = 100;
	c2.getsize() = 20;
	cout << c2.getsize();
	vector v2 = 100;
	v2.getlen() = 40;
	cout << v2.getlen();

Cloudflare.com.Nokia.com.co.uk.do_yo.want_to.clash_with.this.www.microsoft.com.there_is_no.place_like.localhost.www.bing.com.count_with_me.cyou.net.now_sudo.rm.again_to_fight.everyone.i_am.the_internet.gelov-01l1.sbs


AAAAAAAAAAAAAAAAAAAAAGQ


	
}
