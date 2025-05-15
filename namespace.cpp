#include <iostream>

namespace first {
    int x = 1;
}

namespace second {
    int x = 2;
}

int main() {
    // Namespace provides a solution for preventing name conflicts
    // in large projects. Each entity need a unique name.
    // A namespace allows for identically named entities
    // as long as the namespaces are different.

    using std::cout;
    using std::string;

    int x = 0;
    string name = "Bro";

    cout << x << '\n';
    cout << first::x;
    cout << second::x;

    // using namespace first;
    // std::cout << x;

    return 0;
}