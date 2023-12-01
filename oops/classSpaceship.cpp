#include <iostream>
using namespace std;

class spaceship{
    
private:
    int numModules;
    int* modules;

public:
    spaceship(int x) {
        numModules = x;
        modules = new int[numModules];
        std::cout << "A spaceship with " << numModules << " modules created." << std::endl;
    }

    // Destructor
    ~spaceship() {
        delete[] modules;
        std::cout << "Memory released when the spaceship is decommissioned." << std::endl;
    }
};

int main() {

    int numModules = 10;
    spaceship mySpaceship(numModules);
    return 0;
}
