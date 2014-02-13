#ifndef SCIAPS_LIBZHW_INTERFACE_H
#define SCIAPS_LIBZHW_INTERFACE_H

#include <stdint.h>
#include <sys/types.h>

#include <hardware/hardware.h>

__BEGIN_DECLS

#define SCIAPS_LIBZHW_MODULE_ID "libzhw"

struct libzhw_device_t {
	struct hw_device_t common;

	int (*read_micro)(uint8_t address, uint8_t* buffer, int length);
	int (*write_micro)(uint8_t address, uint8_t* buffer, int length);

	/**
	* Read from the pressure sensor
	* Returns: number of bytes read or -1 if error
	*/
	int (*read_pressure)(uint8_t* buffer, int length);
};

__END_DECLS

#endif