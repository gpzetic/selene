#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/disk_space_information_t.start.hpp"
namespace win
{
    // [struct DISK_SPACE_INFORMATION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct disk_space_information_t                            
    {                                                          
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                         
        //                                                     
        _m00 uint64_t actual_total_allocation_units;             //{ +0x0000    +0x0000    +0x0000    } | .ActualTotalAllocationUnits
        _m01 uint64_t actual_available_allocation_units;         //{ +0x0008    +0x0008    +0x0008    } | .ActualAvailableAllocationUnits
        _m02 uint64_t actual_pool_unavailable_allocation_units;  //{ +0x0010    +0x0010    +0x0010    } | .ActualPoolUnavailableAllocationUnits
        _m03 uint64_t caller_total_allocation_units;             //{ +0x0018    +0x0018    +0x0018    } | .CallerTotalAllocationUnits
        _m04 uint64_t caller_available_allocation_units;         //{ +0x0020    +0x0020    +0x0020    } | .CallerAvailableAllocationUnits
        _m05 uint64_t caller_pool_unavailable_allocation_units;  //{ +0x0028    +0x0028    +0x0028    } | .CallerPoolUnavailableAllocationUnits
        _m06 uint64_t used_allocation_units;                     //{ +0x0030    +0x0030    +0x0030    } | .UsedAllocationUnits
        _m07 uint64_t total_reserved_allocation_units;           //{ +0x0038    +0x0038    +0x0038    } | .TotalReservedAllocationUnits
        _m08 uint64_t volume_storage_reserve_allocation_units;   //{ +0x0040    +0x0040    +0x0040    } | .VolumeStorageReserveAllocationUnits
        _m09 uint64_t available_committed_allocation_units;      //{ +0x0048    +0x0048    +0x0048    } | .AvailableCommittedAllocationUnits
        _m10 uint64_t pool_available_allocation_units;           //{ +0x0050    +0x0050    +0x0050    } | .PoolAvailableAllocationUnits
        _m11 uint32_t sectors_per_allocation_unit;               //{ +0x0058    +0x0058    +0x0058    } | .SectorsPerAllocationUnit
        _m12 uint32_t bytes_per_sector;                          //{ +0x005c    +0x005c    +0x005c    } | .BytesPerSector
                                                               
        SDK_MAGIC_PROPERTIES( "DISK_SPACE_INFORMATION.$", 0x60, true, 0x230a097c42d39325 );                                         
        SDK_FIXED_SIZE( disk_space_information_t, 0x60 );                                         
    };                                                         
};
#include "magic/disk_space_information_t.end.hpp"
SDK_VERIFY( struct win::disk_space_information_t, 0x60 );
