
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::BraveSpecialNHold_main(L2CFighterKirby *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  signed sVar5;
  L2CValue *this_00;
  ulong uVar6;
  Hash40 HVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,-1);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BRAVE_STATUS_SPECIAL_N_HOLD_INT_NEXT_STATUS);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
  uVar6 = lib::L2CValue::operator__(this_00,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,0x1244d4ffef);
    lib::L2CValue::L2CValue(aLStack96,0.0);
    lib::L2CValue::L2CValue(aLStack112,1.0);
    lib::L2CValue::L2CValue(aLStack128,false);
    HVar7 = lib::L2CValue::as_hash(aLStack80);
    fVar9 = (float)lib::L2CValue::as_number(aLStack96);
    fVar10 = (float)lib::L2CValue::as_number(aLStack112);
    bVar1 = lib::L2CValue::as_bool(aLStack128);
    app::lua_bind::FighterMotionModuleImpl__change_motion_kirby_copy_impl
              (this->moduleAccessor,HVar7,fVar9,fVar10,(bool)(bVar1 & 1),0.0,false,false);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,0xe06860a20);
    lib::L2CValue::L2CValue(aLStack96,0.0);
    lib::L2CValue::L2CValue(aLStack112,1.0);
    lib::L2CValue::L2CValue(aLStack128,false);
    HVar7 = lib::L2CValue::as_hash(aLStack80);
    fVar9 = (float)lib::L2CValue::as_number(aLStack96);
    fVar10 = (float)lib::L2CValue::as_number(aLStack112);
    bVar1 = lib::L2CValue::as_bool(aLStack128);
    app::lua_bind::FighterMotionModuleImpl__change_motion_kirby_copy_impl
              (this->moduleAccessor,HVar7,fVar9,fVar10,(bool)(bVar1 & 1),0.0,false,false);
  }
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack96,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack112,0xc245caa4e);
  uVar6 = lib::L2CValue::as_integer(aLStack96);
  uVar8 = lib::L2CValue::as_integer(aLStack112);
  iVar2 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar6,uVar8);
  lib::L2CValue::L2CValue(aLStack80,iVar2);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_BRAVE_INSTANCE_WORK_ID_INT_SPECIAL_N_HOLD_FRAME);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack96,iVar2);
  lib::L2CValue::_L2CValue(aLStack112);
  uVar4 = app::lua_bind::MotionModule__end_frame_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack112,uVar4);
  lib::L2CValue::operator_(aLStack112,aLStack80);
  fVar9 = (float)lib::L2CValue::as_number(aLStack128);
  app::lua_bind::MotionModule__set_rate_impl(this->moduleAccessor,fVar9);
  lib::L2CValue::operator_(aLStack96,aLStack128);
  fVar9 = (float)lib::L2CValue::as_number(aLStack144);
  app::lua_bind::MotionModule__set_frame_impl(this->moduleAccessor,fVar9,true);
  lib::L2CValue::L2CValue(aLStack176,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack192,0xc535b9ad8);
  uVar6 = lib::L2CValue::as_integer(aLStack176);
  uVar8 = lib::L2CValue::as_integer(aLStack192);
  iVar2 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar6,uVar8);
  lib::L2CValue::L2CValue(aLStack160,iVar2);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  uVar6 = lib::L2CValue::operator__(aLStack160,aLStack96);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack176,_FIGHTER_BRAVE_STATUS_SPECIAL_N_FLAG_START_M);
    iVar2 = lib::L2CValue::as_integer(aLStack176);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::_L2CValue(aLStack176);
  }
  lib::L2CValue::L2CValue(aLStack176,_FIGHTER_STATUS_TRANSITION_GROUP_CHK_GROUND_GUARD);
  iVar2 = lib::L2CValue::as_integer(aLStack176);
  app::lua_bind::WorkModule__enable_transition_term_group_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::L2CValue(aLStack176,FIGHTER_STATUS_TRANSITION_GROUP_CHK_GROUND_ESCAPE);
  iVar2 = lib::L2CValue::as_integer(aLStack176);
  app::lua_bind::WorkModule__enable_transition_term_group_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::L2CValue(aLStack176,FIGHTER_STATUS_TRANSITION_GROUP_CHK_GROUND_JUMP);
  iVar2 = lib::L2CValue::as_integer(aLStack176);
  app::lua_bind::WorkModule__enable_transition_term_group_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::L2CValue(aLStack176,FIGHTER_STATUS_TRANSITION_GROUP_CHK_AIR_ESCAPE);
  iVar2 = lib::L2CValue::as_integer(aLStack176);
  app::lua_bind::WorkModule__enable_transition_term_group_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::L2CValue(aLStack176,8);
  sVar5 = lib::L2CValue::as_integer(aLStack176);
  app::lua_bind::ControlModule__set_add_jump_mini_button_life_impl(this->moduleAccessor,sVar5);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::L2CValue(aLStack176,BraveSpecialNHold_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x50);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

