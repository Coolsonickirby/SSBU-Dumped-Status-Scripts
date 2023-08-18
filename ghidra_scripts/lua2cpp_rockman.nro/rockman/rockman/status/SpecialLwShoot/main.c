
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterRockman::status::SpecialLwShoot_main(L2CFighterRockman *this,L2CValue *return_value)

{
  int iVar1;
  uint uVar2;
  Hash40 HVar3;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_LINK_NO_ARTICLE);
  lib::L2CValue::L2CValue(aLStack80,0x26b477b82b);
  lib::L2CValue::L2CValue(aLStack96,0);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  HVar3 = lib::L2CValue::as_hash(aLStack80);
  uVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::LinkModule__send_event_nodes_impl(this->moduleAccessor,iVar1,HVar3,uVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,SpecialLwShoot_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xc0);
  lib::L2CValue::_L2CValue(aLStack64);
  return;
}

