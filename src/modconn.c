#include "modconn.h"

/* module controller must be initialized */
int modconn_init(modconn_state* mcs) {
    return 0;
}

/* the function which executes all the real time modules at a constant integration step */
int modconn_pulse(modconn_state* mcs, uint64_t elapsed) {
    return 0;
}

/* this function will block */
int modconn_main_linux(modconn_state* mcs) {
    return 0;
}
