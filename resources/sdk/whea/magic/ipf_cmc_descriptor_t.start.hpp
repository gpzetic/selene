#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_WHEA_IPF_CMC_DESCRIPTOR.Type", type, 0x0, 0x10, true, 0xef3b2f07aaee59f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEA_IPF_CMC_DESCRIPTOR.Enabled", enabled, 0x10, 0x8, true, 0xa1c01115dfbcf498)
#else
#define _m00
#define _m01
#endif