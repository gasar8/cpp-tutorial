#ifndef CAT_H_
#define CAT_H_

#include <iostream>
using namespace std;

namespace cats
{

    const string CATNAME = "Freddy";

    class Cat
    {
    public:
        Cat();
        virtual ~Cat();
        void speak();
    };

} // namespace cats

#endif /* CAT_H_ */