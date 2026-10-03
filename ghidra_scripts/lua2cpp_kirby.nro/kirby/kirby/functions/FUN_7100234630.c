
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100234630(L2CValue *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  L2CValue *this;
  L2CValue *pLVar4;
  Fighter *pFVar5;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KIRBY_STATUS_SPECIAL_N_WORK_INT_INHALE_OBJECT_NUM);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  iVar2 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar2);
  lib::L2CValue::L2CValue(aLStack96,iVar2);
  lib::L2CValue::L2CValue(aLStack80,0);
  uVar3 = lib::L2CValue::operator<(aLStack80,aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((uVar3 & 1) != 0) {
    pLVar4 = (L2CValue *)((long)param_2 + 200);
    this = (L2CValue *)lib::L2CValue::operator[](pLVar4,8);
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar3 = lib::L2CValue::operator==(this,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue
                (aLStack112,_FIGHTER_KIRBY_STATUS_SPECIAL_N_WORK_INT_INHALE_OBJECT_FRAME);
      iVar2 = lib::L2CValue::as_integer(aLStack112);
      iVar2 = app::lua_bind::WorkModule__get_int_impl
                        (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar2);
      lib::L2CValue::L2CValue(aLStack96,iVar2);
      lib::L2CValue::L2CValue(aLStack80,0);
      uVar3 = lib::L2CValue::operator<=(aLStack96,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar3 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KIRBY_STATUS_SPECIAL_N_FLAG_DRINK_WEAPON);
        iVar2 = lib::L2CValue::as_integer(aLStack112);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl
                          (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar2);
        lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue(aLStack80,true);
        uVar3 = lib::L2CValue::operator==(aLStack96,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack112);
        if ((uVar3 & 1) == 0) {
          pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar4,4);
          pFVar5 = (Fighter *)lib::L2CValue::as_pointer(pLVar4);
          bVar1 = app::FighterSpecializer_Kirby::drink_item(pFVar5);
          lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
          lib::L2CValue::L2CValue(aLStack80,false);
          uVar3 = lib::L2CValue::operator==(aLStack96,aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::~L2CValue(aLStack96);
          if ((uVar3 & 1) == 0) {
            lib::L2CValue::L2CValue
                      (aLStack80,_FIGHTER_KIRBY_STATUS_SPECIAL_N_FLAG_CHANGE_ITEM_USE_STATUS);
            iVar2 = lib::L2CValue::as_integer(aLStack80);
            app::lua_bind::WorkModule__on_flag_impl
                      (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar2);
            pLVar4 = aLStack80;
          }
          else {
            lib::L2CValue::L2CValue(aLStack176,_FIGHTER_KIRBY_STATUS_KIND_SPECIAL_N_DRINK_ITEM);
            lib::L2CValue::L2CValue(aLStack192,false);
            lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x50,(L2CValue)0x40);
            lib::L2CValue::~L2CValue(aLStack192);
            pLVar4 = aLStack176;
          }
        }
        else {
          lib::L2CValue::L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack128,_FIGHTER_KIRBY_STATUS_SPECIAL_N_FLAG_SWALLOW_WEAPON);
          iVar2 = lib::L2CValue::as_integer(aLStack128);
          bVar1 = app::lua_bind::WorkModule__is_flag_impl
                            (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar2);
          lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
          lib::L2CValue::L2CValue(aLStack80,true);
          uVar3 = lib::L2CValue::operator==(aLStack112,aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::~L2CValue(aLStack112);
          lib::L2CValue::~L2CValue(aLStack128);
          if ((uVar3 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_SPECIAL_N_DRINK_ITEM);
            lib::L2CValue::operator=(aLStack96,aLStack80);
          }
          else {
            lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_SPECIAL_N_SWALLOW);
            lib::L2CValue::operator=(aLStack96,aLStack80);
          }
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack144,aLStack96);
          lib::L2CValue::L2CValue(aLStack160,false);
          lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x70,(L2CValue)0x60);
          lib::L2CValue::~L2CValue(aLStack160);
          lib::L2CValue::~L2CValue(aLStack144);
          pLVar4 = aLStack96;
        }
        lib::L2CValue::~L2CValue(pLVar4);
        iVar2 = 1;
        goto LAB_7100234874;
      }
      pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar4,4);
      pFVar5 = (Fighter *)lib::L2CValue::as_pointer(pLVar4);
      app::FighterSpecializer_Kirby::inhale_object(pFVar5);
    }
  }
  iVar2 = 0;
LAB_7100234874:
  lib::L2CValue::L2CValue(param_1,iVar2);
  return;
}

