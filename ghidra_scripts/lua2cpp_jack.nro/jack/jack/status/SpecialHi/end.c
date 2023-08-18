
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterJack::status::SpecialHi_end(L2CFighterJack *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  L2CValue *this_00;
  ulong uVar3;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_JACK_AREA_KIND_ITEM_CATCH);
  lib::L2CValue::L2CValue(aLStack80,false);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  bVar1 = lib::L2CValue::as_bool(aLStack80);
  app::lua_bind::AreaModule__enable_area_impl(this->moduleAccessor,iVar2,(bool)(bVar1 & 1),-1);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_JACK_AREA_KIND_ITEM_CATCH_ADD);
  lib::L2CValue::L2CValue(aLStack80,false);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  bVar1 = lib::L2CValue::as_bool(aLStack80);
  app::lua_bind::AreaModule__enable_area_impl(this->moduleAccessor,iVar2,(bool)(bVar1 & 1),-1);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_JACK_STATUS_KIND_SPECIAL_HI_PULL);
  uVar3 = lib::L2CValue::operator__(this_00,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar3 & 1) == 0) {
    lua2cpp::L2CFighterCommon::status_end_AirLasso(this);
    lib::L2CValue::_L2CValue(aLStack80);
    bVar1 = app::lua_bind::CatchModule__is_catch_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack64,true);
    uVar3 = lib::L2CValue::operator__(aLStack96,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack64,true);
      bVar1 = lib::L2CValue::as_bool(aLStack64);
      app::lua_bind::CatchModule__set_send_cut_event_impl(this->moduleAccessor,(bool)(bVar1 & 1));
      lib::L2CValue::_L2CValue(aLStack64);
      app::lua_bind::CatchModule__catch_cut_impl(this->moduleAccessor,false,false);
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

