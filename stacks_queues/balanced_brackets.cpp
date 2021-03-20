#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool isValid(string s)
{
    stack<char> st;
    int i = 0;
    while (i < s.size())
    {
        switch (s[i])
        {
        case '{':
            st.push(s[i]);
            break;
        case '(':
            st.push(s[i]);
            break;
        case '[':
            st.push(s[i]);
            break;
        case '}':
            if (st.size() && st.top() == '{')
                st.pop();
            else
                return false;
            break;
        case ')':
            if (st.size() && st.top() == '(')
                st.pop();
            else
                return false;
            break;
        case ']':
            cout << "correct case: " << endl;
            if (st.size() && st.top() == '[')
                st.pop();
            else
                return false;
            break;
        }
        i++;
    }
    return st.size() ? false : true;
}