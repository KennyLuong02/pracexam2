#include <iostream>
#include "Bike.h"
#include "Bike_yard.h"

using namespace std;

int main() {
    // Bike_yard();
    // cout << "Default capacity: " << Bike_yard.capacity << endl;

    Bike_yard(3);

    Bike b1("A", 3382);
    Bike b2("B", 5321);
    Bike b3("C", 3382);
    Bike b4("C", 3482);

    if (Bike_yard::add_stock(b1)) {
        cout << "Successfully add bike 1" << endl;
    } else {
        cout << "Unsuccessfully add bike 1" << endl;
    }

    if (Bike_yard::add_stock(b2)) {
        cout << "Successfully add bike 2" << endl;
    } else {
        cout << "Unsuccessfully add bike 2" << endl;
    }

    if (Bike_yard::add_stock(Bike.b3)) {
        cout << "Successfully add bike 3" << endl;
    } else {
        cout << "Unsuccessfully add bike 3" << endl;
    }

    if (Bike_yard::add_stock(Bike.b4)) {
        cout << "Successfully add bike 4" << endl;
    } else {
        cout << "Unsuccessfully add bike 4" << endl;
    }

    cout << "The current quantity is: " << Bike_yard::get_total_stock_count() << endl;

    cout << "The number of bikes with code 3382 is: " << Bike_yard::get_stock_quantity(3382) << endl;

    Bike *b;
    b = Bike_yard::get_current_stock_list();
    
    // for (int i = 0; i < get_total_stock_count(); i++) {
    //     b[i] = 
    //     cout << "Bike" << i << " has branch: " << b[i].get_brand() << ", code: " << b[i].get_code() << endl;
    // }

    // b1.~Bike();
    // b2.~Bike();

    return 0;
}