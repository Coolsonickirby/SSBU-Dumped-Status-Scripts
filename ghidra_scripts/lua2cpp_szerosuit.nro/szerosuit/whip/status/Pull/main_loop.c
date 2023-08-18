
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponSzerosuitWhip::status::Pull_main_loop(L2CWeaponSzerosuitWhip *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CValue *pLVar4;
  code *pcVar5;
  long *plVar6;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((bVar2 & 1U) != 0) {
    app::LinkEvent::new_l2c_table();
    pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack80,0x105a79305b);
    lib::L2CValue::L2CValue(aLStack64,0x15966aca35);
    lib::L2CValue::operator_(pLVar4,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack112,_LINK_NO_ARTICLE);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack80,0x11f63699bf);
    pcVar5 = (code *)lib::L2CValue::as_pointer(pLVar4);
    plVar6 = (long *)(*pcVar5)();
    app::lua_bind::LinkEvent__load_from_l2c_table_impl((LinkEvent *)plVar6,aLStack80);
    app::lua_bind::LinkModule__send_event_parents_struct_impl
              (this->moduleAccessor,iVar3,(LinkEvent *)plVar6);
    app::lua_bind::LinkEvent__store_l2c_table_impl((LinkEvent *)plVar6);
    lib::L2CValue::L2CValue(aLStack96,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    (**(code **)(*plVar6 + 8))(plVar6);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

