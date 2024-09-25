#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/nvme_cdw13_get_log_page_t.start.hpp"
namespace stor::port
{
    // [struct NVME_CDW13_GET_LOG_PAGE]
    // => Windows 11
    //
    struct nvme_cdw13_get_log_page_t
    {                               
        // Windows 11      
        //                 
        _m00 uint32_t lpou;           //{ +0x0000    } | .LPOU
                                    
        SDK_MAGIC_PROPERTIES( "NVME_CDW13_GET_LOG_PAGE.$", 0x0, false, 0x16aedb3b331b55ba );     
        SDK_FIXED_SIZE( nvme_cdw13_get_log_page_t, 0x4 );     
    };                              
};
#include "magic/nvme_cdw13_get_log_page_t.end.hpp"
SDK_VERIFY( struct stor::port::nvme_cdw13_get_log_page_t, 0x4 );