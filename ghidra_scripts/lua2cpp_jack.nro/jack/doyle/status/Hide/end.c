
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponJackDoyle::status::Hide_end(L2CWeaponJackDoyle *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  L2CValue *pLVar3;
  BattleObjectModuleAccessor *pBVar4;
  L2CValue *this_00;
  L2CValue *this_01;
  uint uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  float in_register_00005008;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  ulong local_50;
  ulong uStack72;
  
  lib::L2CValue::L2CValue(aLStack176,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  iVar2 = lib::L2CValue::as_integer(aLStack176);
  app::lua_bind::KineticModule__enable_energy_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::L2CValue(aLStack176,_WEAPON_JACK_DOYLE_INSTANCE_WORK_ID_FLAG_FOLLOW_KINETIC);
  iVar2 = lib::L2CValue::as_integer(aLStack176);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::L2CValue(aLStack176,true);
  bVar1 = lib::L2CValue::as_bool(aLStack176);
  app::lua_bind::VisibilityModule__set_whole_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack176);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
  pBVar4 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar3);
  uVar6 = app::WeaponSpecializer_JackDoyle::get_parent_doyle_joint_pos(pBVar4);
  lib::L2CValue::L2CValue(aLStack176,(float)uVar6);
  lib::L2CValue::L2CValue(aLStack160,(float)((ulong)uVar6 >> 0x20));
  lib::L2CValue::L2CValue(aLStack144,in_register_00005008);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,aLStack176);
  lib::L2CValue::L2CValue(aLStack96,aLStack160);
  lib::L2CValue::L2CValue(aLStack112,aLStack144);
  lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0xb0,(L2CValue)0xa0,(L2CValue)0x90);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack176);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x18cdc1683);
  this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x1fbdb2615);
  this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x162d277af);
  uVar7 = lib::L2CValue::as_number(pLVar3);
  lVar8 = lib::L2CValue::as_number(this_00);
  uVar5 = lib::L2CValue::as_number(this_01);
  local_50 = uVar7 & 0xffffffff | lVar8 << 0x20;
  uStack72 = (ulong)uVar5;
  app::lua_bind::PostureModule__set_pos_impl(this->moduleAccessor,(Vector3f *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack128);
  return;
}

