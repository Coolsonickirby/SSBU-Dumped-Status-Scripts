
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterTantan::status::WalkBrake_main(L2CFighterTantan *this,L2CValue *return_value)

{
  L2CValue *this_00;
  ulong uVar1;
  Hash40 HVar2;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,10);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_TANTAN_STATUS_KIND_ATTACK_WALK_BRAKE);
  uVar1 = lib::L2CValue::operator__(this_00,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar1 & 1) == 0) {
    lua2cpp::L2CFighterCommon::status_WalkBrake(this);
  }
  else {
    FUN_71000638f0(aLStack80,this);
    lib::L2CValue::L2CValue(aLStack64,true);
    uVar1 = lib::L2CValue::operator__(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar1 & 1) == 0) {
      HVar2 = app::lua_bind::MotionModule__motion_kind_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack80,HVar2);
      lib::L2CValue::L2CValue(aLStack64,0x182ddcfec3);
      uVar1 = lib::L2CValue::operator__(aLStack80,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      if ((uVar1 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack64,0x18d7d3c3a0);
        uVar1 = lib::L2CValue::operator__(aLStack80,aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
        if ((uVar1 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack64,0xa9f2abe2f);
          lib::L2CValue::operator_(aLStack80,aLStack64);
        }
        else {
          lib::L2CValue::L2CValue(aLStack64,0xcfc347ab8);
          lib::L2CValue::operator_(aLStack80,aLStack64);
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack64,0xc063b47db);
        lib::L2CValue::operator_(aLStack80,aLStack64);
      }
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,aLStack80);
      FUN_7100024950(this,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,WalkBrake_main_loop);
      lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xb0);
      lib::L2CValue::_L2CValue(aLStack80);
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    }
  }
  return;
}

