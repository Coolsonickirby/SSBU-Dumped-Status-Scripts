
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterBrave::status::SpecialN_main(L2CFighterBrave *this,L2CValue *return_value)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  L2CValue *this_00;
  ulong uVar4;
  float fVar5;
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
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BRAVE_INSTANCE_WORK_ID_FLAG_DISABLE_SP_AUTO_RECOVER);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack80);
  FUN_710000b590(aLStack96,this);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BRAVE_SPECIAL_N_S);
  uVar3 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BRAVE_SPECIAL_N_M);
    uVar3 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack112,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack128,0xc245caa4e);
      uVar3 = lib::L2CValue::as_integer(aLStack112);
      uVar4 = lib::L2CValue::as_integer(aLStack128);
      iVar1 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar3,uVar4);
      lib::L2CValue::L2CValue(aLStack80,iVar1);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_BRAVE_INSTANCE_WORK_ID_INT_SPECIAL_N_HOLD_FRAME);
      iVar1 = lib::L2CValue::as_integer(aLStack80);
      iVar2 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar2);
    }
    else {
      lib::L2CValue::L2CValue(aLStack112,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack128,0xc535b9ad8);
      uVar3 = lib::L2CValue::as_integer(aLStack112);
      uVar4 = lib::L2CValue::as_integer(aLStack128);
      iVar1 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar3,uVar4);
      lib::L2CValue::L2CValue(aLStack80,iVar1);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_BRAVE_INSTANCE_WORK_ID_INT_SPECIAL_N_HOLD_FRAME);
      iVar1 = lib::L2CValue::as_integer(aLStack80);
      iVar2 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar2);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,0);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_BRAVE_INSTANCE_WORK_ID_INT_SPECIAL_N_HOLD_FRAME);
    iVar1 = lib::L2CValue::as_integer(aLStack80);
    iVar2 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar2);
  }
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack112,0xf3a6aace3);
  lib::L2CValue::L2CValue(aLStack128,0x1331f32137);
  lib::L2CValue::L2CValue(aLStack144,false);
  lib::L2CValue::L2CValue(aLStack176,aLStack112);
  lib::L2CValue::L2CValue(aLStack192,aLStack128);
  lib::L2CValue::L2CValue(aLStack208,aLStack144);
  lua2cpp::L2CFighterCommon::sub_change_motion_by_situation
            (this,(L2CValue)0x50,(L2CValue)0x40,(L2CValue)0x30);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::L2CValue(aLStack224,0xf899192aa);
  lua2cpp::L2CFighterCommon::sub_set_special_start_common_kinetic_setting(this,(L2CValue)0x20);
  lib::L2CValue::_L2CValue(aLStack224);
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
  uVar3 = lib::L2CValue::operator__(this_00,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack240,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
    iVar1 = lib::L2CValue::as_integer(aLStack240);
    fVar5 = (float)app::lua_bind::KineticModule__get_sum_speed_y_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue(aLStack80,fVar5);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::L2CValue(aLStack256,0xf899192aa);
    lib::L2CValue::L2CValue(aLStack272,0x18ecc76f9d);
    uVar3 = lib::L2CValue::as_integer(aLStack256);
    uVar4 = lib::L2CValue::as_integer(aLStack272);
    fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar3,uVar4)
    ;
    lib::L2CValue::L2CValue(aLStack240,fVar5);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack256);
    uVar3 = lib::L2CValue::operator_(aLStack240,aLStack80);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::operator_(aLStack80,aLStack240);
    }
    lib::L2CValue::L2CValue(aLStack256,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack256);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
    app::sv_kinetic_energy::set_speed(this->luaStateAgent);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue(aLStack80,SpecialN_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

