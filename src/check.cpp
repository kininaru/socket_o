#include "check.h"

bool check_ipv4(const std::string& ip) {
    const char *ip_str = ip.c_str();
    int dot_count = 0, sum = 0, len = (int) ip.size();
    for (int i = 0; i < len; i++) {
        if ('0' < ip_str[i] && ip_str[i] < '9') {
            sum *= 10;
            sum += ip_str[i] - '0';
        } else if (ip_str[i] == '.') {
            if (++dot_count > 3) return false;
            if (sum > 255 || sum < 0) return false;
            sum = 0;
        } else return false;
    }
    return true;
}

bool check_ipv6(const std::string& ip) {

}
