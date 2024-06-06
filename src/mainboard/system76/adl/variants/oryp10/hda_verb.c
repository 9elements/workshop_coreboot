/* SPDX-License-Identifier: GPL-2.0-only */

#include <device/azalia_device.h>

const u32 cim_verb_data[] = {
	/* Realtek, ALC1220 */
	0x10ec1220, /* Vendor ID */
	0x155867f5, /* Subsystem ID */
	152, /* Number of entries */
	AZALIA_SUBVENDOR(0, 0x155867f5),
	AZALIA_RESET(1),
	AZALIA_PIN_CFG(0, 0x12, 0x90a60130),
	AZALIA_PIN_CFG(0, 0x14, 0x0421101f),
	AZALIA_PIN_CFG(0, 0x15, 0x40000000),
	AZALIA_PIN_CFG(0, 0x16, AZALIA_PIN_CFG_NC(0)),
	AZALIA_PIN_CFG(0, 0x17, AZALIA_PIN_CFG_NC(0)),
	AZALIA_PIN_CFG(0, 0x18, 0x04a11040),
	AZALIA_PIN_CFG(0, 0x19, AZALIA_PIN_CFG_NC(0)),
	AZALIA_PIN_CFG(0, 0x1a, AZALIA_PIN_CFG_NC(0)),
	AZALIA_PIN_CFG(0, 0x1b, 0x90170110),
	AZALIA_PIN_CFG(0, 0x1d, 0x40b7952d),
	AZALIA_PIN_CFG(0, 0x1e, 0x04451150),

	// Enable DMIC microphone on ALC1220
	0x02050036, 0x02042a6a, 0x02050008, 0x0204800b,

	// ALC1306 smart amp
	0x02050027, 0x02040010, 0x02050029, 0x02040000,
	0x0205002b, 0x02040000, 0x0205002c, 0x0204b424,
	0x02050027, 0x02040010, 0x02050029, 0x0204003f,
	0x0205002b, 0x02041000, 0x0205002c, 0x0204b424,
	0x02050027, 0x02040010, 0x02050029, 0x02040004,
	0x0205002b, 0x02040600, 0x0205002c, 0x0204b424,
	0x02050027, 0x02040010, 0x02050029, 0x0204006a,
	0x0205002b, 0x02040006, 0x0205002c, 0x0204b424,
	0x02050027, 0x02040010, 0x02050029, 0x0204006c,
	0x0205002b, 0x0204c0c0, 0x0205002c, 0x0204b424,
	0x02050027, 0x02040010, 0x02050029, 0x0204003c,
	0x0205002b, 0x0204ffd0, 0x0205002c, 0x0204b424,
	0x02050027, 0x02040010, 0x02050029, 0x02040080,
	0x0205002b, 0x02040080, 0x0205002c, 0x0204b424,
	0x02050027, 0x02040010, 0x02050029, 0x02040080,
	0x0205002b, 0x02040880, 0x0205002c, 0x0204b424,
	0x02050027, 0x02040010, 0x02050029, 0x0204003a,
	0x0205002b, 0x02040dfe, 0x0205002c, 0x0204b424,
	0x02050027, 0x02040010, 0x02050029, 0x0204006a,
	0x0205002b, 0x0204005d, 0x0205002c, 0x0204b424,
	0x02050027, 0x02040010, 0x02050029, 0x0204006c,
	0x0205002b, 0x02040442, 0x0205002c, 0x0204b424,
	0x02050027, 0x02040010, 0x02050029, 0x02040005,
	0x0205002b, 0x02040880, 0x0205002c, 0x0204b424,
	0x02050027, 0x02040010, 0x02050029, 0x02040006,
	0x0205002b, 0x02040000, 0x0205002c, 0x0204b424,
	0x02050027, 0x02040010, 0x02050029, 0x02040008,
	0x0205002b, 0x0204b000, 0x0205002c, 0x0204b424,
	0x02050027, 0x02040010, 0x02050029, 0x0204002e,
	0x0205002b, 0x02040800, 0x0205002c, 0x0204b424,
	0x02050027, 0x02040010, 0x02050029, 0x0204006a,
	0x0205002b, 0x020400c3, 0x0205002c, 0x0204b424,
	0x02050027, 0x02040010, 0x02050029, 0x0204006c,
	0x0205002b, 0x0204d4a0, 0x0205002c, 0x0204b424,
	0x02050027, 0x02040010, 0x02050029, 0x0204006a,
	0x0205002b, 0x020400cc, 0x0205002c, 0x0204b424,
	0x02050027, 0x02040010, 0x02050029, 0x0204006c,
	0x0205002b, 0x0204400a, 0x0205002c, 0x0204b424,
	0x02050027, 0x02040010, 0x02050029, 0x0204006a,
	0x0205002b, 0x020400c1, 0x0205002c, 0x0204b424,
	0x02050027, 0x02040010, 0x02050029, 0x0204006c,
	0x0205002b, 0x02040320, 0x0205002c, 0x0204b424,
	0x02050027, 0x02040010, 0x02050029, 0x02040039,
	0x0205002b, 0x02040000, 0x0205002c, 0x0204b424,
	0x02050027, 0x02040010, 0x02050029, 0x0204003b,
	0x0205002b, 0x0204ffff, 0x0205002c, 0x0204b424,
	0x02050027, 0x02040010, 0x02050029, 0x0204003c,
	0x0205002b, 0x0204fc20, 0x0205002c, 0x0204b424,
	0x02050027, 0x02040010, 0x02050029, 0x0204006a,
	0x0205002b, 0x0204005d, 0x0205002c, 0x0204b424,
	0x02050027, 0x02040010, 0x02050029, 0x0204006c,
	0x0205002b, 0x02049142, 0x0205002c, 0x0204b424,
	0x02050027, 0x02040010, 0x02050029, 0x0204006a,
	0x0205002b, 0x02040006, 0x0205002c, 0x0204b424,
	0x02050027, 0x02040010, 0x02050029, 0x0204006c,
	0x0205002b, 0x020400c0, 0x0205002c, 0x0204b424,
	0x02050027, 0x02040010, 0x02050029, 0x0204003c,
	0x0205002b, 0x0204fca0, 0x0205002c, 0x0204b424,
	0x02050027, 0x02040010, 0x02050029, 0x0204003c,
	0x0205002b, 0x0204fce0, 0x0205002c, 0x0204b424,
	0x02050027, 0x02040010, 0x02050029, 0x0204003c,
	0x0205002b, 0x0204fcf0, 0x0205002c, 0x0204b424,
	0x02050027, 0x02040010, 0x02050029, 0x02040080,
	0x0205002b, 0x02040080, 0x0205002c, 0x0204b424,
	0x02050027, 0x02040010, 0x02050029, 0x02040080,
	0x0205002b, 0x02040880, 0x0205002c, 0x0204b424,
	0x02050027, 0x02040010, 0x02050029, 0x02040080,
	0x0205002b, 0x02040880, 0x0205002c, 0x0204b424,
	0x02050027, 0x02040010, 0x02050029, 0x0204003c,
	0x0205002b, 0x0204fce0, 0x0205002c, 0x0204b424,
	0x02050027, 0x02040010, 0x02050029, 0x0204003c,
	0x0205002b, 0x0204fca0, 0x0205002c, 0x0204b424,
	0x02050027, 0x02040010, 0x02050029, 0x0204003c,
	0x0205002b, 0x0204fc20, 0x0205002c, 0x0204b424,
	0x02050027, 0x02040010, 0x02050029, 0x0204006a,
	0x0205002b, 0x02040006, 0x0205002c, 0x0204b424,
	0x02050027, 0x02040010, 0x02050029, 0x0204006c,
	0x0205002b, 0x02040000, 0x0205002c, 0x0204b424,
	0x02050027, 0x02040010, 0x02050029, 0x02040080,
	0x0205002b, 0x02040000, 0x0205002c, 0x0204b424,
	0x02050027, 0x02040010, 0x02050029, 0x02040062,
	0x0205002b, 0x02048000, 0x0205002c, 0x0204b424,
	0x02050027, 0x02040010, 0x02050029, 0x02040063,
	0x0205002b, 0x02045f5f, 0x0205002c, 0x0204b424,
	0x02050027, 0x02040010, 0x02050029, 0x02040064,
	0x0205002b, 0x02042000, 0x0205002c, 0x0204b424,
	0x02050027, 0x02040010, 0x02050029, 0x02040065,
	0x0205002b, 0x02040000, 0x0205002c, 0x0204b424,
	0x02050027, 0x02040010, 0x02050029, 0x02040066,
	0x0205002b, 0x02044004, 0x0205002c, 0x0204b424,
	0x02050027, 0x02040010, 0x02050029, 0x02040067,
	0x0205002b, 0x02040802, 0x0205002c, 0x0204b424,
	0x02050027, 0x02040010, 0x02050029, 0x02040068,
	0x0205002b, 0x0204890f, 0x0205002c, 0x0204b424,
	0x02050027, 0x02040010, 0x02050029, 0x02040069,
	0x0205002b, 0x0204e021, 0x0205002c, 0x0204b424,
	0x02050027, 0x02040010, 0x02050029, 0x02040070,
	0x0205002b, 0x02048012, 0x0205002c, 0x0204b424,
	0x02050027, 0x02040010, 0x02050029, 0x02040071,
	0x0205002b, 0x02043450, 0x0205002c, 0x0204b424,
	0x02050027, 0x02040010, 0x02050029, 0x02040072,
	0x0205002b, 0x02040123, 0x0205002c, 0x0204b424,
	0x02050027, 0x02040010, 0x02050029, 0x02040073,
	0x0205002b, 0x02044543, 0x0205002c, 0x0204b424,
	0x02050027, 0x02040010, 0x02050029, 0x02040074,
	0x0205002b, 0x02042100, 0x0205002c, 0x0204b424,
	0x02050027, 0x02040010, 0x02050029, 0x02040075,
	0x0205002b, 0x02044321, 0x0205002c, 0x0204b424,
	0x02050027, 0x02040010, 0x02050029, 0x02040076,
	0x0205002b, 0x02040000, 0x0205002c, 0x0204b424,
	0x02050027, 0x02040010, 0x02050029, 0x02040046,
	0x0205002b, 0x0204c22e, 0x0205002c, 0x0204b424,
	0x02050027, 0x02040010, 0x02050029, 0x02040050,
	0x0205002b, 0x02048200, 0x0205002c, 0x0204b424,
	0x02050027, 0x02040010, 0x02050029, 0x02040051,
	0x0205002b, 0x02040707, 0x0205002c, 0x0204b424,
	0x02050027, 0x02040010, 0x02050029, 0x02040052,
	0x0205002b, 0x02044090, 0x0205002c, 0x0204b424,
	0x02050027, 0x02040010, 0x02050029, 0x0204006a,
	0x0205002b, 0x02040090, 0x0205002c, 0x0204b424,
	0x02050027, 0x02040010, 0x02050029, 0x0204006c,
	0x0205002b, 0x0204721f, 0x0205002c, 0x0204b424,
	0x02050027, 0x02040010, 0x02050029, 0x02040012,
	0x0205002b, 0x0204dfdf, 0x0205002c, 0x0204b424,
	0x02050027, 0x02040010, 0x02050029, 0x0204009e,
	0x0205002b, 0x02040000, 0x0205002c, 0x0204b424,
	0x02050027, 0x02040010, 0x02050029, 0x02040004,
	0x0205002b, 0x02040500, 0x0205002c, 0x0204b424,
	0x02050027, 0x02040010, 0x02050029, 0x0204006a,
	0x0205002b, 0x02040006, 0x0205002c, 0x0204b424,
	0x02050027, 0x02040010, 0x02050029, 0x0204006c,
	0x0205002b, 0x02040000, 0x0205002c, 0x0204b424,
	0x02050027, 0x02040010, 0x02050029, 0x02040060,
	0x0205002b, 0x02042213, 0x0205002c, 0x0204b424,
	0x02050027, 0x02040010, 0x02050029, 0x0204003a,
	0x0205002b, 0x02041dfe, 0x0205002c, 0x0204b424,
	0x02050027, 0x02040010, 0x02050029, 0x0204003f,
	0x0205002b, 0x02043000, 0x0205002c, 0x0204b424,
};

const u32 pc_beep_verbs[] = {};

AZALIA_ARRAY_SIZES;
