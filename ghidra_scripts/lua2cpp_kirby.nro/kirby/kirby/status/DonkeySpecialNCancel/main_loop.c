
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::DonkeySpecialNCancel_main_loop
          (L2CFighterKirby *this,L2CValue *return_value)

{
  L2CValue *this_00;
  long lVar1;
  char cVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  L2CValue *pLVar7;
  ulong uVar8;
  ulong uVar9;
  BattleObjectModuleAccessor **ppBVar10;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lua2cpp::L2CFighterCommon::sub_check_charge_cancel_jump_mini_attack(this);
  this_00 = &this->globalTable;
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
  uVar8 = lib::L2CValue::operator__(pLVar7,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar8 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack112,_CONTROL_PAD_BUTTON_ATTACK);
    iVar5 = lib::L2CValue::as_integer(aLStack112);
    ppBVar10 = &this->moduleAccessor;
    bVar3 = app::lua_bind::ControlModule__check_button_trigger_impl(*ppBVar10,iVar5);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar3 & 1));
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar8 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar8 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack96);
      pLVar7 = aLStack112;
    }
    else {
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_DONKEY_STATUS_SPECIAL_N_WORK_INT_CANCEL_TYPE);
      iVar5 = lib::L2CValue::as_integer(aLStack144);
      iVar5 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar5);
      lib::L2CValue::L2CValue(aLStack128,iVar5);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DONKEY_SPECIAL_N_CANCEL_TYPE_GROUND_JUMP);
      uVar8 = lib::L2CValue::operator__(aLStack128,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar8 & 1) == 0) goto LAB_710021b548;
      lib::L2CValue::L2CValue(aLStack80,true);
      bVar3 = lib::L2CValue::as_bool(aLStack80);
      app::lua_bind::FighterControlModuleImpl__update_attack_air_kind_impl
                (*ppBVar10,(bool)(bVar3 & 1));
      pLVar7 = aLStack80;
    }
    lib::L2CValue::_L2CValue(pLVar7);
  }
