
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBuddy::status::SpecialNShootJumpAerial_main(L2CFighterBuddy *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  Fighter *pFVar5;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  app::lua_bind::ControlModule__reset_flick_y_impl(this->moduleAccessor);
  app::lua_bind::ControlModule__reset_flick_sub_y_impl(this->moduleAccessor);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x1d);
  lib::L2CValue::L2CValue(aLStack80,0xfe);
  lib::L2CValue::operator_(pLVar3,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  app::lua_bind::ControlModule__reset_trigger_impl(this->moduleAccessor);
  app::lua_bind::ControlModule__clear_command_impl(this->moduleAccessor,false);
  lib::L2CValue::L2CValue(aLStack80,false);
  bVar1 = lib::L2CValue::as_bool(aLStack80);
  app::lua_bind::FighterMotionModuleImpl__set_blend_waist_impl
            (this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack96,FIGHTER_INSTANCE_WORK_ID_INT_JUMP_COUNT);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack80,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,FIGHTER_INSTANCE_WORK_ID_INT_JUMP_COUNT);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__inc_int_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack112,FIGHTER_INSTANCE_WORK_ID_INT_JUMP_COUNT);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack96,iVar2);
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_INSTANCE_WORK_ID_INT_JUMP_COUNT_MAX);
  iVar2 = lib::L2CValue::as_integer(aLStack144);
  iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack128,iVar2);
  uVar4 = lib::L2CValue::operator_(aLStack96,aLStack128);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar4 & 1) != 0) {
    FUN_7100028800(this);
  }
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_TYPE_FLY);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,aLStack80);
  FUN_7100029d50(this,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_INSTANCE_WORK_ID_FLAG_DAMAGE_FLY_AIR);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_BUDDY_STATUS_SPECIAL_N_FLAG_PRECEDE_SHOOT);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue(aLStack112);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,4);
  pFVar5 = (Fighter *)lib::L2CValue::as_pointer(pLVar3);
  app::FighterSpecializer_Buddy::update_special_n_partner_motion(pFVar5,false);
  FUN_71000259e0(this);
  FUN_710002a000(this);
  lib::L2CValue::L2CValue(aLStack112,SpecialNShootJumpAerial_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x90);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

