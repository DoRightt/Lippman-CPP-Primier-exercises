#include <memory>

using std::unique_ptr;

int main() {
    unique_ptr<int> upiA(new int(1));
    unique_ptr<int> upiB(upiA);
    unique_ptr<int> upiC = upiA;

    return 0;
}