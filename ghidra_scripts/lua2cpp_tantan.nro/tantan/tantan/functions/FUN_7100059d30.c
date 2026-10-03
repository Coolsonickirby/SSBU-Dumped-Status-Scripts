
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100059d30(L2CValue *param_1,long param_2)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_MOTION_KIND_L);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  lVar3 = app::lua_bind::WorkModule__get_int64_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
  lib::L2CValue::L2CValue(aLStack80,lVar3);
  lib::L2CValue::L2CValue(aLStack64,0x7fb997a80);
  uVar4 = lib::L2CValue::operator==(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_LONG_L);
    iVar2 = lib::L2CValue::as_integer(aLStack64);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
    lib::L2CValue::L2CValue(param_1,(bool)(bVar1 & 1));
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_LONG_R);
    iVar2 = lib::L2CValue::as_integer(aLStack64);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
    lib::L2CValue::L2CValue(param_1,(bool)(bVar1 & 1));
  }
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}

