
void __thiscall
L2CFighterGamewatch::status::FinalJump_main_loop(L2CFighterGamewatch *this,L2CValue *return_value)

{
  byte bVar1;
  ulong uVar2;
  L2CValue *this_00;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,true);
  uVar2 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack80);
LAB_7100023a8c:
    FUN_7100022aa0(aLStack80,this);
    lib::L2CValue::L2CValue(aLStack64,1);
    uVar2 = lib::L2CValue::operator__(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar2 & 1) != 0) goto LAB_7100023b48;
    FUN_7100022d00(aLStack80,this);
    lib::L2CValue::L2CValue(aLStack64,1);
    uVar2 = lib::L2CValue::operator__(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar2 & 1) != 0) goto LAB_7100023b48;
    FUN_710001ec40(aLStack80,this);
    lib::L2CValue::L2CValue(aLStack64,1);
    lib::L2CValue::operator__(aLStack80,aLStack64);
    this_00 = aLStack64;
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x90);
    lib::L2CValue::L2CValue(aLStack64,false);
    uVar2 = lib::L2CValue::operator__(aLStack96,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar2 & 1) != 0) {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack64,false);
      uVar2 = lib::L2CValue::operator__(aLStack128,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar2 & 1) == 0) goto LAB_7100023b48;
      goto LAB_7100023a8c;
    }
    lib::L2CValue::_L2CValue(aLStack96);
    this_00 = aLStack112;
  }
  lib::L2CValue::_L2CValue(this_00);
  lib::L2CValue::_L2CValue(aLStack80);
LAB_7100023b48:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

