#pragma once
#include <sdkgen/support_library.hpp>
#include "diag_header_t.hpp"
#include "diag_code_point_type_t.hpp"

#include "magic/diag_code_point_packet_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_DIAG_CODE_POINT_PACKET]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct diag_code_point_packet_t                            
    {                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                     
        _m00 struct dxgk::diag_header_t        header;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 enum dxgk::diag_code_point_type_t code_point_type;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .CodePointType
        _m02 uint32_t                          param1;           //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .Param1
        _m03 uint32_t                          param2;           //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .Param2
        _m04 uint32_t                          param3;           //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .Param3
                                                               
        SDK_MAGIC_PROPERTIES( "_DXGK_DIAG_CODE_POINT_PACKET.$", 0x40, true, 0x1a1de74a16ebfebd );                
        SDK_FIXED_SIZE( diag_code_point_packet_t, 0x40 );                
    };                                                         
};
#include "magic/diag_code_point_packet_t.end.hpp"
SDK_VERIFY( struct dxgk::diag_code_point_packet_t, 0x40 );
