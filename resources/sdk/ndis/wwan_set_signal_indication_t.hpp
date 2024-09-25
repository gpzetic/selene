#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"
#include "../wwan/set_signal_indication_t.hpp"

#include "magic/wwan_set_signal_indication_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_WWAN_SET_SIGNAL_INDICATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wwan_set_signal_indication_t                             
    {                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                          
        _m00 struct ndis::object_header_t         header;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 struct wwan::set_signal_indication_t signal_indication;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .SignalIndication
                                                                    
        SDK_MAGIC_PROPERTIES( "_NDIS_WWAN_SET_SIGNAL_INDICATION.$", 0xc, true, 0x20d1ef93dcd8e96 );                  
        SDK_FIXED_SIZE( wwan_set_signal_indication_t, 0xc );                  
    };                                                              
};
#include "magic/wwan_set_signal_indication_t.end.hpp"
SDK_VERIFY( struct ndis::wwan_set_signal_indication_t, 0xc );