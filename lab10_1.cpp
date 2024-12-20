#include <iostream>
using namespace std;

int main() {
    cout << "Please input grade of each student (A-F) or input 0 to exit." << endl;
    int i = 1;
    int a = 0, b = 0, c = 0, d = 0, f = 0;
    char g;

    while (true) {
        cout << "Student [" << i << "]: ";
        cin >> g;

        if (g == '0') {
            break;
        }

        switch (g) {
            case 'A': a++; break;
            case 'B': b++; break;
            case 'C': c++; break;
            case 'D': d++; break;
            case 'F': f++; break;
            default:
                cout << "Wrong input. Please input again." << endl;
                continue;
        }

        i++;
    }

    cout << "In total " << i - 1 << " students." << endl;
    cout << "A = " << a << ", ";
    cout << "B = " << b << ", ";
    cout << "C = " << c << ", ";
    cout << "D = " << d << ", ";
    cout << "F = " << f << endl;

    return 0;
}