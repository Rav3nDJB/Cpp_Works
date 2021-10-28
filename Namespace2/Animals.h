#ifndef ANIMALS_H_
#define ANIMALS_H_

#include<iostream>
using namespace std;

namespace LibApp {
	const string CATNAME = "Tom";
	class Cat {
	public:
		Cat();
		virtual ~Cat();
		void speak();
	};
} /* namespace LibApp */
#endif /* ANIMALS_H_ */
