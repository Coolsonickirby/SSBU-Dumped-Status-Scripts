
void __thiscall
L2CFighterTantan::status::AttackWalkBrake_main(L2CFighterTantan *this,L2CValue *return_value)

{
  ulong uVar1;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  FUN_710005d640(aLStack80,this);
  lib::L2CValue::L2CValue(aLStack64,true);
  uVar1 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar1 & 1) == 0) {
    FUN_71000429c0(aLStack80,this);
    lib::L2CValue::L2CValue(aLStack64,false);
    uVar1 = lib::L2CValue::operator__(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar1 & 1) != 0) {
      FUN_7100060550(aLStack80,this);
      lib::L2CValue::L2CValue(aLStack64,true);
      uVar1 = lib::L2CValue::operator__(aLStack80,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar1 & 1) != 0) {
        FUN_7100042d70(aLStack64,this);
        lib::L2CValue::_L2CValue(aLStack64);
      }
    }
    lib::L2CValue::L2CValue(aLStack80,0x182ddcfec3);
    lib::L2CValue::L2CValue(aLStack96,0x18d7d3c3a0);
    lib::L2CValue::L2CValue(aLStack112,0x15f254fb34);
    lib::L2CValue::L2CValue(aLStack128,0x171c51ff07);
    lua2cpp::L2CFighterCommon::status_WalkBrake_common
              (this,(L2CValue)0xb0,(L2CValue)0xa0,(L2CValue)0x90,(L2CValue)0x80);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack144,AttackWalkBrake_main_loop);
    lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x70);
    lib::L2CValue::_L2CValue(aLStack144);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  return;
}

