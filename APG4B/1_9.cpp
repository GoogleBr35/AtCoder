#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int x, a, b;
    cin >> x >> a >> b;

    x++;

    cout << x << endl;

    x *= (a + b);

    cout << x << endl;

    x *= x;

    cout << x << endl;

    cout << x - 1 << endl;
}