/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "ques2.h"

int *
factorial_1_svc(number *argp, struct svc_req *rqstp)
{
	static int  result;

	printf("Recieved input %d from client\n", argp->a);
	int ans = 1;

	for(int i=1; i<=(argp->a); i++) {
		ans *= i;
	}
	result = ans;

	printf("Sending factorial value to client\n");
	return &result;
}