
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100008380(L2CValue *param_1,L2CFighterCommon *param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lua2cpp::L2CFighterCommon::sub_attack_air_uniq_process_exit(param_2);
  lib::L2CValue::~L2CValue(aLStack64);
  FUN_7100008490(param_2);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PIKMIN_LINK_NO_PIKMIN);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::LinkModule__is_link_impl(param_2->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PIKMIN_LINK_NO_PIKMIN);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::LinkModule__unlink_impl(param_2->moduleAccessor,iVar3);
    lib::L2CValue::~L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

