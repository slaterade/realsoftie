#ifndef __modconn_h__
#define __modconn_h__

#include "stdint.h"

/* function signature for the module_init pointer */
typedef int (*modsig_init)(char* name, char* version);

/* function signature for the module_exec pointer */
typedef int (*modsig_exec)(uint64_t dt, void* buslink);

/* a registered module will be in one of these modes */
typedef enum {
    modmode_on,
    modmode_off
} modmode;

/* handle to a module, with some extra bookkeeping info */
typedef struct modhandle_t {
    modsig_init fptr_init;
    modsig_exec fptr_exec;
    uint64_t stat_samples[100];
    modmode mode;
    struct modhandle_t* next;
} modhandle;

/* state for the module controller */
typedef struct {
    modhandle* module_list;
    uint64_t timestep;
    uint64_t accumulator;
} modconn_state;

/* module controller must be initialized */
int modconn_init(modconn_state* mcs);

/* the function which executes all the real time modules at a constant integration step */
int modconn_pulse(modconn_state* mcs, uint64_t elapsed);

/* this function will block */
int modconn_main(modconn_state* mcs);

#endif
