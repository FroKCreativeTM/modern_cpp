#include <iostream>

class complex {
private :
	// 다음처럼 멤버의 기본값을 직접 지정할 수 있다.(C++11)
	double r = 0.0, i = 0.0;

public : 
	// 다음과 같이 다른 생성자에게 책임을 넘기는 것을 생성자 위임이라고 한다.(C++11)
	complex(double r, double i) : r{r}, i{i} {}
	complex(double r) : complex{r, 0,0} {}
	complex() : complex{0,0} {}
};

int main() {

	return 0;
}
