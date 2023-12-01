#include <iostream>
using namespace std;
class cartitem
{
public:
    string name;
    float price;
    int quantity;
    // cartitem(string name = "", float price = 0, int quantity = 0)
    // {
    //     this->quantity = quantity;
    //     this->name = name;
    //     this->price = price;
    // }

    cartitem operator+(cartitem x)
    {
        cartitem temp;
        temp.price = (price * quantity) + (x.price * x.quantity);
        return temp;
    }
};

int main()
{
    cartitem item1;
    cout << "enter name" << endl;
    cin >> item1.name;
    cout << "enter price" << endl;
    cin >> item1.price;
    cout << "quantity" << endl;
    cin >> item1.quantity;

    cartitem item2;
    cout << "enter name" << endl;
    cin >> item2.name;
    cout << "enter price" << endl;
    cin >> item2.price;
    cout << "quantity" << endl;
    cin >> item2.quantity;

    cartitem c = item1 + item2;
    cout << c.price << endl;
}