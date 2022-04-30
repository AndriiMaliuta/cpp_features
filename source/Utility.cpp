//
// Created by andrii on 4/30/22.
//
#include <iostream>
#include <ostream>
#include "Utility.h"

using namespace Utility;

void Utility::PrintIsEvenResult(int value) {
   std::wcout << L"The number " << value << L" is "
        << (IsEven(value) ? L"" : L"not ") << L"even" << std::endl;
}
