#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_OPENSYNCOBJECTNTHANDLEFROMNAME.dwDesiredAccess", dw_desired_access, 0x0, 0x20, true, 0x857d3bbba37e3d6)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::object_attributes_t*), "_D3DKMT_OPENSYNCOBJECTNTHANDLEFROMNAME.pObjAttrib", p_obj_attrib, 0x40, 0x40, true, 0x8aa634cbab05173a)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_D3DKMT_OPENSYNCOBJECTNTHANDLEFROMNAME.hNtHandle", h_nt_handle, 0x80, 0x40, true, 0xa89bcfb47bf002c1)
#else
#define _m00
#define _m01
#define _m02
#endif