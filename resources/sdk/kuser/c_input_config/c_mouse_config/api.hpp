#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_input_config::c_mouse_config
{
    // [FindInputSpace@CMouseConfig@CInputConfig]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1dfac, 0x243e0 bytes
    // win32kbase.sys .text:0x64ab0, 0x27ef0 bytes
    // win32kbase.sys .text:0x57274, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) find_input_space;
};
#include "magic/api.end.hpp"