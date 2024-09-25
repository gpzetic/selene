#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/caul_t.start.hpp"
namespace tag
{
    // [struct tagCAUL]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct caul_t              
    {                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                     
        _m00 uint32_t  c_elems;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cElems
        _m01 uint32_t* p_elems;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pElems
                               
        SDK_MAGIC_PROPERTIES( "tagCAUL.$", 0x10, true, 0x62214564b52a1605 );        
        SDK_FIXED_SIZE( caul_t, 0x10 );        
    };                         
};
#include "magic/caul_t.end.hpp"
SDK_VERIFY( struct tag::caul_t, 0x10 );