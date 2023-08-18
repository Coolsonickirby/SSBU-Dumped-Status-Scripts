
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKen::status::AttackLw3_main_loop(L2CFighterKen *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  ulong uVar7;
  Hash40 HVar8;
  long lVar9;
  BattleObjectModuleAccessor **ppBVar10;
  float fVar11;
  L2CValue aLStack464 [16];
  L2CValue aLStack448 [16];
  L2CValue aLStack432 [16];
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
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
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  ppBVar10 = &this->moduleAccessor;
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(*ppBVar10);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,false);
  uVar5 = lib::L2CValue::operator__(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar5 & 1) == 0) {
LAB_710002245c:
    bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(*ppBVar10);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar5 = lib::L2CValue::operator__(aLStack112,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar5 & 1) != 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xe);
      lib::L2CValue::L2CValue(aLStack112,0xdf05c072b);
      lib::L2CValue::L2CValue(aLStack128,0x192c9d0740);
      uVar5 = lib::L2CValue::as_integer(aLStack112);
      uVar7 = lib::L2CValue::as_integer(aLStack128);
      fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar5,uVar7);
      lib::L2CValue::L2CValue(aLStack96,fVar11);
      uVar5 = lib::L2CValue::operator__(pLVar6,aLStack96);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack112);
      }
      else {
        FUN_710001fb70(aLStack144,this);
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack144);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((bVar2 & 1U) != 0) goto LAB_7100022e4c;
      }
    }
    bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(*ppBVar10);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack96,true);
    uVar5 = lib::L2CValue::operator__(aLStack112,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack112);
    }
    else {
      lib::L2CValue::L2CValue(aLStack192,false);
      lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x40);
      lib::L2CValue::L2CValue(aLStack96,false);
      uVar5 = lib::L2CValue::operator__(aLStack128,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar5 & 1) == 0) goto LAB_7100022e4c;
    }
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_RYU_STATUS_ATTACK_FLAG_WEAK_CANCEL);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    if ((bVar2 & 1U) == 0) {
LAB_71000227c4:
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
LAB_71000227d4:
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_RYU_STATUS_ATTACK_FLAG_SAME_ATTACK_CANCEL);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack112);
      }
      else {
        lib::L2CValue::L2CValue(aLStack144,_FIGHTER_RYU_STATUS_ATTACK_INT_BUTTON_ON_FRAME);
        iVar3 = lib::L2CValue::as_integer(aLStack144);
        iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar3);
        lib::L2CValue::L2CValue(aLStack128,iVar3);
        lib::L2CValue::L2CValue(aLStack256,0xdf05c072b);
        lib::L2CValue::L2CValue(aLStack272,0x1c0b5bf773);
        uVar5 = lib::L2CValue::as_integer(aLStack256);
        uVar7 = lib::L2CValue::as_integer(aLStack272);
        fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar5,uVar7);
        lib::L2CValue::L2CValue(aLStack208,fVar11);
        uVar5 = lib::L2CValue::operator__(aLStack208,aLStack128);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::_L2CValue(aLStack272);
        lib::L2CValue::_L2CValue(aLStack256);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack288,_FIGHTER_STATUS_KIND_ATTACK_LW3);
          lib::L2CValue::L2CValue(aLStack304,true);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xe0,(L2CValue)0xd0);
          lib::L2CValue::_L2CValue(aLStack304);
          pLVar6 = aLStack288;
          goto LAB_7100022e48;
        }
      }
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_STATUS_ATTACK_FLAG_ENABLE_COMBO_PRECEDE);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack96,true);
      uVar5 = lib::L2CValue::operator__(aLStack112,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((uVar5 & 1) != 0) {
        bVar1 = app::lua_bind::StatusModule__is_changing_impl(*ppBVar10);
        lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue(aLStack96,true);
        uVar5 = lib::L2CValue::operator__(aLStack112,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar5 & 1) == 0) {
          iVar3 = app::lua_bind::ComboModule__count_impl(*ppBVar10);
          lib::L2CValue::L2CValue(aLStack128,iVar3);
          lib::L2CValue::L2CValue(aLStack208,0xcf8d5ed42);
          lib::L2CValue::L2CValue(aLStack256,0);
          uVar5 = lib::L2CValue::as_integer(aLStack208);
          uVar7 = lib::L2CValue::as_integer(aLStack256);
          iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar10,uVar5,uVar7);
          lib::L2CValue::L2CValue(aLStack144,iVar3);
          uVar5 = lib::L2CValue::operator_(aLStack128,aLStack144);
          if ((uVar5 & 1) == 0) {
            uVar5 = 0;
          }
          else {
            lib::L2CValue::L2CValue(aLStack320,_FIGHTER_STATUS_ATTACK_FLAG_ENABLE_COMBO_PRECEDE);
            iVar3 = lib::L2CValue::as_integer(aLStack320);
            bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
            lib::L2CValue::L2CValue(aLStack272,(bool)(bVar1 & 1));
            lib::L2CValue::L2CValue(aLStack96,true);
            uVar5 = lib::L2CValue::operator__(aLStack272,aLStack96);
            lib::L2CValue::_L2CValue(aLStack96);
            if ((uVar5 & 1) == 0) {
              uVar5 = 0;
            }
            else {
              lib::L2CValue::L2CValue(aLStack352,_FIGHTER_STATUS_ATTACK_FLAG_ENABLE_COMBO);
              iVar3 = lib::L2CValue::as_integer(aLStack352);
              bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
              lib::L2CValue::L2CValue(aLStack336,(bool)(bVar1 & 1));
              lib::L2CValue::L2CValue(aLStack96,true);
              uVar5 = lib::L2CValue::operator__(aLStack336,aLStack96);
              uVar5 = uVar5 & 0xffffffff;
              lib::L2CValue::_L2CValue(aLStack96);
              lib::L2CValue::_L2CValue(aLStack336);
              lib::L2CValue::_L2CValue(aLStack352);
            }
            lib::L2CValue::_L2CValue(aLStack272);
            lib::L2CValue::_L2CValue(aLStack320);
          }
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack256);
          lib::L2CValue::_L2CValue(aLStack208);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack112);
          if ((uVar5 & 1) == 0) goto LAB_7100022b50;
        }
        else {
          lib::L2CValue::_L2CValue(aLStack112);
        }
        lua2cpp::L2CFighterCommon::attack_s3_mtrans(this);
      }
