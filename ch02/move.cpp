#include <iostream>

class vector {
	private : 
		double * data;
		int my_size;

	public : 
		vector(vector&& v) 
			: my_size(v.my_size), data(new double[my_size])
		{
			for(int i = 0; i < v.size(); i++) {
				data[i] = v[i];
			}
		}
}

int main() {
	int w = 10;
	// 이 때 v는 lvalue w는 rvalue이다.
	int v = w;		

	// copy는 깊은 복사를 위해 있는 문법이다.
	copy(v, w);

	return 0;
}
