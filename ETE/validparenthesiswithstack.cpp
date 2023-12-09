#include <iostream>
#include <stack>
using namespace std;
bool balance(string s)
{
    stack<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            st.push(s[i]);
        }
        else
        {
            if (s.empty())
            {
                return false;
            }
            else if (s[i] == ')' && st.top() != '(' ||
                     s[i] == '}' && st.top() != '{' ||
                     s[i] == ']' && st.top()!='[')
                {
                    return false;
                }
            else{
                st.pop();
            }
        }

    }
    return st.empty();
}

int main()
{
    string m;
    cin >> m;
    bool x=balance(m);
    if(x){
        cout<<"Valid";
    }
    else{
        cout<<"Not Valid";
    }
}
