#include <iostream>
using namespace std;
class secret
{
public:
    string name;
    int security_level;

    secret(string n = "unknown", int s = 0)
    {
        name = n;
        security_level = s;
    }

    ~secret()
    {
        cout << "the secret base is destoryed";
    }
};

int main()
{
    secret l("New York",4);

        cout << "a secret base with the location set to " << l.name << " and the security level set to " << l.security_level << "." << endl;

}