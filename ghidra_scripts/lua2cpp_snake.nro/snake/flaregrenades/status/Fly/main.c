
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponSnakeFlaregrenades::status::Fly_main
          (L2CWeaponSnakeFlaregrenades *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  Hash40 HVar5;
  void *pvVar6;
  KineticEnergyNormal *pKVar7;
  KineticEnergy *pKVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  ulong local_50;
  undefined8 uStack72;
  
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_50,_WEAPON_SNAKE_FLAREGRENADES_INSTANCE_WORK_ID_FLAG_STOP_ROT);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_SNAKE_FLAREGRENADES_INSTANCE_WORK_ID_FLOAT_ROT);
  fVar9 = (float)lib::L2CValue::as_number((L2CValue *)&local_50);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar9,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0x13762d93e9);
  lib::L2CValue::L2CValue(aLStack112,0x91f64378f);
  uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  uVar4 = lib::L2CValue::as_integer(aLStack112);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar3,uVar4);
  lib::L2CValue::L2CValue(aLStack96,fVar9);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
  lib::L2CValue::operator_(aLStack96,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_50,_WEAPON_SNAKE_FLAREGRENADES_INSTANCE_WORK_ID_FLOAT_ROT_SPEED);
  fVar9 = (float)lib::L2CValue::as_number(aLStack112);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar9,iVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0x3538a83b3);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  lib::L2CValue::L2CValue(aLStack128,1.0);
  lib::L2CValue::L2CValue(aLStack144,false);
  HVar5 = lib::L2CValue::as_hash((L2CValue *)&local_50);
  fVar9 = (float)lib::L2CValue::as_number(aLStack112);
  fVar10 = (float)lib::L2CValue::as_number(aLStack128);
  bVar1 = lib::L2CValue::as_bool(aLStack144);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar5,fVar9,fVar10,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  fVar9 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack112,fVar9);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  pvVar6 = (void *)app::lua_bind::KineticModule__get_energy_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack128,pvVar6);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0x13762d93e9);
  lib::L2CValue::L2CValue(aLStack160,0x73ac73c6c);
  uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  uVar4 = lib::L2CValue::as_integer(aLStack160);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar3,uVar4);
  lib::L2CValue::L2CValue(aLStack144,fVar9);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0x13762d93e9);
  lib::L2CValue::L2CValue(aLStack176,0x74dc00cfa);
  uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  uVar4 = lib::L2CValue::as_integer(aLStack176);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar3,uVar4);
  lib::L2CValue::L2CValue(aLStack160,fVar9);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0x13762d93e9);
  lib::L2CValue::L2CValue(aLStack192,0xd19a47f7f);
  uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  uVar4 = lib::L2CValue::as_integer(aLStack192);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar3,uVar4);
  lib::L2CValue::L2CValue(aLStack176,fVar9);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0x13762d93e9);
  lib::L2CValue::L2CValue(aLStack208,0x13df50aa57);
  uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  uVar4 = lib::L2CValue::as_integer(aLStack208);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar3,uVar4);
  lib::L2CValue::L2CValue(aLStack192,fVar9);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::operator_(aLStack144,aLStack112);
  uVar3 = lib::L2CValue::as_number(aLStack208);
  uVar11 = lib::L2CValue::as_number(aLStack160);
  local_50 = uVar3 & 0xffffffff | (ulong)uVar11 << 0x20;
  uStack72 = 0;
  pKVar7 = (KineticEnergyNormal *)lib::L2CValue::as_pointer(aLStack128);
  app::lua_bind::KineticEnergyNormal__set_speed_impl(pKVar7,(Vector2f *)&local_50);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::L2CValue(aLStack208,0.0);
  lib::L2CValue::operator_(aLStack176);
  uVar3 = lib::L2CValue::as_number(aLStack208);
  uVar11 = lib::L2CValue::as_number(aLStack224);
  local_50 = uVar3 & 0xffffffff | (ulong)uVar11 << 0x20;
  uStack72 = 0;
  pKVar7 = (KineticEnergyNormal *)lib::L2CValue::as_pointer(aLStack128);
  app::lua_bind::KineticEnergyNormal__set_accel_impl(pKVar7,(Vector2f *)&local_50);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  uVar3 = lib::L2CValue::as_number(aLStack144);
  uVar11 = lib::L2CValue::as_number(aLStack192);
  local_50 = uVar3 & 0xffffffff | (ulong)uVar11 << 0x20;
  uStack72 = 0;
  pKVar7 = (KineticEnergyNormal *)lib::L2CValue::as_pointer(aLStack128);
  app::lua_bind::KineticEnergyNormal__set_limit_speed_impl(pKVar7,(Vector2f *)&local_50);
  pKVar8 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack128);
  app::lua_bind::KineticEnergy__enable_impl(pKVar8);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,Fly_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

