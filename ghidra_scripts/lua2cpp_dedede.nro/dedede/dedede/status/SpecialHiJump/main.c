
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDedede::status::SpecialHiJump_main(L2CFighterDedede *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  GroundCorrectKind GVar4;
  ulong uVar5;
  L2CValue *this_00;
  float fVar6;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEDEDE_STATUS_SUPER_JUMP_JUMP_STEP_START);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_DEDEDE_STATUS_SUPER_JUMP_WORK_INT_JUMP_STEP);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEDEDE_STATUS_SUPER_JUMP_WORK_FLAG_RESET_GRIVITY_KINE);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEDEDE_STATUS_SUPER_JUMP_WORK_FLAG_CANCEL);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  bVar1 = app::lua_bind::StopModule__is_stop_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar5 & 1) != 0) {
    FUN_7100027170(aLStack96,this);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x14);
  lib::L2CValue::L2CValue(aLStack80,&LAB_71000276b0);
  lib::L2CValue::operator_(this_00,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_AIR);
  GVar4 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar4);
  lib::L2CValue::_L2CValue(aLStack80);
  fVar6 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack112,fVar6);
  lib::L2CValue::L2CValue(aLStack80,-1.0);
  uVar5 = lib::L2CValue::operator__(aLStack112,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEDEDE_STATUS_SUPER_JUMP_WORK_FLAG_DIR_L);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,1.0);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_DEDEDE_STATUS_SUPER_JUMP_WORK_FLOAT_PRE_LR);
    fVar6 = (float)lib::L2CValue::as_number(aLStack80);
    iVar2 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar6,iVar2);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEDEDE_STATUS_SUPER_JUMP_WORK_FLAG_DIR_L);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,-1.0);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_DEDEDE_STATUS_SUPER_JUMP_WORK_FLOAT_PRE_LR);
    fVar6 = (float)lib::L2CValue::as_number(aLStack80);
    iVar2 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar6,iVar2);
  }
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack80);
  FUN_71000276c0(this);
  lib::L2CValue::L2CValue(aLStack80,SpecialHiJump_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

