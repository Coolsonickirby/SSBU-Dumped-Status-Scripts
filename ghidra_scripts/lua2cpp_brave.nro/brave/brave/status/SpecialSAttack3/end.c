
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBrave::status::SpecialSAttack3_end(L2CFighterBrave *this,L2CValue *return_value)

{
  int iVar1;
  L2CValue *this_00;
  ulong uVar2;
  L2CValue aLStack64 [16];
  
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_BRAVE_STATUS_KIND_SPECIAL_S_ATTACK3_APPEND);
  uVar2 = lib::L2CValue::operator__(this_00,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_BRAVE_INSTANCE_WORK_ID_FLAG_DISABLE_SP_AUTO_RECOVER);
    iVar1 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::_L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

