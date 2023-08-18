
void __thiscall
L2CFighterGamewatch::status::AttackHi4Hold_main(L2CFighterGamewatch *this,L2CValue *return_value)

{
  ulong uVar1;
  float fVar2;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,0);
  fVar2 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,fVar2);
  lib::L2CValue::L2CValue(aLStack64,1.0);
  uVar1 = lib::L2CValue::operator__(aLStack96,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar1 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,0xf5db36b5c);
    lib::L2CValue::operator_(aLStack80,aLStack64);
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,0x110e9fb44f);
    lib::L2CValue::operator_(aLStack80,aLStack64);
  }
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack96,aLStack80);
  lua2cpp::L2CFighterCommon::status_AttackHi4Hold_common(this,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

