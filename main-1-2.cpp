#include <iostream>
#include "Bike.h"
#include "Bike_yard.h"

using namespace std;

int main() {
    // Bike_yard();
    // cout << "Default capacity: " << Bike_yard.capacity << endl;

    Bike_yard bike_yard(3);

    Bike b1("A", 3382);
    Bike b2("B", 5321);
    Bike b3("C", 3382);
    Bike b4("C", 3482);

    if (bike_yard.add_stock(b1)) {
        cout << "Successfully add bike 1" << endl;
    } else {
        cout << "Unsuccessfully add bike 1" << endl;
    }

    if (bike_yard.add_stock(b2)) {
        cout << "Successfully add bike 2" << endl;
    } else {
        cout << "Unsuccessfully add bike 2" << endl;
    }

    if (bike_yard.add_stock(b3)) {
        cout << "Successfully add bike 3" << endl;
    } else {
        cout << "Unsuccessfully add bike 3" << endl;
    }

    if (bike_yard.add_stock(b4)) {
        cout << "Successfully add bike 4" << endl;
    } else {
        cout << "Unsuccessfully add bike 4" << endl;
    }

    cout << "The current quantity is: " << bike_yard.get_total_stock_count() << endl;

    int a = 3382;
    cout << "The number of bikes with code 3382 is: " << bike_yard.get_stock_quantity(a) << endl;

    Bike *b = bike_yard.get_current_stock_list();
    
    for (int i = 0; i < bike_yard.get_total_stock_count(); i++) { 
        cout << "Bike " << i + 1 << " has branch: " 
                        << b[i].get_brand() << ", code: " 
                        << b[i].get_code() << endl;
    }

    // bike_yard.~Bike_yard();

    return 0;
}