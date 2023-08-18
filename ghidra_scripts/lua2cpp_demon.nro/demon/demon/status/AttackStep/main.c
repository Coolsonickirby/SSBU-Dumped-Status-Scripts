
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDemon::status::AttackStep_main(L2CFighterDemon *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  Hash40 HVar5;
  L2CValue *pLVar6;
  ulong uVar7;
  ulong uVar8;
  Fighter *pFVar9;
  float fVar10;
  float fVar11;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack96,0xbb4a23fd1);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  lib::L2CValue::L2CValue(aLStack128,1.0);
  lib::L2CValue::L2CValue(aLStack144,false);
  HVar5 = lib::L2CValue::as_hash(aLStack96);
  fVar10 = (float)lib::L2CValue::as_number(aLStack112);
  fVar11 = (float)lib::L2CValue::as_number(aLStack128);
  bVar1 = lib::L2CValue::as_bool(aLStack144);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar5,fVar10,fVar11,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,3);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PAD_CMD_CAT4_COMMAND_623NB);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  uVar3 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::FighterControlModuleImpl__delete_command_impl(this->moduleAccessor,iVar2,uVar3);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PAD_CMD_CAT1_DASH);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  uVar3 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::FighterControlModuleImpl__delete_command_impl(this->moduleAccessor,iVar2,uVar3);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  this_00 = &this->globalTable;
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x20);
  lib::L2CValue::L2CValue(aLStack96,~FIGHTER_PAD_CMD_CAT1_FLAG_DASH);
  lib::L2CValue::operator_(pLVar6,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x20);
  lib::L2CValue::operator_(pLVar6,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  app::lua_bind::ControlModule__reset_flick_x_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack112,0x115d6fd7da);
  lib::L2CValue::L2CValue(aLStack128,0xc459c4171);
  uVar7 = lib::L2CValue::as_integer(aLStack112);
  uVar8 = lib::L2CValue::as_integer(aLStack128);
  iVar2 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar7,uVar8);
  lib::L2CValue::L2CValue(aLStack96,iVar2);
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_DEMON_STATUS_ATTACK_STEP_WORK_INT_CANCEL_FRAME);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  iVar4 = lib::L2CValue::as_integer(aLStack144);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar4);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  bVar1 = app::lua_bind::StopModule__is_stop_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,false);
  uVar7 = lib::L2CValue::operator__(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar7 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack128,false);
    FUN_710002f880(aLStack112,this,aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
  }
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x15);
  lib::L2CValue::L2CValue(aLStack96,&DAT_710002f950);
  lib::L2CValue::operator_(pLVar6,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_TRANSITION_GROUP_CHK_GROUND_JUMP);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__enable_transition_term_group_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_TRANSITION_GROUP_CHK_GROUND);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__enable_transition_term_group_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,4);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_LOG_ATTACK_KIND_ADDITIONS_ATTACK_11);
  lib::L2CValue::L2CValue(aLStack144,false);
  pFVar9 = (Fighter *)lib::L2CValue::as_pointer(pLVar6);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = lib::L2CValue::as_bool(aLStack144);
  app::FighterSpecializer_Demon::add_attack_log(pFVar9,iVar2,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_MOTION);
  lib::L2CValue::L2CValue(aLStack160,0x115d6fd7da);
  lib::L2CValue::L2CValue(aLStack176,0x81ab6a7a9);
  uVar7 = lib::L2CValue::as_integer(aLStack160);
  uVar8 = lib::L2CValue::as_integer(aLStack176);
  fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar7,uVar8);
  lib::L2CValue::L2CValue(aLStack144,fVar10);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
  app::sv_kinetic_energy::set_speed_mul(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,false);
  bVar1 = lib::L2CValue::as_bool(aLStack96);
  app::lua_bind::MotionModule__set_trans_move_speed_no_scale_impl
            (this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,AttackStep_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

