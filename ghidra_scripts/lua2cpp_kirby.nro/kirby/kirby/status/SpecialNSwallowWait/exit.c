
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::SpecialNSwallow_exit(L2CFighterKirby *this,L2CValue *return_value)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack80,pLVar4);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIRBY_STATUS_KIND_SPECIAL_N_EAT_WAIT);
  uVar5 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIRBY_STATUS_KIND_SPECIAL_N_EAT_FALL);
    uVar5 = lib::L2CValue::operator__(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIRBY_STATUS_KIND_SPECIAL_N_SWALLOW);
      uVar5 = lib::L2CValue::operator__(aLStack80,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack96,LINK_NO_CAPTURE);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        bVar1 = app::lua_bind::LinkModule__is_linked_impl(this->moduleAccessor,iVar3);
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
          bVar2 = lib::L2CValue::as_bool(aLStack80);
          app::lua_bind::CatchModule__catch_cut_impl
                    (this->moduleAccessor,(bool)(bVar1 & 1),(bool)(bVar2 & 1));
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack64);
        }
        app::lua_bind::HitModule__cancel_xlu_global_impl(this->moduleAccessor,0);
        lib::L2CValue::L2CValue((L2CValue *)return_value,0);
        return;
      }
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_710000b1b8;
    }
  }
  lib::L2CValue::L2CValue(aLStack112,LINK_NO_CAPTURE);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::LinkModule__is_linked_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,true);
  uVar5 = lib::L2CValue::operator__(aLStack96,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar5 & 1) != 0) {
    app::LinkEvent::new_l2c_table();
    pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x105a79305b);
    lib::L2CValue::L2CValue(aLStack64,0xb461b697a);
    lib::L2CValue::operator_(pLVar4,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack112,LINK_NO_CAPTURE);
    FUN_7100010a00(aLStack64,this,aLStack112,aLStack96);
    lib::L2CValue::operator_(aLStack96,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_710000b1b8:
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

