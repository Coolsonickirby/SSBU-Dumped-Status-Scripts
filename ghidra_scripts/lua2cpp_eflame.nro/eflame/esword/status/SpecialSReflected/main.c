
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponEflameEsword::status::SpecialSReflected_main
          (L2CWeaponEflameEsword *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  Hash40 HVar5;
  L2CValue *this_00;
  BattleObjectModuleAccessor *pBVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  ulong local_50;
  undefined8 uStack72;
  
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_EFLAME_ESWORD_STATUS_SPECIAL_S_FLOAT_SPEED_ANGLE_RAD);
  fVar7 = (float)lib::L2CValue::as_number((L2CValue *)&local_50);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar7,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  fVar7 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,fVar7);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0xcedec4cee);
  lib::L2CValue::L2CValue(aLStack128,0x11e3949bad);
  uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  uVar4 = lib::L2CValue::as_integer(aLStack128);
  fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar3,uVar4);
  lib::L2CValue::L2CValue(aLStack112,fVar7);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::operator_(aLStack112,aLStack96);
  lib::L2CValue::operator_(aLStack112,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  lib::L2CValue::L2CValue(aLStack128,0.0);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_50);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
  app::sv_kinetic_energy::set_speed(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,1.0);
  uVar3 = lib::L2CValue::operator__(aLStack96,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_50,0xb338788ac);
    lib::L2CValue::L2CValue(aLStack128,0.0);
    lib::L2CValue::L2CValue(aLStack144,1.0);
    lib::L2CValue::L2CValue(aLStack160,false);
    HVar5 = lib::L2CValue::as_hash((L2CValue *)&local_50);
    fVar7 = (float)lib::L2CValue::as_number(aLStack128);
    fVar8 = (float)lib::L2CValue::as_number(aLStack144);
    bVar1 = lib::L2CValue::as_bool(aLStack160);
    app::lua_bind::MotionModule__change_motion_impl
              (this->moduleAccessor,HVar5,fVar7,fVar8,(bool)(bVar1 & 1),0.0,false,false);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_50,0xbc988b5cf);
    lib::L2CValue::L2CValue(aLStack128,0.0);
    lib::L2CValue::L2CValue(aLStack144,1.0);
    lib::L2CValue::L2CValue(aLStack160,false);
    HVar5 = lib::L2CValue::as_hash((L2CValue *)&local_50);
    fVar7 = (float)lib::L2CValue::as_number(aLStack128);
    fVar8 = (float)lib::L2CValue::as_number(aLStack144);
    bVar1 = lib::L2CValue::as_bool(aLStack160);
    app::lua_bind::MotionModule__change_motion_impl
              (this->moduleAccessor,HVar5,fVar7,fVar8,(bool)(bVar1 & 1),0.0,false,false);
  }
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
  lib::L2CValue::L2CValue(aLStack128,0.0);
  lib::L2CValue::L2CValue(aLStack144,0.0);
  pBVar6 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(this_00);
  uVar3 = lib::L2CValue::as_number(aLStack128);
  uVar9 = lib::L2CValue::as_number(aLStack144);
  local_50 = uVar3 & 0xffffffff | (ulong)uVar9 << 0x20;
  uStack72 = 0;
  app::WeaponSpecializer_EFlameEsword::energy_motion_set_speed_mul_2nd(pBVar6,(Vector2f *)&local_50)
  ;
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,SpecialSReflected_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

