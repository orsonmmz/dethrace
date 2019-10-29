#include "dr_types.h"
#include "br_types.h"
// Offset: 0
// Size: 198
// EAX: pAngle_in_degrees
float FastFloatSin(int pAngle_in_degrees);

// Offset: 200
// Size: 198
// EAX: pAngle_in_degrees
float FastFloatCos(int pAngle_in_degrees);

// Offset: 400
// Size: 65
// EAX: pAngle_in_degrees
float FastFloatTan(int pAngle_in_degrees);

// Offset: 468
// Size: 51
// EAX: pAngle_in_degrees
br_scalar FastScalarSin(int pAngle_in_degrees);

// Offset: 520
// Size: 51
// EAX: pAngle_in_degrees
br_scalar FastScalarCos(int pAngle_in_degrees);

// Offset: 572
// Size: 65
// EAX: pAngle_in_degrees
br_scalar FastScalarTan(int pAngle_in_degrees);

// Offset: 640
// Size: 77
// EAX: pBR_angle
br_scalar FastScalarSinAngle(br_angle pBR_angle);

// Offset: 720
// Size: 77
// EAX: pBR_angle
br_scalar FastScalarCosAngle(br_angle pBR_angle);

// Offset: 800
// Size: 91
// EAX: pBR_angle
br_scalar FastScalarTanAngle(br_angle pBR_angle);

// Offset: 892
// Size: 201
float FastFloatArcSin(float pValue);

// Offset: 1096
// Size: 64
float FastFloatArcCos(float pValue);

// Offset: 1160
// Size: 58
br_scalar FastScalarArcSin(br_scalar pValue);

// Offset: 1220
// Size: 64
br_scalar FastScalarArcCos(br_scalar pValue);

// Offset: 1284
// Size: 388
float FastFloatArcTan2(float pY, float pX);

// Offset: 1672
// Size: 67
br_scalar FastScalarArcTan2(br_scalar pY, br_scalar pX);

// Offset: 1740
// Size: 533
br_angle FastFloatArcTan2Angle(float pY, float pX);

// Offset: 2276
// Size: 65
br_angle FastScalarArcTan2Angle(br_scalar pY, br_scalar pX);

// Offset: 2344
// Size: 183
// EAX: mat
// EDX: rx
void DRMatrix34RotateX(br_matrix34 *mat, br_angle rx);

// Offset: 2528
// Size: 183
// EAX: mat
// EDX: ry
void DRMatrix34RotateY(br_matrix34 *mat, br_angle ry);

// Offset: 2712
// Size: 183
// EAX: mat
// EDX: rz
void DRMatrix34RotateZ(br_matrix34 *mat, br_angle rz);

// Offset: 2896
// Size: 329
// EAX: mat
// EDX: r
// EBX: a
void DRMatrix34Rotate(br_matrix34 *mat, br_angle r, br_vector3 *a);

// Offset: 3228
// Size: 96
// EAX: mat
// EDX: rx
void DRMatrix34PreRotateX(br_matrix34 *mat, br_angle rx);

// Offset: 3324
// Size: 96
// EAX: mat
// EDX: rx
void DRMatrix34PostRotateX(br_matrix34 *mat, br_angle rx);

// Offset: 3420
// Size: 96
// EAX: mat
// EDX: ry
void DRMatrix34PreRotateY(br_matrix34 *mat, br_angle ry);

// Offset: 3516
// Size: 96
// EAX: mat
// EDX: ry
void DRMatrix34PostRotateY(br_matrix34 *mat, br_angle ry);

// Offset: 3612
// Size: 96
// EAX: mat
// EDX: rz
void DRMatrix34PreRotateZ(br_matrix34 *mat, br_angle rz);

// Offset: 3708
// Size: 96
// EAX: mat
// EDX: rz
void DRMatrix34PostRotateZ(br_matrix34 *mat, br_angle rz);

// Offset: 3804
// Size: 100
// EAX: mat
// EDX: r
// EBX: axis
void DRMatrix34PreRotate(br_matrix34 *mat, br_angle r, br_vector3 *axis);

// Offset: 3904
// Size: 100
// EAX: mat
// EDX: r
// EBX: axis
void DRMatrix34PostRotate(br_matrix34 *mat, br_angle r, br_vector3 *axis);

// Offset: 4004
// Size: 123
// EAX: mat
// EDX: rz
void DRMatrix23Rotate(br_matrix23 *mat, br_angle rz);

// Offset: 4128
// Size: 96
// EAX: mat
// EDX: rz
void DRMatrix23PreRotate(br_matrix23 *mat, br_angle rz);

// Offset: 4224
// Size: 96
// EAX: mat
// EDX: rz
void DRMatrix23PostRotate(br_matrix23 *mat, br_angle rz);

