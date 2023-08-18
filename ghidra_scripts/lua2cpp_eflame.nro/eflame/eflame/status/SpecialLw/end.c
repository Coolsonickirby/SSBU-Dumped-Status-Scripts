
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterEflame::status::SpecialLw_end(L2CFighterEflame *this,L2CValue *return_value)

{
  byte bVar1;
  L2CValue *pLVar2;
  ulong uVar3;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_ELEMENT_STATUS_KIND_SPECIAL_LW_STANDBY);
  uVar3 = lib::L2CValue::operator__(pLVar2,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar3 & 1) == 0) {
    app::FighterElementLinkEventChange::new_l2c_table();
    pLVar2 = (L2CValue *)lib::L2CValue::operator__(aLStack80,0x105a79305b);
    lib::L2CValue::L2CValue(aLStack64,0x1b71a938a7);
    lib::L2CValue::operator_(pLVar2,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_LINK_NO_CONSTRAINT);
    FUN_7100014e90(aLStack64,this,aLStack96,aLStack80);
    lib::L2CValue::operator_(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_ITEM_LINK_NO_HAVE);
    FUN_7100014e90(aLStack64,this,aLStack96,aLStack80);
    lib::L2CValue::operator_(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack64,true);
    bVar1 = lib::L2CValue::as_bool(aLStack64);
    app::lua_bind::AreaModule__set_whole_impl(this->moduleAccessor,(bool)(bVar1 & 1));
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

