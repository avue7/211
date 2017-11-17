#include <iostream>
#include "location.h"
#include <vector>
using namespace std;

int main()
{
    double latitude, longitude;
    while ( cin >> latitude)
    {
        cin >> longitude;
    }
    vector <Location *> my_vector(latitude, longitude);
    my_vector.push_back(new Location(latitude, longitude));
    
}