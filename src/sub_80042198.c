#include "actor.h"
#include "menuMan.h"

extern DWORD dword_8009D45C;
extern WORD dword_800AB3CC;
extern DWORD dword_800ABA50;
extern WORD word_8009E708;
extern DWORD dword_800AB928;
extern DWORD dword_800ABB0C[21];
extern WORD word_8009E70A;
extern DWORD dword_8009E710;
extern DWORD dword_8009E70C;
extern DWORD dword_800AB380[3];
extern DWORD dword_800AB630[7];
extern DWORD dword_800AB928;

extern void sub_80038A7C(void);
extern void sub_800183D4(void);
extern void sub_80018520(void);
extern void sub_80014C28(void);
extern void sub_80042160(MenuMan*);
extern void MENU_JimakuClear_80049518(void);
extern int sub_80037CD8(void);
extern int sub_80037DC8(void);
extern void mg_printf_8008BBA0(const char*, ...);
extern void sub_80037D64(void);
extern void sub_80032C48(DWORD, char);
extern void sub_80040F74(MenuMan*);
extern void sub_8004D2D0(DWORD);
extern void sub_8004D280(DWORD, char*);
extern void sub_80040498(MenuPrimBuffer*);
extern void MENU_Color_80038B4C(DWORD, DWORD, DWORD);
extern void MENU_Text_XY_Flags_80038B34(int xpos, int ypos, int flags);
extern void sub_80038C38(const char*);
extern void MENU_Text_Init_80038b98(void);
extern void sub_80032968(BYTE, BYTE, BYTE);
extern void sub_80038A6C(void);
extern void sub_80047D40(MenuMan*);
extern void sub_80014BD8(void);
extern void sub_8001844C(void);
extern void sub_80042190(MenuMan*);
extern void sub_8003CB98(MenuMan*);
extern void sub_8003EBDC(MenuMan*);
extern void sub_8003AD64(void);
extern void DG_ChangeReso_80017154(char);
extern void DG_BackGroundNormal_80018548(void);
extern void sub_8004158C(MenuMan*, DWORD*, DWORD);

extern const char* aGetpotionD;
extern const char* aPushSelect;
extern const char* aCallbackTypeDP;
extern const char* aExitMusenki;

void menu_codec_update_80042198(MenuMan* menuMan, BYTE* param_2)
{
    BYTE iVar1_state;
    int iVar4_input;
    iVar1_state = menuMan->field_2A_state;
    iVar4_input = menuMan->field_24_input;

    if ((dword_800ABA50 & 0x8000) == 0)
    {
        if (iVar1_state == 0)
        {
            if (((iVar1_state & 0x2420) == 0) && (dword_800AB928 == 0))
            {
                if (((0 < word_8009E708) && (word_8009E70A < 0)) ||
                    ((menuMan->field_28_flags & 0x100) != 0))
                {
                    dword_8009D45C = 2;
                    dword_800ABB0C[0] = 0xf;
                    dword_800AB3CC &= 0xe7ffffff;
                    dword_800ABB0C[4] = dword_8009D45C;
                    iVar1_state = 4;
                    sub_80038A7C();
                    MENU_JimakuClear_80049518();
                    dword_800AB928 |= 1;
                    sub_800183D4();
                    sub_80018520();
                    sub_80014C28();
                    sub_80042160(menuMan);
                    dword_800AB630[4] = 0xffe0;
                    dword_800ABB0C[3] = 0xff;
                    iVar4_input = (int)word_8009E708;
                    if ((0 < iVar4_input) && ((dword_800AB630[2] = iVar4_input, word_8009E70A == -2 || (word_8009E70A == -4))))
                    {
                        dword_800AB630[4] = 0;
                        menuMan->field_210_size_19F2_font = 1;
                    }
                    if (dword_8009E710 != 0)
                    {
                        word_8009E70A = -1;
                    }
                    menuMan->field_214_108bytes = 0;
                    iVar4_input = sub_80037CD8();
                    if (iVar4_input != -1)
                    {
                        dword_800ABB0C[2] = sub_80037DC8();
                        mg_printf_8008BBA0(aGetpotionD, dword_800ABB0C[2]);
                        iVar4_input = dword_800ABB0C[2];
                    }
                    dword_800ABB0C[2] = iVar4_input;
                    sub_80037D64();
                    dword_800AB380[0] = 2;
                    dword_800AB630[6] = 3;
                    sub_80032C48(0x1ffff20, 0);
                    if ((unsigned int)word_8009E708 - 1 < 2)
                    {
                        sub_80040F74(menuMan);
                        if (word_8009E708 == 1)
                        {
                            sub_8004D2D0(dword_8009E70C);
                        }
                        else
                        {
                            sub_8004D280(dword_8009E70C, 0);
                        }
                        menuMan->field_210_size_19F2_font = 0xe;
                        dword_800ABB0C[0] = 1;
                    }
                }

                if ((0 < word_8009E708) && (0 < word_8009E70A))
                {
                    iVar4_input = (int)(word_8009E70A + -1);
                    word_8009E70A = word_8009E70A + -1;
                    if (iVar4_input == 0)
                    {
                        if (dword_8009E710 == 0)
                        {
                            word_8009E708 = 0;
                        }
                        else
                        {
                            word_8009E70A = -1;
                        }
                    }
                    else
                    {
                        if ((dword_8009E710 != 0) || (0x50 < iVar4_input))
                        {
                            iVar4_input = (399 - iVar4_input) % 0x28;
                            if ((iVar4_input < 0x1a) && (iVar4_input % 0xd < 8))
                            {
                                sub_80040498(menuMan->field_20_prim_buffer);
                                MENU_Color_80038B4C(0xff, 0xff, 0xff);
                                MENU_Text_XY_Flags_80038B34(0xa0, 0x3f, 2);
                                sub_80038C38(aPushSelect);
                                MENU_Text_Init_80038b98();
                            }
                            if ((iVar4_input == 0) && ((0xf0 < word_8009E70A || (dword_8009E710 != 0))))
                            {
                                sub_80032968(0, 0x3f, 0x10);
                            }
                        }
                    }
                }
            }
        }
        else
        {
            if (iVar1_state == '\x04')
            {
                int iVar3;
                if ((menuMan->field_210_size_19F2_font == 0x14) && (iVar3 = sub_80037CD8(), iVar3 != 0))
                {
                    iVar1_state = 0;
                    sub_80038A6C();
                    sub_80047D40(menuMan);
                    sub_80014BD8();
                    dword_800AB928 &= 0xfffffffe;
                    sub_8001844C();
                    sub_80042190(menuMan);
                    DrawSync(0);
                    sub_8003CB98(menuMan);
                    sub_8003EBDC(menuMan);
                    sub_8003AD64();
                    word_8009E708 = 0;
                    dword_800AB3CC &= 0xfff7ffff;
                    mg_printf_8008BBA0(aCallbackTypeDP, dword_800ABB0C[0]);
                    DG_ChangeReso_80017154(0);
                    dword_800AB380[0] = 3;
                    DG_BackGroundNormal_80018548();
                    dword_8009D45C = dword_800ABB0C[4];
                    mg_printf_8008BBA0(aExitMusenki);
                }
                else
                {
            
                    dword_800AB630[6] -= 1;
                    if (dword_800AB630[6] == -1)
                    {
                        DG_ChangeReso_80017154(1);
                    }
                    sub_8004158C(menuMan, param_2, iVar4_input);
                }
            }
        }
    }
}