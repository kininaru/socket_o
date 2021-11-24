#include "tcp.h"
#include "const.h"
#include "check.h"

#include <utility>

socket_o::tcp::tcp(std::string _remote, int _port, int _new_line) {
    this->remote = std::move(_remote);
    this->port = _port;
    if (_new_line == CRLF) this->new_line = "\r\n";
    else this->new_line = "\n";
    init();
}

std::string socket_o::tcp::read() {

}

std::string socket_o::tcp::read_line() {

}

int socket_o::tcp::send(const std::string& _msg) {

}

int socket_o::tcp::send_line(const std::string& _msg) {

}

int socket_o::tcp::connect() {

}

int socket_o::tcp::close() {

}

socket_o::tcp::tcp(std::string _remote, int _port) {
    this->remote = std::move(_remote);
    this->port = _port;
    init();
}

void socket_o::tcp::init() {
    this->config_ok = true;
    if (check_ipv4(this->remote)) this->server_address.sin_family = AF_INET;
    else if (check_ipv6(this->remote)) this->server_address.sin_family = AF_INET6;
    else this->config_ok = false;
    this->server_address.sin_port = htons(this->port);
    if (inet_pton(AF_INET, this->remote.c_str(), &server_address.sin_addr) <= 0) this->config_ok = false;
    this->client = socket(this->server_address.sin_family, SOCK_STREAM, 0);
}

