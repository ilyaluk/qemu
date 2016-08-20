/*
 * Broadcom BCM947XX boards (c) 2016 Smaluk Arseney Ilya Lukyanov
 *
 * This code is licensed under the GNU GPLv2 and later.
 */

#ifndef BCM947XX_H
#define BCM947XX_H

#include "hw/arm/arm.h"
#include "hw/arm/bcm2835_peripherals.h"
#include "hw/intc/bcm2836_control.h"

#define TYPE_BCM947XX "bcm947xx"
#define BCM947XX(obj) OBJECT_CHECK(BCM947XXState, (obj), TYPE_BCM947XX)

#define BCM947XX_NCPUS 4

typedef struct BCM947XXState {
    /*< private >*/
    DeviceState parent_obj;
    /*< public >*/

    uint32_t enabled_cpus;

    ARMCPU cpus[BCM947XX_NCPUS];
    BCM2836ControlState control;
    BCM2835PeripheralState peripherals;
} BCM947XXState;

#endif /* BCM947XX_H */
