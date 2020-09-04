#include <initializer_list>
#include <iostream>

template <typename t>
class vector {
private :
	T * data;
	int my_size;

public :
	vector(std::initializer_list<T> values) :
		my_size(values.size()), data(new T[my_size])
	{
		std::copy(std::begin(values), std::end(values), std::begin(data));
	}

	vector& operator=(std::initializer_list<T> values) {
		assert(my_size == values.size());
		std::copy(std::begin(values), std::end(values), std::begin(data));
		return *this;
	}
}

int main() {
	std::vector<int> v= {1, 2, 3};
	std::vector<int> v2{1,2,3};

	std::vector<float> x = lu_solve(A, std::vector<float>{1.0,2.0,3.0});

	return 0;
}