LAB_710021b548:
  ppBVar10 = &this->moduleAccessor;
  bVar3 = app::lua_bind::StatusModule__is_changing_impl(*ppBVar10);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar3 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar8 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar8 & 1) == 0) {
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar8 = lib::L2CValue::operator__(pLVar7,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar8 & 1) != 0) {
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
      uVar8 = lib::L2CValue::operator__(pLVar7,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar8 & 1) != 0) goto LAB_710021b584;
    }
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar8 = lib::L2CValue::operator__(pLVar7,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar8 & 1) != 0) {
      lVar1 = -0x50;
      goto LAB_710021b710;
    }
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar8 = lib::L2CValue::operator__(pLVar7,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar8 & 1) != 0) goto LAB_710021b58c;
  }
  else {
LAB_710021b584:
    lib::L2CValue::_L2CValue(aLStack96);
LAB_710021b58c:
    lib::L2CValue::L2CValue(aLStack96,0x1012b7fbf8);
    lib::L2CValue::L2CValue(aLStack112,0x14930274b8);
    FUN_7100219ea0(this,aLStack96,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    bVar3 = app::lua_bind::StatusModule__is_changing_impl(*ppBVar10);
    lib::L2CValue::L2CValue(aLStack128,(bool)(bVar3 & 1));
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar8 = lib::L2CValue::operator__(aLStack128,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar8 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DONKEY_SPECIAL_N_CANCEL_TYPE_NONE);
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_DONKEY_STATUS_SPECIAL_N_WORK_INT_CANCEL_TYPE);
      iVar5 = lib::L2CValue::as_integer(aLStack80);
      iVar6 = lib::L2CValue::as_integer(aLStack128);
      app::lua_bind::WorkModule__set_int_impl(*ppBVar10,iVar5,iVar6);
      lib::L2CValue::_L2CValue(aLStack128);
      lVar1 = -0x40;
LAB_710021b710:
      lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar1));
    }
  }
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DONKEY_STATUS_SPECIAL_N_WORK_INT_CANCEL_TYPE);
  iVar5 = lib::L2CValue::as_integer(aLStack80);
  iVar5 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar5);
  lib::L2CValue::L2CValue(aLStack128,iVar5);
  lib::L2CValue::_L2CValue(aLStack80);
  bVar3 = app::lua_bind::CancelModule__is_enable_cancel_impl(*ppBVar10);
  lib::L2CValue::L2CValue(aLStack144,(bool)(bVar3 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar8 = lib::L2CValue::operator__(aLStack144,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  cVar2 = (char)&stack0xfffffffffffffff0;
  if ((uVar8 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack144);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DONKEY_SPECIAL_N_CANCEL_TYPE_NONE);
    uVar8 = lib::L2CValue::operator__(aLStack128,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((uVar8 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DONKEY_SPECIAL_N_CANCEL_TYPE_GROUND_ESCAPE);
      uVar8 = lib::L2CValue::operator__(aLStack128,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar8 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_ESCAPE);
        lib::L2CValue::L2CValue(aLStack144,true);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)(cVar2 + -0x40),(L2CValue)0x70);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue((L2CValue *)return_value,1);
        goto LAB_710021bb20;
      }
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DONKEY_SPECIAL_N_CANCEL_TYPE_GROUND_ESCAPE_F);
      uVar8 = lib::L2CValue::operator__(aLStack128,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar8 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_ESCAPE_F);
        lib::L2CValue::L2CValue(aLStack144,true);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)(cVar2 + -0x40),(L2CValue)0x70);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue((L2CValue *)return_value,1);
        goto LAB_710021bb20;
      }
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DONKEY_SPECIAL_N_CANCEL_TYPE_GROUND_ESCAPE_B);
      uVar8 = lib::L2CValue::operator__(aLStack128,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar8 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_ESCAPE_B);
        lib::L2CValue::L2CValue(aLStack144,true);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)(cVar2 + -0x40),(L2CValue)0x70);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue((L2CValue *)return_value,1);
        goto LAB_710021bb20;
      }
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DONKEY_SPECIAL_N_CANCEL_TYPE_GROUND_JUMP);
      uVar8 = lib::L2CValue::operator__(aLStack128,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar8 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_JUMP_SQUAT);
        lib::L2CValue::L2CValue(aLStack144,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)(cVar2 + -0x40),(L2CValue)0x70);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue((L2CValue *)return_value,1);
        goto LAB_710021bb20;
      }
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DONKEY_SPECIAL_N_CANCEL_TYPE_AIR_ESCAPE_AIR);
      uVar8 = lib::L2CValue::operator__(aLStack128,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar8 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_ESCAPE_AIR);
        lib::L2CValue::L2CValue(aLStack144,true);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)(cVar2 + -0x40),(L2CValue)0x70);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue((L2CValue *)return_value,1);
        goto LAB_710021bb20;
      }
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DONKEY_SPECIAL_N_CANCEL_TYPE_AIR_JUMP);
      uVar8 = lib::L2CValue::operator__(aLStack128,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar8 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack160,0xb99cc3fbc);
        lib::L2CValue::L2CValue(aLStack176,0);
        uVar8 = lib::L2CValue::as_integer(aLStack160);
        uVar9 = lib::L2CValue::as_integer(aLStack176);
        iVar5 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar10,uVar8,uVar9);
        lib::L2CValue::L2CValue(aLStack144,iVar5);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_JUMP_AERIAL_TYPE_NORMAL);
        uVar8 = lib::L2CValue::operator__(aLStack144,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack160);
        if ((uVar8 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_FLY);
          lib::L2CValue::L2CValue(aLStack144,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)(cVar2 + -0x40),(L2CValue)0x70);
        }
        else {
          lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_JUMP_AERIAL);
          lib::L2CValue::L2CValue(aLStack144,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)(cVar2 + -0x40),(L2CValue)0x70);
        }
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue((L2CValue *)return_value,1);
        goto LAB_710021bb20;
      }
    }
  }
  bVar3 = app::lua_bind::CancelModule__is_enable_cancel_impl(*ppBVar10);
  lib::L2CValue::L2CValue(aLStack144,(bool)(bVar3 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar8 = lib::L2CValue::operator__(aLStack144,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar8 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack176,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x50);
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar8 = lib::L2CValue::operator__(aLStack160,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar8 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack144);
    }
    else {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar8 = lib::L2CValue::operator__(aLStack192,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar8 & 1) != 0) goto LAB_710021b90c;
    }
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    goto LAB_710021bb20;
  }
  lib::L2CValue::_L2CValue(aLStack144);
LAB_710021b90c:
  bVar3 = app::lua_bind::MotionModule__is_end_impl(*ppBVar10);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar3 & 1));
  bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar4 & 1U) != 0) {
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
    uVar8 = lib::L2CValue::operator__(pLVar7,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar8 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_FALL);
      lib::L2CValue::L2CValue(aLStack144,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)(cVar2 + -0x40),(L2CValue)0x70);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue((L2CValue *)return_value,1);
      goto LAB_710021bb20;
    }
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar8 = lib::L2CValue::operator__(pLVar7,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar8 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_WAIT);
      lib::L2CValue::L2CValue(aLStack144,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)(cVar2 + -0x40),(L2CValue)0x70);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue((L2CValue *)return_value,1);
      goto LAB_710021bb20;
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_710021bb20:
  lib::L2CValue::_L2CValue(aLStack128);
  return;
}

