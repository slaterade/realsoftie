#include "modconn.h"

int main(int argc, char** argv) {
    modconn_state mcs;
    modconn_init(&mcs);
    modconn_main_linux(&mcs);
    return 0;
}


