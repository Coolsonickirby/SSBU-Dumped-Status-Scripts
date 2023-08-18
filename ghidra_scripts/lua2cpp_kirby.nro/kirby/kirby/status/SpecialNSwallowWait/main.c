
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::SpecialNSwallowWait_main(L2CFighterKirby *this,L2CValue *return_value)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  FUN_71001a6740();
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_SPECIAL_N_FLAG_CONTINUE_MOT);
  iVar4 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIRBY_STATUS_SPECIAL_N_FLAG_CHANGE_ITEM_USE_STATUS);
  iVar4 = lib::L2CValue::as_integer(aLStack96);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
  bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar3 & 1U) == 0) {
LAB_7100017c88:
    lib::L2CValue::L2CValue(aLStack96,0x16526015a2);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KIRBY_STATUS_SPECIAL_N_WORK_INT_MOTION_KIND);
    lVar6 = lib::L2CValue::as_integer(aLStack96);
    iVar4 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar6,iVar4);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,0x1aa4d5f792);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KIRBY_STATUS_SPECIAL_N_WORK_INT_MOTION_KIND_AIR);
    lVar6 = lib::L2CValue::as_integer(aLStack96);
    iVar4 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar6,iVar4);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KIRBY_STATUS_SPECIAL_N_FLAG_CHANGE_ITEM_USE_STATUS);
    iVar4 = lib::L2CValue::as_integer(aLStack112);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
    bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((bVar3 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIRBY_STATUS_SPECIAL_N_FLAG_ITEM_USE);
      iVar4 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar4);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIRBY_STATUS_SPECIAL_N_FLAG_ITEM_REMOVE);
      iVar4 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar4);
      lib::L2CValue::_L2CValue(aLStack96);
    }
    lib::L2CValue::L2CValue(aLStack96,SpecialNSwallowWait_main_loop);
    lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xa0);
    lib::L2CValue::_L2CValue(aLStack96);
    return;
  }
  FUN_71000101b0(aLStack80,this);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue
            (aLStack112,_FIGHTER_KIRBY_STATUS_SPECIAL_N_FLAG_CHANGE_ITEM_USE_STATUS_BOMB);
  iVar4 = lib::L2CValue::as_integer(aLStack112);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
  bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  if ((bVar3 & 1U) == 0) {
    lib::L2CValue::L2CValue
              (aLStack144,_FIGHTER_KIRBY_STATUS_SPECIAL_N_FLAG_CHANGE_ITEM_USE_STATUS_DRAGOON);
    iVar4 = lib::L2CValue::as_integer(aLStack144);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue(aLStack128,(bool)(bVar2 & 1));
    bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack128);
    if ((bVar3 & 1U) == 0) {
      lib::L2CValue::L2CValue
                (aLStack176,_FIGHTER_KIRBY_STATUS_SPECIAL_N_FLAG_CHANGE_ITEM_USE_STATUS_GENESIS);
      iVar4 = lib::L2CValue::as_integer(aLStack176);
      bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
      lib::L2CValue::L2CValue(aLStack160,(bool)(bVar2 & 1));
      bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack160);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      iVar4 = _FIGHTER_KIRBY_HAVE_ITEM_WORK_0;
      iVar1 = _FIGHTER_KIRBY_HAVE_ITEM_WORK_TERM;
      if ((bVar3 & 1U) == 0) goto LAB_7100017c88;
      goto joined_r0x007100017b28;
    }
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
  }
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  iVar4 = _FIGHTER_KIRBY_HAVE_ITEM_WORK_0;
  iVar1 = _FIGHTER_KIRBY_HAVE_ITEM_WORK_TERM;
joined_r0x007100017b28:
  for (; iVar4 < iVar1; iVar4 = iVar4 + 1) {
    lib::L2CValue::L2CValue(aLStack112,iVar4);
    iVar5 = lib::L2CValue::as_integer(aLStack112);
    bVar2 = app::lua_bind::ItemModule__is_have_item_impl(this->moduleAccessor,iVar5);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
    bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((bVar3 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack96,false);
      lib::L2CValue::L2CValue(aLStack112,iVar4);
      bVar2 = lib::L2CValue::as_bool(aLStack96);
      iVar5 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::ItemModule__set_have_item_visibility_impl
                (this->moduleAccessor,(bool)(bVar2 & 1),iVar5);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack96);
    }
  }
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIRBY_STATUS_KIND_SPECIAL_N_DRINK_ITEM);
  lib::L2CValue::L2CValue(aLStack112,false);
  lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue((L2CValue *)return_value,1);
  return;
}

