#include "tcp.h"
#include "const.h"

#include <utility>

socket_o::tcp::tcp(std::string _remote, int _port, int _new_line) {
    this->remote = std::move(_remote);
    this->port = _port;
    if (_new_line == CRLF) this->new_line = "\r\n";
    else this->new_line = "\n";
}

void socket_o::tcp::process_remote() {

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
