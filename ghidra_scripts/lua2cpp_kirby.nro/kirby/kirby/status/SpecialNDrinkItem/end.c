
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::SpecialNDrinkItem_end(L2CFighterKirby *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_SPECIAL_N_FLAG_CHANGE_ITEM_USE_STATUS);
  iVar4 = lib::L2CValue::as_integer(aLStack80);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar2 & 1U) == 0) goto LAB_710001d804;
  lib::L2CValue::L2CValue
            (aLStack80,_FIGHTER_KIRBY_STATUS_SPECIAL_N_FLAG_CHANGE_ITEM_USE_STATUS_BOMB);
  iVar4 = lib::L2CValue::as_integer(aLStack80);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue
              (aLStack112,_FIGHTER_KIRBY_STATUS_SPECIAL_N_FLAG_CHANGE_ITEM_USE_STATUS_DRAGOON);
    iVar4 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      goto LAB_710001d6cc;
    }
    lib::L2CValue::L2CValue
              (aLStack144,_FIGHTER_KIRBY_STATUS_SPECIAL_N_FLAG_CHANGE_ITEM_USE_STATUS_GENESIS);
    iVar4 = lib::L2CValue::as_integer(aLStack144);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack128);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((bVar2 & 1U) == 0) goto LAB_710001d804;
  }
  else {
LAB_710001d6cc:
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue(aLStack96,LINK_NO_CAPTURE);
  iVar4 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::LinkModule__is_linked_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,true);
  uVar5 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack64,false);
    lib::L2CValue::L2CValue(aLStack80,true);
    bVar1 = lib::L2CValue::as_bool(aLStack64);
    bVar3 = lib::L2CValue::as_bool(aLStack80);
    app::lua_bind::CatchModule__catch_cut_impl
              (this->moduleAccessor,(bool)(bVar1 & 1),(bool)(bVar3 & 1));
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack64);
  }
LAB_710001d804:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

