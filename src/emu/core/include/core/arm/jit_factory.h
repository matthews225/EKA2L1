#pragma once

#include <arm/jit_interface.h>
#include <memory>

namespace eka2l1 {
    class timing_system;
    class memory_system;
    class disasm;

    namespace arm {
        enum jitter_arm_type {
            unicorn = 0
        };

        class jit_interface;
        using jitter = std::unique_ptr<jit_interface>;

        // Create a jitter. A JITter is unique by itself.
        jitter create_jitter(timing_system* timing, memory_system* mem, 
                             disasm* asmdis, jitter_arm_type arm_type);
    }
}
