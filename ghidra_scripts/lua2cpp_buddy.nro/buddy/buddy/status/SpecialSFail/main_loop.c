
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBuddy::status::SpecialSFail_main_loop(L2CFighterBuddy *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  Hash40 HVar6;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar1 & 1U) != 0) goto LAB_710001fd80;
  bVar2 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar4 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack96);
  }
  else {
    lib::L2CValue::L2CValue(aLStack128,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x80);
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar4 = lib::L2CValue::operator__(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
      goto LAB_710001fd80;
    }
    lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar4 = lib::L2CValue::operator__(aLStack144,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar4 & 1) == 0) goto LAB_710001fd80;
  }
  bVar2 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar1 & 1U) == 0) {
LAB_710001fa7c:
    HVar6 = app::lua_bind::MotionModule__motion_kind_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack96,HVar6);
    lib::L2CValue::L2CValue(aLStack80,0xe20233d2b);
    uVar4 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar4 & 1) != 0) {
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
      uVar4 = lib::L2CValue::operator__(pLVar5,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_FALL);
        lib::L2CValue::L2CValue(aLStack96,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
        goto LAB_710001fb30;
      }
    }
    lib::L2CValue::L2CValue(aLStack96,true);
    lua2cpp::L2CFighterCommon::sub_set_ground_correct_by_situation(this,(L2CValue)0xa0);
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar1 & 1U) != 0) {
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x17);
      lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
      uVar4 = lib::L2CValue::operator__(pLVar5,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_BUDDY_STATUS_SPECIAL_S_FLAG_LANDING_HEAVY);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
        bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((bVar1 & 1U) == 0) {
LAB_710001fdcc:
          lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_DOWN);
          lib::L2CValue::L2CValue(aLStack112,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x90);
        }
        else {
          lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_TRANSITION_TERM_ID_LANDING);
          iVar3 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::WorkModule__enable_transition_term_impl(this->moduleAccessor,iVar3);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack112,FIGHTER_STATUS_TRANSITION_TERM_ID_LANDING);
          iVar3 = lib::L2CValue::as_integer(aLStack112);
          bVar2 = app::lua_bind::WorkModule__is_enable_transition_term_impl
                            (this->moduleAccessor,iVar3);
          lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
          bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack112);
          if ((bVar1 & 1U) == 0) {
            lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_TRANSITION_TERM_ID_LANDING);
            iVar3 = lib::L2CValue::as_integer(aLStack80);
            app::lua_bind::WorkModule__unable_transition_term_impl(this->moduleAccessor,iVar3);
            lib::L2CValue::_L2CValue(aLStack80);
            goto LAB_710001fdcc;
          }
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_LANDING);
          lib::L2CValue::L2CValue(aLStack112,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x90);
        }
        pLVar5 = aLStack112;
        goto LAB_710001fb34;
      }
    }
    lib::L2CValue::L2CValue(aLStack112,0xe20233d2b);
    lib::L2CValue::L2CValue(aLStack144,0x126271c8e4);
    lib::L2CValue::L2CValue(aLStack160,true);
    lua2cpp::L2CFighterCommon::sub_change_motion_by_situation
              (this,(L2CValue)0x90,(L2CValue)0x70,(L2CValue)0x60);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack192,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
    lib::L2CValue::L2CValue(aLStack208,_FIGHTER_KINETIC_TYPE_FALL);
    lua2cpp::L2CFighterCommon::sub_change_kinetic_type_by_situation
              (this,(L2CValue)0x40,(L2CValue)0x30);
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack176);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack192);
    if ((bVar1 & 1U) != 0) {
      FUN_710001f4b0(this);
    }
  }
  else {
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar4 = lib::L2CValue::operator__(pLVar5,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar4 & 1) == 0) {
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
      uVar4 = lib::L2CValue::operator__(pLVar5,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar4 & 1) == 0) goto LAB_710001fa7c;
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_FALL);
      lib::L2CValue::L2CValue(aLStack96,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_WAIT);
      lib::L2CValue::L2CValue(aLStack96,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
    }
LAB_710001fb30:
    pLVar5 = aLStack96;
LAB_710001fb34:
    lib::L2CValue::_L2CValue(pLVar5);
    lib::L2CValue::_L2CValue(aLStack80);
  }
LAB_710001fd80:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

