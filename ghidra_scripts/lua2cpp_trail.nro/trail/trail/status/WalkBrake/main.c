
void __thiscall
L2CFighterTrail::status::WalkBrake_main(L2CFighterTrail *this,L2CValue *return_value)

{
  byte bVar1;
  ulong uVar2;
  L2CValue aLStack128 [16];
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
    lua2cpp::L2CFighterCommon::status_WalkBrake(this);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,0xc063b47db);
    lib::L2CValue::L2CValue(aLStack80,0xcfc347ab8);
    lib::L2CValue::L2CValue(aLStack96,0xe3a616720);
    lib::L2CValue::L2CValue(aLStack112,0x1047b3b0ba);
    lua2cpp::L2CFighterCommon::status_WalkBrake_common
              (this,(L2CValue)0xc0,(L2CValue)0xb0,(L2CValue)0xa0,(L2CValue)0x90);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack128,WalkBrake_main_loop);
    lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x80);
    lib::L2CValue::_L2CValue(aLStack128);
  }
  return;
}

