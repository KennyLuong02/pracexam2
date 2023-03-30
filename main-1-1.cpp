#include <iostream>
#include "Bike.h"

using namespace std;

int main() {
    Bike b1;
    cout << "Default brand: " << b1.get_brand() << ", default code: " << b1.get_code() << endl;

    // Bike b2;
    Bike b2("Rextor", 5313);
    // b2("Rextor", 5313);
    cout << "New brand: " << b2.get_brand() << ", new code: " << b2.get_code() << endl;

    // b1.~Bike();
    // b2.~Bike();

    return 0;
}