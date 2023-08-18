
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterRockman::status::SpecialN_main_loop(L2CFighterRockman *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  L2CValue *pLVar6;
  L2CAgent *this_01;
  L2CValue *in_x2;
  float fVar7;
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  undefined auStack176 [32];
  undefined auStack144 [32];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,false);
  lib::L2CValue::L2CValue
            ((L2CValue *)(auStack144 + 0x10),_FIGHTER_INSTANCE_WORK_ID_INT_STATUS_START_TURN_FRAME);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)(auStack144 + 0x10));
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack112,iVar3);
  lib::L2CValue::L2CValue(aLStack80,0);
  uVar4 = lib::L2CValue::operator__(aLStack112,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) {
LAB_7100016d40:
    lib::L2CValue::_L2CValue(aLStack112);
    pLVar5 = (L2CValue *)(auStack144 + 0x10);
LAB_7100016d4c:
    lib::L2CValue::_L2CValue(pLVar5);
  }
  else {
    lib::L2CValue::L2CValue
              ((L2CValue *)(auStack176 + 0x10),
               _FIGHTER_ROCKMAN_STATUS_SPECIAL_N_WORK_ID_FLAG_STICK_CHECK_FRAME_END);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)(auStack176 + 0x10));
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)auStack144,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar4 = lib::L2CValue::operator__((L2CValue *)auStack144,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::_L2CValue((L2CValue *)auStack144);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack176 + 0x10));
      goto LAB_7100016d40;
    }
    lib::L2CValue::L2CValue
              (aLStack192,_FIGHTER_ROCKMAN_STATUS_SPECIAL_N_WORK_ID_FLAG_STICK_CHECK_ACCEPT);
    iVar3 = lib::L2CValue::as_integer(aLStack192);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)auStack176,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar4 = lib::L2CValue::operator__((L2CValue *)auStack176,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue((L2CValue *)auStack176);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue((L2CValue *)auStack144);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack176 + 0x10));
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack144 + 0x10));
    if ((uVar4 & 1) != 0) {
      this_00 = &this->globalTable;
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1a);
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1a);
      lib::L2CValue::operator_(pLVar5,pLVar6);
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1b);
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1b);
      lib::L2CValue::operator_(pLVar5,pLVar6);
      lib::L2CValue::operator_((L2CValue *)(auStack144 + 0x10),(L2CValue *)auStack144);
      lib::L2CValue::L2CValue(aLStack80,0.1225);
      uVar4 = lib::L2CValue::operator__(aLStack80,aLStack112);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue((L2CValue *)auStack144);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack144 + 0x10));
      if ((uVar4 & 1) == 0) goto LAB_7100016d50;
      fVar7 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack112,fVar7);
      this_01 = (L2CAgent *)lib::L2CValue::operator__((L2CValue *)this_00,0x1b);
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1a);
      lib::L2CValue::operator_(pLVar5,aLStack112);
      pLVar5 = aLStack80;
      lib::L2CAgent::math_atan(this_01,pLVar5,in_x2);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue((L2CValue *)auStack144,112.5);
      lib::L2CAgent::math_rad((L2CAgent *)auStack144,pLVar5);
      pLVar5 = (L2CValue *)(auStack144 + 0x10);
      uVar4 = lib::L2CValue::operator__(aLStack80,pLVar5);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)auStack176,-112.5);
        lib::L2CAgent::math_rad((L2CAgent *)auStack176,pLVar5);
        uVar4 = lib::L2CValue::operator__
                          ((L2CValue *)(auStack144 + 0x10),(L2CValue *)(auStack176 + 0x10));
        lib::L2CValue::_L2CValue((L2CValue *)(auStack176 + 0x10));
        lib::L2CValue::_L2CValue((L2CValue *)auStack176);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue((L2CValue *)auStack144);
        if ((uVar4 & 1) != 0) goto LAB_7100017420;
      }
      else {
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue((L2CValue *)auStack144);
LAB_7100017420:
        lib::L2CValue::L2CValue
                  (aLStack80,_FIGHTER_ROCKMAN_STATUS_SPECIAL_N_WORK_ID_FLAG_TURN_MOTION);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,true);
        lib::L2CValue::operator_(aLStack96,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
      }
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1a);
      lib::L2CValue::L2CValue(aLStack80,0.0);
      lib::L2CValue::operator_(pLVar5,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROCKMAN_STATUS_SPECIAL_N_WORK_ID_FLOAT_STICK_X);
      fVar7 = (float)lib::L2CValue::as_number((L2CValue *)auStack144);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar7,iVar3);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue((L2CValue *)auStack144);
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1b);
      lib::L2CValue::L2CValue(aLStack80,0.0);
      lib::L2CValue::operator_(pLVar5,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROCKMAN_STATUS_SPECIAL_N_WORK_ID_FLOAT_STICK_Y);
      fVar7 = (float)lib::L2CValue::as_number((L2CValue *)auStack144);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar7,iVar3);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue((L2CValue *)auStack144);
      lib::L2CValue::L2CValue
                (aLStack80,_FIGHTER_ROCKMAN_STATUS_SPECIAL_N_WORK_ID_FLAG_STICK_CHECK_ACCEPT);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack144 + 0x10));
      pLVar5 = aLStack112;
      goto LAB_7100016d4c;
    }
  }
