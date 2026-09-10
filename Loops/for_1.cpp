
#include <iostream>

int main() {
    for (int i = 0; i < 10; i++) {
        std::cout << i << "\n";
    }

    for (int i = 0; i < 3; i++) {
        std::string str;
        if ( i== 0) {
            str = "zero\n";
        } else if (i == 1) {
            str = "one\n";
        } else if (i == 2) {
            str = "two\n";
        }
        std::cout << str;
    }
}
