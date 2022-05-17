#include "best.h"

int anything(int (* lambda)(void *), void *arg) {
    return lambda(arg);
}
