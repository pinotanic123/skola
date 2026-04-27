// tino panic


#include <stack>
#include <iostream>
using namespace std;

int main() {

    stack<char> p, pp;
    string s;

    cout << "Upisi neka slova: ";
    cin >> s;

    
    for (char c : s) {
        if (!p.empty() && p.top() == c) {
            p.pop();   
        }
        else {
            p.push(c);
        }
    }

     
    while (!p.empty()) {
        pp.push(p.top());
        p.pop();
    }

    while (!pp.empty()) {
        cout << pp.top();
        pp.pop();
    }


    return 0;
}