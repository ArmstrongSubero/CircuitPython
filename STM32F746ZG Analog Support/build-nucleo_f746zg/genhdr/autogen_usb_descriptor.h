#ifndef MICROPY_INCLUDED_AUTOGEN_USB_DESCRIPTOR_H
#define MICROPY_INCLUDED_AUTOGEN_USB_DESCRIPTOR_H

#include <stdint.h>

const uint8_t usb_desc_dev[18];
// Make sure the control buffer is big enough to fit the descriptor.
#define CFG_TUD_ENUM_BUFFER_SIZE 195
const uint8_t usb_desc_cfg[98];
uint16_t usb_serial_number[25];
uint16_t const * const string_desc_arr [12];

const uint8_t hid_report_descriptor[195];

#define USB_HID_NUM_DEVICES 4

// Vendor name included in Inquiry response, max 8 bytes
#define CFG_TUD_MSC_VENDOR          "STMicroe"

// Product name included in Inquiry response, max 16 bytes
#define CFG_TUD_MSC_PRODUCT         "Nucleo F746zg - "

#endif // MICROPY_INCLUDED_AUTOGEN_USB_DESCRIPTOR_H
