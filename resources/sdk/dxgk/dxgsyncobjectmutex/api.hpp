#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgsyncobjectmutex
{
    // [??0DXGSYNCOBJECTMUTEX@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x2b5e0, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??0DXGSYNCOBJECTMUTEX@@QEAA@PEAVDXGSYNCOBJECT@@@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xd304, 0x60098 bytes
    // dxgkrnl.sys .text:0x239cc, 0x762b0 bytes
    // dxgkrnl.sys .text:0x2b650, 0x84380 bytes
    // dxgkrnl.sys .text:0x24564, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) construct_instance_;
    
    // [??1DXGSYNCOBJECTMUTEX@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x11050, 0x60098 bytes
    // dxgkrnl.sys .text:0x55c4, 0x762b0 bytes
    // dxgkrnl.sys .text:0x2b150, 0x84380 bytes
    // dxgkrnl.sys .text:0x6964, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
