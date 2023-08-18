
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDiddy::status::SpecialHiUpper_exec(L2CFighterDiddy *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  float fVar4;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_DIDDY_STATUS_SPECIAL_HI_FLAG_BOBY_ROLL_START);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_DIDDY_STATUS_SPECIAL_HI_WORK_FLOAT_ANGLE_X);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    fVar4 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack80,fVar4);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,0x31d39a761);
    lib::L2CValue::L2CValue(aLStack112,aLStack80);
    FUN_71000086c0(this,aLStack96,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
  }
  else {
    FUN_710000ba40(aLStack80,this);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_DIDDY_STATUS_SPECIAL_HI_WORK_FLOAT_ANGLE_X);
    fVar4 = (float)lib::L2CValue::as_number(aLStack80);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar4,iVar3);
  }
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

