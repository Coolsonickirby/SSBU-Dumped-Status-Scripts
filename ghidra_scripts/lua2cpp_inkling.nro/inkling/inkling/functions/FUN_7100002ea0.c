
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_7100002ea0(L2CFighterInkling *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue((L2CValue *)return_value,false);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_INKLING_INSTANCE_WORK_ID_FLAG_LANDING_HEAVY);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_LANDING);
    lib::L2CValue::L2CValue(aLStack96,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack64,true);
    lib::L2CValue::operator=((L2CValue *)return_value,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_INKLING_INSTANCE_WORK_ID_FLAG_LANDING_HEAVY);
  iVar3 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}

