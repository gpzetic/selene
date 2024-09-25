#pragma once
#include <sdkgen/support_library.hpp>
#include "image_mitigation_policy_t.hpp"

#include "magic/image_mitigation_sehop_policy_t.start.hpp"
namespace rtl
{
    // [struct _RTL_IMAGE_MITIGATION_SEHOP_POLICY]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct image_mitigation_sehop_policy_t              
    {                                                   
        // Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                                              
        _m00 union rtl::image_mitigation_policy_t sehop;  //{ +0x0000    +0x0000    +0x0000    } | .Sehop
                                                        
        SDK_MAGIC_PROPERTIES( "_RTL_IMAGE_MITIGATION_SEHOP_POLICY.$", 0x8, true, 0x8af4951ac67cb572 );      
        SDK_FIXED_SIZE( image_mitigation_sehop_policy_t, 0x8 );      
    };                                                  
};
#include "magic/image_mitigation_sehop_policy_t.end.hpp"
SDK_VERIFY( struct rtl::image_mitigation_sehop_policy_t, 0x8 );