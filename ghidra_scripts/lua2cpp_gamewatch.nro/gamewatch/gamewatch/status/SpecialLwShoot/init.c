
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterGamewatch::status::SpecialLwShoot_init(L2CFighterGamewatch *this,L2CValue *return_value)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  float fVar4;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack96,0xad8edad44);
  uVar2 = lib::L2CValue::as_integer(aLStack80);
  uVar3 = lib::L2CValue::as_integer(aLStack96);
  fVar4 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar2,uVar3);
  lib::L2CValue::L2CValue(aLStack64,fVar4);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_GAMEWATCH_INSTANCE_WORK_ID_FLOAT_SPECIAL_LW_ATTACK);
  iVar1 = lib::L2CValue::as_integer(aLStack96);
  fVar4 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack80,fVar4);
  lib::L2CValue::_L2CValue(aLStack96);
  uVar2 = lib::L2CValue::operator_(aLStack80,aLStack64);
  if ((uVar2 & 1) != 0) {
    lib::L2CValue::operator_(aLStack80,aLStack64);
  }
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_GAMEWATCH_STATUS_SPECIAL_LW_WORK_FLOAT_ATTACK);
  fVar4 = (float)lib::L2CValue::as_number(aLStack80);
  iVar1 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar4,iVar1);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  return;
}

