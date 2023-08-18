
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDolly::status::GuardOn_main_loop(L2CFighterDolly *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_GUARD_ON_WORK_FLAG_EFFECT);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,false);
  uVar4 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack80);
    pLVar5 = aLStack96;
  }
  else {
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xe);
    lib::L2CValue::L2CValue(aLStack64,0);
    uVar4 = lib::L2CValue::operator_(aLStack64,pLVar5);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar4 & 1) == 0) goto LAB_7100027688;
    lib::L2CValue::L2CValue(aLStack64,0x262a7a102d);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack64);
    app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_GUARD_ON_WORK_FLAG_EFFECT);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
    pLVar5 = aLStack64;
  }
  lib::L2CValue::_L2CValue(pLVar5);
LAB_7100027688:
  lua2cpp::L2CFighterCommon::sub_status_guard_on_main_air_common(this);
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((bVar2 & 1U) == 0) {
    lua2cpp::L2CFighterCommon::sub_guard_cont(this);
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((bVar2 & 1U) == 0) {
      lua2cpp::L2CFighterCommon::status_guard_main_common(this);
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack96,false);
        lua2cpp::L2CFighterCommon::check_guard_attack_special_hi(this,(L2CValue)0xa0);
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((bVar2 & 1U) == 0) {
          bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
          lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
          bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
          lib::L2CValue::_L2CValue(aLStack64);
          if ((bVar2 & 1U) != 0) {
            pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
            lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
            uVar4 = lib::L2CValue::operator__(pLVar5,aLStack64);
            lib::L2CValue::_L2CValue(aLStack64);
            if ((uVar4 & 1) != 0) {
              lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_GUARD);
              lib::L2CValue::L2CValue(aLStack112,false);
              lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0x90);
              lib::L2CValue::_L2CValue(aLStack112);
              lib::L2CValue::_L2CValue(aLStack64);
            }
          }
        }
      }
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

