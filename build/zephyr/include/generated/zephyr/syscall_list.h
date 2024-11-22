/* auto-generated by gen_syscalls.py, don't edit */

#ifndef ZEPHYR_SYSCALL_LIST_H
#define ZEPHYR_SYSCALL_LIST_H

#define K_SYSCALL_DEVICE_GET_BINDING 0
#define K_SYSCALL_DEVICE_GET_BY_DT_NODELABEL 1
#define K_SYSCALL_DEVICE_INIT 2
#define K_SYSCALL_DEVICE_IS_READY 3
#define K_SYSCALL_GPIO_GET_PENDING_INT 4
#define K_SYSCALL_GPIO_PIN_CONFIGURE 5
#define K_SYSCALL_GPIO_PIN_GET_CONFIG 6
#define K_SYSCALL_GPIO_PIN_INTERRUPT_CONFIGURE 7
#define K_SYSCALL_GPIO_PORT_CLEAR_BITS_RAW 8
#define K_SYSCALL_GPIO_PORT_GET_DIRECTION 9
#define K_SYSCALL_GPIO_PORT_GET_RAW 10
#define K_SYSCALL_GPIO_PORT_SET_BITS_RAW 11
#define K_SYSCALL_GPIO_PORT_SET_MASKED_RAW 12
#define K_SYSCALL_GPIO_PORT_TOGGLE_BITS 13
#define K_SYSCALL_K_BUSY_WAIT 14
#define K_SYSCALL_K_CONDVAR_BROADCAST 15
#define K_SYSCALL_K_CONDVAR_INIT 16
#define K_SYSCALL_K_CONDVAR_SIGNAL 17
#define K_SYSCALL_K_CONDVAR_WAIT 18
#define K_SYSCALL_K_EVENT_CLEAR 19
#define K_SYSCALL_K_EVENT_INIT 20
#define K_SYSCALL_K_EVENT_POST 21
#define K_SYSCALL_K_EVENT_SET 22
#define K_SYSCALL_K_EVENT_SET_MASKED 23
#define K_SYSCALL_K_EVENT_WAIT 24
#define K_SYSCALL_K_EVENT_WAIT_ALL 25
#define K_SYSCALL_K_FLOAT_DISABLE 26
#define K_SYSCALL_K_FLOAT_ENABLE 27
#define K_SYSCALL_K_FUTEX_WAIT 28
#define K_SYSCALL_K_FUTEX_WAKE 29
#define K_SYSCALL_K_IS_PREEMPT_THREAD 30
#define K_SYSCALL_K_MSGQ_ALLOC_INIT 31
#define K_SYSCALL_K_MSGQ_GET 32
#define K_SYSCALL_K_MSGQ_GET_ATTRS 33
#define K_SYSCALL_K_MSGQ_NUM_FREE_GET 34
#define K_SYSCALL_K_MSGQ_NUM_USED_GET 35
#define K_SYSCALL_K_MSGQ_PEEK 36
#define K_SYSCALL_K_MSGQ_PEEK_AT 37
#define K_SYSCALL_K_MSGQ_PURGE 38
#define K_SYSCALL_K_MSGQ_PUT 39
#define K_SYSCALL_K_MUTEX_INIT 40
#define K_SYSCALL_K_MUTEX_LOCK 41
#define K_SYSCALL_K_MUTEX_UNLOCK 42
#define K_SYSCALL_K_OBJECT_ACCESS_GRANT 43
#define K_SYSCALL_K_OBJECT_ALLOC 44
#define K_SYSCALL_K_OBJECT_ALLOC_SIZE 45
#define K_SYSCALL_K_OBJECT_RELEASE 46
#define K_SYSCALL_K_PIPE_ALLOC_INIT 47
#define K_SYSCALL_K_PIPE_BUFFER_FLUSH 48
#define K_SYSCALL_K_PIPE_FLUSH 49
#define K_SYSCALL_K_PIPE_GET 50
#define K_SYSCALL_K_PIPE_PUT 51
#define K_SYSCALL_K_PIPE_READ_AVAIL 52
#define K_SYSCALL_K_PIPE_WRITE_AVAIL 53
#define K_SYSCALL_K_POLL 54
#define K_SYSCALL_K_POLL_SIGNAL_CHECK 55
#define K_SYSCALL_K_POLL_SIGNAL_INIT 56
#define K_SYSCALL_K_POLL_SIGNAL_RAISE 57
#define K_SYSCALL_K_POLL_SIGNAL_RESET 58
#define K_SYSCALL_K_QUEUE_ALLOC_APPEND 59
#define K_SYSCALL_K_QUEUE_ALLOC_PREPEND 60
#define K_SYSCALL_K_QUEUE_CANCEL_WAIT 61
#define K_SYSCALL_K_QUEUE_GET 62
#define K_SYSCALL_K_QUEUE_INIT 63
#define K_SYSCALL_K_QUEUE_IS_EMPTY 64
#define K_SYSCALL_K_QUEUE_PEEK_HEAD 65
#define K_SYSCALL_K_QUEUE_PEEK_TAIL 66
#define K_SYSCALL_K_SCHED_CURRENT_THREAD_QUERY 67
#define K_SYSCALL_K_SEM_COUNT_GET 68
#define K_SYSCALL_K_SEM_GIVE 69
#define K_SYSCALL_K_SEM_INIT 70
#define K_SYSCALL_K_SEM_RESET 71
#define K_SYSCALL_K_SEM_TAKE 72
#define K_SYSCALL_K_SLEEP 73
#define K_SYSCALL_K_STACK_ALLOC_INIT 74
#define K_SYSCALL_K_STACK_POP 75
#define K_SYSCALL_K_STACK_PUSH 76
#define K_SYSCALL_K_STR_OUT 77
#define K_SYSCALL_K_THREAD_ABORT 78
#define K_SYSCALL_K_THREAD_CREATE 79
#define K_SYSCALL_K_THREAD_CUSTOM_DATA_GET 80
#define K_SYSCALL_K_THREAD_CUSTOM_DATA_SET 81
#define K_SYSCALL_K_THREAD_DEADLINE_SET 82
#define K_SYSCALL_K_THREAD_JOIN 83
#define K_SYSCALL_K_THREAD_NAME_COPY 84
#define K_SYSCALL_K_THREAD_NAME_SET 85
#define K_SYSCALL_K_THREAD_PRIORITY_GET 86
#define K_SYSCALL_K_THREAD_PRIORITY_SET 87
#define K_SYSCALL_K_THREAD_RESUME 88
#define K_SYSCALL_K_THREAD_STACK_ALLOC 89
#define K_SYSCALL_K_THREAD_STACK_FREE 90
#define K_SYSCALL_K_THREAD_STACK_SPACE_GET 91
#define K_SYSCALL_K_THREAD_START 92
#define K_SYSCALL_K_THREAD_SUSPEND 93
#define K_SYSCALL_K_THREAD_TIMEOUT_EXPIRES_TICKS 94
#define K_SYSCALL_K_THREAD_TIMEOUT_REMAINING_TICKS 95
#define K_SYSCALL_K_TIMER_EXPIRES_TICKS 96
#define K_SYSCALL_K_TIMER_REMAINING_TICKS 97
#define K_SYSCALL_K_TIMER_START 98
#define K_SYSCALL_K_TIMER_STATUS_GET 99
#define K_SYSCALL_K_TIMER_STATUS_SYNC 100
#define K_SYSCALL_K_TIMER_STOP 101
#define K_SYSCALL_K_TIMER_USER_DATA_GET 102
#define K_SYSCALL_K_TIMER_USER_DATA_SET 103
#define K_SYSCALL_K_UPTIME_TICKS 104
#define K_SYSCALL_K_USLEEP 105
#define K_SYSCALL_K_WAKEUP 106
#define K_SYSCALL_K_YIELD 107
#define K_SYSCALL_LOG_BUFFERED_CNT 108
#define K_SYSCALL_LOG_FILTER_SET 109
#define K_SYSCALL_LOG_FRONTEND_FILTER_SET 110
#define K_SYSCALL_LOG_PANIC 111
#define K_SYSCALL_LOG_PROCESS 112
#define K_SYSCALL_PWM_CAPTURE_CYCLES 113
#define K_SYSCALL_PWM_DISABLE_CAPTURE 114
#define K_SYSCALL_PWM_ENABLE_CAPTURE 115
#define K_SYSCALL_PWM_GET_CYCLES_PER_SEC 116
#define K_SYSCALL_PWM_SET_CYCLES 117
#define K_SYSCALL_SYS_CLOCK_HW_CYCLES_PER_SEC_RUNTIME_GET 118
#define K_SYSCALL_UART_CONFIGURE 119
#define K_SYSCALL_UART_CONFIG_GET 120
#define K_SYSCALL_UART_DRV_CMD 121
#define K_SYSCALL_UART_ERR_CHECK 122
#define K_SYSCALL_UART_IRQ_ERR_DISABLE 123
#define K_SYSCALL_UART_IRQ_ERR_ENABLE 124
#define K_SYSCALL_UART_IRQ_IS_PENDING 125
#define K_SYSCALL_UART_IRQ_RX_DISABLE 126
#define K_SYSCALL_UART_IRQ_RX_ENABLE 127
#define K_SYSCALL_UART_IRQ_TX_DISABLE 128
#define K_SYSCALL_UART_IRQ_TX_ENABLE 129
#define K_SYSCALL_UART_IRQ_UPDATE 130
#define K_SYSCALL_UART_LINE_CTRL_GET 131
#define K_SYSCALL_UART_LINE_CTRL_SET 132
#define K_SYSCALL_UART_POLL_IN 133
#define K_SYSCALL_UART_POLL_IN_U16 134
#define K_SYSCALL_UART_POLL_OUT 135
#define K_SYSCALL_UART_POLL_OUT_U16 136
#define K_SYSCALL_UART_RX_DISABLE 137
#define K_SYSCALL_UART_RX_ENABLE 138
#define K_SYSCALL_UART_RX_ENABLE_U16 139
#define K_SYSCALL_UART_TX 140
#define K_SYSCALL_UART_TX_ABORT 141
#define K_SYSCALL_UART_TX_U16 142
#define K_SYSCALL_ZEPHYR_FPUTC 143
#define K_SYSCALL_ZEPHYR_FWRITE 144
#define K_SYSCALL_ZEPHYR_READ_STDIN 145
#define K_SYSCALL_ZEPHYR_WRITE_STDOUT 146
#define K_SYSCALL_Z_LOG_MSG_SIMPLE_CREATE_0 147
#define K_SYSCALL_Z_LOG_MSG_SIMPLE_CREATE_1 148
#define K_SYSCALL_Z_LOG_MSG_SIMPLE_CREATE_2 149
#define K_SYSCALL_Z_LOG_MSG_STATIC_CREATE 150
#define K_SYSCALL_Z_SYS_MUTEX_KERNEL_LOCK 151
#define K_SYSCALL_Z_SYS_MUTEX_KERNEL_UNLOCK 152
#define K_SYSCALL_BAD 153
#define K_SYSCALL_LIMIT 154


