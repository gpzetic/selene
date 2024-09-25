#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [enum _WDF_DEVICE_POWER_POLICY_STATE]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class device_power_policy_state_t : int32_t                                    
    {                                                                                   
        invalid =                                                             0x0,        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        object_created =                                                      0x500,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        starting =                                                            0x501,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        starting_succeeded =                                                  0x502,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        starting_failed =                                                     0x503,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        starting_decide_s0_wake =                                             0x504,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        started_idle_capable =                                                0x505,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        timer_expired_no_wake =                                               0x506,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        timer_expired_no_wake_complete_power_down =                           0x507,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        waiting_unarmed =                                                     0x508,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        waiting_unarmed_query_idle =                                          0x509,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        s0_no_wake_power_up =                                                 0x50a,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        s0_no_wake_complete_power_up =                                        0x50b,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_sleep_from_device_waiting_unarmed =                            0x50c,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_sleep_need_wake =                                              0x50d,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_sleep_need_wake_complete_power_up =                            0x50e,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_sleep_power_request_failed =                                   0x50f,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        check_power_pageable =                                                0x510,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        sleeping_wake_wake_arrived =                                          0x511,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        sleeping_wake_revert_arm_wake =                                       0x512,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_asleep_wake_armed =                                            0x513,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_wake_device_wake_enabled =                                     0x514,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_wake_device_wake_enabled_wake_canceled =                       0x515,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_wake_device_wake_disarm =                                      0x516,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_wake_device_wake_triggered =                                   0x517,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_wake_device_wake_triggered_s0 =                                0x518,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_wake_device_woke_disarm =                                      0x519,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        sleeping_wake_power_down_failed =                                     0x51c,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        sleeping_wake_power_down_failed_wake_canceled =                       0x51d,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_wake_device_wake_complete_power_up =                           0x525,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        sleeping =                                                            0x526,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        sleeping_no_wake_power_down =                                         0x527,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        sleeping_no_wake_complete_power_down =                                0x528,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        sleeping_no_wake_dx_request_failed =                                  0x529,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        sleeping_wake_power_down =                                            0x52a,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        sleeping_send_wake =                                                  0x52b,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_asleep_no_wake =                                               0x52c,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_wake_device_wake_disabled =                                    0x52d,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_wake_device_to_d0 =                                            0x52e,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_wake_device_to_d0_complete_power_up =                          0x52f,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_wake_query_idle =                                              0x530,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        started_wake_capable =                                                0x531,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        timer_expired_decide_usb_ss =                                         0x532,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        timer_expired_wake_capable_power_down =                               0x533,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        timer_expired_wake_capable_send_wake =                                0x534,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        timer_expired_wake_capable_usb_ss =                                   0x535,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        timer_expired_wake_capable_wake_arrived =                             0x536,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        timer_expired_wake_capable_cancel_wake =                              0x537,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        timer_expired_wake_capable_wake_canceled =                            0x538,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        timer_expired_wake_capable_cleanup =                                  0x539,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        timer_expired_wake_capable_dx_alloc_failed =                          0x53a,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        timer_expired_wake_completed_power_down =                             0x53b,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        timer_expired_wake_completed_power_up =                               0x53c,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        waiting_armed_usb_ss =                                                0x53d,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        waiting_armed =                                                       0x53e,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        waiting_armed_query_idle =                                            0x53f,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        io_present_armed =                                                    0x540,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        io_present_armed_wake_canceled =                                      0x541,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        s0_wake_disarm =                                                      0x542,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        s0_wake_complete_power_up =                                           0x543,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        timer_expired_wake_succeeded =                                        0x544,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        timer_expired_wake_completed_disarm =                                 0x545,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        timer_expired_wake_capable_wake_succeeded =                           0x546,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        timer_expired_wake_capable_wake_failed =                              0x547,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wake_failed_usb_ss =                                                  0x548,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        timer_expired_wake_capable_power_down_failed_cancel_wake =            0x549,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        timer_expired_wake_capable_power_down_failed_wake_canceled =          0x54a,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        timer_expired_wake_capable_power_down_failed_usb_ss =                 0x54b,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        canceling_wake_for_system_sleep =                                     0x54c,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        canceling_wake_for_system_sleep_wake_canceled =                       0x54d,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        disarming_wake_for_system_sleep_complete_power_up =                   0x54e,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        power_up_for_system_sleep_failed =                                    0x54f,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        woke_from_s0_usb_ss =                                                 0x550,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        woke_from_s0 =                                                        0x551,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        woke_from_s0_notify_driver =                                          0x552,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        stopping_reset_device =                                               0x553,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        stopping_reset_device_complete_power_up =                             0x554,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        stopping_reset_device_failed =                                        0x555,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        stopping_d0 =                                                         0x556,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        stopping_d0_failed =                                                  0x557,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        stopping_disarm_wake =                                                0x558,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        stopping_disarm_wake_cancel_wake =                                    0x559,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        stopping_disarm_wake_wake_canceled =                                  0x55a,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        stopping =                                                            0x55b,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        stopping_failed =                                                     0x55c,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        stopping_send_status =                                                0x55d,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        stopping_cancel_timer =                                               0x55e,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        stopping_wait_for_idle_timeout =                                      0x55f,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        stopping_cancel_usb_ss =                                              0x560,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        stopping_wait_for_usb_ss_completion =                                 0x561,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        stopping_cancel_wake =                                                0x562,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        stopped =                                                             0x563,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        cancel_usb_ss =                                                       0x564,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        started =                                                             0x565,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        started_cancel_timer =                                                0x566,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        started_wait_for_idle_timeout =                                       0x567,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        started_wake_capable_cancel_timer_for_sleep =                         0x568,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        started_wake_capable_wait_for_idle_timeout =                          0x569,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        started_wake_capable_sleeping_usb_ss =                                0x56a,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        started_idle_capable_cancel_timer_for_sleep =                         0x56b,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        started_idle_capable_wait_for_idle_timeout =                          0x56c,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        device_d0_power_request_failed =                                      0x56d,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        device_power_request_failed =                                         0x56e,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        goto_dx =                                                             0x56f,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        goto_dx_in_dx =                                                       0x570,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dx =                                                                  0x571,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        goto_d0 =                                                             0x572,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        goto_d0_in_d0 =                                                       0x573,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        final =                                                               0x574,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        sleeping_power_down_not_processed =                                   0x575,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        timer_expired_wake_capable_power_down_not_processed =                 0x576,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        timer_expired_no_wake_power_down_not_processed =                      0x577,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        timer_expired_no_wake_powered_down_disable_idle_timer =               0x578,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        stopping_waiting_for_implicit_power_down =                            0x579,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        stopping_powering_up =                                                0x57a,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        stopping_powering_down =                                              0x57b,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        power_up_for_system_sleep_not_seen =                                  0x57c,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        waiting_armed_stopping_cancel_usb_ss =                                0x57d,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        waiting_armed_wake_failed_cancel_usb_ss =                             0x57e,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        waiting_armed_io_present_cancel_usb_ss =                              0x57f,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        waiting_armed_wake_succeeded_cancel_usb_ss =                          0x580,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        canceling_usb_ss_for_system_sleep =                                   0x581,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        stopping_d0_cancel_usb_ss =                                           0x582,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        starting_powered_up =                                                 0x583,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        idle_capable_device_idle =                                            0x584,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        device_idle_return_to_active =                                        0x585,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        device_idle_sleeping =                                                0x586,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        device_idle_stopping =                                                0x587,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        timer_expired_no_wake_undo_power_down =                               0x588,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wake_capable_device_idle =                                            0x589,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wake_capable_usb_ss_completed =                                       0x58a,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        timer_expired_wake_capable_undo_power_down =                          0x58b,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        timer_expired_wake_completed_hardware_started =                       0x58c,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        stopped_removing =                                                    0x58d,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        removed =                                                             0x58e,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        restarting =                                                          0x58f,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        restarting_failed =                                                   0x590,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        starting_powered_up_failed =                                          0x591,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        timer_expired_no_wake_return_to_active =                              0x592,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        waiting_armed_wake_interrupt_fired =                                  0x593,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_wake_device_wake_interrupt_fired =                             0x594,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        timer_expired_wake_capable_wake_interrupt_arrived =                   0x596,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        timer_expired_wake_capable_power_down_failed_wake_interrupt_arrived = 0x597,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        waiting_armed_wake_interrupt_fired_during_power_down =                0x598,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        //null =                                                              0x599,      // WDK 10, Windows 10 v1607
        started_not_idle_capable_directed_down =                              0x599,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        started_idle_capable_timer_canceled_for_sleep =                       0x59a,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        timer_expired_no_wake_undo_power_down_wait_for_directed_up =          0x59b,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        idle_capable_timer_not_expired_directed_down =                        0x59c,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        idle_capable_directed_down_trigger_dpnr =                             0x59d,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        waiting_unarmed_directed_down =                                       0x59e,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        idle_capable_directed_down_trigger_dpr =                              0x59f,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        started_wake_capable_timer_canceled_for_sleep =                       0x5a0,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        wake_capable_timer_not_expired_directed_down =                        0x5a1,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        wake_capable_directed_down_trigger_dpnr =                             0x5a2,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        timer_expired_wake_completed_power_down_wait_for_directed_up =        0x5a3,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        timer_expired_wake_completed_power_down_directed_trigger_dpr =        0x5a4,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        timer_expired_wake_capable_undo_power_down_wait_for_directed_up =     0x5a5,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        wake_capable_usb_ss_completed_undo_wait_for_directed_up =             0x5a6,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        timer_expired_wake_capable_usb_ss_directed_down =                     0x5a7,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        waiting_armed_wake_interrupt_fired_during_power_down_check_directed = 0x5a8,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        timer_expired_wake_completed_power_down_check_directed =              0x5a9,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        timer_expired_wake_capable_wake_succeeded_check_directed =            0x5aa,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        timer_expired_wake_capable_wake_succeeded_wait_for_directed_up =      0x5ab,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        timer_expired_wake_capable_wake_succeeded_trigger_dpr =               0x5ac,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        timer_expired_wake_capable_wake_failed_check_directed =               0x5ad,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        timer_expired_wake_capable_wake_failed_wait_for_directed_up =         0x5ae,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        timer_expired_wake_capable_wake_failed_trigger_dpr =                  0x5af,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        waiting_armed_directed_down_wake_interrupt_fired_trigger_dpr =        0x5b0,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        waiting_armed_directed_down_wake_interrupt_fired =                    0x5b1,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        waiting_armed_directed_down =                                         0x5b2,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        waiting_armed_directed_down_wake_succeeded_cancel_usb_ss =            0x5b3,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        waiting_armed_directed_down_wake_failed_cancel_usb_ss =               0x5b4,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        waiting_armed_directed_down_trigger_dpr =                             0x5b5,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        waiting_armed_directed_down_wake_succeeded_trigger_dpr =              0x5b6,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        waiting_armed_directed_down_usb_ss_completed =                        0x5b7,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        waiting_armed_directed_down_usb_ss_completed_trigger_dpr =            0x5b8,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        waiting_armed_directed_down_wake_failed_cancel_usb_ss_trigger_dpr =   0x5b9,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        usb_ss_cancelled =                                                    0x5ba,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        timer_expired_wake_capable_revert_arm_wake =                          0x5bb,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        sleeping_wake_cancel_wake =                                           0x5bc,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_wake_device_d0_power_request_failed =                          0x5be,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_wake_device_power_request_failed =                             0x5bf,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        null =                                                                0x5c0,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        sleeping_wake_wake_arrived_np =                                       0x851a,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        sleeping_wake_revert_arm_wake_np =                                    0x851b,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_asleep_wake_armed_np =                                         0x851e,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_wake_device_wake_enabled_np =                                  0x851f,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_wake_device_wake_enabled_wake_canceled_np =                    0x8520,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_wake_device_wake_disarm_np =                                   0x8521,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_wake_device_wake_triggered_np =                                0x8522,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_wake_device_wake_triggered_s0np =                              0x8523,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_wake_device_woke_disarm_np =                                   0x8524,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_wake_device_wake_interrupt_fired_np =                          0x8595,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        sleeping_wake_cancel_wake_np =                                        0x85bd,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                                                  
};