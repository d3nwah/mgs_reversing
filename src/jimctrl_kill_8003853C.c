#include <util/idaTypes.h>
#include "data.h"
#include "jimctrl.h"

extern unk_8009E280 dword_8009E280;

extern void jimctrl_zero_memory_80038004(Actor_sub_80038004 *pJimCtrl);
extern void sub_80024098(void);

void jimctrl_kill_8003853C(Actor_sub_80038004 *pJimCtrl)
{
    jimctrl_zero_memory_80038004(pJimCtrl);
    dword_8009E280.dword_8009E28C = 0;
    sub_80024098();
}
