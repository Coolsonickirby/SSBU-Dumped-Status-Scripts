
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterCaptain::status::Final_on_change_lr(L2CFighterCaptain *this,L2CValue *return_value)

{
  int iVar1;
  Hash40 HVar2;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_LINK_NO_ARTICLE);
  lib::L2CValue::L2CValue(aLStack80,0x1a9a7f9a26);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  HVar2 = lib::L2CValue::as_hash(aLStack80);
  app::lua_bind::LinkModule__send_event_nodes_impl(this->moduleAccessor,iVar1,HVar2,0);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

