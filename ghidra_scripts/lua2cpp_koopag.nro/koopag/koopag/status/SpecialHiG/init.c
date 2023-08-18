
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKoopag::status::SpecialHiG_init(L2CFighterKoopag *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  Hash40 HVar7;
  BattleObjectModuleAccessor **ppBVar8;
  float fVar9;
  float fVar10;
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
  
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack144,0);
  lib::L2CValue::L2CValue(aLStack160,0);
  lib::L2CValue::L2CValue(aLStack176,0);
  lib::L2CValue::L2CValue(aLStack192,0);
  lib::L2CValue::L2CValue(aLStack208,_FIGHTER_KOOPA_INSTANCE_WORK_ID_FLAG_ST_INIT);
  iVar3 = lib::L2CValue::as_integer(aLStack208);
  ppBVar8 = &this->moduleAccessor;
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar8,iVar3);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack208);
  if ((bVar2 & 1U) != 0) {
    FUN_710000b470(this);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KOOPA_INSTANCE_WORK_ID_FLAG_ST_INIT);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar8,iVar3);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue(aLStack208,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
  iVar3 = lib::L2CValue::as_integer(aLStack208);
  fVar9 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl(*ppBVar8,iVar3);
  lib::L2CValue::L2CValue(aLStack96,fVar9);
  lib::L2CValue::operator_(aLStack176,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::L2CValue(aLStack208,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
  iVar3 = lib::L2CValue::as_integer(aLStack208);
  fVar9 = (float)app::lua_bind::KineticModule__get_sum_speed_y_impl(*ppBVar8,iVar3);
  lib::L2CValue::L2CValue(aLStack96,fVar9);
  lib::L2CValue::operator_(aLStack192,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack208,_FIGHTER_KOOPA_STATUS_SPECIAL_HI_WORK_INT_F);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  iVar4 = lib::L2CValue::as_integer(aLStack208);
  app::lua_bind::WorkModule__set_int_impl(*ppBVar8,iVar3,iVar4);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack96);
  FUN_7100004f20(this);
  lib::L2CValue::L2CValue(aLStack224,_FIGHTER_KOOPA_STATUS_SPECIAL_HI_FLAG1);
  iVar3 = lib::L2CValue::as_integer(aLStack224);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar8,iVar3);
  lib::L2CValue::L2CValue(aLStack208,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,false);
  uVar5 = lib::L2CValue::operator__(aLStack208,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack224);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    lib::L2CValue::L2CValue(aLStack208,ENERGY_STOP_RESET_TYPE_GROUND);
    lib::L2CValue::L2CValue(aLStack224,0.0);
    lib::L2CValue::L2CValue(aLStack240,0.0);
    lib::L2CValue::L2CValue(aLStack256,0.0);
    lib::L2CValue::L2CValue(aLStack272,0.0);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack224);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack240);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack256);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack272);
    app::sv_kinetic_energy::reset_energy(this->luaStateAgent);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::KineticModule__enable_energy_impl(*ppBVar8,iVar3);
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
    lib::L2CValue::L2CValue(aLStack208,ENERGY_CONTROLLER_RESET_TYPE_FALL_ADJUST);
    lib::L2CValue::L2CValue(aLStack224,0.0);
    lib::L2CValue::L2CValue(aLStack240,0.0);
    lib::L2CValue::L2CValue(aLStack256,0.0);
    lib::L2CValue::L2CValue(aLStack272,0.0);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack224);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack240);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack256);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack272);
    app::sv_kinetic_energy::reset_energy(this->luaStateAgent);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack208,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack224,0x10aa9bb5cb);
    uVar5 = lib::L2CValue::as_integer(aLStack208);
    uVar6 = lib::L2CValue::as_integer(aLStack224);
    fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar8,uVar5,uVar6);
    lib::L2CValue::L2CValue(aLStack96,fVar9);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
    app::sv_kinetic_energy::controller_set_accel_x_mul(this->luaStateAgent);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::L2CValue(aLStack208,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
    fVar9 = (float)app::sv_kinetic_energy::get_stable_speed_y(this->luaStateAgent);
    lib::L2CValue::L2CValue(aLStack96,fVar9);
    lib::L2CValue::operator_(aLStack128,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::L2CValue(aLStack208,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
    fVar9 = (float)app::sv_kinetic_energy::get_limit_speed_y(this->luaStateAgent);
    lib::L2CValue::L2CValue(aLStack96,fVar9);
    lib::L2CValue::operator_(aLStack112,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
    lib::L2CValue::L2CValue(aLStack224,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack240,0x1408a1458b);
    uVar5 = lib::L2CValue::as_integer(aLStack224);
    uVar6 = lib::L2CValue::as_integer(aLStack240);
    fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar8,uVar5,uVar6);
    lib::L2CValue::L2CValue(aLStack208,fVar9);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
    app::sv_kinetic_energy::set_stable_speed(this->luaStateAgent);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
    lib::L2CValue::L2CValue(aLStack224,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack240,0x1408a1458b);
    uVar5 = lib::L2CValue::as_integer(aLStack224);
    uVar6 = lib::L2CValue::as_integer(aLStack240);
    fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar8,uVar5,uVar6);
    lib::L2CValue::L2CValue(aLStack208,fVar9);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
    app::sv_kinetic_energy::set_limit_speed(this->luaStateAgent);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::KineticModule__enable_energy_impl(*ppBVar8,iVar3);
  }
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack208,_FIGHTER_KOOPA_STATUS_SPECIAL_HI_FLAG_MOT_RESTART);
  iVar3 = lib::L2CValue::as_integer(aLStack208);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar8,iVar3);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack208);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack208,_FIGHTER_KOOPA_STATUS_SPECIAL_HI_FLAG_BONUS);
    iVar3 = lib::L2CValue::as_integer(aLStack208);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar8,iVar3);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack208);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack96,0xa28f17495);
      HVar7 = lib::L2CValue::as_hash(aLStack96);
      app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                (*ppBVar8,HVar7,-1.0,1.0,0.0,false,false);
    }
    else {
      lib::L2CValue::L2CValue(aLStack224,_FIGHTER_KOOPA_INSTANCE_WORK_ID_FLAG_SP_HI_LAND);
      iVar3 = lib::L2CValue::as_integer(aLStack224);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar8,iVar3);
      lib::L2CValue::L2CValue(aLStack208,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack96,false);
      uVar5 = lib::L2CValue::operator__(aLStack208,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack224);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack96,0xa28f17495);
        HVar7 = lib::L2CValue::as_hash(aLStack96);
        app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                  (*ppBVar8,HVar7,-1.0,1.0,0.0,false,false);
        lib::L2CValue::_L2CValue(aLStack96);
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KOOPA_INSTANCE_WORK_ID_FLAG_SP_HI_LAND);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__on_flag_impl(*ppBVar8,iVar3);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack208,0x1086bc4a93);
        lib::L2CValue::L2CValue(aLStack224,0x12e931f4e9);
        uVar5 = lib::L2CValue::as_integer(aLStack208);
        uVar6 = lib::L2CValue::as_integer(aLStack224);
        iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar8,uVar5,uVar6);
        lib::L2CValue::L2CValue(aLStack96,iVar3);
        lib::L2CValue::operator_(aLStack160,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack224);
        lib::L2CValue::_L2CValue(aLStack208);
        fVar9 = (float)app::lua_bind::MotionModule__frame_impl(*ppBVar8);
        lib::L2CValue::L2CValue(aLStack208,fVar9);
        lib::L2CValue::operator_(aLStack208,aLStack160);
        lib::L2CValue::operator_(aLStack144,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack208);
        fVar9 = (float)lib::L2CValue::as_number(aLStack144);
        app::lua_bind::MotionModule__set_frame_sync_anim_cmd_impl(*ppBVar8,fVar9,true,false,false);
      }
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KOOPA_STATUS_SPECIAL_HI_FLAG_BONUS);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__off_flag_impl(*ppBVar8,iVar3);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,0xa28f17495);
    lib::L2CValue::L2CValue(aLStack208,0.0);
    lib::L2CValue::L2CValue(aLStack224,1.0);
    lib::L2CValue::L2CValue(aLStack240,false);
    HVar7 = lib::L2CValue::as_hash(aLStack96);
    fVar9 = (float)lib::L2CValue::as_number(aLStack208);
    fVar10 = (float)lib::L2CValue::as_number(aLStack224);
    bVar1 = lib::L2CValue::as_bool(aLStack240);
    app::lua_bind::MotionModule__change_motion_impl
              (*ppBVar8,HVar7,fVar9,fVar10,(bool)(bVar1 & 1),0.0,false,false);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KOOPA_STATUS_SPECIAL_HI_FLAG_MOT_RESTART);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar8,iVar3);
  }
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