/* Following syscalls are not used in image */
#define K_SYSCALL_ADC_CHANNEL_SETUP 155
#define K_SYSCALL_ADC_READ 156
#define K_SYSCALL_ADC_READ_ASYNC 157
#define K_SYSCALL_ATOMIC_ADD 158
#define K_SYSCALL_ATOMIC_AND 159
#define K_SYSCALL_ATOMIC_CAS 160
#define K_SYSCALL_ATOMIC_NAND 161
#define K_SYSCALL_ATOMIC_OR 162
#define K_SYSCALL_ATOMIC_PTR_CAS 163
#define K_SYSCALL_ATOMIC_PTR_SET 164
#define K_SYSCALL_ATOMIC_SET 165
#define K_SYSCALL_ATOMIC_SUB 166
#define K_SYSCALL_ATOMIC_XOR 167
#define K_SYSCALL_AUXDISPLAY_BACKLIGHT_GET 168
#define K_SYSCALL_AUXDISPLAY_BACKLIGHT_SET 169
#define K_SYSCALL_AUXDISPLAY_BRIGHTNESS_GET 170
#define K_SYSCALL_AUXDISPLAY_BRIGHTNESS_SET 171
#define K_SYSCALL_AUXDISPLAY_CAPABILITIES_GET 172
#define K_SYSCALL_AUXDISPLAY_CLEAR 173
#define K_SYSCALL_AUXDISPLAY_CURSOR_POSITION_GET 174
#define K_SYSCALL_AUXDISPLAY_CURSOR_POSITION_SET 175
#define K_SYSCALL_AUXDISPLAY_CURSOR_SET_ENABLED 176
#define K_SYSCALL_AUXDISPLAY_CURSOR_SHIFT_SET 177
#define K_SYSCALL_AUXDISPLAY_CUSTOM_CHARACTER_SET 178
#define K_SYSCALL_AUXDISPLAY_CUSTOM_COMMAND 179
#define K_SYSCALL_AUXDISPLAY_DISPLAY_OFF 180
#define K_SYSCALL_AUXDISPLAY_DISPLAY_ON 181
#define K_SYSCALL_AUXDISPLAY_DISPLAY_POSITION_GET 182
#define K_SYSCALL_AUXDISPLAY_DISPLAY_POSITION_SET 183
#define K_SYSCALL_AUXDISPLAY_IS_BUSY 184
#define K_SYSCALL_AUXDISPLAY_POSITION_BLINKING_SET_ENABLED 185
#define K_SYSCALL_AUXDISPLAY_WRITE 186
#define K_SYSCALL_BBRAM_CHECK_INVALID 187
#define K_SYSCALL_BBRAM_CHECK_POWER 188
#define K_SYSCALL_BBRAM_CHECK_STANDBY_POWER 189
#define K_SYSCALL_BBRAM_GET_SIZE 190
#define K_SYSCALL_BBRAM_READ 191
#define K_SYSCALL_BBRAM_WRITE 192
#define K_SYSCALL_BC12_SET_RESULT_CB 193
#define K_SYSCALL_BC12_SET_ROLE 194
#define K_SYSCALL_CAN_ADD_RX_FILTER_MSGQ 195
#define K_SYSCALL_CAN_CALC_TIMING 196
#define K_SYSCALL_CAN_CALC_TIMING_DATA 197
#define K_SYSCALL_CAN_GET_BITRATE_MAX 198
#define K_SYSCALL_CAN_GET_BITRATE_MIN 199
#define K_SYSCALL_CAN_GET_CAPABILITIES 200
#define K_SYSCALL_CAN_GET_CORE_CLOCK 201
#define K_SYSCALL_CAN_GET_MAX_FILTERS 202
#define K_SYSCALL_CAN_GET_MODE 203
#define K_SYSCALL_CAN_GET_STATE 204
#define K_SYSCALL_CAN_GET_TIMING_DATA_MAX 205
#define K_SYSCALL_CAN_GET_TIMING_DATA_MIN 206
#define K_SYSCALL_CAN_GET_TIMING_MAX 207
#define K_SYSCALL_CAN_GET_TIMING_MIN 208
#define K_SYSCALL_CAN_GET_TRANSCEIVER 209
#define K_SYSCALL_CAN_RECOVER 210
#define K_SYSCALL_CAN_REMOVE_RX_FILTER 211
#define K_SYSCALL_CAN_SEND 212
#define K_SYSCALL_CAN_SET_BITRATE 213
#define K_SYSCALL_CAN_SET_BITRATE_DATA 214
#define K_SYSCALL_CAN_SET_MODE 215
#define K_SYSCALL_CAN_SET_TIMING 216
#define K_SYSCALL_CAN_SET_TIMING_DATA 217
#define K_SYSCALL_CAN_START 218
#define K_SYSCALL_CAN_STATS_GET_ACK_ERRORS 219
#define K_SYSCALL_CAN_STATS_GET_BIT0_ERRORS 220
#define K_SYSCALL_CAN_STATS_GET_BIT1_ERRORS 221
#define K_SYSCALL_CAN_STATS_GET_BIT_ERRORS 222
#define K_SYSCALL_CAN_STATS_GET_CRC_ERRORS 223
#define K_SYSCALL_CAN_STATS_GET_FORM_ERRORS 224
#define K_SYSCALL_CAN_STATS_GET_RX_OVERRUNS 225
#define K_SYSCALL_CAN_STATS_GET_STUFF_ERRORS 226
#define K_SYSCALL_CAN_STOP 227
#define K_SYSCALL_CHARGER_CHARGE_ENABLE 228
#define K_SYSCALL_CHARGER_GET_PROP 229
#define K_SYSCALL_CHARGER_SET_PROP 230
#define K_SYSCALL_COUNTER_CANCEL_CHANNEL_ALARM 231
#define K_SYSCALL_COUNTER_GET_FREQUENCY 232
#define K_SYSCALL_COUNTER_GET_GUARD_PERIOD 233
#define K_SYSCALL_COUNTER_GET_MAX_TOP_VALUE 234
#define K_SYSCALL_COUNTER_GET_NUM_OF_CHANNELS 235
#define K_SYSCALL_COUNTER_GET_PENDING_INT 236
#define K_SYSCALL_COUNTER_GET_TOP_VALUE 237
#define K_SYSCALL_COUNTER_GET_VALUE 238
#define K_SYSCALL_COUNTER_GET_VALUE_64 239
#define K_SYSCALL_COUNTER_IS_COUNTING_UP 240
#define K_SYSCALL_COUNTER_SET_CHANNEL_ALARM 241
#define K_SYSCALL_COUNTER_SET_GUARD_PERIOD 242
#define K_SYSCALL_COUNTER_SET_TOP_VALUE 243
#define K_SYSCALL_COUNTER_START 244
#define K_SYSCALL_COUNTER_STOP 245
#define K_SYSCALL_COUNTER_TICKS_TO_US 246
#define K_SYSCALL_COUNTER_US_TO_TICKS 247
#define K_SYSCALL_DAC_CHANNEL_SETUP 248
#define K_SYSCALL_DAC_WRITE_VALUE 249
#define K_SYSCALL_DEVMUX_SELECT_GET 250
#define K_SYSCALL_DEVMUX_SELECT_SET 251
#define K_SYSCALL_DMA_CHAN_FILTER 252
#define K_SYSCALL_DMA_RELEASE_CHANNEL 253
#define K_SYSCALL_DMA_REQUEST_CHANNEL 254
#define K_SYSCALL_DMA_RESUME 255
#define K_SYSCALL_DMA_START 256
#define K_SYSCALL_DMA_STOP 257
#define K_SYSCALL_DMA_SUSPEND 258
#define K_SYSCALL_EEPROM_GET_SIZE 259
#define K_SYSCALL_EEPROM_READ 260
#define K_SYSCALL_EEPROM_WRITE 261
#define K_SYSCALL_EMUL_FUEL_GAUGE_IS_BATTERY_CUTOFF 262
#define K_SYSCALL_EMUL_FUEL_GAUGE_SET_BATTERY_CHARGING 263
#define K_SYSCALL_ENTROPY_GET_ENTROPY 264
#define K_SYSCALL_ESPI_CONFIG 265
#define K_SYSCALL_ESPI_FLASH_ERASE 266
#define K_SYSCALL_ESPI_GET_CHANNEL_STATUS 267
#define K_SYSCALL_ESPI_READ_FLASH 268
#define K_SYSCALL_ESPI_READ_LPC_REQUEST 269
#define K_SYSCALL_ESPI_READ_REQUEST 270
#define K_SYSCALL_ESPI_RECEIVE_OOB 271
#define K_SYSCALL_ESPI_RECEIVE_VWIRE 272
#define K_SYSCALL_ESPI_SAF_ACTIVATE 273
#define K_SYSCALL_ESPI_SAF_CONFIG 274
#define K_SYSCALL_ESPI_SAF_FLASH_ERASE 275
#define K_SYSCALL_ESPI_SAF_FLASH_READ 276
#define K_SYSCALL_ESPI_SAF_FLASH_UNSUCCESS 277
#define K_SYSCALL_ESPI_SAF_FLASH_WRITE 278
#define K_SYSCALL_ESPI_SAF_GET_CHANNEL_STATUS 279
#define K_SYSCALL_ESPI_SAF_SET_PROTECTION_REGIONS 280
#define K_SYSCALL_ESPI_SEND_OOB 281
#define K_SYSCALL_ESPI_SEND_VWIRE 282
#define K_SYSCALL_ESPI_WRITE_FLASH 283
#define K_SYSCALL_ESPI_WRITE_LPC_REQUEST 284
#define K_SYSCALL_ESPI_WRITE_REQUEST 285
#define K_SYSCALL_FLASH_ERASE 286
#define K_SYSCALL_FLASH_EX_OP 287
#define K_SYSCALL_FLASH_FILL 288
#define K_SYSCALL_FLASH_FLATTEN 289
#define K_SYSCALL_FLASH_GET_PAGE_COUNT 290
#define K_SYSCALL_FLASH_GET_PAGE_INFO_BY_IDX 291
#define K_SYSCALL_FLASH_GET_PAGE_INFO_BY_OFFS 292
#define K_SYSCALL_FLASH_GET_PARAMETERS 293
#define K_SYSCALL_FLASH_GET_WRITE_BLOCK_SIZE 294
#define K_SYSCALL_FLASH_READ 295
#define K_SYSCALL_FLASH_READ_JEDEC_ID 296
#define K_SYSCALL_FLASH_SFDP_READ 297
#define K_SYSCALL_FLASH_SIMULATOR_GET_MEMORY 298
#define K_SYSCALL_FLASH_WRITE 299
#define K_SYSCALL_FUEL_GAUGE_BATTERY_CUTOFF 300
#define K_SYSCALL_FUEL_GAUGE_GET_BUFFER_PROP 301
#define K_SYSCALL_FUEL_GAUGE_GET_PROP 302
#define K_SYSCALL_FUEL_GAUGE_GET_PROPS 303
#define K_SYSCALL_FUEL_GAUGE_SET_PROP 304
#define K_SYSCALL_FUEL_GAUGE_SET_PROPS 305
#define K_SYSCALL_GNSS_GET_ENABLED_SYSTEMS 306
#define K_SYSCALL_GNSS_GET_FIX_RATE 307
#define K_SYSCALL_GNSS_GET_NAVIGATION_MODE 308
#define K_SYSCALL_GNSS_GET_PERIODIC_CONFIG 309
#define K_SYSCALL_GNSS_GET_SUPPORTED_SYSTEMS 310
#define K_SYSCALL_GNSS_SET_ENABLED_SYSTEMS 311
#define K_SYSCALL_GNSS_SET_FIX_RATE 312
#define K_SYSCALL_GNSS_SET_NAVIGATION_MODE 313
#define K_SYSCALL_GNSS_SET_PERIODIC_CONFIG 314
#define K_SYSCALL_HAPTICS_START_OUTPUT 315
#define K_SYSCALL_HAPTICS_STOP_OUTPUT 316
#define K_SYSCALL_HWINFO_CLEAR_RESET_CAUSE 317
#define K_SYSCALL_HWINFO_GET_DEVICE_EUI64 318
#define K_SYSCALL_HWINFO_GET_DEVICE_ID 319
#define K_SYSCALL_HWINFO_GET_RESET_CAUSE 320
#define K_SYSCALL_HWINFO_GET_SUPPORTED_RESET_CAUSE 321
#define K_SYSCALL_HWSPINLOCK_GET_MAX_ID 322
#define K_SYSCALL_HWSPINLOCK_LOCK 323
#define K_SYSCALL_HWSPINLOCK_TRYLOCK 324
#define K_SYSCALL_HWSPINLOCK_UNLOCK 325
#define K_SYSCALL_I2C_CONFIGURE 326
#define K_SYSCALL_I2C_GET_CONFIG 327
#define K_SYSCALL_I2C_RECOVER_BUS 328
#define K_SYSCALL_I2C_TARGET_DRIVER_REGISTER 329
#define K_SYSCALL_I2C_TARGET_DRIVER_UNREGISTER 330
#define K_SYSCALL_I2C_TRANSFER 331
#define K_SYSCALL_I2S_BUF_READ 332
#define K_SYSCALL_I2S_BUF_WRITE 333
#define K_SYSCALL_I2S_CONFIGURE 334
#define K_SYSCALL_I2S_TRIGGER 335
#define K_SYSCALL_I3C_DO_CCC 336
#define K_SYSCALL_I3C_TRANSFER 337
#define K_SYSCALL_IPM_COMPLETE 338
#define K_SYSCALL_IPM_MAX_DATA_SIZE_GET 339
#define K_SYSCALL_IPM_MAX_ID_VAL_GET 340
#define K_SYSCALL_IPM_SEND 341
#define K_SYSCALL_IPM_SET_ENABLED 342
#define K_SYSCALL_IVSHMEM_ENABLE_INTERRUPTS 343
#define K_SYSCALL_IVSHMEM_GET_ID 344
#define K_SYSCALL_IVSHMEM_GET_MAX_PEERS 345
#define K_SYSCALL_IVSHMEM_GET_MEM 346
#define K_SYSCALL_IVSHMEM_GET_OUTPUT_MEM_SECTION 347
#define K_SYSCALL_IVSHMEM_GET_PROTOCOL 348
#define K_SYSCALL_IVSHMEM_GET_RW_MEM_SECTION 349
#define K_SYSCALL_IVSHMEM_GET_STATE 350
#define K_SYSCALL_IVSHMEM_GET_VECTORS 351
#define K_SYSCALL_IVSHMEM_INT_PEER 352
#define K_SYSCALL_IVSHMEM_REGISTER_HANDLER 353
#define K_SYSCALL_IVSHMEM_SET_STATE 354
#define K_SYSCALL_KSCAN_CONFIG 355
#define K_SYSCALL_KSCAN_DISABLE_CALLBACK 356
#define K_SYSCALL_KSCAN_ENABLE_CALLBACK 357
#define K_SYSCALL_K_MEM_PAGING_HISTOGRAM_BACKING_STORE_PAGE_IN_GET 358
#define K_SYSCALL_K_MEM_PAGING_HISTOGRAM_BACKING_STORE_PAGE_OUT_GET 359
#define K_SYSCALL_K_MEM_PAGING_HISTOGRAM_EVICTION_GET 360
#define K_SYSCALL_K_MEM_PAGING_STATS_GET 361
#define K_SYSCALL_K_MEM_PAGING_THREAD_STATS_GET 362
#define K_SYSCALL_LED_BLINK 363
#define K_SYSCALL_LED_GET_INFO 364
#define K_SYSCALL_LED_OFF 365
#define K_SYSCALL_LED_ON 366
#define K_SYSCALL_LED_SET_BRIGHTNESS 367
#define K_SYSCALL_LED_SET_CHANNEL 368
#define K_SYSCALL_LED_SET_COLOR 369
#define K_SYSCALL_LED_WRITE_CHANNELS 370
#define K_SYSCALL_MAXIM_DS3231_GET_SYNCPOINT 371
#define K_SYSCALL_MAXIM_DS3231_REQ_SYNCPOINT 372
#define K_SYSCALL_MBOX_MAX_CHANNELS_GET 373
#define K_SYSCALL_MBOX_MTU_GET 374
#define K_SYSCALL_MBOX_SEND 375
#define K_SYSCALL_MBOX_SET_ENABLED 376
#define K_SYSCALL_MDIO_BUS_DISABLE 377
#define K_SYSCALL_MDIO_BUS_ENABLE 378
#define K_SYSCALL_MDIO_READ 379
#define K_SYSCALL_MDIO_READ_C45 380
#define K_SYSCALL_MDIO_WRITE 381
#define K_SYSCALL_MDIO_WRITE_C45 382
#define K_SYSCALL_MSPI_CONFIG 383
#define K_SYSCALL_MSPI_DEV_CONFIG 384
#define K_SYSCALL_MSPI_GET_CHANNEL_STATUS 385
#define K_SYSCALL_MSPI_SCRAMBLE_CONFIG 386
#define K_SYSCALL_MSPI_TIMING_CONFIG 387
#define K_SYSCALL_MSPI_TRANSCEIVE 388
#define K_SYSCALL_MSPI_XIP_CONFIG 389
#define K_SYSCALL_NET_ADDR_NTOP 390
#define K_SYSCALL_NET_ADDR_PTON 391
#define K_SYSCALL_NET_ETH_GET_PTP_CLOCK_BY_INDEX 392
#define K_SYSCALL_NET_IF_GET_BY_INDEX 393
#define K_SYSCALL_NET_IF_IPV4_ADDR_ADD_BY_INDEX 394
#define K_SYSCALL_NET_IF_IPV4_ADDR_LOOKUP_BY_INDEX 395
#define K_SYSCALL_NET_IF_IPV4_ADDR_RM_BY_INDEX 396
#define K_SYSCALL_NET_IF_IPV4_SET_GW_BY_INDEX 397
#define K_SYSCALL_NET_IF_IPV4_SET_NETMASK_BY_ADDR_BY_INDEX 398
#define K_SYSCALL_NET_IF_IPV4_SET_NETMASK_BY_INDEX 399
#define K_SYSCALL_NET_IF_IPV6_ADDR_ADD_BY_INDEX 400
#define K_SYSCALL_NET_IF_IPV6_ADDR_LOOKUP_BY_INDEX 401
#define K_SYSCALL_NET_IF_IPV6_ADDR_RM_BY_INDEX 402
#define K_SYSCALL_NET_SOCKET_SERVICE_REGISTER 403
#define K_SYSCALL_NRF_QSPI_NOR_XIP_ENABLE 404
#define K_SYSCALL_PECI_CONFIG 405
#define K_SYSCALL_PECI_DISABLE 406
#define K_SYSCALL_PECI_ENABLE 407
#define K_SYSCALL_PECI_TRANSFER 408
#define K_SYSCALL_PS2_CONFIG 409
#define K_SYSCALL_PS2_DISABLE_CALLBACK 410
#define K_SYSCALL_PS2_ENABLE_CALLBACK 411
#define K_SYSCALL_PS2_READ 412
#define K_SYSCALL_PS2_WRITE 413
#define K_SYSCALL_PTP_CLOCK_GET 414
#define K_SYSCALL_RESET_LINE_ASSERT 415
#define K_SYSCALL_RESET_LINE_DEASSERT 416
#define K_SYSCALL_RESET_LINE_TOGGLE 417
#define K_SYSCALL_RESET_STATUS 418
#define K_SYSCALL_RETAINED_MEM_CLEAR 419
#define K_SYSCALL_RETAINED_MEM_READ 420
#define K_SYSCALL_RETAINED_MEM_SIZE 421
#define K_SYSCALL_RETAINED_MEM_WRITE 422
#define K_SYSCALL_RTC_ALARM_GET_SUPPORTED_FIELDS 423
#define K_SYSCALL_RTC_ALARM_GET_TIME 424
#define K_SYSCALL_RTC_ALARM_IS_PENDING 425
#define K_SYSCALL_RTC_ALARM_SET_CALLBACK 426
#define K_SYSCALL_RTC_ALARM_SET_TIME 427
#define K_SYSCALL_RTC_GET_CALIBRATION 428
#define K_SYSCALL_RTC_GET_TIME 429
#define K_SYSCALL_RTC_SET_CALIBRATION 430
#define K_SYSCALL_RTC_SET_TIME 431
#define K_SYSCALL_RTC_UPDATE_SET_CALLBACK 432
#define K_SYSCALL_RTIO_CQE_COPY_OUT 433
#define K_SYSCALL_RTIO_CQE_GET_MEMPOOL_BUFFER 434
#define K_SYSCALL_RTIO_RELEASE_BUFFER 435
#define K_SYSCALL_RTIO_SQE_CANCEL 436
#define K_SYSCALL_RTIO_SQE_COPY_IN_GET_HANDLES 437
#define K_SYSCALL_RTIO_SUBMIT 438
#define K_SYSCALL_SDHC_CARD_BUSY 439
#define K_SYSCALL_SDHC_CARD_PRESENT 440
#define K_SYSCALL_SDHC_DISABLE_INTERRUPT 441
#define K_SYSCALL_SDHC_ENABLE_INTERRUPT 442
#define K_SYSCALL_SDHC_EXECUTE_TUNING 443
#define K_SYSCALL_SDHC_GET_HOST_PROPS 444
#define K_SYSCALL_SDHC_HW_RESET 445
#define K_SYSCALL_SDHC_REQUEST 446
#define K_SYSCALL_SDHC_SET_IO 447
#define K_SYSCALL_SENSOR_ATTR_GET 448
#define K_SYSCALL_SENSOR_ATTR_SET 449
#define K_SYSCALL_SENSOR_CHANNEL_GET 450
#define K_SYSCALL_SENSOR_GET_DECODER 451
#define K_SYSCALL_SENSOR_RECONFIGURE_READ_IODEV 452
#define K_SYSCALL_SENSOR_SAMPLE_FETCH 453
#define K_SYSCALL_SENSOR_SAMPLE_FETCH_CHAN 454
#define K_SYSCALL_SIP_SUPERVISORY_CALL 455
#define K_SYSCALL_SIP_SVC_PLAT_ASYNC_RES_REQ 456
#define K_SYSCALL_SIP_SVC_PLAT_ASYNC_RES_RES 457
#define K_SYSCALL_SIP_SVC_PLAT_FORMAT_TRANS_ID 458
#define K_SYSCALL_SIP_SVC_PLAT_FREE_ASYNC_MEMORY 459
#define K_SYSCALL_SIP_SVC_PLAT_FUNC_ID_VALID 460
#define K_SYSCALL_SIP_SVC_PLAT_GET_ERROR_CODE 461
#define K_SYSCALL_SIP_SVC_PLAT_GET_TRANS_IDX 462
#define K_SYSCALL_SIP_SVC_PLAT_UPDATE_TRANS_ID 463
#define K_SYSCALL_SMBUS_BLOCK_PCALL 464
#define K_SYSCALL_SMBUS_BLOCK_READ 465
#define K_SYSCALL_SMBUS_BLOCK_WRITE 466
#define K_SYSCALL_SMBUS_BYTE_DATA_READ 467
#define K_SYSCALL_SMBUS_BYTE_DATA_WRITE 468
#define K_SYSCALL_SMBUS_BYTE_READ 469
#define K_SYSCALL_SMBUS_BYTE_WRITE 470
#define K_SYSCALL_SMBUS_CONFIGURE 471
#define K_SYSCALL_SMBUS_GET_CONFIG 472
#define K_SYSCALL_SMBUS_HOST_NOTIFY_REMOVE_CB 473
#define K_SYSCALL_SMBUS_PCALL 474
#define K_SYSCALL_SMBUS_QUICK 475
#define K_SYSCALL_SMBUS_SMBALERT_REMOVE_CB 476
#define K_SYSCALL_SMBUS_WORD_DATA_READ 477
#define K_SYSCALL_SMBUS_WORD_DATA_WRITE 478
#define K_SYSCALL_SPI_RELEASE 479
#define K_SYSCALL_SPI_TRANSCEIVE 480
#define K_SYSCALL_SYSCON_GET_BASE 481
#define K_SYSCALL_SYSCON_GET_SIZE 482
#define K_SYSCALL_SYSCON_READ_REG 483
#define K_SYSCALL_SYSCON_WRITE_REG 484
#define K_SYSCALL_SYS_CACHE_DATA_FLUSH_AND_INVD_RANGE 485
#define K_SYSCALL_SYS_CACHE_DATA_FLUSH_RANGE 486
#define K_SYSCALL_SYS_CACHE_DATA_INVD_RANGE 487
#define K_SYSCALL_SYS_CSRAND_GET 488
#define K_SYSCALL_SYS_RAND_GET 489
#define K_SYSCALL_TEE_CANCEL 490
#define K_SYSCALL_TEE_CLOSE_SESSION 491
#define K_SYSCALL_TEE_GET_VERSION 492
#define K_SYSCALL_TEE_INVOKE_FUNC 493
#define K_SYSCALL_TEE_OPEN_SESSION 494
#define K_SYSCALL_TEE_SHM_ALLOC 495
#define K_SYSCALL_TEE_SHM_FREE 496
#define K_SYSCALL_TEE_SHM_REGISTER 497
#define K_SYSCALL_TEE_SHM_UNREGISTER 498
#define K_SYSCALL_TEE_SUPPL_RECV 499
#define K_SYSCALL_TEE_SUPPL_SEND 500
#define K_SYSCALL_TGPIO_PIN_CONFIG_EXT_TIMESTAMP 501
#define K_SYSCALL_TGPIO_PIN_DISABLE 502
#define K_SYSCALL_TGPIO_PIN_PERIODIC_OUTPUT 503
#define K_SYSCALL_TGPIO_PIN_READ_TS_EC 504
#define K_SYSCALL_TGPIO_PORT_GET_CYCLES_PER_SECOND 505
#define K_SYSCALL_TGPIO_PORT_GET_TIME 506
#define K_SYSCALL_UPDATEHUB_AUTOHANDLER 507
#define K_SYSCALL_UPDATEHUB_CONFIRM 508
#define K_SYSCALL_UPDATEHUB_PROBE 509
#define K_SYSCALL_UPDATEHUB_REBOOT 510
#define K_SYSCALL_UPDATEHUB_UPDATE 511
#define K_SYSCALL_USER_FAULT 512
#define K_SYSCALL_W1_CHANGE_BUS_LOCK 513
#define K_SYSCALL_W1_CONFIGURE 514
#define K_SYSCALL_W1_GET_SLAVE_COUNT 515
#define K_SYSCALL_W1_READ_BIT 516
#define K_SYSCALL_W1_READ_BLOCK 517
#define K_SYSCALL_W1_READ_BYTE 518
#define K_SYSCALL_W1_RESET_BUS 519
#define K_SYSCALL_W1_SEARCH_BUS 520
#define K_SYSCALL_W1_WRITE_BIT 521
#define K_SYSCALL_W1_WRITE_BLOCK 522
#define K_SYSCALL_W1_WRITE_BYTE 523
#define K_SYSCALL_WDT_DISABLE 524
#define K_SYSCALL_WDT_FEED 525
#define K_SYSCALL_WDT_SETUP 526
#define K_SYSCALL_XTENSA_USER_FAULT 527
#define K_SYSCALL_ZSOCK_ACCEPT 528
#define K_SYSCALL_ZSOCK_BIND 529
#define K_SYSCALL_ZSOCK_CLOSE 530
#define K_SYSCALL_ZSOCK_CONNECT 531
#define K_SYSCALL_ZSOCK_FCNTL_IMPL 532
#define K_SYSCALL_ZSOCK_GETHOSTNAME 533
#define K_SYSCALL_ZSOCK_GETPEERNAME 534
#define K_SYSCALL_ZSOCK_GETSOCKNAME 535
#define K_SYSCALL_ZSOCK_GETSOCKOPT 536
#define K_SYSCALL_ZSOCK_GET_CONTEXT_OBJECT 537
#define K_SYSCALL_ZSOCK_INET_PTON 538
#define K_SYSCALL_ZSOCK_IOCTL_IMPL 539
#define K_SYSCALL_ZSOCK_LISTEN 540
#define K_SYSCALL_ZSOCK_POLL 541
#define K_SYSCALL_ZSOCK_RECVFROM 542
#define K_SYSCALL_ZSOCK_RECVMSG 543
#define K_SYSCALL_ZSOCK_SELECT 544
#define K_SYSCALL_ZSOCK_SENDMSG 545
#define K_SYSCALL_ZSOCK_SENDTO 546
#define K_SYSCALL_ZSOCK_SETSOCKOPT 547
#define K_SYSCALL_ZSOCK_SHUTDOWN 548
#define K_SYSCALL_ZSOCK_SOCKET 549
#define K_SYSCALL_ZSOCK_SOCKETPAIR 550
#define K_SYSCALL_Z_ERRNO 551
#define K_SYSCALL_Z_ZSOCK_GETADDRINFO_INTERNAL 552


#ifndef _ASMLANGUAGE

#include <stdarg.h>
#include <stdint.h>

#endif /* _ASMLANGUAGE */

#endif /* ZEPHYR_SYSCALL_LIST_H */
