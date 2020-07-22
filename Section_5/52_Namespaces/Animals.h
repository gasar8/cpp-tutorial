#ifndef ANIMALS_H_
#define ANIMALS_H_

#include <iostream>
using namespace std;

namespace bleban
{

    const string CATNAME = "Tiddles";

    class Cat
    {
    public:
        Cat();
        virtual ~Cat();
        void speak();
    };

} /* namespace bleban*/

#endif /* ANIMALS_H_ */