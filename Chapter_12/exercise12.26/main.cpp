#include <iostream>
#include <vector>
#include <memory>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::allocator;

int main() {
    size_t n = 10;
    allocator<string> alloc;
    auto const p = alloc.allocate(n);
    string s;
    auto q = p;

    while (cin >> s && q != p + n) {
        alloc.construct(q++, s);
    }

    const size_t size = q - p;

    while (q != p) {
        alloc.destroy(--q);
    }

    alloc.deallocate(p, n);

    return 0;
}