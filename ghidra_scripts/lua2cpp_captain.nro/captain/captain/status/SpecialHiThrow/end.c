
void __thiscall
L2CFighterCaptain::status::SpecialHiThrow_end(L2CFighterCaptain *this,L2CValue *return_value)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *this_00;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  bVar1 = app::lua_bind::CatchModule__is_catch_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,true);
  uVar4 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack96,LINK_NO_CAPTURE);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = app::lua_bind::LinkModule__is_linked_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack64,true);
    uVar4 = lib::L2CValue::operator__(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar4 & 1) != 0) {
      this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
      lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_KIND_DEAD);
      uVar4 = lib::L2CValue::operator__(this_00,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack64,false);
        lib::L2CValue::L2CValue(aLStack80,true);
        bVar1 = lib::L2CValue::as_bool(aLStack64);
        bVar2 = lib::L2CValue::as_bool(aLStack80);
        app::lua_bind::CatchModule__catch_cut_impl
                  (this->moduleAccessor,(bool)(bVar1 & 1),(bool)(bVar2 & 1));
      }
      else {
        lib::L2CValue::L2CValue(aLStack64,false);
        lib::L2CValue::L2CValue(aLStack80,false);
        bVar1 = lib::L2CValue::as_bool(aLStack64);
        bVar2 = lib::L2CValue::as_bool(aLStack80);
        app::lua_bind::CatchModule__catch_cut_impl
                  (this->moduleAccessor,(bool)(bVar1 & 1),(bool)(bVar2 & 1));
      }
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack64);
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

