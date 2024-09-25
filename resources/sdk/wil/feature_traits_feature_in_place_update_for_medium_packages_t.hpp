#pragma once
#include <sdkgen/support_library.hpp>

namespace wil
{
    // [struct __WilFeatureTraits_Feature_InPlaceUpdateForMediumPackages]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct feature_traits_feature_in_place_update_for_medium_packages_t
    {                                                                  
                                                                       
        SDK_MAGIC_PROPERTIES( "__WilFeatureTraits_Feature_InPlaceUpdateForMediumPackages.$", 0x1, true, 0xb14bcf86af3841d0 );
        SDK_FIXED_SIZE( feature_traits_feature_in_place_update_for_medium_packages_t, 0x1 );
    };                                                                 
};
SDK_VERIFY( struct wil::feature_traits_feature_in_place_update_for_medium_packages_t, 0x1 );