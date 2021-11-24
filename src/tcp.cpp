#include "tcp.h"
#include "const.h"
#include "check.h"

#include <utility>

socket_o::tcp::tcp(std::string _remote, int _port, int _new_line) {
    this->remote = std::move(_remote);
    this->port = _port;
    if (_new_line == CRLF) this->new_line = "\r\n";
    else this->new_line = "\n";
    init_server_address();
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
    init_server_address();
}

void socket_o::tcp::init_server_address() {
    this->server_address.sin_family;
}

