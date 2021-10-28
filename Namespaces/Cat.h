#ifndef CAT_H_
#define CAT_H_

#include<iostream>
using namespace std;

namespace Felines {

	const string CATNAME = "Jerry";

	class Cat {
	public:
		Cat();
		virtual ~Cat();
		void speak();
		void freak();
	};
}
#endif /* CAT_H_ */
