
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPfushigisou::status::AirLassoLanding_main
          (L2CFighterPfushigisou *this,L2CValue *return_value)

{
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_WEAPON_PFUSHIGISOU_VINE_STATUS_KIND_EXHAUST);
  lua2cpp::L2CFighterCommon::status_AirLassoLanding(this,(L2CValue)0xc0);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

