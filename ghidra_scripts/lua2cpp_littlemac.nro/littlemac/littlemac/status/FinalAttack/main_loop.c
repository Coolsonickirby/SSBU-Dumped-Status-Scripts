
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterLittlemac::status::FinalAttack_main_loop(L2CFighterLittlemac *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  Hash40 HVar6;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_LITTLEMAC_STATUS_FINAL_FLAG_ATTACK_END_HIT);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_LITTLEMAC_STATUS_FINAL_FLAG_REQUESTED_FINAL_FINISH);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LINK_NO_FINAL);
      lib::L2CValue::L2CValue(aLStack96,0xcd0c7600f);
      lib::L2CValue::L2CValue(aLStack112,0);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      HVar6 = lib::L2CValue::as_hash(aLStack96);
      uVar4 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::LinkModule__send_event_nodes_impl(this->moduleAccessor,iVar3,HVar6,uVar4);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack80);
      FUN_7100013080(this);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LITTLEMAC_STATUS_FINAL_FLAG_REQUESTED_FINAL_FINISH)
      ;
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack80);
    }
  }
  bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_LITTLEMAC_STATUS_FINAL_FLAG_AURA_OFF);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar2 & 1U) == 0) goto LAB_7100013a0c;
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LITTLEMAC_STATUS_FINAL_FLAG_AURA_OFF);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_EFFECT_SUB_ATTRIBUTE_EMIT);
    uVar4 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::EffectModule__remove_all_impl(this->moduleAccessor,uVar4,0);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LITTLEMAC_STATUS_KIND_FINAL_END);
    lib::L2CValue::L2CValue(aLStack96,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::_L2CValue(aLStack80);
LAB_7100013a0c:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

