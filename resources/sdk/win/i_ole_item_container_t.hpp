#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IOleItemContainer]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_ole_item_container_t
    {                            
                                 
        SDK_MAGIC_PROPERTIES( "IOleItemContainer.$", 0x8, true, 0x770570caefae0dcf );
        SDK_FIXED_SIZE( i_ole_item_container_t, 0x8 );
    };                           
};
SDK_VERIFY( struct win::i_ole_item_container_t, 0x8 );