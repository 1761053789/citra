// Copyright 2015 Citra Emulator Project
// Licensed under GPLv2 or any later version
// Refer to the license.txt file included.

#include "pica.h"

namespace Pica {

static State current_state;

State& GetState() {
    return current_state;
}

void Init() {
    memset(&current_state, 0, sizeof(State));
}

void Shutdown() {
}

}
