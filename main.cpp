#include <iostream>

using namespace std;

int main() {
    string s;
    cout << "Enter string:" << endl;
    cin >> s;
    for (int i = s.size() - 1; i >= 0; i--) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            cout << (int)(s[i] - 'A' + 1) << " ";
        } else {
            cout << (int)(s[i] - 'a' + 1) << " ";
        }
    }
    cout << endl;
    return 0;
}
