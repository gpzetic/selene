#pragma once
#include <sdkgen/support_library.hpp>
#include "ace_header_t.hpp"

#include "magic/access_allowed_ace_t.start.hpp"
namespace win
{
    // [struct _ACCESS_ALLOWED_ACE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct access_allowed_ace_t                 
    {                                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                      
        _m00 struct win::ace_header_t header;     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                 mask;       //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Mask
        _m02 uint32_t                 sid_start;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .SidStart
                                                
        SDK_NONVOL_PROPERTIES( "_ACCESS_ALLOWED_ACE.$", 0xc, true, 0xfd25ff8e81ecc24f );          
        SDK_FIXED_SIZE( access_allowed_ace_t, 0xc );          
    };                                          
};
#include "magic/access_allowed_ace_t.end.hpp"
SDK_VERIFY( struct win::access_allowed_ace_t, 0xc );
