#include "iostream"
#include "test_check.h"

using namespace std;

int main() {
    int ret;
    if ((ret = test_check_ipv4())) return ret;
    return 0;
}
