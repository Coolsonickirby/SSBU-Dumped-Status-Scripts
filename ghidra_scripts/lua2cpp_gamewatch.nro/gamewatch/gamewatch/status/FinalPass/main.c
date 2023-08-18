
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterGamewatch::status::FinalPass_main(L2CFighterGamewatch *this,L2CValue *return_value)

{
  byte bVar1;
  ushort uVar2;
  GroundCorrectKind GVar3;
  int iVar4;
  ulong uVar5;
  L2CValue *this_00;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,false);
  bVar1 = lib::L2CValue::as_bool(aLStack64);
  app::lua_bind::AreaModule__set_whole_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,GROUND_CORRECT_SHAPE_RHOMBUS_MODIFY_FLAG_FIX);
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar2 = lib::L2CValue::as_integer(aLStack64);
  bVar1 = lib::L2CValue::as_bool(aLStack80);
  app::lua_bind::GroundModule__set_shape_flag_impl(this->moduleAccessor,uVar2,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  app::lua_bind::ControlModule__reset_flick_y_impl(this->moduleAccessor);
  bVar1 = app::lua_bind::GroundModule__pass_floor_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
  lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack64,GROUND_CORRECT_KIND_AIR);
  GVar3 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar3);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_TRANSITION_TERM_ID_LANDING_LIGHT);
  iVar4 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__unable_transition_term_group_ex_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_TRANSITION_TERM_ID_LANDING);
  iVar4 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__unable_transition_term_group_ex_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_KIND_JUMP_SQUAT._4_4_);
  iVar4 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__unable_transition_term_group_ex_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_JUMP_AERIAL_BUTTON);
  iVar4 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__unable_transition_term_group_ex_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::_L2CValue(aLStack64);
  bVar1 = app::lua_bind::StopModule__is_stop_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,false);
  uVar5 = lib::L2CValue::operator__(aLStack112,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack128,false);
    FUN_71000226f0(aLStack112,this,aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
  }
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x15);
  lib::L2CValue::L2CValue(aLStack64,&DAT_7100022810);
  lib::L2CValue::operator_(this_00,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,FinalPass_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xc0);
  lib::L2CValue::_L2CValue(aLStack64);
  return;
}

