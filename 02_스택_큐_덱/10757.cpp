#include <iostream>
#include <stack> 
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string num1, num2;
    int n1, n2, sum, carry = 0;
    stack<int> s1, s2, result;


    cin >> num1;
    cin >> num2;


    for (int i = 0; i < num1.length(); i++) {
        s1.push(num1[i] - '0');
    }
    for (int i = 0; i < num2.length(); i++) {
        s2.push(num2[i] - '0');
    }

    while (!s1.empty() || !s2.empty()) {
        n1 = s1.empty() ? 0 : s1.top();
        n2 = s2.empty() ? 0 : s2.top();
        sum = n1 + n2 + carry;
        carry = sum / 10;
        sum = sum % 10;
        result.push(sum);

        if (!s1.empty()) s1.pop();
        if (!s2.empty()) s2.pop();
    }

    if (carry != 0) result.push(carry);

    while (!result.empty()) {
        cout << result.top();
        result.pop();
    }

    return 0;
}