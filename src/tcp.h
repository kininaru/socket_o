#include <string>
#include "error.h"
#include <netinet/in.h>
#include <arpa/inet.h>

namespace socket_o {
    class tcp {
        int port, client{};
        std::string remote, new_line;
        struct sockaddr_in server_address{};
        void init();
    public:
        bool config_ok{};
        tcp(std::string _remote, int _port);
        tcp(std::string _remote, int _port, int _new_line);
        int connect();
        int close();
        std::string read();
        std::string read_line();
        int send(const std::string& _msg);
        int send_line(const std::string& _msg);
    };
}
