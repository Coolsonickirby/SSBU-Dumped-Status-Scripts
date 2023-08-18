
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterGekkouga::status::SpecialSEnd_main_loop(L2CFighterGekkouga *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  GroundCorrectKind GVar3;
  int iVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  Hash40 HVar7;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack96);
LAB_710002a930:
    bVar1 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    lib::L2CValue::operator_(aLStack96);
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar2 & 1U) != 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x17);
      lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
      uVar5 = lib::L2CValue::operator__(pLVar6,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
        uVar5 = lib::L2CValue::operator__(pLVar6,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_GROUND);
          GVar3 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar3);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
          iVar4 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar4);
          lib::L2CValue::_L2CValue(aLStack80);
          HVar7 = app::lua_bind::MotionModule__motion_kind_impl(this->moduleAccessor);
          lib::L2CValue::L2CValue(aLStack96,HVar7);
          lib::L2CValue::L2CValue(aLStack80,0x1332a6e0ac);
          uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack96);
          if ((uVar5 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack80,0xf3e52a961);
            HVar7 = lib::L2CValue::as_hash(aLStack80);
            app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                      (this->moduleAccessor,HVar7,-1.0,1.0,0.0,false,false);
          }
          else {
            lib::L2CValue::L2CValue(aLStack80,0xf393f6d78);
            HVar7 = lib::L2CValue::as_hash(aLStack80);
            app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                      (this->moduleAccessor,HVar7,-1.0,1.0,0.0,false,false);
          }
          goto LAB_710002ac64;
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
        uVar5 = lib::L2CValue::operator__(pLVar6,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_AIR);
          GVar3 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar3);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_TYPE_AIR_STOP);
          iVar4 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar4);
          lib::L2CValue::_L2CValue(aLStack80);
          HVar7 = app::lua_bind::MotionModule__motion_kind_impl(this->moduleAccessor);
          lib::L2CValue::L2CValue(aLStack96,HVar7);
          lib::L2CValue::L2CValue(aLStack80,0xf393f6d78);
          uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack96);
          if ((uVar5 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack80,0x1335cb24b5);
            HVar7 = lib::L2CValue::as_hash(aLStack80);
            app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                      (this->moduleAccessor,HVar7,-1.0,1.0,0.0,false,false);
          }
          else {
            lib::L2CValue::L2CValue(aLStack80,0x1332a6e0ac);
            HVar7 = lib::L2CValue::as_hash(aLStack80);
            app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                      (this->moduleAccessor,HVar7,-1.0,1.0,0.0,false,false);
          }
LAB_710002ac64:
          lib::L2CValue::_L2CValue(aLStack80);
        }
      }
    }
    bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((bVar2 & 1U) != 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
      uVar5 = lib::L2CValue::operator__(pLVar6,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar5 & 1) == 0) {
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
      iVar4 = 1;
      goto LAB_710002ad50;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack128,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x80);
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar5 = lib::L2CValue::operator__(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
    }
    else {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar5 = lib::L2CValue::operator__(aLStack144,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar5 & 1) != 0) goto LAB_710002a930;
    }
  }
  iVar4 = 0;
LAB_710002ad50:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar4);
  return;
}

