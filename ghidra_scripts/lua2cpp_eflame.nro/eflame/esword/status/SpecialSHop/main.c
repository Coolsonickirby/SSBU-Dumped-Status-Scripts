
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponEflameEsword::status::SpecialSHop_main(L2CWeaponEflameEsword *this,L2CValue *return_value)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  L2CValue *this_00;
  BattleObjectModuleAccessor *pBVar7;
  Hash40 HVar8;
  float fVar9;
  uint uVar10;
  float fVar11;
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  ulong local_60;
  undefined8 uStack88;
  
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
  lib::L2CValue::L2CValue(aLStack112,_WEAPON_EFLAME_ESWORD_STATUS_SPECIAL_S_FLOAT_SPEED_ANGLE_RAD);
  fVar9 = (float)lib::L2CValue::as_number((L2CValue *)&local_60);
  iVar4 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar9,iVar4);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue(aLStack128,0xcedec4cee);
  lib::L2CValue::L2CValue(aLStack144,0xb7a7258c1);
  uVar5 = lib::L2CValue::as_integer(aLStack128);
  uVar6 = lib::L2CValue::as_integer(aLStack144);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar9);
  fVar9 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack160,fVar9);
  lib::L2CValue::operator_((L2CValue *)&local_60,aLStack160);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0xcedec4cee);
  lib::L2CValue::L2CValue(aLStack144,0xb0d756857);
  uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  uVar6 = lib::L2CValue::as_integer(aLStack144);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack128,fVar9);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0xcedec4cee);
  lib::L2CValue::L2CValue(aLStack160,0xbe28ed574);
  uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  uVar6 = lib::L2CValue::as_integer(aLStack160);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack144,fVar9);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_60);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
  app::sv_kinetic_energy::set_speed(this->luaStateAgent);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  lib::L2CValue::L2CValue(aLStack160,0.0);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_60);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
  app::sv_kinetic_energy::set_brake(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
  lib::L2CValue::L2CValue(aLStack160,0.0);
  lib::L2CValue::L2CValue(aLStack176,0.0);
  pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(this_00);
  uVar5 = lib::L2CValue::as_number(aLStack160);
  uVar10 = lib::L2CValue::as_number(aLStack176);
  local_60 = uVar5 & 0xffffffff | (ulong)uVar10 << 0x20;
  uStack88 = 0;
  app::WeaponSpecializer_EFlameEsword::energy_motion_set_speed_mul_2nd(pBVar7,(Vector2f *)&local_60)
  ;
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0x30be545de);
  lib::L2CValue::L2CValue(aLStack160,0.0);
  lib::L2CValue::L2CValue(aLStack176,false);
  lib::L2CValue::L2CValue(aLStack192,false);
  lib::L2CValue::L2CValue(aLStack208,1.0);
  lib::L2CValue::L2CValue(aLStack224,false);
  HVar8 = lib::L2CValue::as_hash((L2CValue *)&local_60);
  fVar9 = (float)lib::L2CValue::as_number(aLStack160);
  bVar1 = lib::L2CValue::as_bool(aLStack176);
  bVar2 = lib::L2CValue::as_bool(aLStack192);
  fVar11 = (float)lib::L2CValue::as_number(aLStack208);
  bVar3 = lib::L2CValue::as_bool(aLStack224);
  app::lua_bind::MotionAnimcmdModule__change_script_motion_lines_impl
            (this->moduleAccessor,HVar8,fVar9,(bool)(bVar1 & 1),(bool)(bVar2 & 1),fVar11,
             (bool)(bVar3 & 1));
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,SpecialSHop_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

