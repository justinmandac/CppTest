/*
 * preFilter.cpp
 *
 *  Created on: Sep 29, 2012
 *      Author: Justin
 */

#include "preFilter.h"

preFilter::preFilter() {
	// TODO Auto-generated constructor stub

}

preFilter::~preFilter() {
	// TODO Auto-generated destructor stub
}

preFilter::filter(struct inputBuffer input)
{
	struct inputBuffer *ftmp;
	double accX,accY,accZ;
	float *coeffp;
	double *inputXp;
	double *inputYp;
	double *inputZp;
	int n;
	int k;

	double insampX[BUFF_LEN];
	double insampY[BUFF_LEN];
	double insampZ[BUFF_LEN];

	memcpy(&insampX[FLT_ORD + 1 ],input.inX,SAMPLES*sizeof(double));
	memcpy(&insampY[FLT_ORD + 1 ],input.inY,SAMPLES*sizeof(double));
	memcpy(&insampZ[FLT_ORD + 1 ],input.inZ,SAMPLES*sizeof(double));


}
