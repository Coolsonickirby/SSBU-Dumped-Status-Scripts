
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDiddy::status::SpecialHiFallRoll_exec_stop(L2CFighterDiddy *this,L2CValue *return_value)

{
  int iVar1;
  float fVar2;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack48,0x31d39a761);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DIDDY_STATUS_SPECIAL_HI_WORK_FLOAT_ANGLE_X);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  fVar2 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack64,fVar2);
  FUN_71000086c0(this,aLStack48,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

