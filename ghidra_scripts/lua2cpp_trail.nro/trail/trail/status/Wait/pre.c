
void __thiscall L2CFighterTrail::status::Wait_pre(L2CFighterTrail *this,L2CValue *return_value)

{
  ulong uVar1;
  Hash40 HVar2;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lua2cpp::L2CFighterCommon::status_pre_Wait_check_interrupt(this);
  lib::L2CValue::L2CValue(aLStack64,0);
  uVar1 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar1 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,0);
    HVar2 = app::lua_bind::MotionModule__motion_kind_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack96,HVar2);
    lib::L2CValue::L2CValue(aLStack64,0xa82125b6f);
    uVar1 = lib::L2CValue::operator__(aLStack96,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar1 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack64,FS_SUCCEEDS_KEEP_SLOPE);
      lib::L2CValue::operator_(aLStack80,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
    }
    lib::L2CValue::L2CValue(aLStack64,aLStack80);
    lua2cpp::L2CFighterCommon::status_pre_Wait_main_param(this,(L2CValue)0xc0);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  return;
}

