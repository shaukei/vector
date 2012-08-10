/*
  +----------------------------------------------------------------------+
  | PHP Version 5                                                        |
  +----------------------------------------------------------------------+
  | Copyright (c) 1997-2012 The PHP Group                                |
  +----------------------------------------------------------------------+
  | This source file is subject to version 3.01 of the PHP license,      |
  | that is bundled with this package in the file LICENSE, and is        |
  | available through the world-wide-web at the following url:           |
  | http://www.php.net/license/3_01.txt                                  |
  | If you did not receive a copy of the PHP license and are unable to   |
  | obtain it through the world-wide-web, please send a note to          |
  | license@php.net so we can mail you a copy immediately.               |
  +----------------------------------------------------------------------+
  | Author: Syber Chung                                                  |
  +----------------------------------------------------------------------+
*/

/* $Id$ vector_math.h */

#ifndef __VECTOR_MATH_H_INCLUDED__
#define __VECTOR_MATH_H_INCLUDED__

/** following codes are copied from "Irrlicht Engine" http://irrlicht.sf.net */

	//! Rounding error constant often used when comparing f32 values.

#define ROUNDING_ERROR_S32 0
#define ROUNDING_ERROR_f32 0.000001

#ifdef PI // make sure we don't collide with a define
#undef PI
#endif

	//! Constant for PI.
#define PI		3.14159265359

	//! Constant for reciprocal of PI.
#define RECIPROCAL_PI	 1.0/PI

	//! Constant for half of PI.
#define HALF_PI		PI/2.0


	//! 32bit Constant for converting from degrees to radians
#define DEGTORAD  PI / 180.0

	//! 32bit constant for converting from radians to degrees (formally known as GRAD_PI)
#define RADTODEG   180.0 / PI

	//! Utility function to convert a radian value to degrees
	/** Provided as it can be clearer to write radToDeg(X) than RADTODEG * X
	\param radians	The radians value to convert to degrees.
	*/
	inline f32 radToDeg(f32 radians)
	{
		return RADTODEG * radians;
	}

	//! Utility function to convert a degrees value to radians
	/** Provided as it can be clearer to write degToRad(X) than DEGTORAD * X
	\param degrees	The degrees value to convert to radians.
	*/
	inline f32 degToRad(f32 degrees)
	{
		return DEGTORAD * degrees;
	}


#endif