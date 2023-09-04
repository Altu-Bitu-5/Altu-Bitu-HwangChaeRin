#include <iostream>
#include <stack> 

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    while (true) {

        stack<char> s;
        string str;

        getline(cin, str);
        if (str[0] == '.') break;

        if (str.length() > 100) {
            str = str.substr(0, 100);
        }

        for (int i = 0; i < str.length() - 1; i++) {
            if (str[i] == '(') {
                s.push(str[i]);
            }
            if (str[i] == '[') {
                s.push(str[i]);
            }
            if (str[i] == ')') {
                if (!s.empty() && s.top() == '(') {
                    s.pop();
                }
                else { s.push(str[i]); break; }
            }
            if (str[i] == ']') {
                if (!s.empty() && s.top() == '[') {
                    s.pop();
                }
                else { s.push(str[i]); break; }
            }

        }

        if (s.empty()) {
            cout << "yes\n";
        }
        else {
            cout << "no\n";
        }
    }



    return 0;

}

