
void __thiscall
L2CFighterTantan::status::AttackWalkBack_main(L2CFighterTantan *this,L2CValue *return_value)

{
  ulong uVar1;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
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
  lua2cpp::L2CFighterCommon::status_WalkBack_common(this);
  lib::L2CValue::L2CValue(aLStack80,AttackWalkBack_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

