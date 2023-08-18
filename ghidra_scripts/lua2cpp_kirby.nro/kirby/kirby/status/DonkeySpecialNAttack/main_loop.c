
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::DonkeySpecialNAttack_main_loop
          (L2CFighterKirby *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  GroundCorrectKind GVar3;
  int iVar4;
  FighterFacial FVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  Hash40 HVar8;
  BattleObjectModuleAccessor *pBVar9;
  BattleObjectModuleAccessor **ppBVar10;
  float fVar11;
  float fVar12;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  ppBVar10 = &this->moduleAccessor;
  bVar1 = app::lua_bind::StatusModule__is_changing_impl(*ppBVar10);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
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
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::_L2CValue(aLStack112);
        goto LAB_710021a310;
      }
    }
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator__(pLVar7,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar6 & 1) != 0) {
      pLVar7 = aLStack112;
      goto LAB_710021aa98;
    }
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator__(pLVar7,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar6 & 1) != 0) goto LAB_710021a310;
  }
  else {
    lib::L2CValue::_L2CValue(aLStack112);
LAB_710021a310:
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator__(pLVar7,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_AIR);
      GVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::GroundModule__correct_impl(*ppBVar10,GVar3);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_GROUND_CLIFF_CHECK_KIND_ON_DROP_BOTH_SIDES);
      lua2cpp::L2CFighterCommon::sub_fighter_cliff_check(this,(L2CValue)0xa0);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_TYPE_AIR_STOP);
      iVar4 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar10,iVar4);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_DONKEY_STATUS_SPECIAL_N_FLAG_MOT_CHANGE);
      iVar4 = lib::L2CValue::as_integer(aLStack128);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar4);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack128,_FIGHTER_DONKEY_STATUS_SPECIAL_N_FLAG_MAX);
        iVar4 = lib::L2CValue::as_integer(aLStack128);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar4);
        lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack128);
        if ((bVar2 & 1U) == 0) {
          lib::L2CValue::L2CValue(aLStack112,0xd483c0ed2);
          lib::L2CValue::L2CValue(aLStack128,0);
          lib::L2CValue::L2CValue(aLStack144,1.0);
          lib::L2CValue::L2CValue(aLStack160,false);
          HVar8 = lib::L2CValue::as_hash(aLStack112);
          fVar11 = (float)lib::L2CValue::as_number(aLStack128);
          fVar12 = (float)lib::L2CValue::as_number(aLStack144);
          bVar1 = lib::L2CValue::as_bool(aLStack160);
          app::lua_bind::FighterMotionModuleImpl__change_motion_kirby_copy_impl
                    (*ppBVar10,HVar8,fVar11,fVar12,(bool)(bVar1 & 1),0.0,false,false);
        }
        else {
          lib::L2CValue::L2CValue(aLStack112,0x115d2ad736);
          lib::L2CValue::L2CValue(aLStack128,0);
          lib::L2CValue::L2CValue(aLStack144,1.0);
          lib::L2CValue::L2CValue(aLStack160,false);
          HVar8 = lib::L2CValue::as_hash(aLStack112);
          fVar11 = (float)lib::L2CValue::as_number(aLStack128);
          fVar12 = (float)lib::L2CValue::as_number(aLStack144);
          bVar1 = lib::L2CValue::as_bool(aLStack160);
          app::lua_bind::FighterMotionModuleImpl__change_motion_kirby_copy_impl
                    (*ppBVar10,HVar8,fVar11,fVar12,(bool)(bVar1 & 1),0.0,false,false);
        }
        goto LAB_710021a9c0;
      }
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_DONKEY_STATUS_SPECIAL_N_FLAG_MAX);
      iVar4 = lib::L2CValue::as_integer(aLStack128);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar4);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack112,0xd483c0ed2);
        HVar8 = lib::L2CValue::as_hash(aLStack112);
        app::lua_bind::FighterMotionModuleImpl__change_motion_inherit_frame_kirby_copy_impl
                  (*ppBVar10,HVar8,-1.0,1.0,0.0,false,false);
      }
      else {
        lib::L2CValue::L2CValue(aLStack112,0x115d2ad736);
        HVar8 = lib::L2CValue::as_hash(aLStack112);
        app::lua_bind::FighterMotionModuleImpl__change_motion_inherit_frame_kirby_copy_impl
                  (*ppBVar10,HVar8,-1.0,1.0,0.0,false,false);
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,_GROUND_CORRECT_KIND_GROUND_CLIFF_STOP_ATTACK);
      GVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::GroundModule__correct_impl(*ppBVar10,GVar3);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,GROUND_CLIFF_CHECK_KIND_NONE);
      lua2cpp::L2CFighterCommon::sub_fighter_cliff_check(this,(L2CValue)0xa0);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
      iVar4 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar10,iVar4);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_DONKEY_STATUS_SPECIAL_N_FLAG_MOT_CHANGE);
      iVar4 = lib::L2CValue::as_integer(aLStack128);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar4);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack128,_FIGHTER_DONKEY_STATUS_SPECIAL_N_FLAG_MAX);
        iVar4 = lib::L2CValue::as_integer(aLStack128);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar4);
        lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack128);
        if ((bVar2 & 1U) == 0) {
          lib::L2CValue::L2CValue(aLStack112,0x915c5de42);
          HVar8 = lib::L2CValue::as_hash(aLStack112);
          app::lua_bind::FighterMotionModuleImpl__change_motion_inherit_frame_kirby_copy_impl
                    (*ppBVar10,HVar8,-1.0,1.0,0.0,false,false);
        }
        else {
          lib::L2CValue::L2CValue(aLStack112,0xdbd47741f);
          HVar8 = lib::L2CValue::as_hash(aLStack112);
          app::lua_bind::FighterMotionModuleImpl__change_motion_inherit_frame_kirby_copy_impl
                    (*ppBVar10,HVar8,-1.0,1.0,0.0,false,false);
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack128,_FIGHTER_DONKEY_STATUS_SPECIAL_N_FLAG_MAX);
        iVar4 = lib::L2CValue::as_integer(aLStack128);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar4);
        lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack128);
        if ((bVar2 & 1U) == 0) {
          lib::L2CValue::L2CValue(aLStack112,0x915c5de42);
          lib::L2CValue::L2CValue(aLStack128,0);
          lib::L2CValue::L2CValue(aLStack144,1.0);
          lib::L2CValue::L2CValue(aLStack160,false);
          HVar8 = lib::L2CValue::as_hash(aLStack112);
          fVar11 = (float)lib::L2CValue::as_number(aLStack128);
          fVar12 = (float)lib::L2CValue::as_number(aLStack144);
          bVar1 = lib::L2CValue::as_bool(aLStack160);
          app::lua_bind::FighterMotionModuleImpl__change_motion_kirby_copy_impl
                    (*ppBVar10,HVar8,fVar11,fVar12,(bool)(bVar1 & 1),0.0,false,false);
        }
        else {
          lib::L2CValue::L2CValue(aLStack112,0xdbd47741f);
          lib::L2CValue::L2CValue(aLStack128,0);
          lib::L2CValue::L2CValue(aLStack144,1.0);
          lib::L2CValue::L2CValue(aLStack160,false);
          HVar8 = lib::L2CValue::as_hash(aLStack112);
          fVar11 = (float)lib::L2CValue::as_number(aLStack128);
          fVar12 = (float)lib::L2CValue::as_number(aLStack144);
          bVar1 = lib::L2CValue::as_bool(aLStack160);
          app::lua_bind::FighterMotionModuleImpl__change_motion_kirby_copy_impl
                    (*ppBVar10,HVar8,fVar11,fVar12,(bool)(bVar1 & 1),0.0,false,false);
        }
