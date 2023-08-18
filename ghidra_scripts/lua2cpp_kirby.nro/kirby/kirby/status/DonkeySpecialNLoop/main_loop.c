
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::DonkeySpecialNLoop_main_loop(L2CFighterKirby *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  FighterFacial FVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  ulong uVar8;
  BattleObjectModuleAccessor *pBVar9;
  Hash40 HVar10;
  L2CValue *pLVar11;
  float fVar12;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,0);
  bVar1 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar6 = lib::L2CValue::operator__(aLStack128,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar6 & 1) == 0) {
    pLVar11 = &this->globalTable;
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar11,0x17);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator__(pLVar7,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar6 & 1) != 0) {
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar11,0x16);
      lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
      uVar6 = lib::L2CValue::operator__(pLVar7,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar6 & 1) != 0) goto LAB_710021c314;
    }
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar11,0x17);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator__(pLVar7,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar6 & 1) == 0) {
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar11,0x16);
      lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
      uVar6 = lib::L2CValue::operator__(pLVar7,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((uVar6 & 1) != 0) goto LAB_710021c31c;
    }
    else {
      lib::L2CValue::_L2CValue(aLStack128);
    }
  }
  else {
LAB_710021c314:
    lib::L2CValue::_L2CValue(aLStack128);
LAB_710021c31c:
    lib::L2CValue::L2CValue(aLStack128,0xeb8131ac9);
    lib::L2CValue::L2CValue(aLStack144,0x12fa41ef06);
    FUN_7100219ea0(this,aLStack128,aLStack144);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_DONKEY_STATUS_SPECIAL_N_WORK_FLOAT_MOTION_RATE);
    iVar3 = lib::L2CValue::as_integer(aLStack160);
    fVar12 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack80,fVar12);
    lib::L2CValue::_L2CValue(aLStack160);
    fVar12 = (float)lib::L2CValue::as_number(aLStack80);
    app::lua_bind::MotionModule__set_rate_impl(this->moduleAccessor,fVar12);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  pLVar11 = &this->globalTable;
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar11,0x1f);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_FLAG_SPECIAL_TRIGGER);
  lib::L2CValue::operator_(pLVar7,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack160);
  if ((bVar2 & 1U) == 0) {
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar11,0x1f);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_FLAG_ATTACK_TRIGGER);
    lib::L2CValue::operator_(pLVar7,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack176);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    if ((bVar2 & 1U) == 0) {
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar11,0x16);
      lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
      uVar6 = lib::L2CValue::operator__(pLVar7,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar6 & 1) != 0) {
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar11,0x1f);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_FLAG_GUARD_TRIGGER);
        lib::L2CValue::operator_(pLVar7,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack160);
        lib::L2CValue::_L2CValue(aLStack160);
        if ((bVar2 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DONKEY_SPECIAL_N_CANCEL_TYPE_GROUND_GUARD);
          lib::L2CValue::L2CValue(aLStack160,_FIGHTER_DONKEY_STATUS_SPECIAL_N_WORK_INT_CANCEL_TYPE);
          iVar3 = lib::L2CValue::as_integer(aLStack80);
          iVar4 = lib::L2CValue::as_integer(aLStack160);
          app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_DONKEY_SPECIAL_N_CANCEL);
          lib::L2CValue::L2CValue(aLStack160,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x60);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue((L2CValue *)return_value,1);
          goto LAB_710021c5a8;
        }
      }
      lib::L2CValue::L2CValue(aLStack160,_FIGHTER_DONKEY_INSTANCE_WORK_ID_INT_SPECIAL_N_COUNT);
      iVar3 = lib::L2CValue::as_integer(aLStack160);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack80,iVar3);
      lib::L2CValue::operator_(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::L2CValue(aLStack160,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack176,0x1008b0a33d);
      uVar6 = lib::L2CValue::as_integer(aLStack160);
      uVar8 = lib::L2CValue::as_integer(aLStack176);
      iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar6,uVar8);
      lib::L2CValue::L2CValue(aLStack80,iVar3);
      lib::L2CValue::operator_(aLStack112,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack160);
      uVar6 = lib::L2CValue::operator__(aLStack112,aLStack96);
      if ((uVar6 & 1) != 0) {
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar11,5);
        pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar7);
        app::FighterUtil::flash_eye_info(pBVar9);
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar11,5);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_FACIAL_SPECIAL);
        lib::L2CValue::L2CValue(aLStack160,0x127a627754);
        pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar7);
        FVar5 = lib::L2CValue::as_integer(aLStack80);
        HVar10 = lib::L2CValue::as_hash(aLStack160);
        app::FighterUtil::set_face_motion_by_priority(pBVar9,FVar5,HVar10);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_DONKEY_SPECIAL_N_END);
        lib::L2CValue::L2CValue(aLStack160,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x60);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue((L2CValue *)return_value,1);
        goto LAB_710021c5a8;
      }
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar11,0x16);
      lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
      uVar6 = lib::L2CValue::operator__(pLVar7,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack176,_FIGHTER_INSTANCE_WORK_ID_FLAG_DISABLE_ESCAPE_AIR);
        iVar3 = lib::L2CValue::as_integer(aLStack176);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack160,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue(aLStack80,false);
        uVar6 = lib::L2CValue::operator__(aLStack160,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack176);
        if ((uVar6 & 1) != 0) {
          pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar11,0x1f);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_FLAG_GUARD_TRIGGER);
          lib::L2CValue::operator_(pLVar7,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack160);
          lib::L2CValue::_L2CValue(aLStack160);
          if ((bVar2 & 1U) != 0) {
            lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DONKEY_SPECIAL_N_CANCEL_TYPE_AIR_ESCAPE_AIR);
            lib::L2CValue::L2CValue
                      (aLStack160,_FIGHTER_DONKEY_STATUS_SPECIAL_N_WORK_INT_CANCEL_TYPE);
            iVar3 = lib::L2CValue::as_integer(aLStack80);
            iVar4 = lib::L2CValue::as_integer(aLStack160);
            app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
            lib::L2CValue::_L2CValue(aLStack160);
            lib::L2CValue::_L2CValue(aLStack80);
            lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_DONKEY_SPECIAL_N_CANCEL);
            lib::L2CValue::L2CValue(aLStack160,true);
            lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x60);
            lib::L2CValue::_L2CValue(aLStack160);
            lib::L2CValue::_L2CValue(aLStack80);
            lib::L2CValue::L2CValue((L2CValue *)return_value,1);
            goto LAB_710021c5a8;
          }
        }
        lua2cpp::L2CFighterCommon::sub_check_jump_in_charging(this);
        lib::L2CValue::L2CValue(aLStack80,true);
        uVar6 = lib::L2CValue::operator__(aLStack160,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack160);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DONKEY_SPECIAL_N_CANCEL_TYPE_AIR_JUMP);
          lib::L2CValue::L2CValue(aLStack160,_FIGHTER_DONKEY_STATUS_SPECIAL_N_WORK_INT_CANCEL_TYPE);
          iVar3 = lib::L2CValue::as_integer(aLStack80);
          iVar4 = lib::L2CValue::as_integer(aLStack160);
          app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_DONKEY_SPECIAL_N_JUMP_CANCEL)
          ;
          lib::L2CValue::L2CValue(aLStack160,true);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x60);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue((L2CValue *)return_value,1);
          goto LAB_710021c5a8;
        }
      }
      else {
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar11,0x21);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT2_FLAG_STICK_ESCAPE);
        lib::L2CValue::operator_(pLVar7,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack160);
        lib::L2CValue::_L2CValue(aLStack160);
        if ((bVar2 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DONKEY_SPECIAL_N_CANCEL_TYPE_GROUND_ESCAPE);
          lib::L2CValue::L2CValue(aLStack160,_FIGHTER_DONKEY_STATUS_SPECIAL_N_WORK_INT_CANCEL_TYPE);
          iVar3 = lib::L2CValue::as_integer(aLStack80);
          iVar4 = lib::L2CValue::as_integer(aLStack160);
          app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_DONKEY_SPECIAL_N_CANCEL);
          lib::L2CValue::L2CValue(aLStack160,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x60);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue((L2CValue *)return_value,1);
          goto LAB_710021c5a8;
        }
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar11,0x21);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT2_FLAG_STICK_ESCAPE_F);
        lib::L2CValue::operator_(pLVar7,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack160);
        lib::L2CValue::_L2CValue(aLStack160);
        if ((bVar2 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DONKEY_SPECIAL_N_CANCEL_TYPE_GROUND_ESCAPE_F);
          lib::L2CValue::L2CValue(aLStack160,_FIGHTER_DONKEY_STATUS_SPECIAL_N_WORK_INT_CANCEL_TYPE);
          iVar3 = lib::L2CValue::as_integer(aLStack80);
          iVar4 = lib::L2CValue::as_integer(aLStack160);
          app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_DONKEY_SPECIAL_N_CANCEL);
          lib::L2CValue::L2CValue(aLStack160,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x60);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue((L2CValue *)return_value,1);
          goto LAB_710021c5a8;
        }
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar11,0x21);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT2_FLAG_STICK_ESCAPE_B);
        lib::L2CValue::operator_(pLVar7,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack160);
        lib::L2CValue::_L2CValue(aLStack160);
        if ((bVar2 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DONKEY_SPECIAL_N_CANCEL_TYPE_GROUND_ESCAPE_B);
          lib::L2CValue::L2CValue(aLStack160,_FIGHTER_DONKEY_STATUS_SPECIAL_N_WORK_INT_CANCEL_TYPE);
          iVar3 = lib::L2CValue::as_integer(aLStack80);
          iVar4 = lib::L2CValue::as_integer(aLStack160);
          app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_DONKEY_SPECIAL_N_CANCEL);
          lib::L2CValue::L2CValue(aLStack160,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x60);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue((L2CValue *)return_value,1);
          goto LAB_710021c5a8;
        }
        lua2cpp::L2CFighterCommon::sub_check_jump_in_charging(this);
        lib::L2CValue::L2CValue(aLStack80,true);
        uVar6 = lib::L2CValue::operator__(aLStack160,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack160);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DONKEY_SPECIAL_N_CANCEL_TYPE_GROUND_JUMP);
          lib::L2CValue::L2CValue(aLStack160,_FIGHTER_DONKEY_STATUS_SPECIAL_N_WORK_INT_CANCEL_TYPE);
          iVar3 = lib::L2CValue::as_integer(aLStack80);
          iVar4 = lib::L2CValue::as_integer(aLStack160);
          app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_DONKEY_SPECIAL_N_CANCEL);
          lib::L2CValue::L2CValue(aLStack160,true);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x60);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue((L2CValue *)return_value,1);
          goto LAB_710021c5a8;
        }
      }
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_710021c5a8;
    }
  }
  else {
    lib::L2CValue::_L2CValue(aLStack160);
  }
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_DONKEY_SPECIAL_N_ATTACK);
  lib::L2CValue::L2CValue(aLStack160,true);
  lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x60);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue((L2CValue *)return_value,1);
LAB_710021c5a8:
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

