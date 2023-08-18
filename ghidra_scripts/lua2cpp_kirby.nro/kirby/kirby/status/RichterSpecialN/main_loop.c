
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::RichterSpecialN_main_loop(L2CFighterKirby *this,L2CValue *return_value)

{
  L2CValue *this_00;
  char cVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  GroundCorrectKind GVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  long lVar8;
  Hash40 HVar9;
  float fVar10;
  float fVar11;
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  bVar2 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar6 = lib::L2CValue::operator__(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack176,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x50);
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar6 = lib::L2CValue::operator__(aLStack128,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack176);
      lVar8 = -0x60;
LAB_7100161500:
      lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar8));
    }
    else {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack96,false);
      uVar6 = lib::L2CValue::operator__(aLStack144,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar6 & 1) != 0) goto LAB_7100160f14;
    }
    iVar4 = 1;
    goto LAB_710016150c;
  }
  lib::L2CValue::_L2CValue(aLStack112);
LAB_7100160f14:
  bVar2 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
  lib::L2CValue::operator_(aLStack112);
  bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  cVar1 = (char)&stack0xfffffffffffffff0;
  if ((bVar3 & 1U) == 0) {
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
  }
  else {
    bVar2 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack128,(bool)(bVar2 & 1));
    bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack128);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((bVar3 & 1U) != 0) {
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
      uVar6 = lib::L2CValue::operator__(pLVar7,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_FALL);
        lib::L2CValue::L2CValue(aLStack112,false);
        lua2cpp::L2CFighterBase::change_status
                  (this,(L2CValue)(cVar1 + -0x50),(L2CValue)(cVar1 + -0x60));
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_WAIT);
        lib::L2CValue::L2CValue(aLStack112,false);
        lua2cpp::L2CFighterBase::change_status
                  (this,(L2CValue)(cVar1 + -0x50),(L2CValue)(cVar1 + -0x60));
      }
      lib::L2CValue::_L2CValue(aLStack112);
      lVar8 = -0x50;
      goto LAB_7100161500;
    }
  }
  bVar2 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack192,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue(aLStack224,_FIGHTER_SIMON_STATUS_SPECIAL_N_INT_MOTION);
  iVar4 = lib::L2CValue::as_integer(aLStack224);
  lVar8 = app::lua_bind::WorkModule__get_int64_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::L2CValue(aLStack208,lVar8);
  lib::L2CValue::L2CValue(aLStack256,_FIGHTER_SIMON_STATUS_SPECIAL_N_INT_MOTION_AIR);
  iVar4 = lib::L2CValue::as_integer(aLStack256);
  lVar8 = app::lua_bind::WorkModule__get_int64_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::L2CValue(aLStack240,lVar8);
  lib::L2CValue::L2CValue(aLStack272,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
  lib::L2CValue::L2CValue(aLStack288,_FIGHTER_KINETIC_TYPE_AIR_STOP);
  lib::L2CValue::L2CValue(aLStack304,_GROUND_CORRECT_KIND_GROUND_CLIFF_STOP_ATTACK);
  lib::L2CValue::L2CValue(aLStack320,GROUND_CORRECT_KIND_AIR);
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar6 = lib::L2CValue::operator__(aLStack192,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar6 & 1) == 0) {
    this_00 = &this->globalTable;
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator__(pLVar7,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar6 & 1) == 0) {
LAB_7100161140:
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
      lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
      uVar6 = lib::L2CValue::operator__(pLVar7,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar6 & 1) == 0) {
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
        uVar6 = lib::L2CValue::operator__(pLVar7,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar6 & 1) != 0) goto LAB_71001611b0;
      }
      lib::L2CValue::L2CValue(aLStack112,false);
    }
    else {
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
      uVar6 = lib::L2CValue::operator__(pLVar7,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar6 & 1) == 0) goto LAB_7100161140;
LAB_71001611b0:
      lib::L2CValue::L2CValue(aLStack112,true);
    }
    bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((bVar3 & 1U) != 0) goto LAB_71001611fc;
    lib::L2CValue::L2CValue(aLStack96,false);
  }
  else {
LAB_71001611fc:
    lib::L2CValue::L2CValue(aLStack112,0);
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator__(pLVar7,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack128,SITUATION_KIND_AIR);
      lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)(cVar1 + -0x70));
      lib::L2CValue::_L2CValue(aLStack128);
      GVar5 = lib::L2CValue::as_integer(aLStack320);
      app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar5);
      lib::L2CValue::L2CValue(aLStack96,_KINETIC_TYPE_NONE);
      uVar6 = lib::L2CValue::operator__(aLStack288,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar6 & 1) == 0) {
        iVar4 = lib::L2CValue::as_integer(aLStack288);
        app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar4);
      }
      lib::L2CValue::operator_(aLStack112,aLStack240);
    }
    else {
      lib::L2CValue::L2CValue(aLStack128,_SITUATION_KIND_GROUND);
      lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)(cVar1 + -0x70));
      lib::L2CValue::_L2CValue(aLStack128);
      GVar5 = lib::L2CValue::as_integer(aLStack304);
      app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar5);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_TYPE_NONE);
      uVar6 = lib::L2CValue::operator__(aLStack272,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar6 & 1) == 0) {
        iVar4 = lib::L2CValue::as_integer(aLStack272);
        app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar4);
      }
      lib::L2CValue::operator_(aLStack112,aLStack208);
    }
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_TYPE_NONE);
    uVar6 = lib::L2CValue::operator__(aLStack112,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,false);
      uVar6 = lib::L2CValue::operator__(aLStack192,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack96,0.0);
        lib::L2CValue::L2CValue(aLStack144,1.0);
        lib::L2CValue::L2CValue(aLStack160,false);
        HVar9 = lib::L2CValue::as_hash(aLStack112);
        fVar10 = (float)lib::L2CValue::as_number(aLStack96);
        fVar11 = (float)lib::L2CValue::as_number(aLStack144);
        bVar2 = lib::L2CValue::as_bool(aLStack160);
        app::lua_bind::FighterMotionModuleImpl__change_motion_kirby_copy_impl
                  (this->moduleAccessor,HVar9,fVar10,fVar11,(bool)(bVar2 & 1),0.0,false,false);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack96);
      }
      else {
        HVar9 = lib::L2CValue::as_hash(aLStack112);
        app::lua_bind::FighterMotionModuleImpl__change_motion_inherit_frame_kirby_copy_impl
                  (this->moduleAccessor,HVar9,-1.0,1.0,0.0,false,false);
      }
    }
    lib::L2CValue::L2CValue(aLStack96,true);
    lib::L2CValue::_L2CValue(aLStack112);
  }
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack192);
  iVar4 = 0;
LAB_710016150c:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar4);
  return;
}

