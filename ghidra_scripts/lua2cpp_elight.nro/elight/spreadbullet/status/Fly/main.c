
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponElightSpreadbullet::status::Fly_main
          (L2CWeaponElightSpreadbullet *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  Hash40 HVar6;
  L2CValue *pLVar7;
  L2CValue *pLVar8;
  L2CValue *this_00;
  L2CValue *this_01;
  L2CValue *pLVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  
  lib::L2CValue::L2CValue(aLStack224,0x12cd391bb3);
  lib::L2CValue::L2CValue(aLStack128,0x419cd3efe);
  uVar4 = lib::L2CValue::as_integer(aLStack224);
  uVar5 = lib::L2CValue::as_integer(aLStack128);
  iVar2 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack112,iVar2);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::L2CValue(aLStack224,_WEAPON_INSTANCE_WORK_ID_INT_INIT_LIFE);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  iVar3 = lib::L2CValue::as_integer(aLStack224);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::L2CValue(aLStack224,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  iVar3 = lib::L2CValue::as_integer(aLStack224);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::L2CValue(aLStack224,0x3538a83b3);
  lib::L2CValue::L2CValue(aLStack128,0.0);
  lib::L2CValue::L2CValue(aLStack144,1.0);
  lib::L2CValue::L2CValue(aLStack160,false);
  HVar6 = lib::L2CValue::as_hash(aLStack224);
  fVar10 = (float)lib::L2CValue::as_number(aLStack128);
  fVar11 = (float)lib::L2CValue::as_number(aLStack144);
  bVar1 = lib::L2CValue::as_bool(aLStack160);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar6,fVar10,fVar11,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::L2CValue(aLStack224,0x12cd391bb3);
  lib::L2CValue::L2CValue(aLStack144,0x50f26fef6);
  uVar4 = lib::L2CValue::as_integer(aLStack224);
  uVar5 = lib::L2CValue::as_integer(aLStack144);
  fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack128,fVar10);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::L2CValue(aLStack224,_WEAPON_ELIGHT_SPREADBULLET_INSTANCE_WORK_ID_FLOAT_ANGLE_DEG);
  iVar2 = lib::L2CValue::as_integer(aLStack224);
  fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack144,fVar10);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::L2CValue(aLStack176,aLStack128);
  lib::L2CValue::L2CValue(aLStack192,0);
  lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x50,(L2CValue)0x40);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
  pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
  this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
  pLVar9 = (L2CValue *)0x1fbdb2615;
  this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
  lib::L2CAgent::math_rad((L2CAgent *)aLStack144,pLVar9);
  fVar10 = (float)lib::L2CValue::as_number(this_00);
  fVar11 = (float)lib::L2CValue::as_number(this_01);
  fVar12 = (float)lib::L2CValue::as_number(aLStack240);
  uVar13 = app::sv_math::vec2_rot(fVar10,fVar11,fVar12);
  lib::L2CValue::L2CValue(aLStack224,(float)uVar13);
  lib::L2CValue::L2CValue(aLStack208,(float)((ulong)uVar13 >> 0x20));
  lib::L2CValue::operator_(pLVar7,aLStack224);
  lib::L2CValue::operator_(pLVar8,aLStack208);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack240);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
  fVar10 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack240,fVar10);
  lib::L2CValue::operator_(pLVar7,aLStack240);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
  lib::L2CValue::operator_(pLVar7,aLStack224);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::L2CValue(aLStack224,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
  pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack224);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,pLVar7);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,pLVar8);
  app::sv_kinetic_energy::set_speed(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::L2CValue(aLStack224,Fly_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0x20);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

