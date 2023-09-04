#include <iostream>
#include <queue> 

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n, k;
    int temp;
    queue<int> q;

    cin >> n;
    cin >> k;

    for (int i = 1; i <= n; i++) {
        q.push(i);
    }

    cout << "<";
    while (!q.empty()) {

        for (int i = 0; i < k - 1; i++) {
            temp = q.front();
            q.pop();
            q.push(temp);
        }

        cout << q.front();
        q.pop();

        if (q.size() != 0) {
            cout << ", ";
        }

    }
    cout << ">";

    return 0;
}