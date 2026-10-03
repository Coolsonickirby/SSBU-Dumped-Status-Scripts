
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100013f40(L2CValue *param_1,L2CFighterCommon *param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DONKEY_STATUS_SPECIAL_HI_FLAG_CLIFF_CHECK);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(param_2->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_DONKEY_STATUS_SPECIAL_HI_FLAG_CLIFF_CHECK);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__off_flag_impl(param_2->moduleAccessor,iVar3);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack96,_GROUND_CLIFF_CHECK_KIND_ALWAYS_BOTH_SIDES);
    lua2cpp::L2CFighterCommon::sub_fighter_cliff_check(param_2,(L2CValue)0xa0);
    lib::L2CValue::~L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

