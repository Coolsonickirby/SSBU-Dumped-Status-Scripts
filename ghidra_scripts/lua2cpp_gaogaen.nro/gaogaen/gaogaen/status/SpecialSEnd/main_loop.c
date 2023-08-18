
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterGaogaen::status::SpecialSEnd_main_loop(L2CFighterGaogaen *this,L2CValue *return_value)

{
  L2CValue *this_00;
  bool bVar1;
  byte bVar2;
  GroundCorrectKind GVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  Hash40 HVar6;
  int iVar7;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar1 & 1U) == 0) {
    bVar2 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar4 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack96);
LAB_710001f89c:
      bVar2 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      this_00 = &this->globalTable;
      if ((bVar1 & 1U) == 0) {
        pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
        lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
        uVar4 = lib::L2CValue::operator__(pLVar5,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar4 & 1) == 0) {
          pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
          lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
          uVar4 = lib::L2CValue::operator__(pLVar5,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar4 & 1) == 0) goto LAB_710001fa54;
          lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
          GVar3 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar3);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack80,0xdb8bd3614);
          HVar6 = lib::L2CValue::as_hash(aLStack80);
          app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                    (this->moduleAccessor,HVar6,-1.0,1.0,0.0,false,false);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack80,false);
          FUN_710001d4b0(this,aLStack80);
LAB_710001fb48:
          lib::L2CValue::_L2CValue(aLStack80);
        }
        else {
LAB_710001fa54:
          pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
          lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
          uVar4 = lib::L2CValue::operator__(pLVar5,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar4 & 1) != 0) {
            pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
            lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
            uVar4 = lib::L2CValue::operator__(pLVar5,aLStack80);
            lib::L2CValue::_L2CValue(aLStack80);
            if ((uVar4 & 1) == 0) {
              lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_AIR);
              GVar3 = lib::L2CValue::as_integer(aLStack80);
              app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar3);
              lib::L2CValue::_L2CValue(aLStack80);
              lib::L2CValue::L2CValue(aLStack80,0x1158d0953d);
              HVar6 = lib::L2CValue::as_hash(aLStack80);
              app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                        (this->moduleAccessor,HVar6,-1.0,1.0,0.0,false,false);
              lib::L2CValue::_L2CValue(aLStack80);
              lib::L2CValue::L2CValue(aLStack80,false);
              FUN_710001d4b0(this,aLStack80);
              goto LAB_710001fb48;
            }
          }
        }
        FUN_710001fc90(this);
        FUN_710001ff80(this);
      }
      else {
        pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
        uVar4 = lib::L2CValue::operator__(pLVar5,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar4 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_FALL);
          lib::L2CValue::L2CValue(aLStack96,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
        }
        else {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_WAIT);
          lib::L2CValue::L2CValue(aLStack96,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
        }
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack80);
      }
      iVar7 = 0;
      goto LAB_710001fba4;
    }
    lib::L2CValue::L2CValue(aLStack128,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x80);
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar4 = lib::L2CValue::operator__(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
    }
    else {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar4 = lib::L2CValue::operator__(aLStack144,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar4 & 1) != 0) goto LAB_710001f89c;
    }
  }
  iVar7 = 1;
LAB_710001fba4:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar7);
  return;
}

