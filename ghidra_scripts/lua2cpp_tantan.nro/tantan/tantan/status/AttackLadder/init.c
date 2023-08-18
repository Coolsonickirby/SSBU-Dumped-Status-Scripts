
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterTantan::status::AttackLadder_init(L2CFighterTantan *this,L2CValue *return_value)

{
  int iVar1;
  L2CValue *pLVar2;
  float fVar3;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  FUN_71000220f0(aLStack96,this);
  pLVar2 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x6d0012358);
  pLVar2 = (L2CValue *)lib::L2CValue::operator__(pLVar2,0x18cdc1683);
  lib::L2CValue::L2CValue(aLStack80,0.0);
  lib::L2CValue::operator_(pLVar2,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_LADDER_WORK_FLOAT_LADDER_UPPER_X);
  fVar3 = (float)lib::L2CValue::as_number(aLStack112);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar3,iVar1);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack112);
  pLVar2 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x6d0012358);
  pLVar2 = (L2CValue *)lib::L2CValue::operator__(pLVar2,0x1fbdb2615);
  lib::L2CValue::L2CValue(aLStack80,0.0);
  lib::L2CValue::operator_(pLVar2,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_LADDER_WORK_FLOAT_LADDER_UPPER_Y);
  fVar3 = (float)lib::L2CValue::as_number(aLStack112);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar3,iVar1);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

