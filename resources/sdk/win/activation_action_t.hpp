#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum ActivationAction]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class activation_action_t : int32_t 
    {                                        
        normal_activation =           0x0,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        brokered_activation =         0x1,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        desktop_brokered_activation = 0x2,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        disallow_activation =         0x3,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                       
};