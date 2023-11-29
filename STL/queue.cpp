#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<string> q;

    q.push("hello");
    q.push("users");
    q.push("welcome");
    q.push("to");
    q.push("coding");

    cout << "first word is ->" << q.front() << endl;
    cout << "element at top is: " << q.front() << endl;
    cout << "Empty or not: " << q.empty() << endl;
    cout << "element at last: " << q.back() << endl;
    cout << "Size before pop: " << q.size() << endl;
    q.pop();
    cout << "Size after pop: " << q.size() << endl;
}