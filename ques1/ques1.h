/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _QUES1_H_RPCGEN
#define _QUES1_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct message {
	char msg[256];
};
typedef struct message message;

#define PROGRAM_PROG 0x12348765
#define PROGRAM_VERS 1

#if defined(__STDC__) || defined(__cplusplus)
#define chat_func 1
extern  message * chat_func_1(message *, CLIENT *);
extern  message * chat_func_1_svc(message *, struct svc_req *);
extern int program_prog_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define chat_func 1
extern  message * chat_func_1();
extern  message * chat_func_1_svc();
extern int program_prog_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_message (XDR *, message*);

#else /* K&R C */
extern bool_t xdr_message ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_QUES1_H_RPCGEN */
