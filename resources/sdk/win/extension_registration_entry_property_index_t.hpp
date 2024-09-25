#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum ExtensionRegistrationEntryPropertyIndex]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class extension_registration_entry_property_index_t : uint32_t
    {                                                                  
        vendor =            0x0,                                         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        icon =              0x1,                                         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        display_name =      0x2,                                         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        description =       0x3,                                         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        custom_properties = 0x4,                                         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        num_properties =    0x5,                                         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                                 
};