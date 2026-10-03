
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_71000490c0(L2CFighterRyu *this,L2CValue *return_value)

{
  bool bVar1;
  int iVar2;
  L2CValue *in_x1;
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack64,in_x1);
  bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack64);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack48,_FIGHTER_RYU_STATUS_WORK_ID_SPECIAL_HI_INT_COUNTER);
    iVar2 = lib::L2CValue::as_integer(aLStack48);
    app::lua_bind::WorkModule__dec_int_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::~L2CValue(aLStack48);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}

