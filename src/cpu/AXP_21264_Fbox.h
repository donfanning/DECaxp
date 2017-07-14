/*
 * Copyright (C) Jonathan D. Belanger 2017.
 * All Rights Reserved.
 *
 * This software is furnished under a license and may be used and copied only
 * in accordance with the terms of such license and with the inclusion of the
 * above copyright notice.  This software or any other copies thereof may not
 * be provided or otherwise made available to any other person.  No title to
 * and ownership of the software is hereby transferred.
 *
 * The information in this software is subject to change without notice and
 * should not be construed as a commitment by the author or co-authors.
 *
 * The author and any co-authors assume no responsibility for the use or
 * reliability of this software.
 *
 * Description:
 *
 *	This header file contains the function definitions implemented in the
 *	AXP_21264_Fbox.c module.
 *
 * Revision History:
 *
 *	V01.000		19-Jun-2017	Jonathan D. Belanger
 *	Initially written.
 */
#ifndef _AXP_21264_FBOX_DEFS_
#define _AXP_21264_FBOX_DEFS_

#include "AXP_Utility.h"
#include "AXP_Base_CPU.h"
#include "AXP_21264_CPU.h"

/*
 * Ebox Instruction Prototypes
 *
 * Floating-Point Control
 */
AXP_EXCEPTIONS AXP_FBEQ(AXP_21264_CPU *, AXP_INSTRUCTION *);
AXP_EXCEPTIONS AXP_FBGE(AXP_21264_CPU *, AXP_INSTRUCTION *);
AXP_EXCEPTIONS AXP_FBGT(AXP_21264_CPU *, AXP_INSTRUCTION *);
AXP_EXCEPTIONS AXP_FBLE(AXP_21264_CPU *, AXP_INSTRUCTION *);
AXP_EXCEPTIONS AXP_FBLT(AXP_21264_CPU *, AXP_INSTRUCTION *);
AXP_EXCEPTIONS AXP_FBNE(AXP_21264_CPU *, AXP_INSTRUCTION *);

/*
 * Floating-Point Load/Store
 */
AXP_EXCEPTIONS AXP_LDF(AXP_21264_CPU *, AXP_INSTRUCTION *);
AXP_EXCEPTIONS AXP_LDG(AXP_21264_CPU *, AXP_INSTRUCTION *);
AXP_EXCEPTIONS AXP_LDS(AXP_21264_CPU *, AXP_INSTRUCTION *);
AXP_EXCEPTIONS AXP_LDT(AXP_21264_CPU *, AXP_INSTRUCTION *);
AXP_EXCEPTIONS AXP_STF(AXP_21264_CPU *, AXP_INSTRUCTION *);
AXP_EXCEPTIONS AXP_STG(AXP_21264_CPU *, AXP_INSTRUCTION *);
AXP_EXCEPTIONS AXP_STS(AXP_21264_CPU *, AXP_INSTRUCTION *);
AXP_EXCEPTIONS AXP_STT(AXP_21264_CPU *, AXP_INSTRUCTION *);

/*
 * Floating-Point Operate
 */
AXP_EXCEPTIONS AXP_CPYS(AXP_21264_CPU *, AXP_INSTRUCTION *);
AXP_EXCEPTIONS AXP_CPYSE(AXP_21264_CPU *, AXP_INSTRUCTION *);
AXP_EXCEPTIONS AXP_CPYSN(AXP_21264_CPU *, AXP_INSTRUCTION *);
AXP_EXCEPTIONS AXP_CVTLQ(AXP_21264_CPU *, AXP_INSTRUCTION *);
AXP_EXCEPTIONS AXP_CVTQL(AXP_21264_CPU *, AXP_INSTRUCTION *);
AXP_EXCEPTIONS AXP_FCMOVEQ(AXP_21264_CPU *, AXP_INSTRUCTION *);
AXP_EXCEPTIONS AXP_FCMOVGE(AXP_21264_CPU *, AXP_INSTRUCTION *);
AXP_EXCEPTIONS AXP_FCMOVGT(AXP_21264_CPU *, AXP_INSTRUCTION *);
AXP_EXCEPTIONS AXP_FCMOVLE(AXP_21264_CPU *, AXP_INSTRUCTION *);
AXP_EXCEPTIONS AXP_FCMOVLT(AXP_21264_CPU *, AXP_INSTRUCTION *);
AXP_EXCEPTIONS AXP_FCMOVNE(AXP_21264_CPU *, AXP_INSTRUCTION *);
AXP_EXCEPTIONS AXP_MF_FPCR(AXP_21264_CPU *, AXP_INSTRUCTION *);
AXP_EXCEPTIONS AXP_MT_FPCR(AXP_21264_CPU *, AXP_INSTRUCTION *);
AXP_EXCEPTIONS AXP_ADDF(AXP_21264_CPU *, AXP_INSTRUCTION *);
AXP_EXCEPTIONS AXP_ADDG(AXP_21264_CPU *, AXP_INSTRUCTION *);
AXP_EXCEPTIONS AXP_ADDS(AXP_21264_CPU *, AXP_INSTRUCTION *);
AXP_EXCEPTIONS AXP_ADDT(AXP_21264_CPU *, AXP_INSTRUCTION *);
AXP_EXCEPTIONS AXP_CMPGEQ(AXP_21264_CPU *, AXP_INSTRUCTION *);
AXP_EXCEPTIONS AXP_CMPGLE(AXP_21264_CPU *, AXP_INSTRUCTION *);
AXP_EXCEPTIONS AXP_CMPGLT(AXP_21264_CPU *, AXP_INSTRUCTION *);
AXP_EXCEPTIONS AXP_CMPTEQ(AXP_21264_CPU *, AXP_INSTRUCTION *);
AXP_EXCEPTIONS AXP_CMPTLE(AXP_21264_CPU *, AXP_INSTRUCTION *);
AXP_EXCEPTIONS AXP_CMPTLT(AXP_21264_CPU *, AXP_INSTRUCTION *);
AXP_EXCEPTIONS AXP_CMPTUN(AXP_21264_CPU *, AXP_INSTRUCTION *);
AXP_EXCEPTIONS AXP_CVTGQ(AXP_21264_CPU *, AXP_INSTRUCTION *);
AXP_EXCEPTIONS AXP_CVTQF(AXP_21264_CPU *, AXP_INSTRUCTION *);
AXP_EXCEPTIONS AXP_CVTQG(AXP_21264_CPU *, AXP_INSTRUCTION *);
AXP_EXCEPTIONS AXP_CVTDG(AXP_21264_CPU *, AXP_INSTRUCTION *);

