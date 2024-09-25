#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct object_attributes_t; }

#include "magic/opennthandlefromname_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_OPENNTHANDLEFROMNAME]
    // => WDK 10 (NV)
    //
    struct opennthandlefromname_t                              
    {                                                          
        // WDK 10                                              
        //                                                     
        _m00 uint32_t                        dw_desired_access;  //{ +0x0000    } | .dwDesiredAccess
        _m01 struct nt::object_attributes_t* p_obj_attrib;       //{ +0x0008    } | .pObjAttrib
        _m02 void*                           h_nt_handle;        //{ +0x0010    } | .hNtHandle
                                                               
        SDK_NONVOL_PROPERTIES( "_D3DKMT_OPENNTHANDLEFROMNAME.$", 0x0, false, 0x2a2fe3c8dc0e3011 );                  
        SDK_FIXED_SIZE( opennthandlefromname_t, 0x18 );                  
    };                                                         
};
#include "magic/opennthandlefromname_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::opennthandlefromname_t, 0x18 );