
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDiddy::status::FallSpecial_exec(L2CFighterDiddy *this,L2CValue *return_value)

{
  int iVar1;
  ulong uVar2;
  float fVar3;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DIDDY_STATUS_SPECIAL_HI_WORK_FLOAT_ANGLE_X);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  fVar3 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack96,fVar3);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack112,0x31d39a761);
  lib::L2CValue::L2CValue(aLStack128,aLStack96);
  FUN_71000086c0(this,aLStack112,aLStack128);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack144,2.0);
  lib::L2CValue::L2CValue(aLStack80,0.0);
  uVar2 = lib::L2CValue::operator__(aLStack80,aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,0.0);
    uVar2 = lib::L2CValue::operator_(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar2 & 1) == 0) goto LAB_7100008bfc;
    lib::L2CValue::operator_(aLStack96,aLStack144);
    lib::L2CValue::operator_(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0.0);
    uVar2 = lib::L2CValue::operator_(aLStack80,aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar2 & 1) == 0) goto LAB_7100008bfc;
    lib::L2CValue::L2CValue(aLStack80,0.0);
    lib::L2CValue::operator_(aLStack96,aLStack80);
  }
  else {
    lib::L2CValue::operator_(aLStack96,aLStack144);
    lib::L2CValue::operator_(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0.0);
    uVar2 = lib::L2CValue::operator_(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar2 & 1) == 0) goto LAB_7100008bfc;
    lib::L2CValue::L2CValue(aLStack80,0.0);
    lib::L2CValue::operator_(aLStack96,aLStack80);
  }
  lib::L2CValue::_L2CValue(aLStack80);
LAB_7100008bfc:
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DIDDY_STATUS_SPECIAL_HI_WORK_FLOAT_ANGLE_X);
  fVar3 = (float)lib::L2CValue::as_number(aLStack96);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar3,iVar1);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

