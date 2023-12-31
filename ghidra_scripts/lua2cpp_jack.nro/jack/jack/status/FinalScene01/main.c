
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterJack::status::FinalScene01_main(L2CFighterJack *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  Hash40 HVar4;
  ulong uVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  Fighter *pFVar8;
  float fVar9;
  float fVar10;
  L2CValue aLStack208 [16];
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
  lib::L2CValue::L2CValue(aLStack96,false);
  bVar1 = lib::L2CValue::as_bool(aLStack96);
  app::lua_bind::VisibilityModule__set_whole_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack96);
  fVar9 = (float)app::lua_bind::PostureModule__base_scale_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack128,fVar9);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::operator_(aLStack128,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_JACK_STATUS_FINAL_FLOAT_SCALE_BASE);
  fVar9 = (float)lib::L2CValue::as_number(aLStack112);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar9,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack96,1.0);
  fVar9 = (float)lib::L2CValue::as_number(aLStack96);
  app::lua_bind::PostureModule__set_scale_impl(this->moduleAccessor,fVar9,false);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,1.0);
  fVar9 = (float)lib::L2CValue::as_number(aLStack96);
  app::lua_bind::SoundModule__set_auto_se_pitch_impl(this->moduleAccessor,fVar9);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,FIGHTER_INSTANCE_WORK_ID_FLAG_NO_DEAD);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  iVar2 = app::lua_bind::FighterManager__get_jack_final_cut_in_impl
                    (FIGHTER_STATUS_WORK_KEEP_FLAG_ATTACK_4_START_INT);
  lib::L2CValue::L2CValue(aLStack112,iVar2);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_JACK_STATUS_FINAL_INT_CUT_IN_INDEX);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0xf9e797764);
  lib::L2CValue::L2CValue(aLStack128,0.0);
  lib::L2CValue::L2CValue(aLStack144,1.0);
  lib::L2CValue::L2CValue(aLStack160,false);
  HVar4 = lib::L2CValue::as_hash(aLStack96);
  fVar9 = (float)lib::L2CValue::as_number(aLStack128);
  fVar10 = (float)lib::L2CValue::as_number(aLStack144);
  bVar1 = lib::L2CValue::as_bool(aLStack160);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar4,fVar9,fVar10,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_MOTION);
  lib::L2CValue::L2CValue(aLStack128,_ENERGY_MOTION_RESET_TYPE_AIR_TRANS);
  lib::L2CValue::L2CValue(aLStack144,0.0);
  lib::L2CValue::L2CValue(aLStack160,0.0);
  lib::L2CValue::L2CValue(aLStack176,0.0);
  lib::L2CValue::L2CValue(aLStack192,0.0);
  lib::L2CValue::L2CValue(aLStack208,0.0);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
  app::sv_kinetic_energy::reset_energy(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,true);
  bVar1 = lib::L2CValue::as_bool(aLStack96);
  app::FighterUtil::set_stage_disable_reverse_screen((bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIND_JACK);
  lib::L2CValue::L2CValue(aLStack144,0x5ec462584);
  lib::L2CValue::L2CValue(aLStack160,0);
  uVar5 = lib::L2CValue::as_integer(aLStack144);
  uVar6 = lib::L2CValue::as_integer(aLStack160);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack128,fVar9);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  fVar9 = (float)lib::L2CValue::as_number(aLStack128);
  app::lua_bind::FighterManager__start_finalbg_impl
            (FIGHTER_STATUS_WORK_KEEP_FLAG_ATTACK_4_START_INT,iVar2,fVar9);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,false);
  bVar1 = lib::L2CValue::as_bool(aLStack96);
  app::lua_bind::FighterManager__set_visible_finalbg_impl
            (FIGHTER_STATUS_WORK_KEEP_FLAG_ATTACK_4_START_INT,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack96);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,4);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_JACK_FINAL_MODULE_SCENE_01_INIT_PRE);
  pFVar8 = (Fighter *)lib::L2CValue::as_pointer(pLVar7);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::FighterSpecializer_Jack::call_final_module(pFVar8,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  iVar2 = app::lua_bind::SlowModule__whole_mag_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack128,iVar2);
  fVar9 = (float)app::lua_bind::BattleObjectSlow__rate_request_impl
                           (FIGHTER_STATUS_ATTACK_WORK_INT_SMASH_LOOP_FRAME);
  lib::L2CValue::L2CValue(aLStack144,fVar9);
  lib::L2CValue::operator_(aLStack144,aLStack128);
  fVar9 = (float)app::sv_information::get_delta_frame();
  lib::L2CValue::L2CValue(aLStack208,fVar9);
  lib::L2CValue::L2CValue(aLStack96,60.0);
  lib::L2CValue::operator_(aLStack208,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::operator_(aLStack176,aLStack192);
  lib::L2CValue::operator_(aLStack144,aLStack160);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::L2CValue(aLStack96,1.0);
  uVar5 = lib::L2CValue::operator_(aLStack96,aLStack144);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack96,1.0);
    lib::L2CValue::operator_(aLStack144,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,4);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_JACK_FINAL_MODULE_SCENE_01_INIT);
  pFVar8 = (Fighter *)lib::L2CValue::as_pointer(pLVar7);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::FighterSpecializer_Jack::call_final_module(pFVar8,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_LINK_NO_CONSTRAINT);
  lib::L2CValue::L2CValue(aLStack160,0x1293be1921);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  HVar4 = lib::L2CValue::as_hash(aLStack160);
  app::lua_bind::LinkModule__send_event_nodes_impl(this->moduleAccessor,iVar2,HVar4,0);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack96);
  fVar9 = (float)lib::L2CValue::as_number(aLStack144);
  app::lua_bind::FighterManager__start_movie_impl
            (FIGHTER_STATUS_WORK_KEEP_FLAG_ATTACK_4_START_INT,fVar9);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MOVIE_STATUS_KIND_PLAY);
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_JACK_STATUS_FINAL_INT_MOVIE_STATUS);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  iVar3 = lib::L2CValue::as_integer(aLStack160);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,FinalScene01_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

