#include <string>
#include "Bike.h"

using namespace std;

Bike::Bike() {
    // name = new string;
    // *name = ""; 
    // code = 0;
    name = "";
    code = 0;
};

Bike::Bike(string brand, int code) {
    name = new string;
    *name = brand;
    this->code = code;
};

string Bike::get_brand() {
    return *name;
};

int Bike::get_code() {
    return code;
};

Bike::~Bike() {
    delete name;
};