LAB_710021a9c0:
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack128);
      }
    }
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,1);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_DONKEY_STATUS_SPECIAL_N_FLAG_MOT_CHANGE);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar10,iVar4);
    pLVar7 = aLStack96;
LAB_710021aa98:
    lib::L2CValue::_L2CValue(pLVar7);
  }
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_DONKEY_STATUS_SPECIAL_N_FLAG_CANCEL_FACE);
  iVar4 = lib::L2CValue::as_integer(aLStack128);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar4);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((bVar2 & 1U) != 0) {
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_FACIAL_SPECIAL);
    pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar7);
    FVar5 = lib::L2CValue::as_integer(aLStack96);
    app::FighterUtil::cancel_face_motion_by_priority(pBVar9,FVar5);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(*ppBVar10);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar6 = lib::L2CValue::operator__(aLStack128,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack128);
LAB_710021ac14:
    bVar1 = app::lua_bind::MotionModule__is_end_impl(*ppBVar10);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar2 & 1U) == 0) {
LAB_710021ad3c:
      iVar4 = 0;
      goto LAB_710021ad44;
    }
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator__(pLVar7,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar6 & 1) == 0) {
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
      uVar6 = lib::L2CValue::operator__(pLVar7,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar6 & 1) == 0) goto LAB_710021ad3c;
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_FALL);
      lib::L2CValue::L2CValue(aLStack128,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x80);
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_WAIT);
      lib::L2CValue::L2CValue(aLStack128,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x80);
    }
    lib::L2CValue::_L2CValue(aLStack128);
    pLVar7 = aLStack96;
LAB_710021ad2c:
    lib::L2CValue::_L2CValue(pLVar7);
  }
  else {
    lib::L2CValue::L2CValue(aLStack160,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x60);
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar6 = lib::L2CValue::operator__(aLStack144,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack160);
      pLVar7 = aLStack128;
      goto LAB_710021ad2c;
    }
    lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar6 = lib::L2CValue::operator__(aLStack176,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar6 & 1) != 0) goto LAB_710021ac14;
  }
  iVar4 = 1;
LAB_710021ad44:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar4);
  return;
}

