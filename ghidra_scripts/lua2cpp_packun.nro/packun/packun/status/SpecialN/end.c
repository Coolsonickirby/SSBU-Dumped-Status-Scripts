
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPackun::status::SpecialN_end(L2CFighterPackun *this,L2CValue *return_value)

{
  int iVar1;
  uint uVar2;
  L2CValue *this_00;
  ulong uVar3;
  Hash40 HVar4;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PACKUN_STATUS_KIND_SPECIAL_N_LOOP);
  uVar3 = lib::L2CValue::operator__(this_00,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,_LINK_NO_ARTICLE);
    lib::L2CValue::L2CValue(aLStack80,0x1d705643d2);
    lib::L2CValue::L2CValue(aLStack96,0);
    iVar1 = lib::L2CValue::as_integer(aLStack64);
    HVar4 = lib::L2CValue::as_hash(aLStack80);
    uVar2 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::LinkModule__send_event_nodes_impl(this->moduleAccessor,iVar1,HVar4,uVar2);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

