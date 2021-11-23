#include "tcp.h"

#include <utility>

socket_o::tcp::tcp(std::string _remote, int _port) {
    this->remote = std::move(_remote);
    this->port = _port;
}

void socket_o::tcp::process_remote() {

}
