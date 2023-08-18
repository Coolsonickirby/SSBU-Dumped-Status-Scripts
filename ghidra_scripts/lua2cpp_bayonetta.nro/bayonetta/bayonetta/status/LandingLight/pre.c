
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBayonetta::status::LandingLight_pre(L2CFighterBayonetta *this,L2CValue *return_value)

{
  int iVar1;
  ulong uVar2;
  float fVar3;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BAYONETTA_INSTANCE_WORK_ID_FLOAT_SPECIAL_LANDING_FRAME)
  ;
  iVar1 = lib::L2CValue::as_integer(aLStack96);
  fVar3 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack80,fVar3);
  lib::L2CValue::L2CValue(aLStack64,0.0);
  uVar2 = lib::L2CValue::operator_(aLStack64,aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar2 & 1) == 0) {
    lua2cpp::L2CFighterCommon::status_pre_LandingLight(this);
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_LANDING_FALL_SPECIAL);
    iVar1 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::StatusModule__set_status_kind_interrupt_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
  }
  return;
}

