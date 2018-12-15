#include "modconn.h"

int main(int argc, char** argv) {
    modconn_state mcs;
    modconn_init(&mcs);
    modconn_main(&mcs);
    return 0;
}


