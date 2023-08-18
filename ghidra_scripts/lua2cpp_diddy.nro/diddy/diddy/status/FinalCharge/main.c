
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDiddy::status::FinalCharge_main(L2CFighterDiddy *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  Hash40 HVar5;
  float fVar6;
  float fVar7;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  FUN_7100019710();
  lib::L2CValue::L2CValue(aLStack96,0xca5652f23);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  lib::L2CValue::L2CValue(aLStack128,1.0);
  lib::L2CValue::L2CValue(aLStack144,false);
  HVar5 = lib::L2CValue::as_hash(aLStack96);
  fVar6 = (float)lib::L2CValue::as_number(aLStack112);
  fVar7 = (float)lib::L2CValue::as_number(aLStack128);
  bVar1 = lib::L2CValue::as_bool(aLStack144);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar5,fVar6,fVar7,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_DIDDY_GENERATE_ARTICLE_BARRELJETS);
  lib::L2CValue::L2CValue(aLStack112,0xca5652f23);
  lib::L2CValue::L2CValue(aLStack128,false);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  HVar5 = lib::L2CValue::as_hash(aLStack112);
  bVar1 = lib::L2CValue::as_bool(aLStack128);
  app::lua_bind::ArticleModule__change_motion_impl
            (this->moduleAccessor,iVar2,HVar5,(bool)(bVar1 & 1),-1.0);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_TYPE_MOTION);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
  app::sv_kinetic_energy::unable(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack96);
  uVar3 = app::lua_bind::MotionModule__end_frame_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,uVar3);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_DIDDY_STATUS_FINAL_WORK_INT_CHARGE_COUNT);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  iVar4 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar4);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,FinalCharge_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x90);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

