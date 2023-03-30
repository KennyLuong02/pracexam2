#ifndef BIKE_H
#define BIKE_H
#include <string>

using namespace std;

class Bike {
    private:
        string name;
        int code;

    public:
        Bike();            // default constructor - makes new bike with code number 0 and
                        // and empty string "" for brand

        Bike(string brand, int code);  // constructor taking string representing brand
                                    // and integer representing code for that brand

        string get_brand();            // returns the brand of the bike
        int get_code();                     // returns the brand code number of bike
        ~Bike();                            // destructor
};

#endif