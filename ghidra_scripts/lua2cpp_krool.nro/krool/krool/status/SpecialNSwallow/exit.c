
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKrool::status::SpecialNSwallow_exit(L2CFighterKrool *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  byte bVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  this_00 = &this->globalTable;
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KROOL_STATUS_KIND_SPECIAL_N_SPIT);
  uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack112,LINK_NO_CAPTURE);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::LinkModule__is_linked_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar5 & 1) != 0) {
      pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
      lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_CATCH_CUT);
      uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,true);
        bVar1 = lib::L2CValue::as_bool(aLStack80);
        app::lua_bind::CatchModule__set_send_cut_event_impl(this->moduleAccessor,(bool)(bVar1 & 1));
        lib::L2CValue::_L2CValue(aLStack80);
      }
      pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
      lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_DEAD);
      uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,false);
        lib::L2CValue::L2CValue(aLStack96,true);
        bVar1 = lib::L2CValue::as_bool(aLStack80);
        bVar2 = lib::L2CValue::as_bool(aLStack96);
        app::lua_bind::CatchModule__catch_cut_impl
                  (this->moduleAccessor,(bool)(bVar1 & 1),(bool)(bVar2 & 1));
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,false);
        lib::L2CValue::L2CValue(aLStack96,false);
        bVar1 = lib::L2CValue::as_bool(aLStack80);
        bVar2 = lib::L2CValue::as_bool(aLStack96);
        app::lua_bind::CatchModule__catch_cut_impl
                  (this->moduleAccessor,(bool)(bVar1 & 1),(bool)(bVar2 & 1));
      }
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack80);
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

