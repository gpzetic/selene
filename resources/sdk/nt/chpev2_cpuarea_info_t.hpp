#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [struct _CHPEV2_CPUAREA_INFO]
    // => Windows 11
    //
    struct chpev2_cpuarea_info_t
    {                           
                                
        SDK_MAGIC_PROPERTIES( "_CHPEV2_CPUAREA_INFO.$", 0x0, false, 0x68988bc35d7b890a );
        SDK_FIXED_SIZE( chpev2_cpuarea_info_t, 0x0 );
    };                          
};
SDK_VERIFY( struct nt::chpev2_cpuarea_info_t, 0x0 );