
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBrave::status::SpecialS_main_loop(L2CFighterBrave *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,0xf3c6351ed);
  lib::L2CValue::L2CValue(aLStack80,0x1337fadc39);
  lib::L2CValue::L2CValue(aLStack96,true);
  lib::L2CValue::L2CValue(aLStack128,aLStack64);
  lib::L2CValue::L2CValue(aLStack144,aLStack80);
  lib::L2CValue::L2CValue(aLStack160,aLStack96);
  lua2cpp::L2CFighterCommon::sub_change_motion_by_situation
            (this,(L2CValue)0x80,(L2CValue)0x70,(L2CValue)0x60);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  FUN_7100028af0(this);
  bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack176,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack176);
  lib::L2CValue::_L2CValue(aLStack176);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  else {
    lib::L2CValue::L2CValue(aLStack176,_FIGHTER_BRAVE_STATUS_KIND_SPECIAL_S_HOLD);
    lib::L2CValue::L2CValue(aLStack192,true);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x50,(L2CValue)0x40);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
  }
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  return;
}

