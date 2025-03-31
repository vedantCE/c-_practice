// Volume of Ellipsoid = (4/3) × pi × radius1 × radius2 × radius3. Write a program
// having function volume () which takes three float arguments: radius1, radius 2 and
// radius3 and returns the volume of an Ellipsoid. Use default argument of 2 for
// radius1, 3 for radius2 and 4 for radius3 so that if arguments are omitted then the
// volume of Ellipsoid is always 100.48. Write a main ( ) function that gets values from
// the user to test this function.
#include <iostream>
using namespace std;

float volumeOfEllipsoid(float radius1 = 2, float radius2 = 3, float radius3 = 4) {
    float volume = (4.0 / 3.0) * 3.1416 * radius1 * radius2 * radius3;
    return volume;
}

int main() {
    cout << "Default volume: " << volumeOfEllipsoid() << endl;
    cout << "Volume with radius1 = 1: " << volumeOfEllipsoid(1) << endl;
    cout << "Volume with radius1 = 1, radius2 = 2: " << volumeOfEllipsoid(1, 2) << endl;
    cout << "Volume with radius1 = 1, radius2 = 2, radius3 = 3: " << volumeOfEllipsoid(1, 2, 3) << endl;

    return 0;
}
