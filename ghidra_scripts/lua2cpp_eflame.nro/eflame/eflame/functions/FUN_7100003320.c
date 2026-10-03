
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_7100003320(L2CFighterEflame *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ELEMENT_INSTANCE_WORK_ID_FLAG_ENABLE_CHANGE);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  lib::L2CValue::operator.cast.to.bool(aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_ELEMENT_INSTANCE_WORK_ID_FLAG_ENABLE_CHANGE);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue((L2CValue *)return_value,(bool)(bVar1 & 1));
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}

