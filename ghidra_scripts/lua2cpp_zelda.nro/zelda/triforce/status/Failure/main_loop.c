
void __thiscall
L2CWeaponZeldaTriforce::status::Failure_main_loop
          (L2CWeaponZeldaTriforce *this,L2CValue *return_value)

{
  L2CValue *pLVar1;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  pLVar1 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)(this + 1),0xb38b339df);
  lib::L2CValue::L2CValue(aLStack64,pLVar1);
  lib::L2CValue::L2CValue(aLStack80,(L2CValue *)&LUA_SCRIPT_LINE_STATUS_SHIFT);
  FUN_710001ec30(this,aLStack64,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack96,1.0);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  pLVar1 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)(this + 1),0xf7ef86076);
  lib::L2CValue::L2CValue(aLStack128,pLVar1);
  lib::L2CValue::L2CValue(aLStack144,(L2CValue *)&LUA_SCRIPT_LINE_STATUS_SHIFT);
  lib::L2CValue::L2CValue(aLStack160,(L2CValue *)&LUA_SCRIPT_LINE_STATUS_SHIFT);
  FUN_710001f420(this,aLStack96,aLStack112,aLStack128,aLStack144,aLStack160);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

