#include <iostream>
#include <climits>
#include <iomanip>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

void count() {
    int a = 3;
    int b = 4;
    bool isBlack = isblank(a);

}

struct Cat {
    std::string name;
};

vector<string> names;

void catsPopulate() {
    vector<std::string> cats;
    unsigned long size = cats.capacity();
    printf("cats size is %lu", size);
    cats.push_back("Murz");
    cats.emplace_back("Vasyl");
    std::cout << cats.at(0) << endl;
    std::cout << cats.at(1) << endl;

}
void writeFile() {

    string name;
    ofstream myFile;
    myFile.open("test.txt", ios_base::app);
    vector<string>::iterator itName = names.begin();
    while(itName != names.end()) {
        myFile << *itName << endl;
        itName++;
    }
    myFile.close();
}

void misc2() {
    int16_t b = 4;
    unsigned int a1 = UINT16_MAX;
    sizeof(a1);
    string name = "Petro";
//    int sett = std::setw(4);
    std:cout << " added ";
    cout << "";
    std::cout << "Hello, " << name << std::endl;
}




int main() {
    for (int i = 0; i < 2; ++i) {
        printf("Name is %s", "");
    }
    catsPopulate();
    return 0;
}



