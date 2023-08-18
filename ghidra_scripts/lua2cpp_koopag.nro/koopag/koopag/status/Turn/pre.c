
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterKoopag::status::Turn_pre(L2CFighterKoopag *this,L2CValue *return_value)

{
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack48,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
  lua2cpp::L2CFighterCommon::status_pre_Turn_Common(this,(L2CValue)0xd0);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

