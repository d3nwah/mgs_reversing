#include "menuMan.h"

extern void menu_codec_update_80042198(void);
void menu_radio_init_80042700(MenuMan* pMenu)
{
    pMenu->m7FnPtrs_field_2C[4] = menu_codec_update_80042198;
    pMenu->field_28_flags |= 0x10u;
}

void menu_radio_kill_8004271c(MenuMan* pMenu)
{
    pMenu->field_28_flags &= ~0x10u;
}
