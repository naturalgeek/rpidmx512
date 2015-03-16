/**
 * @file device_info.h
 *
 */
/* Copyright (C) 2015 by Arjan van Vught <pm @ http://www.raspberrypi.org/forum/>
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:

 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.

 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef RDM_DEVICE_INFO_H_
#define RDM_DEVICE_INFO_H_

#include <stdint.h>

#define DEVICE_MANUFACTURER_ID_LENGTH		2	///<
#define DEVICE_SUPPORTED_LANGUAGE_LENGTH	2	///< The Language Codes are 2 character alpha codes as defined by ISO 639-1.
#define DEVICE_SN_LENGTH					4	///<
#define DEVICE_LABEL_MAX_LENGTH				32	///< 10.5.5 Get/Set Device Label (DEVICE_LABEL)
#define SOFTWARE_VERSION_LABEL_MAX_LENGTH	32	///< 10.5.9 Get Software Version Label (SOFTWARE_VERSION_LABEL)

extern struct _rdm_device_info *rdm_device_info_get(void);
extern void rdm_device_info_init(void);
extern const uint8_t * rdm_device_info_get_uuid(void);
extern const uint8_t * rdm_device_info_get_label(void);
extern const uint8_t rdm_device_info_get_label_length(void);
extern void rdm_device_info_set_label(const uint8_t *, uint8_t );
extern uint8_t rdm_device_info_get_is_factory_defaults(void);
extern const uint8_t * rdm_device_info_get_manufacturer_name(void);
extern const uint8_t rdm_device_info_get_manufacturer_name_length(void);
extern const uint8_t * rdm_device_info_get_supported_language(void);
extern const uint8_t rdm_device_info_get_supported_language_length(void);
extern const uint8_t * rdm_device_info_get_software_version(void);
extern const uint8_t rdm_device_info_get_software_version_length(void);
extern const uint32_t rdm_device_info_get_software_version_id(void);
extern uint16_t rdm_device_info_get_dmx_footprint(void);
extern uint16_t rdm_device_info_get_dmx_start_address(void);
extern void rdm_device_info_set_dmx_start_address(uint16_t);
extern uint8_t rdm_device_info_get_personality_count(void);
extern uint8_t rdm_device_info_get_current_personality(void);
extern void rdm_device_info_set_current_personality(uint8_t);
extern const char * rdm_device_info_get_personality_description(uint8_t);
extern uint16_t rdm_device_info_get_personality_slots(uint8_t);
extern const uint8_t * rdm_device_info_get_manufacturer_id(void);
extern const uint8_t rdm_device_info_get_manufacturer_id_length(void);
extern const uint8_t * rdm_device_info_get_type_id(void);
extern const uint8_t rdm_device_info_get_type_id_length(void);
extern const uint8_t * rdm_device_info_get_sn(void);
extern const uint8_t rdm_device_info_get_sn_length(void);

#endif /* RDM_DEVICE_INFO_H_ */
