
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterSimon::status::SpecialN_main(L2CFighterSimon *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  L2CValue *this_00;
  ulong uVar5;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  this_00 = aLStack96;
  lib::L2CValue::L2CValue
            (aLStack80,
             _FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_SPECIAL_N |
             FIGHTER_LOG_MASK_FLAG_ACTION_CATEGORY_ATTACK | FIGHTER_LOG_MASK_FLAG_ACTION_TRIGGER_ON)
  ;
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_SIMON_GENERATE_ARTICLE_AXE);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::ArticleModule__is_generatable_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack64,0xf99383d09);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_SIMON_STATUS_SPECIAL_N_INT_MOTION);
    lVar4 = lib::L2CValue::as_integer(aLStack64);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar4,iVar3);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,0x1392a1b0dd);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_SIMON_STATUS_SPECIAL_N_INT_MOTION_AIR);
    lVar4 = lib::L2CValue::as_integer(aLStack64);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar4,iVar3);
    lib::L2CValue::_L2CValue(aLStack96);
    this_00 = aLStack64;
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,0x915c5de42);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_SIMON_STATUS_SPECIAL_N_INT_MOTION);
    lVar4 = lib::L2CValue::as_integer(aLStack64);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar4,iVar3);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,0xd483c0ed2);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_SIMON_STATUS_SPECIAL_N_INT_MOTION_AIR);
    lVar4 = lib::L2CValue::as_integer(aLStack64);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar4,iVar3);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_LOG_MASK_FLAG_SHOOT);
    lib::L2CValue::operator_(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::operator_(aLStack80,aLStack96);
  }
  lib::L2CValue::_L2CValue(this_00);
  uVar5 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::FighterStatusModuleImpl__reset_log_action_info_impl(this->moduleAccessor,uVar5);
  lib::L2CValue::L2CValue(aLStack64,SpecialN_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xc0);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

