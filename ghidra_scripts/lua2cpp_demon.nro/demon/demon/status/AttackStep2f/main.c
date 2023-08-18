
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDemon::status::AttackStep2s_main(L2CFighterDemon *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  int iVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  Hash40 HVar5;
  Fighter *pFVar6;
  BattleObjectModuleAccessor **ppBVar7;
  float fVar8;
  float fVar9;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack128,false);
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_LOG_ATTACK_KIND_NONE);
  this_00 = &this->globalTable;
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,9);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_DEMON_STATUS_KIND_ATTACK_STEP_2);
  uVar4 = lib::L2CValue::operator__(pLVar3,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack96,0xd9a686f25);
    lib::L2CValue::operator_(aLStack112,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_LOG_ATTACK_KIND_ADDITIONS_ATTACK_12);
    lib::L2CValue::operator_(aLStack144,aLStack96);
    goto LAB_7100014850;
  }
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,9);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_DEMON_STATUS_KIND_ATTACK_STEP_2F);
  uVar4 = lib::L2CValue::operator__(pLVar3,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack96,0xe3d4d97c8);
    lib::L2CValue::operator_(aLStack112,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_LOG_ATTACK_KIND_ADDITIONS_ATTACK_12);
    lib::L2CValue::operator_(aLStack144,aLStack96);
    goto LAB_7100014850;
  }
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,9);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_DEMON_STATUS_KIND_ATTACK_STEP_2L);
  uVar4 = lib::L2CValue::operator__(pLVar3,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,0xe50907323);
    lib::L2CValue::operator_(aLStack112,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_LOG_ATTACK_KIND_ADDITIONS_ATTACK_14);
    lib::L2CValue::operator_(aLStack144,aLStack96);
    goto LAB_7100014850;
  }
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_DEMON_STATUS_KIND_ATTACK_STEP_2F);
  uVar4 = lib::L2CValue::operator__(pLVar3,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar4 & 1) == 0) {
    pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_DEMON_STATUS_KIND_ATTACK_STEP_2);
    uVar4 = lib::L2CValue::operator__(pLVar3,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar4 & 1) != 0) goto LAB_710001470c;
  }
  else {
LAB_710001470c:
    lib::L2CValue::L2CValue(aLStack176,_FIGHTER_DEMON_STATUS_ATTACK_STEP_FLAG_2_TO_2L);
    iVar2 = lib::L2CValue::as_integer(aLStack176);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack160,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack96,true);
    uVar4 = lib::L2CValue::operator__(aLStack160,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack176);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack96,true);
      lib::L2CValue::operator_(aLStack128,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
    }
  }
  lib::L2CValue::L2CValue(aLStack96,0xedd987ed6);
  lib::L2CValue::operator_(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_LOG_ATTACK_KIND_ADDITIONS_ATTACK_13);
  lib::L2CValue::operator_(aLStack144,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,false);
  bVar1 = lib::L2CValue::as_bool(aLStack96);
  app::lua_bind::ItemModule__set_have_item_visibility_impl(this->moduleAccessor,(bool)(bVar1 & 1),0)
  ;
LAB_7100014850:
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar4 = lib::L2CValue::operator__(aLStack128,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,0.0);
    lib::L2CValue::L2CValue(aLStack160,1.0);
    lib::L2CValue::L2CValue(aLStack176,false);
    HVar5 = lib::L2CValue::as_hash(aLStack112);
    fVar8 = (float)lib::L2CValue::as_number(aLStack96);
    fVar9 = (float)lib::L2CValue::as_number(aLStack160);
    bVar1 = lib::L2CValue::as_bool(aLStack176);
    app::lua_bind::MotionModule__change_motion_impl
              (this->moduleAccessor,HVar5,fVar8,fVar9,(bool)(bVar1 & 1),0.0,false,false);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack160,0x2b94de0d96);
    lib::L2CValue::L2CValue(aLStack176,_FIGHTER_LOG_ACTION_CATEGORY_ATTACK);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
    app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack176);
    pLVar3 = aLStack160;
  }
  else {
    HVar5 = lib::L2CValue::as_hash(aLStack112);
    app::lua_bind::MotionModule__change_motion_inherit_frame_impl
              (this->moduleAccessor,HVar5,-1.0,1.0,0.0,false,false);
    pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,4);
    lib::L2CValue::L2CValue(aLStack96,true);
    pFVar6 = (Fighter *)lib::L2CValue::as_pointer(pLVar3);
    iVar2 = lib::L2CValue::as_integer(aLStack144);
    bVar1 = lib::L2CValue::as_bool(aLStack96);
    app::FighterSpecializer_Demon::add_attack_log(pFVar6,iVar2,(bool)(bVar1 & 1));
    pLVar3 = aLStack96;
  }
  ppBVar7 = &this->moduleAccessor;
  lib::L2CValue::_L2CValue(pLVar3);
  app::lua_bind::FighterControlModuleImpl__reset_special_command_impl(*ppBVar7,true);
  lib::L2CValue::L2CValue(aLStack160,false);
  bVar1 = lib::L2CValue::as_bool(aLStack160);
  app::lua_bind::MotionModule__set_trans_move_speed_no_scale_impl(*ppBVar7,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack176,_FIGHTER_DEMON_INSTANCE_WORK_ID_FLAG_ENABLE_RAGE_SYSTEM);
  iVar2 = lib::L2CValue::as_integer(aLStack176);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar7,iVar2);
  lib::L2CValue::L2CValue(aLStack160,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack192,_FIGHTER_DEMON_STATUS_ATTACK_STEP_FLAG_RAGE_SYSTEM);
  bVar1 = lib::L2CValue::as_bool(aLStack160);
  iVar2 = lib::L2CValue::as_integer(aLStack192);
  app::lua_bind::WorkModule__set_flag_impl(*ppBVar7,(bool)(bVar1 & 1),iVar2);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::L2CValue(aLStack160,AttackStep2s_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x60);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

