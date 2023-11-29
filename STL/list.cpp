#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> l;

    // copying a list
    list<int> c(l);

    l.push_front(10);
    l.push_back(20);

    cout << "Size of array: " << l.size() << endl;
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;
    l.erase(l.begin());
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;
}