LAB_7100022b50:
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
      uVar5 = lib::L2CValue::operator__(pLVar6,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue
                  (aLStack128,_FIGHTER_STATUS_WORK_ID_INT_RESERVE_ATTACK_MINI_JUMP_ATTACK_FRAME);
        iVar3 = lib::L2CValue::as_integer(aLStack128);
        iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar3);
        lib::L2CValue::L2CValue(aLStack112,iVar3);
        lib::L2CValue::L2CValue(aLStack96,0);
        uVar5 = lib::L2CValue::operator_(aLStack96,aLStack112);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar5 & 1) == 0) {
LAB_7100022dc0:
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack128);
        }
        else {
          bVar1 = app::lua_bind::StopModule__is_stop_impl(*ppBVar10);
          lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
          lib::L2CValue::L2CValue(aLStack96,false);
          uVar5 = lib::L2CValue::operator__(aLStack144,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          if ((uVar5 & 1) == 0) {
            lib::L2CValue::_L2CValue(aLStack144);
            goto LAB_7100022dc0;
          }
          lua2cpp::L2CFighterCommon::sub_check_button_jump(this);
          lib::L2CValue::L2CValue(aLStack96,true);
          uVar5 = lib::L2CValue::operator__(aLStack208,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack208);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack128);
          if ((uVar5 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack96,FIGHTER_ANIMCMD_EXPRESSION);
            HVar8 = app::lua_bind::MotionModule__motion_kind_impl(*ppBVar10);
            lib::L2CValue::L2CValue(aLStack400,HVar8);
            FUN_7100020070(aLStack112,this,aLStack400);
            iVar3 = lib::L2CValue::as_integer(aLStack96);
            HVar8 = lib::L2CValue::as_hash(aLStack112);
            app::lua_bind::MotionAnimcmdModule__call_script_single_impl(*ppBVar10,iVar3,HVar8,-1);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::_L2CValue(aLStack400);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::L2CValue(aLStack96,0);
            lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_WORK_ID_INT_RESERVE_LOG_ATTACK_KIND);
            lVar9 = lib::L2CValue::as_integer(aLStack96);
            iVar3 = lib::L2CValue::as_integer(aLStack112);
            app::lua_bind::WorkModule__set_int64_impl(*ppBVar10,lVar9,iVar3);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::L2CValue(aLStack96,_FIGHTER_RYU_STATUS_ATTACK_FLAG_CHANGE_LOG);
            iVar3 = lib::L2CValue::as_integer(aLStack96);
            app::lua_bind::WorkModule__on_flag_impl(*ppBVar10,iVar3);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::L2CValue(aLStack432,true);
            lua2cpp::L2CFighterCommon::change_status_jump_mini_attack(this,(L2CValue)0x50);
            lib::L2CValue::_L2CValue(aLStack416);
            pLVar6 = aLStack432;
            goto LAB_7100022e48;
          }
        }
        bVar1 = app::lua_bind::MotionModule__is_end_impl(*ppBVar10);
        lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue(aLStack96,true);
        uVar5 = lib::L2CValue::operator__(aLStack112,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar5 & 1) == 0) {
          FUN_7100020140(this);
          iVar3 = 0;
          goto LAB_7100022e54;
        }
        lib::L2CValue::L2CValue(aLStack448,FIGHTER_STATUS_KIND_SQUAT_WAIT);
        lib::L2CValue::L2CValue(aLStack464,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x40,(L2CValue)0x30);
        lib::L2CValue::_L2CValue(aLStack464);
        pLVar6 = aLStack448;
      }
      else {
        lib::L2CValue::L2CValue(aLStack368,_FIGHTER_STATUS_KIND_FALL);
        lib::L2CValue::L2CValue(aLStack384,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x90,(L2CValue)0x80);
        lib::L2CValue::_L2CValue(aLStack384);
        pLVar6 = aLStack368;
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_RYU_STATUS_ATTACK_FLAG_BUTTON_TRIGGER);
      iVar3 = lib::L2CValue::as_integer(aLStack144);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
      lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack128);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((bVar2 & 1U) == 0) goto LAB_71000227d4;
      lib::L2CValue::L2CValue(aLStack112,_CONTROL_PAD_BUTTON_ATTACK);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      bVar1 = app::lua_bind::ControlModule__check_button_off_impl(*ppBVar10,iVar3);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
      if ((bVar2 & 1U) == 0) goto LAB_71000227c4;
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x1b);
      lib::L2CValue::L2CValue(aLStack144,0x6e5ec7051);
      lib::L2CValue::L2CValue(aLStack208,0x12aaded0b6);
      uVar5 = lib::L2CValue::as_integer(aLStack144);
      uVar7 = lib::L2CValue::as_integer(aLStack208);
      fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar5,uVar7);
      lib::L2CValue::L2CValue(aLStack128,fVar11);
      uVar5 = lib::L2CValue::operator__(pLVar6,aLStack128);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar5 & 1) == 0) goto LAB_71000227d4;
      lib::L2CValue::L2CValue(aLStack224,_FIGHTER_STATUS_KIND_ATTACK_LW3);
      lib::L2CValue::L2CValue(aLStack240,true);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x20,(L2CValue)0x10);
      lib::L2CValue::_L2CValue(aLStack240);
      pLVar6 = aLStack224;
    }
