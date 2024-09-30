#include <iostream>
using namespace std;
int main() {
    char small, capital;
    cout << "give small letter: ";
    cin >> small;
    capital = small + 'B' - 'b';
    int capital_code;
    capital_code = 'A';
    cout << capital_code << endl;
    cout << capital << endl;

    return 0;
}
// this will give capital for all letters, not only a
// this is becaus 'A'-'a' is equal to the difference between a small letter
// and a capital letter, i.e., 'y' - 32 = 'Y', and 'B'-'b'=32
// thats why it works, and will work even if we use 'B'-'b'
// opie