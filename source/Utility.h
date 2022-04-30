//
// Created by andrii on 4/30/22.
//

#ifndef CPP_FEATURES_UTILITY_H
#define CPP_FEATURES_UTILITY_H

#pragma once

namespace Utility {
    inline bool IsEven(int value) {
        return (value % 2) == 0;
    }

    inline bool IsEven(long long value) {
        return (value % 2) == 0;
    }

    void PrintIsEvenResult(int value);

    void PrintIsEvenResult(long long value);

    void PrintBool(bool value);
}

#endif //CPP_FEATURES_UTILITY_H
