
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterGekkouga::status::Landing_main(L2CFighterGekkouga *this,L2CValue *return_value)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  float fVar4;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,0);
  lib::L2CValue::L2CValue(aLStack80,0);
  FUN_710001feb0(this);
  lua2cpp::L2CFighterCommon::status_LandingStiffness(this);
  lib::L2CValue::L2CValue(aLStack112,0xd07d69a9b);
  lib::L2CValue::L2CValue(aLStack128,0);
  uVar2 = lib::L2CValue::as_integer(aLStack112);
  uVar3 = lib::L2CValue::as_integer(aLStack128);
  fVar4 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar2,uVar3);
  lib::L2CValue::L2CValue(aLStack96,fVar4);
  lib::L2CValue::operator_(aLStack64,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_LANDING_WORK_FLOAT_STIFFNESS_FRAME);
  iVar1 = lib::L2CValue::as_integer(aLStack112);
  fVar4 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack96,fVar4);
  lib::L2CValue::operator_(aLStack80,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  uVar2 = lib::L2CValue::operator_(aLStack64,aLStack80);
  if ((uVar2 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_GEKKOUGA_INSTANCE_WORK_ID_FLAG_SPECIAL_S_IS_DISABLE);
    iVar1 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lua2cpp::L2CFighterCommon::status_Landing(this);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  return;
}

