
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::SpecialNSpit_exit(L2CFighterKirby *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIRBY_STATUS_SPECIAL_N_FLAG_DRINK_WEAPON);
  iVar4 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,false);
  uVar5 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIRBY_STATUS_SPECIAL_N_FLAG_SPIT_END);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    lib::L2CValue::operator_(aLStack80);
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar2 & 1U) != 0) {
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
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

