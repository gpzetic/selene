#pragma once
#include <sdkgen/support_library.hpp>
#include "data_directory_t.hpp"

#include "magic/optional_header_t.start.hpp"
namespace image
{
    // [struct _IMAGE_OPTIONAL_HEADER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct optional_header_t                                                                
    {                                                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                                                                  
        _m000 uint16_t                                       magic;                           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Magic
        _m001 uint8_t                                        major_linker_version;            //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .MajorLinkerVersion
        _m002 uint8_t                                        minor_linker_version;            //{ +0x0003    +0x0003    +0x0003    +0x0003    } | .MinorLinkerVersion
        _m003 uint32_t                                       size_of_code;                    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .SizeOfCode
        _m004 uint32_t                                       size_of_initialized_data;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .SizeOfInitializedData
        _m005 uint32_t                                       size_of_uninitialized_data;      //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .SizeOfUninitializedData
        _m006 uint32_t                                       address_of_entry_point;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .AddressOfEntryPoint
        _m007 uint32_t                                       base_of_code;                    //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .BaseOfCode
        _m008 uint32_t                                       base_of_data;                    //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .BaseOfData
        _m009 uint32_t                                       image_base;                      //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .ImageBase
        _m010 uint32_t                                       section_alignment;               //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .SectionAlignment
        _m011 uint32_t                                       file_alignment;                  //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .FileAlignment
        _m012 uint16_t                                       major_operating_system_version;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .MajorOperatingSystemVersion
        _m013 uint16_t                                       minor_operating_system_version;  //{ +0x002a    +0x002a    +0x002a    +0x002a    } | .MinorOperatingSystemVersion
        _m014 uint16_t                                       major_image_version;             //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .MajorImageVersion
        _m015 uint16_t                                       minor_image_version;             //{ +0x002e    +0x002e    +0x002e    +0x002e    } | .MinorImageVersion
        _m016 uint16_t                                       major_subsystem_version;         //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .MajorSubsystemVersion
        _m017 uint16_t                                       minor_subsystem_version;         //{ +0x0032    +0x0032    +0x0032    +0x0032    } | .MinorSubsystemVersion
        _m018 uint32_t                                       win32_version_value;             //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .Win32VersionValue
        _m019 uint32_t                                       size_of_image;                   //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .SizeOfImage
        _m020 uint32_t                                       size_of_headers;                 //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .SizeOfHeaders
        _m021 uint32_t                                       check_sum;                       //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .CheckSum
        _m022 uint16_t                                       subsystem;                       //{ +0x0044    +0x0044    +0x0044    +0x0044    } | .Subsystem
        _m023 uint16_t                                       dll_characteristics;             //{ +0x0046    +0x0046    +0x0046    +0x0046    } | .DllCharacteristics
        _m024 uint32_t                                       size_of_stack_reserve;           //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .SizeOfStackReserve
        _m025 uint32_t                                       size_of_stack_commit;            //{ +0x004c    +0x004c    +0x004c    +0x004c    } | .SizeOfStackCommit
        _m026 uint32_t                                       size_of_heap_reserve;            //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .SizeOfHeapReserve
        _m027 uint32_t                                       size_of_heap_commit;             //{ +0x0054    +0x0054    +0x0054    +0x0054    } | .SizeOfHeapCommit
        _m028 uint32_t                                       loader_flags;                    //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .LoaderFlags
        _m029 uint32_t                                       number_of_rva_and_sizes;         //{ +0x005c    +0x005c    +0x005c    +0x005c    } | .NumberOfRvaAndSizes
        _m030 sdk::array<struct image::data_directory_t, 16> data_directory;                  //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .DataDirectory
                                                                                            
        SDK_MAGIC_PROPERTIES( "_IMAGE_OPTIONAL_HEADER.$", 0xe0, true, 0xd89926cb66232579 );                               
        SDK_FIXED_SIZE( optional_header_t, 0xe0 );                                          
    };                                                                                      
};
#include "magic/optional_header_t.end.hpp"
SDK_VERIFY( struct image::optional_header_t, 0xe0 );