#include "modconn.h"
#include "stdio.h"

/* module controller must be initialized */
int modconn_init(modconn_state* mcs) {
    return 0;
}

/* the function which executes all the real time modules at a constant integration step */
int modconn_pulse(modconn_state* mcs, uint64_t elapsed) {
    mcs->accumulator += elapsed;
    if (mcs->accumulator >= mcs->timestep) {
        mcs->accumulator -= mcs->timestep;
        printf("-- iconst");
    }
    return 0;
}

/* this function will block */
int modconn_main_linux(modconn_state* mcs) {
    return 0;
}
