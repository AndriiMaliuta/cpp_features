//
// Created by andrii on 4/30/22.
//

#include <iostream>
#include <ostream>
#include <string>
#include "../pchar.h"

enum class Color {
    Red,
    Green,
    Orange
};

enum Flavor : unsigned short int {
    Vanilla,
    Chocolate
};

int _pmain(int /*argc*/, char * /*argv*/[]) {
    Flavor f = Vanilla;
    f = Mint;
    Color c = Color::Green;


}