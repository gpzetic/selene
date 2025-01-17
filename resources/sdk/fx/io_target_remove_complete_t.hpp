#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf { struct wdfiotarget_t; }

#include "magic/io_target_remove_complete_t.start.hpp"
namespace fx
{
    // [struct FxIoTargetRemoveComplete]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct io_target_remove_complete_t                                 
    {                                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                                             
        _m00 sdk::function<void(struct wdf::wdfiotarget_t*)>* m_method;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_Method
                                                                       
        SDK_MAGIC_PROPERTIES( "FxIoTargetRemoveComplete.$", 0x8, true, 0x2c3c5652cce649ee );         
        SDK_FIXED_SIZE( io_target_remove_complete_t, 0x8 );            
    };                                                                 
};
#include "magic/io_target_remove_complete_t.end.hpp"
SDK_VERIFY( struct fx::io_target_remove_complete_t, 0x8 );
