
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBuddy::status::SpecialSEnd_main_loop(L2CFighterBuddy *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  L2CValue *this_00;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  this_00 = aLStack208;
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar1 & 1U) != 0) goto LAB_7100020d1c;
  bVar2 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar4 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack96);
LAB_7100020970:
    bVar2 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((bVar1 & 1U) == 0) {
LAB_7100020a88:
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BUDDY_STATUS_SPECIAL_S_FLAG_LANDING_HEAVY);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((bVar1 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_TRANSITION_TERM_ID_LANDING);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__enable_transition_term_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::_L2CValue(aLStack80);
        pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
        lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
        uVar4 = lib::L2CValue::operator__(pLVar5,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar4 & 1) != 0) {
          pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x17);
          lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
          uVar4 = lib::L2CValue::operator__(pLVar5,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar4 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_TRANSITION_TERM_ID_LANDING);
            iVar3 = lib::L2CValue::as_integer(aLStack96);
            bVar2 = app::lua_bind::WorkModule__is_enable_transition_term_impl
                              (this->moduleAccessor,iVar3);
            lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
            bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
            lib::L2CValue::_L2CValue(aLStack80);
            lib::L2CValue::_L2CValue(aLStack96);
            if ((bVar1 & 1U) != 0) {
              lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_LANDING);
              lib::L2CValue::L2CValue(aLStack96,false);
              lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
              goto LAB_7100020bf0;
            }
          }
        }
        lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_TRANSITION_TERM_ID_LANDING);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__unable_transition_term_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::_L2CValue(aLStack80);
      }
      lib::L2CValue::L2CValue(aLStack96,0xdb8bd3614);
      lib::L2CValue::L2CValue(aLStack112,0x1158d0953d);
      lib::L2CValue::L2CValue(aLStack144,true);
      lua2cpp::L2CFighterCommon::sub_change_motion_by_situation
                (this,(L2CValue)0xa0,(L2CValue)0x90,(L2CValue)0x70);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack176,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
      lib::L2CValue::L2CValue(aLStack192,_FIGHTER_KINETIC_TYPE_AIR_STOP);
      lua2cpp::L2CFighterCommon::sub_change_kinetic_type_by_situation
                (this,(L2CValue)0x50,(L2CValue)0x40);
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack160);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack176);
      if ((bVar1 & 1U) != 0) {
        FUN_710001ff60(this);
      }
      lib::L2CValue::L2CValue(aLStack208,true);
      lua2cpp::L2CFighterCommon::sub_set_ground_correct_by_situation(this,(L2CValue)0x30);
      lib::L2CValue::_L2CValue(aLStack160);
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
        if ((uVar4 & 1) == 0) goto LAB_7100020a88;
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_FALL);
        lib::L2CValue::L2CValue(aLStack96,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_WAIT);
        lib::L2CValue::L2CValue(aLStack96,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
      }
LAB_7100020bf0:
      lib::L2CValue::_L2CValue(aLStack96);
      this_00 = aLStack80;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack128,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x80);
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar4 = lib::L2CValue::operator__(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar4 & 1) != 0) {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar4 = lib::L2CValue::operator__(aLStack144,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar4 & 1) == 0) goto LAB_7100020d1c;
      goto LAB_7100020970;
    }
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    this_00 = aLStack96;
  }
  lib::L2CValue::_L2CValue(this_00);
LAB_7100020d1c:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

