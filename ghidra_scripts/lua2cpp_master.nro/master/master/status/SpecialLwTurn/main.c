
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterMaster::status::SpecialLwTurn_main(L2CFighterMaster *this,L2CValue *return_value)

{
  int iVar1;
  uint uVar2;
  Hash40 HVar3;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,0xfa4760a42);
  lib::L2CValue::L2CValue(aLStack80,0x13afef8796);
  lib::L2CValue::L2CValue(aLStack96,false);
  lib::L2CValue::L2CValue(aLStack128,aLStack64);
  lib::L2CValue::L2CValue(aLStack144,aLStack80);
  lib::L2CValue::L2CValue(aLStack160,aLStack96);
  lua2cpp::L2CFighterCommon::sub_change_motion_by_situation
            (this,(L2CValue)0x80,(L2CValue)0x70,(L2CValue)0x60);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack176,_LINK_NO_ARTICLE);
  lib::L2CValue::L2CValue(aLStack192,0x1779deaccd);
  lib::L2CValue::L2CValue(aLStack208,0);
  iVar1 = lib::L2CValue::as_integer(aLStack176);
  HVar3 = lib::L2CValue::as_hash(aLStack192);
  uVar2 = lib::L2CValue::as_integer(aLStack208);
  app::lua_bind::LinkModule__send_event_nodes_impl(this->moduleAccessor,iVar1,HVar3,uVar2);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::L2CValue(aLStack176,SpecialLwTurn_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x50);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  return;
}

