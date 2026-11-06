#include <iostream>
using namespace std;
int main() {
    int value = 0;
    if (!(cin >> value)) {
        cerr << "ERROR INPUT\n";
        return 2;
    }
    cout << "READ " << value << '\n';
    return 0;
}
