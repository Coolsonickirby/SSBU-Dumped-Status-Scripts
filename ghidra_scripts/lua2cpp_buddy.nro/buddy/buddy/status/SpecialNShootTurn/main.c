
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBuddy::status::SpecialNShootTurn_main(L2CFighterBuddy *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  Hash40 HVar3;
  L2CValue *this_00;
  Fighter *pFVar4;
  float fVar5;
  float fVar6;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,0x142c52b038);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::L2CValue(aLStack112,1.0);
  lib::L2CValue::L2CValue(aLStack128,false);
  HVar3 = lib::L2CValue::as_hash(aLStack80);
  fVar5 = (float)lib::L2CValue::as_number(aLStack96);
  fVar6 = (float)lib::L2CValue::as_number(aLStack112);
  bVar1 = lib::L2CValue::as_bool(aLStack128);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar3,fVar5,fVar6,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::MotionModule__remove_motion_partial_impl(this->moduleAccessor,iVar2,false);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,false);
  bVar1 = lib::L2CValue::as_bool(aLStack80);
  app::lua_bind::FighterMotionModuleImpl__set_blend_waist_impl
            (this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack80);
  app::lua_bind::PostureModule__reverse_lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_JUMP_SQUAT_BUTTON);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__enable_transition_term_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_JUMP_SQUAT);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__enable_transition_term_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  app::lua_bind::ControlModule__reset_trigger_impl(this->moduleAccessor);
  app::lua_bind::ControlModule__clear_command_impl(this->moduleAccessor,false);
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,4);
  pFVar4 = (Fighter *)lib::L2CValue::as_pointer(this_00);
  app::FighterSpecializer_Buddy::update_special_n_partner_motion(pFVar4,false);
  lib::L2CValue::L2CValue(aLStack80,SpecialNShootTurn_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

