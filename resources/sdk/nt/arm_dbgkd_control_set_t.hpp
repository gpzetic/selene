#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/arm_dbgkd_control_set_t.start.hpp"
namespace nt
{
    // [struct _ARM_DBGKD_CONTROL_SET]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct arm_dbgkd_control_set_t         
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                 
        _m00 uint32_t _continue;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Continue
        _m01 uint32_t current_symbol_start;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .CurrentSymbolStart
        _m02 uint32_t current_symbol_end;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .CurrentSymbolEnd
                                           
        SDK_MAGIC_PROPERTIES( "_ARM_DBGKD_CONTROL_SET.$", 0xc, true, 0xcf23086e9aaff018 );                     
        SDK_FIXED_SIZE( arm_dbgkd_control_set_t, 0xc );                     
    };                                     
};
#include "magic/arm_dbgkd_control_set_t.end.hpp"
SDK_VERIFY( struct nt::arm_dbgkd_control_set_t, 0xc );
