
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterEdge::status::FinalScene01_main(L2CFighterEdge *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  Hash40 HVar3;
  L2CValue *pLVar4;
  Fighter *pFVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack96,false);
  bVar1 = lib::L2CValue::as_bool(aLStack96);
  app::lua_bind::AreaModule__set_whole_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,false);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_INSTANCE_WORK_ID_FLAG_NAME_CURSOR);
  bVar1 = lib::L2CValue::as_bool(aLStack96);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__set_flag_impl(this->moduleAccessor,(bool)(bVar1 & 1),iVar2);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  fVar7 = (float)app::lua_bind::PostureModule__base_scale_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack128,fVar7);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::operator_(aLStack128,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_EDGE_STATUS_FINAL_FLOAT_SCALE_BASE);
  fVar7 = (float)lib::L2CValue::as_number(aLStack112);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar7,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack96,1.0);
  fVar7 = (float)lib::L2CValue::as_number(aLStack96);
  app::lua_bind::PostureModule__set_scale_impl(this->moduleAccessor,fVar7,false);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,1.0);
  fVar7 = (float)lib::L2CValue::as_number(aLStack96);
  app::lua_bind::SoundModule__set_auto_se_pitch_impl(this->moduleAccessor,fVar7);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0xf9e797764);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  lib::L2CValue::L2CValue(aLStack128,1.0);
  lib::L2CValue::L2CValue(aLStack144,false);
  HVar3 = lib::L2CValue::as_hash(aLStack96);
  fVar7 = (float)lib::L2CValue::as_number(aLStack112);
  fVar8 = (float)lib::L2CValue::as_number(aLStack128);
  bVar1 = lib::L2CValue::as_bool(aLStack144);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar3,fVar7,fVar8,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,FIGHTER_INSTANCE_WORK_ID_FLAG_NO_DEAD);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  app::lua_bind::KineticModule__clear_speed_all_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIND_EDGE);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::FighterManager__start_finalbg_impl(LUA_SCRIPT_LINE_STATUS_SHIFT,iVar2,1.0);
  lib::L2CValue::_L2CValue(aLStack96);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,4);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_EDGE_FINAL_MODULE_SCENE_01_INIT_PRE);
  pFVar5 = (Fighter *)lib::L2CValue::as_pointer(pLVar4);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::FighterSpecializer_Edge::call_final_module(pFVar5,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  iVar2 = app::lua_bind::SlowModule__whole_mag_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack112,iVar2);
  fVar7 = (float)app::lua_bind::BattleObjectSlow__rate_request_impl(LUA_SCRIPT_LINE_MAP_CORRECTION);
  lib::L2CValue::L2CValue(aLStack128,fVar7);
  lib::L2CValue::operator_(aLStack128,aLStack112);
  fVar7 = (float)app::sv_information::get_delta_frame();
  lib::L2CValue::L2CValue(aLStack192,fVar7);
  lib::L2CValue::L2CValue(aLStack96,60.0);
  lib::L2CValue::operator_(aLStack192,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::operator_(aLStack160,aLStack176);
  lib::L2CValue::operator_(aLStack128,aLStack144);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack96,1.0);
  uVar6 = lib::L2CValue::operator_(aLStack96,aLStack128);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,1.0);
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_EDGE_STATUS_FINAL_FLOAT_MOTION_CAMERA_RATE);
    fVar7 = (float)lib::L2CValue::as_number(aLStack96);
    iVar2 = lib::L2CValue::as_integer(aLStack144);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar7,iVar2);
    lib::L2CValue::_L2CValue(aLStack144);
    pLVar4 = aLStack96;
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,1.0);
    lib::L2CValue::operator_(aLStack96,aLStack128);
    lib::L2CValue::_L2CValue(aLStack96);
    fVar7 = (float)lib::L2CValue::as_number(aLStack144);
    app::lua_bind::MotionModule__set_rate_impl(this->moduleAccessor,fVar7);
    lib::L2CValue::L2CValue(aLStack96,0.0);
    lib::L2CValue::operator_(aLStack144,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_EDGE_STATUS_FINAL_FLOAT_MOTION_CAMERA_RATE);
    fVar7 = (float)lib::L2CValue::as_number(aLStack160);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar7,iVar2);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::L2CValue(aLStack96,1.0);
    lib::L2CValue::operator_(aLStack128,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    pLVar4 = aLStack144;
  }
  lib::L2CValue::_L2CValue(pLVar4);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,4);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_EDGE_FINAL_MODULE_SCENE_01_INIT);
  pFVar5 = (Fighter *)lib::L2CValue::as_pointer(pLVar4);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::FighterSpecializer_Edge::call_final_module(pFVar5,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  fVar7 = (float)lib::L2CValue::as_number(aLStack128);
  app::lua_bind::FighterManager__start_movie_impl(LUA_SCRIPT_LINE_STATUS_SHIFT,fVar7);
  lib::L2CValue::L2CValue(aLStack96,FinalScene01_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

