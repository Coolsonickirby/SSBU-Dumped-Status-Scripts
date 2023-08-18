
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterMaster::status::SpecialS_main_loop(L2CFighterMaster *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *this_00;
  Hash40 HVar5;
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
  
  bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack80,0xf3c6351ed);
    lib::L2CValue::L2CValue(aLStack96,0x1337fadc39);
    lib::L2CValue::L2CValue(aLStack112,true);
    lib::L2CValue::L2CValue(aLStack144,aLStack80);
    lib::L2CValue::L2CValue(aLStack160,aLStack96);
    lib::L2CValue::L2CValue(aLStack176,aLStack112);
    lua2cpp::L2CFighterCommon::sub_change_motion_by_situation
              (this,(L2CValue)0x70,(L2CValue)0x60,(L2CValue)0x50);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::L2CValue(aLStack64,true);
    uVar4 = lib::L2CValue::operator__(aLStack128,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar4 & 1) != 0) {
      this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
      uVar4 = lib::L2CValue::operator__(this_00,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack64,0x139538a2ac);
        HVar5 = lib::L2CValue::as_hash(aLStack64);
        app::lua_bind::SoundModule__play_landing_se_impl(this->moduleAccessor,HVar5);
        lib::L2CValue::_L2CValue(aLStack64);
      }
    }
    lib::L2CValue::L2CValue(aLStack192,true);
    lua2cpp::L2CFighterCommon::sub_set_ground_correct_by_situation(this,(L2CValue)0x40);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::L2CValue(aLStack208,0xfea97fe73);
    lua2cpp::L2CFighterCommon::sub_exec_special_start_common_kinetic_setting(this,(L2CValue)0x30);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MASTER_INSTANCE_WORK_ID_FLAG_SPECIAL_S_IS_FLICK);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack64,true);
    uVar4 = lib::L2CValue::operator__(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MASTER_STATUS_KIND_SPECIAL_S_FRONT);
      lib::L2CValue::L2CValue(aLStack80,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
    }
    else {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MASTER_STATUS_KIND_SPECIAL_S_FRONT_DASH);
      lib::L2CValue::L2CValue(aLStack80,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
    }
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  return;
}

