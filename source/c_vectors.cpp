//
// Created by andrii on 4/30/22.
//
#include <iostream>
#include <ostream>
#include <vector>
#include <string>

using namespace std;

vector<std::string> cats;

void catsPopulate2() {
    unsigned long size = cats.capacity();
    printf("cats size is %lu", size);
    cats.push_back("Murz");
    cats.emplace_back("Vasyl");
    std::cout << cats.at(0);

}