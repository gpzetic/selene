#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _NDIS_GFT_PROFILE_TYPE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class gft_profile_type_t : int32_t
    {                                      
        undefined =            0x0,          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        exact_match =          0x1,          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        header_transposition = 0x2,          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        wildcard_match =       0x3,          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =                  0x4,          // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                     
};
