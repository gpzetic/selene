#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf { struct wdffileobject_t; }

#include "magic/file_object_file_close_t.start.hpp"
namespace fx
{
    class callback_lock_t;

    // [class FxFileObjectFileClose]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class file_object_file_close_t                      
    {                                                   
        using method_t = sdk::function<void(struct wdf::wdffileobject_t*)>*;                
                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                              
        _m00 class fx::callback_lock_t* m_callback_lock;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_CallbackLock
        _m01 method_t                   method;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Method
                                                        
        SDK_MAGIC_PROPERTIES( "FxFileObjectFileClose.$", 0x10, true, 0x4828d6494ad1fbdc );                
        SDK_FIXED_SIZE( file_object_file_close_t, 0x10 );                
    };                                                  
};
#include "magic/file_object_file_close_t.end.hpp"
SDK_VERIFY( class fx::file_object_file_close_t, 0x10 );
