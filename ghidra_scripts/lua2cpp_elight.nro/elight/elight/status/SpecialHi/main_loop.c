
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterElight::status::SpecialHi_main_loop(L2CFighterElight *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,0x1086bc4a93);
  lua2cpp::L2CFighterCommon::sub_exec_special_start_common_kinetic_setting(this,(L2CValue)0xc0);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack96,0x105c3c1e76);
  lib::L2CValue::L2CValue(aLStack112,0x14dd899136);
  lib::L2CValue::L2CValue(aLStack128,true);
  lua2cpp::L2CFighterCommon::sub_change_motion_by_situation
            (this,(L2CValue)0xa0,(L2CValue)0x90,(L2CValue)0x80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  FUN_7100012160(this);
  bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack144);
  lib::L2CValue::_L2CValue(aLStack144);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_ELIGHT_STATUS_KIND_SPECIAL_HI_JUMP);
    lib::L2CValue::L2CValue(aLStack160,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x70,(L2CValue)0x60);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

