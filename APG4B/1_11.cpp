#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)n; i++)

int main(void) {
    int N, A;
    cin >> N >> A;

    for(int i = 0; i < N; i++) {
        string op;
        int B;
        cin >> op >> B;
        if(op == "+") A += B;
        else if(op == "-") A -= B;
        else if(op == "*") A *= B;
        else if(op == "/") {
            if(B != 0) A /= B;
            else {
                cout << "error" << endl;
                break;
            }
        }
        cout << i + 1 << ":" << A << endl;
    }
}