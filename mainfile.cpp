#include <iostream>
#include <cstdlib> 
#include <ctime>

using namespace std;

// function for dice roller that prints 2 random numbers
// between 1 and 6 everytime it is ran

int main() {

    srand(static_cast<unsigned int>(time(0)));

    int minValue = 1;
    int maxValue = 6; 

    int firstDice = (rand() % (maxValue - minValue + 1)) + minValue;
    int secondDice = (rand() % (maxValue - minValue + 1)) + minValue;

    cout << "The first dice roll yields: " << firstDice << endl;
    cout << "The second dice roll yields: " << secondDice << endl;

    return 0;

}
