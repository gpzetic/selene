#pragma once
#include <sdkgen/support_library.hpp>
#include "../win/ndr_dcom_async_call_state_t.hpp"

namespace nt  { struct guid_t;                           }
namespace win { struct i_call_factory_vtbl_t;            }
namespace win { struct i_release_marshal_buffers_vtbl_t; }
namespace win { struct i_rpc_stub_buffer_t;              }
namespace win { struct i_rpc_stub_buffer_vtbl_t;         }
namespace win { struct i_synchronize_vtbl_t;             }
namespace win { struct i_unknown_t;                      }
namespace win { struct ips_factory_buffer_t;             }

#include "magic/c_std_async_stub_buffer_t.start.hpp"
namespace tag
{
    // [struct tagCStdAsyncStubBuffer]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct c_std_async_stub_buffer_t                                         
    {                                                                        
        using p_rmb_vtbl_t = const struct win::i_release_marshal_buffers_vtbl_t*;                    
                                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                                   
        _m00 void*                                       lp_forwarding_vtbl;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .lpForwardingVtbl
        _m01 struct win::i_rpc_stub_buffer_t*            p_base_stub_buffer;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pBaseStubBuffer
        _m02 const struct win::i_rpc_stub_buffer_vtbl_t* lp_vtbl;              //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .lpVtbl
        _m03 int32_t                                     ref_count;            //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .RefCount
        _m04 struct win::i_unknown_t*                    pv_server_object;     //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .pvServerObject
        _m05 const struct win::i_call_factory_vtbl_t*    p_call_factory_vtbl;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .pCallFactoryVtbl
        _m06 const struct nt::guid_t*                    p_async_iid;          //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .pAsyncIID
        _m07 struct win::ips_factory_buffer_t*           p_ps_factory;         //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .pPSFactory
        _m08 p_rmb_vtbl_t                                p_rmb_vtbl;           //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .pRMBVtbl
        _m09 const struct win::i_synchronize_vtbl_t*     p_synchronize_vtbl;   //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .pSynchronizeVtbl
        _m10 struct win::ndr_dcom_async_call_state_t     call_state;           //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .CallState
                                                                             
        SDK_MAGIC_PROPERTIES( "tagCStdAsyncStubBuffer.$", 0x68, true, 0x34c3673e43c46d7e );                    
        SDK_FIXED_SIZE( c_std_async_stub_buffer_t, 0x68 );                    
    };                                                                       
};
#include "magic/c_std_async_stub_buffer_t.end.hpp"
SDK_VERIFY( struct tag::c_std_async_stub_buffer_t, 0x68 );