/*
 * Copyright (c) 2019 Luís Ferreira <luis@aurorafoss.org>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 3 as published by
 * the Free Software Foundation.
 *
 */

#include <glib.h>
#include <gudev/gudev.h>

typedef enum {
	ACCEL_LOCATION_DISPLAY,
	ACCEL_LOCATION_BASE,
} AccelLocation;

AccelLocation setup_accel_location (GUdevDevice *device);

gboolean parse_accel_location (const char    *location,
                               AccelLocation *value);