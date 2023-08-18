
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBuddy::status::SpecialNShootAirTurn_main(L2CFighterBuddy *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  Hash40 HVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  Fighter *pFVar6;
  float fVar7;
  float fVar8;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack96,0x185e225df3);
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
  lib::L2CValue::L2CValue(aLStack96,false);
  bVar1 = lib::L2CValue::as_bool(aLStack96);
  app::lua_bind::FighterMotionModuleImpl__set_blend_waist_impl
            (this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack96);
  app::lua_bind::PostureModule__reverse_lr_impl(this->moduleAccessor);
  app::lua_bind::ControlModule__reset_trigger_impl(this->moduleAccessor);
  app::lua_bind::ControlModule__clear_command_impl(this->moduleAccessor,false);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
  uVar5 = lib::L2CValue::operator__(pLVar4,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar5 & 1) != 0) {
    lua2cpp::L2CFighterCommon::sub_set_pass(this);
  }
  lib::L2CValue::L2CValue(aLStack112,FIGHTER_INSTANCE_WORK_ID_INT_JUMP_COUNT);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack96,iVar2);
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_INSTANCE_WORK_ID_INT_JUMP_COUNT_MAX);
  iVar2 = lib::L2CValue::as_integer(aLStack144);
  iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack128,iVar2);
  uVar5 = lib::L2CValue::operator_(aLStack96,aLStack128);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar5 & 1) != 0) {
    FUN_7100028800(this);
  }
  FUN_71000259e0(this);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,4);
  pFVar6 = (Fighter *)lib::L2CValue::as_pointer(pLVar4);
  app::FighterSpecializer_Buddy::update_special_n_partner_motion(pFVar6,false);
  lib::L2CValue::L2CValue(aLStack96,SpecialNShootAirTurn_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

