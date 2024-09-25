#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxCommonBuffer.m_Type", m_type, 0x40, 0x10, true, 0x4c5066be1495cd34)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxCommonBuffer.m_ObjectSize", m_object_size, 0x50, 0x10, true, 0x1b9d90f67f873c18)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxCommonBuffer.m_Refcnt", m_refcnt, 0x60, 0x20, true, 0x132ccfaebb165ae2)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::driver_globals_t*), "FxCommonBuffer.m_Globals", m_globals, 0x80, 0x40, true, 0x664e0c111931e8b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxCommonBuffer.m_ObjectFlags", m_object_flags, 0xc0, 0x10, true, 0x8c66132b8b16b35)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxCommonBuffer.m_ObjectFlagsByName.PassiveCallbacks", passive_callbacks, 0x0, 0x1, true, 0x8f5c61213b3e5b15, 1, uint16_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxCommonBuffer.m_ObjectFlagsByName.NoDeleteDDI", no_delete_ddi, 0x1, 0x1, true, 0xbbbb9afc4c48be15, 1, uint16_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxCommonBuffer.m_ObjectFlagsByName.DeleteCalled", delete_called, 0x2, 0x1, true, 0x13ddd49e6954eae7, 1, uint16_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxCommonBuffer.m_ObjectFlagsByName.Committed", committed, 0x3, 0x1, true, 0xa2ec2f44ab085a39, 1, uint16_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxCommonBuffer.m_ObjectFlagsByName.PassiveDispose", passive_dispose, 0x4, 0x1, true, 0xa3fc351aff935ad8, 1, uint16_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxCommonBuffer.m_ObjectFlagsByName.ForceDisposeThread", force_dispose_thread, 0x5, 0x1, true, 0x9a948dd0ededf98a, 1, uint16_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxCommonBuffer.m_ObjectFlagsByName.HasDebug", has_debug, 0x7, 0x1, true, 0x3e3a310ee937292b, 1, uint16_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxCommonBuffer.m_ObjectFlagsByName.EarlyDisposedExt", early_disposed_ext, 0x8, 0x1, true, 0x646b7d4a328d9ae4, 1, uint16_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxCommonBuffer.m_ObjectFlagsByName.TraceState", trace_state, 0x9, 0x1, true, 0x7bf2b92c3b4ac64d, 1, uint16_t)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_m_object_flags_by_name_t), "FxCommonBuffer.m_ObjectFlagsByName", m_object_flags_by_name, 0xc0, 0x10, true, 0x90db73babf8833d4)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxCommonBuffer.m_ObjectState", m_object_state, 0xd0, 0x10, true, 0x6e427c5e62184709)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxCommonBuffer.m_ChildListHead", m_child_list_head, 0x100, 0x80, true, 0xe064998469f40084)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxCommonBuffer.m_SpinLock", m_spin_lock, 0x180, 0x80, true, 0xe44b50a236553d8c)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::object_t*), "FxCommonBuffer.m_ParentObject", m_parent_object, 0x200, 0x40, true, 0x83da61c8c03b611a)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxCommonBuffer.m_ChildEntry", m_child_entry, 0x240, 0x80, true, 0x1600d8eb2b8ddb5f)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "FxCommonBuffer.m_DisposeSingleEntry", m_dispose_single_entry, 0x2c0, 0x40, true, 0xbf111207cdee7616)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_base_t*), "FxCommonBuffer.m_DeviceBase", m_device_base, 0x300, 0x40, true, 0xa7180445ac9c6d58)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_t*), "FxCommonBuffer.m_Device", m_device, 0x300, 0x40, true, 0x14e904621f7b65cd)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxCommonBuffer.m_NPLock", m_np_lock, 0x340, 0x80, true, 0x6ee49f9f5aff8f68)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "FxCommonBuffer.m_BufferRawVA", m_buffer_raw_va, 0x3c0, 0x40, true, 0xb0ddde55bfc72d2b)
#define _m25 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "FxCommonBuffer.m_BufferAlignedVA", m_buffer_aligned_va, 0x400, 0x40, true, 0xa7951c07579e2fa4)
#define _m26 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "FxCommonBuffer.m_BufferAlignedLA", m_buffer_aligned_la, 0x440, 0x40, true, 0x5be88d4395609504)
#define _m27 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "FxCommonBuffer.m_BufferRawLA", m_buffer_raw_la, 0x480, 0x40, true, 0x7c9ec18bf52b74d8)
#define _m28 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::dma_enabler_t*), "FxCommonBuffer.m_DmaEnabler", m_dma_enabler, 0x4c0, 0x40, true, 0xdbc9ab1ca6597c49)
#define _m29 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "FxCommonBuffer.m_Length", m_length, 0x500, 0x40, true, 0x282be22c01bbf365)
#define _m30 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "FxCommonBuffer.m_RawLength", m_raw_length, 0x540, 0x40, true, 0x579bc37e62878dc4)
#define _m31 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "FxCommonBuffer.m_Alignment", m_alignment, 0x580, 0x40, true, 0x3b8b3b8e5b575215)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#define _m14
#define _m15
#define _m16
#define _m17
#define _m18
#define _m19
#define _m20
#define _m21
#define _m22
#define _m23
#define _m24
#define _m25
#define _m26
#define _m27
#define _m28
#define _m29
#define _m30
#define _m31
#endif