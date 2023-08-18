
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterLucario::status::SpecialHiRushEnd_init(L2CFighterLucario *this,L2CValue *return_value)

{
  int iVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  KineticEnergyNormal *pKVar5;
  KineticEnergy *pKVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  undefined8 local_40;
  undefined8 uStack56;
  
  FUN_710000ffa0(aLStack80,this);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_40);
  pvVar2 = (void *)app::lua_bind::KineticModule__get_energy_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack96,pvVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack128,0xd371b92e5);
  uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_40);
  uVar4 = lib::L2CValue::as_integer(aLStack128);
  fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar3,uVar4);
  lib::L2CValue::L2CValue(aLStack112,fVar7);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::L2CValue(aLStack128,0.0);
  uVar8 = lib::L2CValue::as_number(aLStack112);
  uVar9 = lib::L2CValue::as_number(aLStack128);
  local_40 = CONCAT44(uVar9,uVar8);
  uStack56 = 0;
  pKVar5 = (KineticEnergyNormal *)lib::L2CValue::as_pointer(aLStack96);
  app::lua_bind::KineticEnergyNormal__set_brake_impl(pKVar5,(Vector2f *)&local_40);
  lib::L2CValue::_L2CValue(aLStack128);
  pKVar6 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack96);
  app::lua_bind::KineticEnergy__enable_impl(pKVar6);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

