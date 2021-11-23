#include <string>
#include "error.h"

namespace socket_o {
    class tcp {
        int port;
        std::string remote;
        void process_remote();
    public:
        tcp(std::string _remote, int _port);
    };
}