LAB_7100022e48:
    lib::L2CValue::_L2CValue(pLVar6);
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_RYU_INSTANCE_WORK_ID_FLAG_FINAL_HIT_CANCEL);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
LAB_7100022368:
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_RYU_STATUS_ATTACK_FLAG_HIT_CANCEL);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack112);
      }
      else {
        lib::L2CValue::L2CValue(aLStack144,_COLLISION_KIND_MASK_SHIELD | _COLLISION_KIND_MASK_HIT);
        uVar4 = lib::L2CValue::as_integer(aLStack144);
        bVar1 = app::lua_bind::AttackModule__is_infliction_status_impl(*ppBVar10,uVar4);
        lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack128);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((bVar2 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack176,_SITUATION_KIND_GROUND);
          FUN_710001f280(aLStack96,this,aLStack176);
          bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack176);
          if ((bVar2 & 1U) != 0) goto LAB_7100022e4c;
        }
      }
      goto LAB_710002245c;
    }
    lib::L2CValue::L2CValue(aLStack144,_COLLISION_KIND_MASK_SHIELD | _COLLISION_KIND_MASK_HIT);
    uVar4 = lib::L2CValue::as_integer(aLStack144);
    bVar1 = app::lua_bind::AttackModule__is_infliction_status_impl(*ppBVar10,uVar4);
    lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack128);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((bVar2 & 1U) == 0) goto LAB_7100022368;
    lib::L2CValue::L2CValue(aLStack160,_SITUATION_KIND_GROUND);
    FUN_710001f0c0(aLStack96,this,aLStack160);
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack160);
    if ((bVar2 & 1U) == 0) goto LAB_7100022368;
  }
LAB_7100022e4c:
  iVar3 = 1;
LAB_7100022e54:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

