
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::ShulkSpecialNAction_end(L2CFighterKirby *this,L2CValue *return_value)

{
  int iVar1;
  HitStatus HVar2;
  L2CValue *this_00;
  ulong uVar3;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_ITEM_SWING_S4_START);
  uVar3 = lib::L2CValue::operator__(this_00,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar3 & 1) == 0) goto LAB_71000b4798;
  iVar1 = app::lua_bind::ItemModule__get_have_item_kind_impl(this->moduleAccessor,0);
  lib::L2CValue::L2CValue(aLStack80,iVar1);
  lib::L2CValue::L2CValue(aLStack64,_ITEM_KIND_HOMERUNBAT);
  uVar3 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,_ITEM_KIND_HOMERUNBATHR);
    uVar3 = lib::L2CValue::operator__(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar3 & 1) != 0) goto LAB_71000b4764;
  }
  else {
LAB_71000b4764:
    lib::L2CValue::L2CValue(aLStack64,_HIT_STATUS_NORMAL);
    HVar2 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::HitModule__set_whole_impl(this->moduleAccessor,HVar2,0);
    lib::L2CValue::_L2CValue(aLStack64);
  }
  lib::L2CValue::_L2CValue(aLStack80);
LAB_71000b4798:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

