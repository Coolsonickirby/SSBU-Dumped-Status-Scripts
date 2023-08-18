
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterBuddy::status::SpecialS_main(L2CFighterBuddy *this,L2CValue *return_value)

{
  int iVar1;
  ulong uVar2;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,0xfea97fe73);
  lua2cpp::L2CFighterCommon::sub_set_special_start_common_kinetic_setting(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_BUDDY_INSTANCE_WORK_ID_INT_SPECIAL_S_REMAIN);
  iVar1 = lib::L2CValue::as_integer(aLStack112);
  iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack96,iVar1);
  lib::L2CValue::L2CValue(aLStack64,0);
  uVar2 = lib::L2CValue::operator_(aLStack64,aLStack96);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_BUDDY_STATUS_SPECIAL_S_FLAG_FAIL);
    iVar1 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar1);
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_BUDDY_STATUS_SPECIAL_S_FLAG_FAIL);
    iVar1 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar1);
  }
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack96,0x976c3b29b);
  lib::L2CValue::L2CValue(aLStack112,0xd2b3a620b);
  lib::L2CValue::L2CValue(aLStack128,false);
  lua2cpp::L2CFighterCommon::sub_change_motion_by_situation
            (this,(L2CValue)0xa0,(L2CValue)0x90,(L2CValue)0x80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack160,true);
  lua2cpp::L2CFighterCommon::sub_set_ground_correct_by_situation(this,(L2CValue)0x60);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack176,_FIGHTER_BUDDY_STATUS_SPECIAL_S_FLAG_SUPER_ARMOR);
  iVar1 = lib::L2CValue::as_integer(aLStack176);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::L2CValue(aLStack176,_FIGHTER_BUDDY_STATUS_SPECIAL_S_FLAG_SUPER_ARMOR_EQUIP);
  iVar1 = lib::L2CValue::as_integer(aLStack176);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::L2CValue(aLStack176,SpecialS_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x50);
  lib::L2CValue::_L2CValue(aLStack176);
  return;
}

