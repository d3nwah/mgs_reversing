#include <libsn.h>
#include "actor.h"

// sbss ===============================================

int SECTION(".sbss") dword_800AB918;
int SECTION(".sbss") dword_800AB91C;
int SECTION(".sbss") dword_800AB920;
int SECTION(".sbss") dword_800AB924;


// sdata ================================================


extern const char aBislpm86247[];

int SECTION(".sdata") dword_800AB2E4 = 0x200000; // ram size
int SECTION(".sdata") dword_800AB2E8 = 0x8000; // stack size
const char* SECTION(".sdata") off_800AB2EC = aBislpm86247;

const char SECTION(".sdata") aMem[] = "mem:";
const char SECTION(".sdata") aPad[] = "pad:";
const char SECTION(".sdata") aGv[] = "gv:";
const char SECTION(".sdata") aFs[] = "fs:";
const char SECTION(".sdata") aDg[] = "dg:";
const char SECTION(".sdata") aGcl[] = "gcl:";
const char SECTION(".sdata") aHzd[] = "hzd:";
const char SECTION(".sdata") aSound[] = "sound:";
const char SECTION(".sdata") aGm[] = "gm:";
const char SECTION(".sdata") aStart[] = "start\n";


int SECTION(".sdata") dword_800AB330 = 0;
int SECTION(".sdata") dword_800AB334 = 0; // pad ??


// [other_c_sdata]

// ========================================================

extern const char aGvdC[];

extern void GV_Act_80014b60(struct Actor*);

extern void System_init_80015AF4(int index, int bDynamic, void* pMemory, unsigned int size);
extern void sub_80015AB0(void);
extern void sub_80014BD8(void);

extern const char aResidentTopX[];

void sub_80014C28()
{
    System_init_80015AF4(0, 0, (void*)0x80182000, 0x5E000 );
    System_init_80015AF4(1, 0, (void*)0, 0);
}

extern void mg_printf(const char*, ...);
extern int gResidentTop_800AB940;

void sub_80014c70(void)
{
	sub_80015AB0();
	sub_80014BD8();
	System_init_80015AF4(2, 0, (void*)0x80117000, 0x6b000); // TODO: Is actually like unsigned char* heap_80117000[438272];
	mg_printf(aResidentTopX, gResidentTop_800AB940);
}

extern void sub_800164AC(void);
extern void sub_800167C8(void);

void sub_80014cc8(void)
{
	sub_800164AC();
	sub_800167C8();
}

extern void sub_80015540(void);
extern void sub_80014C70(void);

void sub_80014cf0(void)
{
	sub_80015540();
	sub_80014C70();
}

extern void sub_800163b0(void);
extern void sub_80015434(void);
extern void sub_80015434(void);
extern void sub_80015458(void);
extern void sub_80014cc8(void);
extern void sub_800892a8(void*);
extern void sub_80014b34(void);

struct Actor SECTION(".gGVActor_800acbf8") gGVActor_800acbf8;

void GV_StartDaemon_80014d18(void)
{
	GV_ActorList_Init_80014d98();
	sub_800163b0();
	sub_80015434();
	sub_80015458();
	sub_80014cc8();
	GV_ActorPushBack_800150a8(0, &gGVActor_800acbf8, 0);
	GV_ActorInit_8001514c(&gGVActor_800acbf8, GV_Act_80014b60, 0, aGvdC);
	dword_800AB920 = 0;
	dword_800AB330 = 0;
	sub_800892a8(sub_80014b34);
}

