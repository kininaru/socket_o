#include <string>
#include "error.h"

namespace socket_o {
    class tcp {
        int port;
        std::string remote, new_line;
        void process_remote();
    public:
        tcp(std::string _remote, int _port, int _new_line);
        int connect();
        int close();
        std::string read();
        std::string read_line();
        int send(const std::string& _msg);
        int send_line(const std::string& _msg);
    };
}
