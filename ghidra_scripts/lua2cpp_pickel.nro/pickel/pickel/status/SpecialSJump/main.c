
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPickel::status::SpecialSJump_main(L2CFighterPickel *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  GroundCorrectKind GVar4;
  GroundCliffCheckKind GVar5;
  Hash40 HVar6;
  ulong uVar7;
  ulong uVar8;
  BattleObjectModuleAccessor **ppBVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
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
  
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_KINETIC_TYPE_FALL);
  iVar3 = lib::L2CValue::as_integer(aLStack160);
  ppBVar9 = &this->moduleAccessor;
  app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar9,iVar3);
  lib::L2CValue::_L2CValue(aLStack160);
  app::lua_bind::MotionModule__set_next_no_comp_impl(*ppBVar9);
  lib::L2CValue::L2CValue(aLStack160,0xe01b71074);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::L2CValue(aLStack112,1.0);
  lib::L2CValue::L2CValue(aLStack128,false);
  HVar6 = lib::L2CValue::as_hash(aLStack160);
  fVar10 = (float)lib::L2CValue::as_number(aLStack96);
  fVar11 = (float)lib::L2CValue::as_number(aLStack112);
  bVar1 = lib::L2CValue::as_bool(aLStack128);
  app::lua_bind::MotionModule__change_motion_impl
            (*ppBVar9,HVar6,fVar10,fVar11,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PICKEL_LINK_NO_TROLLEY);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::LinkModule__is_link_impl(*ppBVar9,iVar3);
  lib::L2CValue::L2CValue(aLStack160,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack160);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PICKEL_LINK_NO_TROLLEY);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    uVar12 = app::lua_bind::LinkModule__get_parent_sum_speed_impl(*ppBVar9,iVar3,1);
    lib::L2CValue::L2CValue(aLStack160,(float)uVar12);
    lib::L2CValue::L2CValue(aLStack144,(float)((ulong)uVar12 >> 0x20));
    lib::L2CValue::operator_(aLStack96,aLStack160);
    lib::L2CValue::operator_(aLStack112,aLStack144);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::L2CValue(aLStack176,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack192,0x13d5ab71db);
    uVar7 = lib::L2CValue::as_integer(aLStack176);
    uVar8 = lib::L2CValue::as_integer(aLStack192);
    fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar7,uVar8);
    lib::L2CValue::L2CValue(aLStack128,fVar10);
    lib::L2CValue::operator_(aLStack96,aLStack128);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::L2CValue(aLStack176,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack192,0xf82100d8f);
    uVar7 = lib::L2CValue::as_integer(aLStack176);
    uVar8 = lib::L2CValue::as_integer(aLStack192);
    fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar7,uVar8);
    lib::L2CValue::L2CValue(aLStack128,fVar10);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::L2CValue(aLStack176,_FIGHTER_PICKEL_LINK_NO_TROLLEY);
    lib::L2CValue::L2CValue(aLStack192,0x2426704b30);
    iVar3 = lib::L2CValue::as_integer(aLStack176);
    HVar6 = lib::L2CValue::as_hash(aLStack192);
    app::lua_bind::LinkModule__send_event_parents_impl(*ppBVar9,iVar3,HVar6);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::L2CValue(aLStack208,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack224,0x13083da85e);
    uVar7 = lib::L2CValue::as_integer(aLStack208);
    uVar8 = lib::L2CValue::as_integer(aLStack224);
    fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar7,uVar8);
    lib::L2CValue::L2CValue(aLStack192,fVar10);
    lib::L2CValue::L2CValue
              (aLStack256,_FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_SPECIAL_S_JUMP_COUNT_ON_AIR);
    iVar3 = lib::L2CValue::as_integer(aLStack256);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar9,iVar3);
    lib::L2CValue::L2CValue(aLStack240,iVar3);
    fVar10 = (float)lib::L2CValue::as_number(aLStack192);
    fVar11 = (float)lib::L2CValue::as_number(aLStack240);
    fVar10 = (float)app::sv_math::powf(fVar10,fVar11);
    lib::L2CValue::L2CValue(aLStack176,fVar10);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::L2CValue
              (aLStack192,_FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_SPECIAL_S_JUMP_COUNT_ON_AIR);
    iVar3 = lib::L2CValue::as_integer(aLStack192);
    app::lua_bind::WorkModule__inc_int_impl(*ppBVar9,iVar3);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::L2CValue(aLStack192,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
    lib::L2CValue::L2CValue(aLStack208,0.0);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
    app::sv_kinetic_energy::set_speed(this->luaStateAgent);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::L2CValue(aLStack192,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
    lib::L2CValue::operator_(aLStack128,aLStack176);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
    app::sv_kinetic_energy::set_speed(this->luaStateAgent);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PICKEL_LINK_NO_TROLLEY);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::LinkModule__is_link_impl(*ppBVar9,iVar3);
  lib::L2CValue::L2CValue(aLStack160,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack160);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_PICKEL_LINK_NO_TROLLEY);
    iVar3 = lib::L2CValue::as_integer(aLStack160);
    app::lua_bind::LinkModule__unlink_impl(*ppBVar9,iVar3);
    lib::L2CValue::_L2CValue(aLStack160);
  }
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_LINK_NO_PICKEL_TROLLEY);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::LinkModule__is_link_impl(*ppBVar9,iVar3);
  lib::L2CValue::L2CValue(aLStack160,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack160);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_LINK_NO_PICKEL_TROLLEY);
    iVar3 = lib::L2CValue::as_integer(aLStack160);
    app::lua_bind::LinkModule__unlink_impl(*ppBVar9,iVar3);
    lib::L2CValue::_L2CValue(aLStack160);
  }
  lib::L2CValue::L2CValue(aLStack160,_TEAM_2ND_ID_NONE);
  iVar3 = lib::L2CValue::as_integer(aLStack160);
  app::lua_bind::TeamModule__set_team_second_impl(*ppBVar9,iVar3);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack160,_TEAM_2ND_ID_NONE);
  iVar3 = lib::L2CValue::as_integer(aLStack160);
  app::lua_bind::TeamModule__set_hit_team_second_impl(*ppBVar9,iVar3);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack160,GROUND_CORRECT_KIND_AIR);
  GVar4 = lib::L2CValue::as_integer(aLStack160);
  app::lua_bind::GroundModule__correct_impl(*ppBVar9,GVar4);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack160,_GROUND_CLIFF_CHECK_KIND_ALWAYS_BOTH_SIDES);
  GVar5 = lib::L2CValue::as_integer(aLStack160);
  app::lua_bind::GroundModule__set_cliff_check_impl(*ppBVar9,GVar5);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_PICKEL_STATUS_SPECIAL_S_FLAG_CHANGE_STATUS_FALL);
  iVar3 = lib::L2CValue::as_integer(aLStack160);
  app::lua_bind::WorkModule__off_flag_impl(*ppBVar9,iVar3);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack160,SpecialSJump_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x60);
  lib::L2CValue::_L2CValue(aLStack160);
  return;
}

