//HEADER_GOES_HERE
#ifndef __DTHREAD_H__
#define __DTHREAD_H__

extern unsigned int glpDThreadId; // idb
extern BOOLEAN dthread_running;

void dthread_remove_player(int pnum);
void dthread_send_delta(int pnum, char cmd, void *pbSrc, int dwLen);
void dthread_start();
unsigned int __stdcall dthread_handler(void *unused);
void dthread_cleanup();

/* data */
extern int dthread_inf; // weak

#endif /* __DTHREAD_H__ */
