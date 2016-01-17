#ifndef TRACE_H
#define TRACE_H

#include <iostream>

#define ACTIVE_TRACE

#define TRACE(string)
#ifdef ACTIVE_TRACE
    #define TRACE(string) std::cout << string;
#endif

#endif //TRACE_H