LAB_7100016d50:
  FUN_7100015790(aLStack80,this);
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  if ((bVar2 & 1U) == 0) {
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((bVar2 & 1U) != 0) goto LAB_7100016d8c;
  }
  else {
    lib::L2CValue::_L2CValue(aLStack80);
LAB_7100016d8c:
    lib::L2CValue::L2CValue(aLStack112,0);
    lib::L2CValue::L2CValue((L2CValue *)(auStack144 + 0x10),0);
    lib::L2CValue::L2CValue
              ((L2CValue *)(auStack176 + 0x10),
               _FIGHTER_ROCKMAN_STATUS_SPECIAL_N_WORK_ID_FLAG_TURN_MOTION);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)(auStack176 + 0x10));
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)auStack144,(bool)(bVar1 & 1));
    lib::L2CValue::operator_((L2CValue *)auStack144);
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue((L2CValue *)auStack144);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack176 + 0x10));
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue
                ((L2CValue *)(auStack176 + 0x10),
                 _FIGHTER_ROCKMAN_STATUS_SPECIAL_N_WORK_ID_FLAG_ALREADY_EXIST_METALBLADE);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)(auStack176 + 0x10));
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)auStack144,(bool)(bVar1 & 1));
      lib::L2CValue::operator_((L2CValue *)auStack144);
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue((L2CValue *)auStack144);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack176 + 0x10));
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack80,0x14aa618c44);
        lib::L2CValue::operator_(aLStack112,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,0x18d811618f);
        lib::L2CValue::operator_((L2CValue *)(auStack144 + 0x10),aLStack80);
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,0xe396c1260);
        lib::L2CValue::operator_(aLStack112,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,0x127b3ee7af);
        lib::L2CValue::operator_((L2CValue *)(auStack144 + 0x10),aLStack80);
      }
    }
    else {
      lib::L2CValue::L2CValue
                ((L2CValue *)(auStack176 + 0x10),
                 _FIGHTER_ROCKMAN_STATUS_SPECIAL_N_WORK_ID_FLAG_ALREADY_EXIST_METALBLADE);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)(auStack176 + 0x10));
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)auStack144,(bool)(bVar1 & 1));
      lib::L2CValue::operator_((L2CValue *)auStack144);
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue((L2CValue *)auStack144);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack176 + 0x10));
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack80,0xfcdd4c4a8);
        lib::L2CValue::operator_(aLStack112,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,0x13c64d497c);
        lib::L2CValue::operator_((L2CValue *)(auStack144 + 0x10),aLStack80);
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,0x915c5de42);
        lib::L2CValue::operator_(aLStack112,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,0xd483c0ed2);
        lib::L2CValue::operator_((L2CValue *)(auStack144 + 0x10),aLStack80);
      }
    }
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue((L2CValue *)auStack144,aLStack112);
    lib::L2CValue::L2CValue((L2CValue *)(auStack176 + 0x10),(L2CValue *)(auStack144 + 0x10));
    lib::L2CValue::L2CValue((L2CValue *)auStack176,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
    lib::L2CValue::L2CValue(aLStack192,_FIGHTER_KINETIC_TYPE_FALL);
    lib::L2CValue::L2CValue(aLStack208,_FIGHTER_ROCKMAN_STATUS_SPECIAL_N_WORK_ID_FLAG_FIRST);
    lib::L2CValue::L2CValue(aLStack224,_GROUND_CORRECT_KIND_GROUND_CLIFF_STOP_ATTACK);
    FUN_7100015950(this,auStack144,auStack176 + 0x10,auStack176,aLStack192,aLStack208,aLStack224);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue((L2CValue *)auStack176);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack176 + 0x10));
    lib::L2CValue::_L2CValue((L2CValue *)auStack144);
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar4 = lib::L2CValue::operator__(pLVar5,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_INSTANCE_WORK_ID_FLAG_DISABLE_LANDING_CANCEL);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROCKMAN_INSTANCE_WORK_ID_FLAG_ATTACK_HI3_LANDING);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack80);
    }
    lib::L2CValue::_L2CValue((L2CValue *)(auStack144 + 0x10));
    lib::L2CValue::_L2CValue(aLStack112);
  }
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar4 = lib::L2CValue::operator__(aLStack112,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar4 & 1) != 0) {
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar4 = lib::L2CValue::operator__(pLVar5,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack112,false);
      lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x90);
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)return_value,0);
        goto LAB_71000173ac;
      }
    }
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
    uVar4 = lib::L2CValue::operator__(pLVar5,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar4 & 1) != 0) {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)return_value,0);
        goto LAB_71000173ac;
      }
    }
  }
  bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar2 & 1U) != 0) {
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar4 = lib::L2CValue::operator__(pLVar5,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_WAIT);
      lib::L2CValue::L2CValue((L2CValue *)(auStack144 + 0x10),false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x80);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack144 + 0x10));
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_71000173ac;
    }
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
    uVar4 = lib::L2CValue::operator__(pLVar5,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_FALL);
      lib::L2CValue::L2CValue((L2CValue *)(auStack144 + 0x10),false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x80);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack144 + 0x10));
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_71000173ac;
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_71000173ac:
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

