
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterNess::status::Final_main_loop(L2CFighterNess *this,L2CValue *return_value)

{
  L2CValue *this_00;
  char cVar1;
  long lVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  ulong uVar8;
  float fVar9;
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  undefined auStack192 [32];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  bVar3 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar3 & 1));
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar6 = lib::L2CValue::operator__(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  cVar1 = (char)&stack0xfffffffffffffff0;
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack144,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)(cVar1 + -0x80));
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar6 = lib::L2CValue::operator__(aLStack128,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack112);
    }
    else {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack96,false);
      uVar6 = lib::L2CValue::operator__(aLStack160,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar6 & 1) != 0) goto LAB_710001cbb4;
    }
    iVar5 = 1;
    goto LAB_710001d2d0;
  }
  lib::L2CValue::_L2CValue(aLStack112);
LAB_710001cbb4:
  bVar3 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar3 & 1));
  bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar4 & 1U) == 0) {
LAB_710001cce4:
    bVar3 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar3 & 1));
    lib::L2CValue::L2CValue(aLStack96,true);
    uVar6 = lib::L2CValue::operator__(aLStack112,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar6 & 1) == 0) {
      this_00 = &this->globalTable;
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
      lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
      uVar6 = lib::L2CValue::operator__(pLVar7,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar6 & 1) != 0) {
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
        uVar6 = lib::L2CValue::operator__(pLVar7,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar6 & 1) != 0) goto LAB_710001cd20;
      }
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
      lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
      uVar6 = lib::L2CValue::operator__(pLVar7,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar6 & 1) == 0) {
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
        uVar6 = lib::L2CValue::operator__(pLVar7,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar6 & 1) != 0) goto LAB_710001cd28;
      }
      else {
        lib::L2CValue::_L2CValue(aLStack112);
      }
    }
    else {
LAB_710001cd20:
      lib::L2CValue::_L2CValue(aLStack112);
LAB_710001cd28:
      FUN_710001c6b0(this);
    }
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_NESS_INSTANCE_WORK_ID_FLAG_FINAL_START);
    iVar5 = lib::L2CValue::as_integer(aLStack112);
    bVar3 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar5);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar3 & 1));
    bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((bVar4 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack96,0x6e5ec7051);
      lib::L2CValue::L2CValue(aLStack128,0xcf44ba9e5);
      uVar6 = lib::L2CValue::as_integer(aLStack96);
      uVar8 = lib::L2CValue::as_integer(aLStack128);
      fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar6,uVar8);
      lib::L2CValue::L2CValue(aLStack112,fVar9);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,0x6e5ec7051);
      lib::L2CValue::L2CValue(aLStack160,0xb12f3fbba);
      uVar6 = lib::L2CValue::as_integer(aLStack96);
      uVar8 = lib::L2CValue::as_integer(aLStack160);
      fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar6,uVar8);
      lib::L2CValue::L2CValue(aLStack128,fVar9);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack160,0.0);
      lib::L2CValue::L2CValue((L2CValue *)(auStack192 + 0x10),0.0);
      fVar9 = (float)app::lua_bind::ControlModule__get_stick_x_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue((L2CValue *)auStack192,fVar9);
      lib::L2CValue::L2CValue(aLStack96,0.0);
      uVar6 = lib::L2CValue::operator__(aLStack96,(L2CValue *)auStack192);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack96,-1.0);
        pLVar7 = aLStack96;
        lib::L2CValue::operator_((L2CValue *)(auStack192 + 0x10),pLVar7);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CAgent::math_abs((L2CAgent *)auStack192,pLVar7);
        lib::L2CValue::operator_((L2CValue *)auStack192,aLStack96);
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,1.0);
        lib::L2CValue::operator_((L2CValue *)(auStack192 + 0x10),aLStack96);
      }
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::operator_((L2CValue *)auStack192,aLStack112);
      lib::L2CValue::operator_(aLStack128,aLStack112);
      lib::L2CValue::operator_(aLStack208,aLStack224);
      lib::L2CValue::operator_((L2CValue *)auStack192,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::L2CValue(aLStack208,(L2CValue *)auStack192);
      lib::L2CValue::L2CValue(aLStack224,0.0);
      lib::L2CValue::L2CValue(aLStack240,1.0);
      lua2cpp::L2CFighterBase::clamp(this,(L2CValue)0x30,(L2CValue)0x20,(L2CValue)0x10);
      lib::L2CValue::operator_((L2CValue *)auStack192,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::operator_((L2CValue *)(auStack192 + 0x10),(L2CValue *)auStack192);
      lib::L2CValue::operator_(aLStack160,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_NESS_STATUS_FINAL_WORK_FLOAT_ANGLE);
      iVar5 = lib::L2CValue::as_integer(aLStack96);
      fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar5);
      lib::L2CValue::L2CValue(aLStack256,fVar9);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_NESS_INSTANCE_WORK_ID_FLOAT_FINAL_ANGLE_ADJUST);
      iVar5 = lib::L2CValue::as_integer(aLStack96);
      fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar5);
      lib::L2CValue::L2CValue(aLStack272,fVar9);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_NESS_INSTANCE_WORK_ID_FLOAT_FINAL_ANGLE_MAX);
      iVar5 = lib::L2CValue::as_integer(aLStack96);
      fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar5);
      lib::L2CValue::L2CValue(aLStack288,fVar9);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::operator_(aLStack272,aLStack160);
      lib::L2CValue::operator_(aLStack256,aLStack304);
      lib::L2CValue::operator_(aLStack256,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::L2CValue(aLStack304,aLStack256);
      lib::L2CValue::operator_(aLStack288);
      lib::L2CValue::L2CValue(aLStack336,aLStack288);
      lua2cpp::L2CFighterBase::clamp(this,(L2CValue)0xd0,(L2CValue)0xc0,(L2CValue)0xb0);
      lib::L2CValue::operator_(aLStack256,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack336);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::L2CValue(aLStack96,0.0);
      lib::L2CValue::operator_(aLStack256,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_NESS_STATUS_FINAL_WORK_FLOAT_ANGLE);
      fVar9 = (float)lib::L2CValue::as_number(aLStack352);
      iVar5 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar9,iVar5);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack352);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue((L2CValue *)auStack192);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack192 + 0x10));
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack128);
      lVar2 = -0x60;
      goto LAB_710001d2c4;
    }
  }
  else {
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator__(pLVar7,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar6 & 1) == 0) {
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
      uVar6 = lib::L2CValue::operator__(pLVar7,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar6 & 1) == 0) goto LAB_710001cce4;
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_FINAL_JUMP_END);
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
    lVar2 = -0x50;
LAB_710001d2c4:
    lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar2));
  }
  iVar5 = 0;
LAB_710001d2d0:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar5);
  return;
}

