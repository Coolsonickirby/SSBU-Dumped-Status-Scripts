
void __thiscall L2CFighterTrail::status::Walk_exec(L2CFighterTrail *this,L2CValue *return_value)

{
  byte bVar1;
  ulong uVar2;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  bVar1 = app::lua_bind::ItemModule__is_have_item_impl(this->moduleAccessor,0);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,true);
  uVar2 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar2 & 1) == 0) {
    lua2cpp::L2CFighterCommon::sub_walk_uniq_process_main(this);
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,0x9fece0d5d);
    lib::L2CValue::L2CValue(aLStack80,0x1047b3b0ba);
    lib::L2CValue::L2CValue(aLStack96,0xe3a616720);
    lib::L2CValue::L2CValue(aLStack112,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
    lua2cpp::L2CFighterCommon::sub_walk_uniq_process_main_common
              (this,(L2CValue)0xc0,(L2CValue)0xb0,(L2CValue)0xa0,(L2CValue)0x90);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

