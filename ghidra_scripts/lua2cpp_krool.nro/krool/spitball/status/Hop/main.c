
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponKroolSpitball::status::Hop_main(L2CWeaponKroolSpitball *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  Hash40 HVar4;
  ulong uVar5;
  L2CValue *this_00;
  ulong uVar6;
  float fVar7;
  float fVar8;
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack96,0x30be545de);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  lib::L2CValue::L2CValue(aLStack128,1.0);
  lib::L2CValue::L2CValue(aLStack144,false);
  HVar4 = lib::L2CValue::as_hash(aLStack96);
  fVar7 = (float)lib::L2CValue::as_number(aLStack112);
  fVar8 = (float)lib::L2CValue::as_number(aLStack128);
  bVar1 = lib::L2CValue::as_bool(aLStack144);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar4,fVar7,fVar8,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  bVar1 = app::lua_bind::StopModule__is_stop_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,false);
  uVar5 = lib::L2CValue::operator__(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack128,false);
    FUN_7100032920(aLStack112,this,aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
  }
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x15);
  lib::L2CValue::L2CValue(aLStack96,&DAT_7100032ad0);
  lib::L2CValue::operator_(this_00,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack144,0xe8000572f);
  lib::L2CValue::L2CValue(aLStack160,0x11b75bdfd2);
  uVar5 = lib::L2CValue::as_integer(aLStack144);
  uVar6 = lib::L2CValue::as_integer(aLStack160);
  fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack96,fVar7);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack160,0xe8000572f);
  lib::L2CValue::L2CValue(aLStack176,0x11bcff78c5);
  uVar5 = lib::L2CValue::as_integer(aLStack160);
  uVar6 = lib::L2CValue::as_integer(aLStack176);
  fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack144,fVar7);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack176,0xe8000572f);
  lib::L2CValue::L2CValue(aLStack192,0xe3f4fdafc);
  uVar5 = lib::L2CValue::as_integer(aLStack176);
  uVar6 = lib::L2CValue::as_integer(aLStack192);
  fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack160,fVar7);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::L2CValue(aLStack192,0xe8000572f);
  lib::L2CValue::L2CValue(aLStack208,0x10db4c9e1e);
  uVar5 = lib::L2CValue::as_integer(aLStack192);
  uVar6 = lib::L2CValue::as_integer(aLStack208);
  fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack176,fVar7);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::L2CValue(aLStack208,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
  iVar3 = lib::L2CValue::as_integer(aLStack208);
  fVar7 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack192,fVar7);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::L2CValue(aLStack224,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
  iVar3 = lib::L2CValue::as_integer(aLStack224);
  fVar7 = (float)app::lua_bind::KineticModule__get_sum_speed_y_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack208,fVar7);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::operator_(aLStack192);
  lib::L2CValue::operator_(aLStack240,aLStack96);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::L2CValue(aLStack240,aLStack144);
  lib::L2CValue::L2CValue(aLStack272,_WEAPON_KROOL_SPITBALL_INSTANCE_WORK_ID_FLAG_UP_SHOOT);
  iVar3 = lib::L2CValue::as_integer(aLStack272);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack256,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack256);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack272);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack272,_WEAPON_KROOL_SPITBALL_INSTANCE_WORK_ID_FLAG_BACK_SHOOT);
    iVar3 = lib::L2CValue::as_integer(aLStack272);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack256,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack256);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack272);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::operator_(aLStack240,aLStack176);
    }
  }
  else {
    lib::L2CValue::operator_(aLStack240,aLStack160);
  }
  lib::L2CValue::L2CValue(aLStack256,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack256);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack224);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack240);
  app::sv_kinetic_energy::set_speed(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::L2CValue(aLStack256,Hop_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0x0);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