/*
 * FP Operate Function Field Format
 * 	The formatted function field for FP operations is only done for Opcodes
 * 	0x14 and 0x16.
 */
typedef struct
{
	 u32	fnc : 4;
	 u32	src : 2;
	 u32	rnd : 2;
	 u32	trp : 3;
	 u32	res : 21;
} AXP_FP_FUNC;

#define AXP_FP_ADD		0x0
#define AXP_FP_SUB		0x1
#define AXP_FP_MUL		0x2
#define AXP_FP_DIV		0x3
#define AXP_FP_ITOF		0x4
#define AXP_FP_CMPUN	0x4
#define AXP_FP_CMPEQ	0x5
#define AXP_FP_CMPLT	0x6
#define AXP_FP_CMPLE	0x7
#define AXP_FP_SQRTFG	0xa
#define AXP_FP_SQRTST	0xb
#define AXP_FP_CTVS		0xc
#define AXP_FP_CVTF		0xc
#define AXP_FP_CVTD		0xd
#define AXP_FP_CVTT		0xe
#define AXP_FP_CVTG		0xe
#define AXP_FP_CVTQ		0xf

#define AXP_FP_S		0x0
#define AXP_FP_T		0x2
#define AXP_FP_Q		0x3
#define AXP_FP_F		0x0
#define AXP_FP_D		0x1
#define AXP_FP14_F		0x1
#define AXP_FP_G		0x2
#define AXP_FP_Q		0x3

#define AXP_FP_CHOPPED	0x0
#define AXP_FP_MINUS_INF 0x1
#define AXP_FP_NORMAL	0x2
#define AXP_FP_DYNAMIC	0x3
#define AXP_FP_PLUS_INF 0x3

#define AXP_FP_TRP_V	0x1							/* /V trap */
#define AXP_FP_TRP_U	0x1							/* /U trap */
#define AXP_FP_TRP_I	0x2							/* /I trap - IEEE only */
#define AXP_FP_TRP_S	0x4							/* /S trap */

/*
 * Floating-point macros used for returning and testing various values.
 */
#define AXP_R_SIGN				0x8000000000000000ll
#define AXP_R_EXP				0x7ff0000000000000ll
#define AXP_R_FRAC				0x000fffffffffffffll
#define AXP_R_NM 				0x8000000000000000ll	/* normalized */
#define AXP_R_NMBIT				63
#define AXP_R_HB				0x0010000000000000ll
#define AXP_R_NAN				0x7ff
#define AXP_R_GUARD				(AXP_R_NMBIT - 52)
#define AXP_R_LONG_SMALL		0xffffffff00000000ll
#define AXP_R_LONG_LARGE		0x000000007fffffffll
#define AXP_R_QNAN				0x0008000000000000ll
#define AXP_R_ZERO				0x0000000000000000ll	/* plus zero */
#define AXP_R_MZERO				0x8000000000000000ll	/* minus zero */
#define AXP_R_PINF				0x7ff0000000000000ll	/* plus infinity */
#define AXP_R_MINF				0xfff0000000000000ll	/* minus infinity */
#define AXP_R_PMAX				0x7fefffffffffffffll	/* plus maximum */
#define AXP_R_MMAX				0xffefffffffffffffll	/* minus maximum */
#define AXP_R_EXP_MAX			0x7ff

