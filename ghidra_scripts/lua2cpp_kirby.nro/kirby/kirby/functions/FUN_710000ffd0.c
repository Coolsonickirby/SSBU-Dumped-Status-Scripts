
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710000ffd0(long param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIRBY_STATUS_SPECIAL_N_WORK_INT_INHALE_OBJECT_NUM);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  iVar2 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
  lib::L2CValue::L2CValue(aLStack112,iVar2);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,1);
  lib::L2CValue::operator-(aLStack112,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  iVar2 = lib::L2CValue::as_integer(aLStack128);
  lib::L2CValue::~L2CValue(aLStack128);
  if (-1 < iVar2) {
    iVar6 = -1;
    do {
      lib::L2CValue::L2CValue
                (aLStack96,iVar6 + _FIGHTER_KIRBY_STATUS_SPECIAL_N_WORK_INT_INHALE_OBJECT_ID + 1);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      iVar3 = app::lua_bind::WorkModule__get_int_impl
                        (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
      lib::L2CValue::L2CValue(aLStack128,iVar3);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,0x50000000);
      uVar5 = lib::L2CValue::operator==(aLStack128,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack96,true);
        uVar4 = lib::L2CValue::as_integer(aLStack128);
        bVar1 = lib::L2CValue::as_bool(aLStack96);
        app::sv_battle_object::end_inhaled(uVar4,(bool)(bVar1 & 1));
        lib::L2CValue::~L2CValue(aLStack96);
      }
      lib::L2CValue::~L2CValue(aLStack128);
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar2);
  }
  lib::L2CValue::~L2CValue(aLStack112);
  return;
}

