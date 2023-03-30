#include <string>
#include "Bike_yard.h"
#include "Bike.h"

using namespace std;

//
Bike_yard::Bike_yard() {
    this->capacity = 0;
    current_stock = 0;
};

//
Bike_yard::Bike_yard(int capacity) {
    bikes = new Bike(capacity);
    this->capacity = capacity;
    current_stock = 0;
};

//
int Bike_yard::get_total_stock_count() {
    return current_stock;
};

//
int Bike_yard::get_stock_quantity(int code) {
    int counter = 0;

    for (int i = 0; i < capacity; i++) {
        if (bikes[i].get_code() == code) {
            counter++;
        }
    }

    return counter;
};

Bike *Bike_yard::get_current_stock_list() {
    return bikes;
};

//
bool Bike_yard::add_stock(Bike b) {
    bool asc = false;

    if (current_stock < capacity) {
        bikes[current_stock] = b;
        current_stock++;
        asc = true;
        return asc;
    } else {
        return asc;
    }
};

Bike_yard::~Bike_yard() {
    delete[] bikes;
};