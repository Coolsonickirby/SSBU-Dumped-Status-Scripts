
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterGamewatch::status::SpecialLwEnd_main_loop
          (L2CFighterGamewatch *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  GroundCorrectKind GVar3;
  int iVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  Hash40 HVar7;
  float fVar8;
  float fVar9;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack128,0);
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar5 = lib::L2CValue::operator__(aLStack144,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack176,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x50);
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar5 = lib::L2CValue::operator__(aLStack160,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack144);
    }
    else {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack96,false);
      uVar5 = lib::L2CValue::operator__(aLStack192,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar5 & 1) != 0) goto LAB_71000280bc;
    }
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    goto LAB_7100028700;
  }
  lib::L2CValue::_L2CValue(aLStack144);
LAB_71000280bc:
  bVar1 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::operator_(aLStack128,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,false);
  uVar5 = lib::L2CValue::operator__(aLStack128,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar5 & 1) != 0) {
    bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar2 & 1U) != 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
      uVar5 = lib::L2CValue::operator__(pLVar6,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_FALL);
        lib::L2CValue::operator_(aLStack112,aLStack96);
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_WAIT);
        lib::L2CValue::operator_(aLStack112,aLStack96);
      }
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,aLStack112);
      lib::L2CValue::L2CValue(aLStack144,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x70);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue((L2CValue *)return_value,1);
      goto LAB_7100028700;
    }
  }
  FUN_71000288c0(this);
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar5 = lib::L2CValue::operator__(aLStack128,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  this_00 = &this->globalTable;
  if ((uVar5 & 1) == 0) {
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar6,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) != 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
      uVar5 = lib::L2CValue::operator__(pLVar6,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar5 & 1) != 0) goto LAB_71000281c8;
    }
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar6,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
      uVar5 = lib::L2CValue::operator__(pLVar6,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar5 & 1) != 0) goto LAB_71000281c8;
    }
  }
  else {
LAB_71000281c8:
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar6,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_AIR);
      GVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar3);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_TYPE_GAMEWATCH_SPECIAL_AIR_LW);
      iVar4 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar4);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_GAMEWATCH_STATUS_SPECIAL_LW_FLAG_MOT_CHANGE);
      iVar4 = lib::L2CValue::as_integer(aLStack144);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack96,0x12aaf01d6d);
        lib::L2CValue::L2CValue(aLStack144,0.0);
        lib::L2CValue::L2CValue(aLStack160,1.0);
        lib::L2CValue::L2CValue(aLStack192,false);
        HVar7 = lib::L2CValue::as_hash(aLStack96);
        fVar8 = (float)lib::L2CValue::as_number(aLStack144);
        fVar9 = (float)lib::L2CValue::as_number(aLStack160);
        bVar1 = lib::L2CValue::as_bool(aLStack192);
        app::lua_bind::MotionModule__change_motion_impl
                  (this->moduleAccessor,HVar7,fVar8,fVar9,(bool)(bVar1 & 1),0.0,false,false);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_GAMEWATCH_STATUS_SPECIAL_LW_FLAG_MOT_CHANGE);
        iVar4 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar4);
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,0x12aaf01d6d);
        HVar7 = lib::L2CValue::as_hash(aLStack96);
        app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                  (this->moduleAccessor,HVar7,-1.0,1.0,0.0,false,false);
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
      GVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar3);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
      iVar4 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar4);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_GAMEWATCH_STATUS_SPECIAL_LW_FLAG_MOT_CHANGE);
      iVar4 = lib::L2CValue::as_integer(aLStack144);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack96,0xee8a2e8a2);
        lib::L2CValue::L2CValue(aLStack144,0.0);
        lib::L2CValue::L2CValue(aLStack160,1.0);
        lib::L2CValue::L2CValue(aLStack192,false);
        HVar7 = lib::L2CValue::as_hash(aLStack96);
        fVar8 = (float)lib::L2CValue::as_number(aLStack144);
        fVar9 = (float)lib::L2CValue::as_number(aLStack160);
        bVar1 = lib::L2CValue::as_bool(aLStack192);
        app::lua_bind::MotionModule__change_motion_impl
                  (this->moduleAccessor,HVar7,fVar8,fVar9,(bool)(bVar1 & 1),0.0,false,false);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_GAMEWATCH_STATUS_SPECIAL_LW_FLAG_MOT_CHANGE);
        iVar4 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar4);
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,0xee8a2e8a2);
        HVar7 = lib::L2CValue::as_hash(aLStack96);
        app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                  (this->moduleAccessor,HVar7,-1.0,1.0,0.0,false,false);
      }
    }
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_7100028700:
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

