#include "dr_types.h"
#include "br_types.h"
// Offset: 20
// Size: 112
br_error AddRequestedDrivers();

// Offset: 139
// Size: 393
// EAX: pdev
// EDX: dev_begin
// EBX: args
// ECX: image
br_error devAdd(br_device **pdev, br_device_begin_fn *dev_begin, char *args);

// Offset: 541
// Size: 161
br_error BrDevAdd(br_device **pdev, char *image);

// Offset: 717
// Size: 52
br_error BrDevAddStatic(br_device **pdev, br_device_begin_fn *dev_begin);

// Offset: 783
// Size: 85
br_error BrDevCheckAdd(br_device **pdev, char *name);

// Offset: 883
// Size: 342
br_error BrDevAddConfig(char *config);

// Offset: 1237
// Size: 196
br_error BrDevRemove(br_device *dev);

// Offset: 1443
// Size: 195
br_error BrDevFind(br_device **pdev);

// Offset: 1652
// Size: 225
br_error BrDevFindMany(br_device **devices, br_int_32 *ndevices, br_int_32 max_devices);

// Offset: 1888
// Size: 179
br_error BrDevCount(br_int_32 *ndevices);

// Offset: 2086
// Size: 164
br_error BrDevContainedFind(br_object **ph, br_token type, char *pattern);

// Offset: 2273
// Size: 222
br_error BrDevContainedFindMany(br_object **objects, br_int_32 max_objects, br_int_32 *pnum_objects, br_token type);

// Offset: 2515
// Size: 193
br_error BrDevContainedCount(br_int_32 *pcount, br_token type, char *pattern);

