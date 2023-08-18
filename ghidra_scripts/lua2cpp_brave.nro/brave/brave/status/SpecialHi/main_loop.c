
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBrave::status::SpecialHi_main_loop(L2CFighterBrave *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
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
  
  lib::L2CValue::L2CValue(aLStack64,0x105c3c1e76);
  lib::L2CValue::L2CValue(aLStack80,0x14dd899136);
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
  lib::L2CValue::L2CValue(aLStack176,0x1086bc4a93);
  lua2cpp::L2CFighterCommon::sub_exec_special_start_common_kinetic_setting(this,(L2CValue)0x50);
  lib::L2CValue::_L2CValue(aLStack176);
  bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack192,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack192);
  lib::L2CValue::_L2CValue(aLStack192);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  else {
    lib::L2CValue::L2CValue(aLStack192,_FIGHTER_BRAVE_STATUS_KIND_SPECIAL_HI_HOLD);
    lib::L2CValue::L2CValue(aLStack208,true);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x40,(L2CValue)0x30);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
  }
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  return;
}

