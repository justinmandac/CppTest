/*
 * kalmanFilter.h
 *
 *  Created on: Sep 29, 2012
 *      Author: Justin
 */

#ifndef PREFILTER_H_
#define PREFILTER_H_

#include "buffer.h"
#include <stdio.h>


class preFilter {
	const short MAX_FLT_LEN = 63;
	const short FLT_ORD 	= 6;
	const short MAX_IN_LEN  = SAMPLES;
	const short BUFF_LEN 	= (MAX_FLT_LEN - 1 + MAX_IN_LEN);
	const float coeffs[(FLT_ORD) +1] = {0.0303,0.1187,0.2193,0.2636,0.2193,0.1187,0.0303};


public:
	preFilter();
	virtual ~preFilter();
	struct inputBuffer filter(struct inputBuffer input);
};

#endif /* PREFILTER_H_ */
