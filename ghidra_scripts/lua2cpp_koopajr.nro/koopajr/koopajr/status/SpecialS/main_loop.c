
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKoopajr::status::SpecialS_main_loop(L2CFighterKoopajr *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  float fVar6;
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  bVar1 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) != 0) {
    bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KOOPAJR_STATUS_KIND_SPECIAL_S_DASH);
      lib::L2CValue::L2CValue(aLStack112,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x90);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue((L2CValue *)return_value,1);
      goto LAB_71000163d0;
    }
  }
  lib::L2CValue::L2CValue(aLStack112,aLStack96);
  lib::L2CValue::L2CValue(aLStack128,0xf3c6351ed);
  lib::L2CValue::L2CValue(aLStack144,0x1337fadc39);
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_KINETIC_TYPE_KOOPAJR_SPECIAL_S);
  lib::L2CValue::L2CValue(aLStack176,_FIGHTER_KINETIC_TYPE_KOOPAJR_SPECIAL_AIR_S);
  lib::L2CValue::L2CValue(aLStack192,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
  lib::L2CValue::L2CValue(aLStack208,GROUND_CORRECT_KIND_AIR);
  FUN_7100010330(aLStack80,this,aLStack112,aLStack128,aLStack144,aLStack160,aLStack176,aLStack192,
                 aLStack208);
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KOOPAJR_STATUS_SPECIAL_S_INT_BACK_FRAME);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack224,iVar3);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0.0);
    uVar5 = lib::L2CValue::operator_(aLStack80,aLStack224);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) != 0) {
      fVar6 = (float)app::lua_bind::MotionModule__frame_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack80,fVar6);
      uVar4 = app::lua_bind::MotionModule__end_frame_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack240,uVar4);
      lib::L2CValue::operator_(aLStack240,aLStack80);
      lib::L2CValue::operator_(aLStack272,aLStack224);
      lib::L2CValue::_L2CValue(aLStack272);
      fVar6 = (float)lib::L2CValue::as_number(aLStack256);
      app::lua_bind::MotionModule__set_rate_impl(this->moduleAccessor,fVar6);
      lib::L2CValue::L2CValue(aLStack272,_FIGHTER_KOOPAJR_GENERATE_ARTICLE_KART);
      iVar3 = lib::L2CValue::as_integer(aLStack272);
      fVar6 = (float)lib::L2CValue::as_number(aLStack256);
      app::lua_bind::ArticleModule__set_rate_impl(this->moduleAccessor,iVar3,fVar6);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack80);
    }
    lib::L2CValue::_L2CValue(aLStack224);
  }
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack224,0x28fb828042);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack224);
    app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack224);
  }
  FUN_7100013d90(this);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_71000163d0:
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

