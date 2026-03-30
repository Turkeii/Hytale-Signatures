#pragma once
//To be used with signature offsets provied in Signatures.hpp
    template <typename ret>
    inline auto FuncFromSigOffset(uintptr_t sig, int offset) -> ret {
        if (sig != 0x0) {
            sig += offset + 4 + *reinterpret_cast<int*>(sig + offset);
        }
        return reinterpret_cast<ret>(sig);
    }
