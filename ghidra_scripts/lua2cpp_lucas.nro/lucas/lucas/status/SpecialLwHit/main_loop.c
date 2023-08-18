
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterLucas::status::SpecialLwHit_main_loop(L2CFighterLucas *this,L2CValue *return_value)

{
  L2CValue *pLVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  ulong uVar7;
  float fVar8;
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
  
  lib::L2CValue::L2CValue(aLStack112,0);
  bVar2 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
  lib::L2CValue::operator_(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,false);
  uVar5 = lib::L2CValue::operator__(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar5 & 1) != 0) {
    bVar2 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack128,(bool)(bVar2 & 1));
    bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack128);
    if ((bVar3 & 1U) == 0) {
LAB_7100013b24:
      lib::L2CValue::_L2CValue(aLStack128);
    }
    else {
      lib::L2CValue::L2CValue(aLStack160,_FIGHTER_LUCAS_STATUS_SPECIAL_LW_WORK_INT_TIME);
      iVar4 = lib::L2CValue::as_integer(aLStack160);
      iVar4 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar4);
      lib::L2CValue::L2CValue(aLStack144,iVar4);
      lib::L2CValue::L2CValue(aLStack96,0);
      uVar5 = lib::L2CValue::operator__(aLStack144,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack160);
        goto LAB_7100013b24;
      }
      lib::L2CValue::L2CValue(aLStack176,_FIGHTER_LUCAS_STATUS_SPECIAL_LW_FLAG_BUTTON_RELEASE);
      iVar4 = lib::L2CValue::as_integer(aLStack176);
      bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
      bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((bVar3 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_LUCAS_STATUS_KIND_SPECIAL_LW_END);
        lib::L2CValue::L2CValue(aLStack128,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x80);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue((L2CValue *)return_value,1);
        goto LAB_71000143bc;
      }
    }
    bVar2 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
    bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar3 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_LUCAS_STATUS_KIND_SPECIAL_LW_HOLD);
      lib::L2CValue::L2CValue(aLStack128,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x80);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue((L2CValue *)return_value,1);
      goto LAB_71000143bc;
    }
  }
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ESCAPE);
  iVar4 = lib::L2CValue::as_integer(aLStack144);
  bVar2 = app::lua_bind::WorkModule__is_enable_transition_term_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar2 & 1));
  bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack128);
  if ((bVar3 & 1U) == 0) {
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
  }
  else {
    pLVar1 = &this->globalTable;
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,0x1b);
    lib::L2CValue::L2CValue(aLStack176,0x6e5ec7051);
    lib::L2CValue::L2CValue(aLStack192,0xedc2cbba2);
    uVar5 = lib::L2CValue::as_integer(aLStack176);
    uVar7 = lib::L2CValue::as_integer(aLStack192);
    fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar7)
    ;
    lib::L2CValue::L2CValue(aLStack160,fVar8);
    uVar5 = lib::L2CValue::operator__(pLVar6,aLStack160);
    if ((uVar5 & 1) == 0) {
      uVar5 = 0;
    }
    else {
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,0x1d);
      lib::L2CValue::L2CValue(aLStack224,0x6e5ec7051);
      lib::L2CValue::L2CValue(aLStack240,0xe064f883d);
      uVar5 = lib::L2CValue::as_integer(aLStack224);
      uVar7 = lib::L2CValue::as_integer(aLStack240);
      iVar4 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar5,uVar7);
      lib::L2CValue::L2CValue(aLStack208,iVar4);
      uVar5 = lib::L2CValue::operator_(pLVar6,aLStack208);
      if ((uVar5 & 1) == 0) {
        uVar5 = 0;
      }
      else {
        pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,0x16);
        lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
        uVar5 = lib::L2CValue::operator__(pLVar6,aLStack96);
        uVar5 = uVar5 & 0xffffffff;
        lib::L2CValue::_L2CValue(aLStack96);
      }
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack224);
    }
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_KIND_ESCAPE);
      lib::L2CValue::L2CValue(aLStack128,true);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x80);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue((L2CValue *)return_value,1);
      goto LAB_71000143bc;
    }
  }
  lib::L2CValue::L2CValue(aLStack144,FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ESCAPE_F);
  iVar4 = lib::L2CValue::as_integer(aLStack144);
  bVar2 = app::lua_bind::WorkModule__is_enable_transition_term_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar2 & 1));
  bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack128);
  if ((bVar3 & 1U) == 0) {
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
  }
  else {
    pLVar1 = &this->globalTable;
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,0x1a);
    fVar8 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack176,fVar8);
    lib::L2CValue::operator_(pLVar6,aLStack176);
    lib::L2CValue::L2CValue(aLStack208,0x6e5ec7051);
    lib::L2CValue::L2CValue(aLStack224,0x11ee4f2af4);
    uVar5 = lib::L2CValue::as_integer(aLStack208);
    uVar7 = lib::L2CValue::as_integer(aLStack224);
    fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar7)
    ;
    lib::L2CValue::L2CValue(aLStack192,fVar8);
    uVar5 = lib::L2CValue::operator__(aLStack192,aLStack160);
    if ((uVar5 & 1) == 0) {
      uVar5 = 0;
    }
    else {
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,0x1c);
      lib::L2CValue::L2CValue(aLStack256,0x6e5ec7051);
      lib::L2CValue::L2CValue(aLStack272,0x11342c196b);
      uVar5 = lib::L2CValue::as_integer(aLStack256);
      uVar7 = lib::L2CValue::as_integer(aLStack272);
      iVar4 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar5,uVar7);
      lib::L2CValue::L2CValue(aLStack240,iVar4);
      uVar5 = lib::L2CValue::operator_(pLVar6,aLStack240);
      if ((uVar5 & 1) == 0) {
        uVar5 = 0;
      }
      else {
        pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,0x16);
        lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
        uVar5 = lib::L2CValue::operator__(pLVar6,aLStack96);
        uVar5 = uVar5 & 0xffffffff;
        lib::L2CValue::_L2CValue(aLStack96);
      }
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack256);
    }
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_ESCAPE_F);
      lib::L2CValue::L2CValue(aLStack128,true);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x80);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue((L2CValue *)return_value,1);
      goto LAB_71000143bc;
    }
  }
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ESCAPE_B);
  iVar4 = lib::L2CValue::as_integer(aLStack144);
  bVar2 = app::lua_bind::WorkModule__is_enable_transition_term_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar2 & 1));
  bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack128);
  if ((bVar3 & 1U) == 0) {
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
  }
  else {
    pLVar1 = &this->globalTable;
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,0x1a);
    fVar8 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack192,fVar8);
    lib::L2CValue::operator_(aLStack192);
    lib::L2CValue::operator_(pLVar6,aLStack176);
    lib::L2CValue::L2CValue(aLStack224,0x6e5ec7051);
    lib::L2CValue::L2CValue(aLStack240,0x11ee4f2af4);
    uVar5 = lib::L2CValue::as_integer(aLStack224);
    uVar7 = lib::L2CValue::as_integer(aLStack240);
    fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar7)
    ;
    lib::L2CValue::L2CValue(aLStack208,fVar8);
    uVar5 = lib::L2CValue::operator__(aLStack208,aLStack160);
    if ((uVar5 & 1) == 0) {
      uVar5 = 0;
    }
    else {
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,0x1c);
      lib::L2CValue::L2CValue(aLStack272,0x6e5ec7051);
      lib::L2CValue::L2CValue(aLStack288,0x11342c196b);
      uVar5 = lib::L2CValue::as_integer(aLStack272);
      uVar7 = lib::L2CValue::as_integer(aLStack288);
      iVar4 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar5,uVar7);
      lib::L2CValue::L2CValue(aLStack256,iVar4);
      uVar5 = lib::L2CValue::operator_(pLVar6,aLStack256);
      if ((uVar5 & 1) == 0) {
        uVar5 = 0;
      }
      else {
        pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,0x16);
        lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
        uVar5 = lib::L2CValue::operator__(pLVar6,aLStack96);
        uVar5 = uVar5 & 0xffffffff;
        lib::L2CValue::_L2CValue(aLStack96);
      }
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack272);
    }
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_KIND_ESCAPE_B);
      lib::L2CValue::L2CValue(aLStack128,true);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x80);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue((L2CValue *)return_value,1);
      goto LAB_71000143bc;
    }
  }
  lua2cpp::L2CFighterCommon::sub_transition_group_check_ground_jump(this);
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar5 = lib::L2CValue::operator__(aLStack128,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    goto LAB_71000143bc;
  }
  bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack112);
  if ((bVar3 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_LUCAS_STATUS_SPECIAL_LW_WORK_INT_WAIT_MTRANS_KIND);
    FUN_71000130a0(aLStack96,this,aLStack128);
    bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((bVar3 & 1U) != 0) goto LAB_71000142e4;
  }
  else {
LAB_71000142e4:
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_LUCAS_STATUS_SPECIAL_LW_WORK_INT_WAIT_MTRANS_KIND);
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_LUCAS_STATUS_SPECIAL_LW_FLAG_MOT_CHANGE);
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
    lib::L2CValue::L2CValue(aLStack176,_FIGHTER_KINETIC_TYPE_LUCAS_AIR_STOP_X_NORMAL_MAX_SPECIAL_LW)
    ;
    lib::L2CValue::L2CValue(aLStack192,0xeb28cfd52);
    lib::L2CValue::L2CValue(aLStack208,0x12f0de089d);
    lib::L2CValue::L2CValue(aLStack224,GROUND_CORRECT_KIND_GROUND);
    FUN_7100014770(this,aLStack96,aLStack144,aLStack160,aLStack176,aLStack192,aLStack208,aLStack224)
    ;
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_71000143bc:
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

