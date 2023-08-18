
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::RosettaSpecialNShoot_main_loop
          (L2CFighterKirby *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  float fVar6;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  bVar1 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,false);
  uVar4 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar4 & 1) != 0) {
    FUN_71001b3e60(aLStack64,this);
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)return_value,1);
      goto LAB_71001b49cc;
    }
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_ROSETTA_STATUS_SPECIAL_N_FLAG_SHOOT);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_ROSETTA_STATUS_SPECIAL_N_FLAG_SHOOT);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_ROSETTA_STATUS_SPECIAL_N_FLAG_SHOOTED);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_ROSETTA_STATUS_SPECIAL_N_FLOAT_CHARGE_FRAME);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      fVar6 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack96,fVar6);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack128,0x106f411784);
      uVar4 = lib::L2CValue::as_integer(aLStack64);
      uVar5 = lib::L2CValue::as_integer(aLStack128);
      fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar4,uVar5);
      lib::L2CValue::L2CValue(aLStack112,fVar6);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::operator_(aLStack96,aLStack112);
      lib::L2CValue::L2CValue(aLStack64,1.0);
      uVar4 = lib::L2CValue::operator_(aLStack64,aLStack128);
      lib::L2CValue::_L2CValue(aLStack64);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack64,1.0);
        lib::L2CValue::operator_(aLStack128,aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
      }
      lib::L2CValue::L2CValue(aLStack144,0x27b8f55c7f);
      lib::L2CValue::L2CValue(aLStack160,0x24ee994caf);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
      app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
      lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack96);
    }
  }
  lib::L2CValue::L2CValue(aLStack96,aLStack80);
  lib::L2CValue::L2CValue(aLStack112,0x915c5de42);
  lib::L2CValue::L2CValue(aLStack128,0xd483c0ed2);
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_KINETIC_TYPE_ROSETTA_SPECIAL_N);
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_KINETIC_TYPE_ROSETTA_SPECIAL_AIR_N);
  lib::L2CValue::L2CValue(aLStack192,_FIGHTER_ROSETTA_STATUS_SPECIAL_N_FLOAT_MOTION_FRAME);
  iVar3 = lib::L2CValue::as_integer(aLStack192);
  fVar6 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack176,fVar6);
  lib::L2CValue::L2CValue(aLStack208,1.0);
  FUN_71001b41a0(this,aLStack96,aLStack112,aLStack128,aLStack144,aLStack160,aLStack176,aLStack208);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_71001b49cc:
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

