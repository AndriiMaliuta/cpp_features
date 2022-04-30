//
// Created by andrii on 4/30/22.
//

#ifndef CPP_FEATURES_CAT_H
#define CPP_FEATURES_CAT_H
#include "string"


namespace HCats {
    class Cat {
        int age;
        std::string name;

    public:
        Cat(std::string name, int age) {}
        virtual ~Cat(void );

        std::string Meow() {
            return "Meow!";
        }
    };
}


#endif //CPP_FEATURES_CAT_H
