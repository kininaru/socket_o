#include "test_check.h"
#include "../src/check.h"

int test_check_ipv4() {
    std::string ips[] = {
            "192.168.1.1",
            "256.1.1.1",
            "1.2.3.4.",
            ".1.2.3.4.",
            "1.257.1.-1"
    };
    bool ans[] = { true, false, false, false, false };
    for (int i = 0; i < 5; i++) if (check_ipv4(ips[i]) != ans[i]) return false;
    return true;
}

