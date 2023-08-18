
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBuddy::status::SpecialS_main_loop(L2CFighterBuddy *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  L2CValue *this_00;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  this_00 = aLStack160;
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((bVar1 & 1U) == 0) {
    FUN_7100024430(this);
    lib::L2CValue::L2CValue(aLStack64,0xfea97fe73);
    lua2cpp::L2CFighterCommon::sub_exec_special_start_common_kinetic_setting(this,(L2CValue)0xc0);
    lib::L2CValue::_L2CValue(aLStack64);
    bVar2 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((bVar1 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack96,0x976c3b29b);
      lib::L2CValue::L2CValue(aLStack112,0xd2b3a620b);
      lib::L2CValue::L2CValue(aLStack128,true);
      lua2cpp::L2CFighterCommon::sub_change_motion_by_situation
                (this,(L2CValue)0xa0,(L2CValue)0x90,(L2CValue)0x80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack160,true);
      lua2cpp::L2CFighterCommon::sub_set_ground_correct_by_situation(this,(L2CValue)0x60);
      lib::L2CValue::_L2CValue(aLStack144);
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BUDDY_STATUS_SPECIAL_S_FLAG_FAIL);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((bVar1 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BUDDY_STATUS_KIND_SPECIAL_S_DASH);
        lib::L2CValue::L2CValue(aLStack96,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BUDDY_STATUS_KIND_SPECIAL_S_FAIL);
        lib::L2CValue::L2CValue(aLStack96,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
      }
      lib::L2CValue::_L2CValue(aLStack96);
      this_00 = aLStack80;
    }
    lib::L2CValue::_L2CValue(this_00);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

