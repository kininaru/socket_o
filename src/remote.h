#include "cstring"

bool check_ipv4(const std::string& ip) {
    pass
}

int process_remote(const std::string& remote) {
    if (remote.find_first_of(':') != std::string::npos) return socket_o::IPv6;
    if (remote.find_last_of('.') == std::string::npos) return socket_o::DOMAIN;
    if (check_ipv4(remote)) return socket_o::IPv4;
    return socket_o::DOMAIN;
}