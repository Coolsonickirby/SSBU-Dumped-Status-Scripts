
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponJackWirerope::status::Contract_exec(L2CWeaponJackWirerope *this,L2CValue *return_value)

{
  int iVar1;
  ulong uVar2;
  float fVar3;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  fVar3 = (float)app::lua_bind::MotionModule__rate_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,fVar3);
  lib::L2CValue::L2CValue(aLStack64,0.0);
  uVar2 = lib::L2CValue::operator_(aLStack64,aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar2 & 1) != 0) {
    fVar3 = (float)app::lua_bind::MotionModule__frame_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack64,fVar3);
    lib::L2CValue::L2CValue(aLStack112,_WEAPON_JACK_WIREROPE_INSTANCE_WORK_ID_FLOAT_TARGET_FRAME);
    iVar1 = lib::L2CValue::as_integer(aLStack112);
    fVar3 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue(aLStack96,fVar3);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::operator_(aLStack64,aLStack80);
    uVar2 = lib::L2CValue::operator_(aLStack96,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar2 & 1) != 0) {
      lib::L2CValue::operator_(aLStack96,aLStack64);
      fVar3 = (float)lib::L2CValue::as_number(aLStack112);
      app::lua_bind::MotionModule__set_rate_impl(this->moduleAccessor,fVar3);
      lib::L2CValue::_L2CValue(aLStack112);
    }
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