#define AXP_F_BIAS				0x080
#define AXP_F_EXP_MASK			0xff
#define AXP_F_RND				0x0000008000000000ll 		/* F rounding bit */
#define AXP_G_BIAS				0x400
#define AXP_G_EXP_MASK			0x7ff
#define AXP_G_RND				0x0000000000000400ll		/* G rounding bit */
#define AXP_S_BIAS				0x7f
#define AXP_S_NAN				0xff
#define AXP_S_EXP_MASK			0xff
#define AXP_S_CQ_NAN			0xfff8000020000000ll
#define AXP_S_CS_NAN			0x7ff0000020000000ll
#define AXP_T_BIAS				0x3ff
#define AXP_T_NAN				0x7ff
#define AXP_T_EXP_MASK			0x7ff
#define AXP_T_CQ_NAN			0xfff8000000000001ll
#define AXP_T_CS_NAN			0x7ff0000000000001ll
#define AXP_D_BIAS				0x80
#define AXP_D_EXP_MASK			0xff
#define AXP_D_GUARD				(AXP_R_NMBIT - 55)
#define AXP_D_RND				0x0000000000000080ll	/* D rounding bit */
#define AXP_X_BIAS				0x3fff

#define AXP_Q_POSMAX			0x7fffffffffffffffll
#define AXP_Q_NEGMAX			0x8000000000000000ll

#define AXP_R_Q2L_OVERFLOW(val)	(((val) & AXP_R_SIGN) ? 					\
								 ((val) < AXP_R_LONG_SMALL) :				\
								 ((val) > AXP_R_LONG_LARGE))

/*
 * Exploded rounding constants
 */
#define AXP_F_RND				0x0000008000000000ll	/* F round */
#define AXP_D_RND				0x0000000000000080ll	/* D round */
#define AXP_G_RND				0x0000000000000400ll	/* G round */
#define AXP_S_RND				0x0000008000000000ll	/* S normal round */
#define AXP_S_INF				0x000000ffffffffffll	/* S infinity round */
#define AXP_T_RND				0x0000000000000400ll	/* T normal round */
#define AXP_T_INF				0x00000000000007ffll	/* T infinity round */
#define AXP_F_DT				0						/* type F */
#define AXP_G_DT				1						/* type G */
#define AXP_D_DT				2						/* type D */
#define AXP_L_DT				3						/* type L, Quadword Integer */
#define AXP_Q_DT				4						/* type Q, Quadword Integer */
#define AXP_S_DT				0						/* type S */
#define AXP_T_DT				1						/* type T */
#define AXP_X_DT				2						/* type X */

/*
 * This structure is used to extract a floating point value's (all forms)
 * constituent parts into separate fields, that are actually the same size or
 * larger, to be used in converting from one floating type to another
 *
 * TODO: 	Do we want to also utilize this structure for integers?  There is
 * 			built-in support to do so.
 */
typedef struct
{
	u8		type;
	bool	sign;
	i32		exponent;
	u128	fraction;
} AXP_FP_FLOAT_COMPONENTS;;

/*
 * VAX G/F and IEEE S/T returned values, returned on VAX and IEEE Floating
 * Compare instructions.
 */
#define AXP_G_HALF				0x4000000000000000ll	/* VAX G/F */
#define AXP_T_TWO				0x4000000000000000ll	/* IEEE T/S 2.0 */
#define AXP_FPR_ZERO			0x0000000000000000ll	/* True 0.0 */

/*
 * The following definitions are used throughout the rest of the floating-point
 * code.  Register values are "unpacked" into this structure and then "packed"
 * back into the register.  The unpacking will set certain fields, the
 * operation will set others, and finally the packing will use the fields to
 * both round the results (simple for VAX, complex for IEEE) and then pack them
 * into a 64-bit floating point register.
 */
typedef enum
{
	Reserved,
	Zero,
	Finite,
	Denormal,
	Infinity,
	NotANumber,
	DirtyZero
} AXP_FP_ENCODING;

#define AXP_FP_ENCODE(ur, ieeeFP)											\
	((ur)->exponent == AXP_R_EXP_MAX ?										\
		((ieeeFP) ?															\
			 ((ur)->fraction == 0 ?											\
					 Infinity : 											\
					 NotANumber) : 											\
			 Finite) : 														\
		((ur)->exponent == 0 ?												\
			((ieeeFP) ?														\
				((ur)->fraction == 0 ?										\
					Zero :													\
					Denormal) :												\
				((ur)->sign == 1 ?											\
					Reserved :												\
					((ur)->fraction == 0 ?									\
						Zero :												\
						DirtyZero))) :										\
		Finite))
/*
 * TODO: The following code has been intentionally broken because the formula does not
 *	take into account the fact the IEEE's hidden bit is 0.1 and VAX's hidden bit
 *	is 1.0.  This causes a factor of 4 issue when converting from one bias to the
 *	other.  This needs to be fixed.
 */
#define AXP_FP_CVT_EXP_G2X(fp)												\
	((fp).expo nent ? (fp).exponent + AXP_X_BIAS - AXP_G_BIAS : 0)

#define AXP_FP_CVT_EXP_X2G(fp)												\
	((fp).expo nent ? (fp).exponent - AXP_X_BIAS + AXP_G_BIAS : 0) & AXP_G_EXP_MASK

#endif /* _AXP_21264_FBOX_DEFS_ */
