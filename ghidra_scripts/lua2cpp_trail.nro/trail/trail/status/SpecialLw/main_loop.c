
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterTrail::status::SpecialLw_main_loop(L2CFighterTrail *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ShieldStatus SVar4;
  int iVar5;
  HitStatus HVar6;
  ulong uVar7;
  L2CValue *pLVar8;
  ulong uVar9;
  Hash40 HVar10;
  BattleObjectModuleAccessor **ppBVar11;
  float fVar12;
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
  
  ppBVar11 = &this->moduleAccessor;
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(*ppBVar11);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar7 = lib::L2CValue::operator__(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar7 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack112);
LAB_7100021348:
    bVar1 = app::lua_bind::MotionModule__is_end_impl(*ppBVar11);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar2 & 1U) == 0) {
      bVar1 = app::lua_bind::StatusModule__is_changing_impl(*ppBVar11);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack96,false);
      uVar7 = lib::L2CValue::operator__(aLStack112,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar7 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack256,0x10ef97f71f);
        lib::L2CValue::L2CValue(aLStack272,0x146e22785f);
        lib::L2CValue::L2CValue(aLStack288,true);
        lua2cpp::L2CFighterCommon::sub_change_motion_by_situation
                  (this,(L2CValue)0x0,(L2CValue)0xf0,(L2CValue)0xe0);
        lib::L2CValue::_L2CValue(aLStack240);
        lib::L2CValue::_L2CValue(aLStack288);
        lib::L2CValue::_L2CValue(aLStack272);
        lib::L2CValue::_L2CValue(aLStack256);
        lib::L2CValue::L2CValue(aLStack304,0x1018dfb2f4);
        lua2cpp::L2CFighterCommon::sub_exec_special_start_common_kinetic_setting
                  (this,(L2CValue)0xd0);
        lib::L2CValue::_L2CValue(aLStack304);
      }
      lib::L2CValue::L2CValue(aLStack160,_FIGHTER_TRAIL_STATUS_SPECIAL_LW_FLAG_SHIELD_CHK);
      iVar3 = lib::L2CValue::as_integer(aLStack160);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar11,iVar3);
      lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack96,false);
      uVar7 = lib::L2CValue::operator__(aLStack128,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack160);
      if ((uVar7 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack160,_FIGHTER_TRAIL_STATUS_SPECIAL_LW_FLAG_SHIELD);
        iVar3 = lib::L2CValue::as_integer(aLStack160);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar11,iVar3);
        lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue(aLStack96,false);
        uVar7 = lib::L2CValue::operator__(aLStack128,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack160);
        if ((uVar7 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack96,0);
          lib::L2CValue::L2CValue(aLStack128,_SHIELD_STATUS_NONE);
          lib::L2CValue::L2CValue(aLStack160,_FIGHTER_TRAIL_SHIELD_GROUP_KIND_SPECIAL_LW);
          iVar3 = lib::L2CValue::as_integer(aLStack96);
          SVar4 = lib::L2CValue::as_integer(aLStack128);
          iVar5 = lib::L2CValue::as_integer(aLStack160);
          app::lua_bind::ShieldModule__set_status_impl(*ppBVar11,iVar3,SVar4,iVar5);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack96,0);
          lib::L2CValue::L2CValue(aLStack128,_SHIELD_STATUS_NONE);
          lib::L2CValue::L2CValue(aLStack160,_FIGHTER_TRAIL_REFLECTOR_GROUP_SPECIAL_LW);
          iVar3 = lib::L2CValue::as_integer(aLStack96);
          SVar4 = lib::L2CValue::as_integer(aLStack128);
          iVar5 = lib::L2CValue::as_integer(aLStack160);
          app::lua_bind::ReflectorModule__set_status_impl(*ppBVar11,iVar3,SVar4,iVar5);
          goto LAB_7100021828;
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack160,_FIGHTER_TRAIL_STATUS_SPECIAL_LW_FLAG_SHIELD);
        iVar3 = lib::L2CValue::as_integer(aLStack160);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar11,iVar3);
        lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue(aLStack96,true);
        uVar7 = lib::L2CValue::operator__(aLStack128,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack160);
        if ((uVar7 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TRAIL_STATUS_SPECIAL_LW_FLAG_SHIELD_CHK);
          iVar3 = lib::L2CValue::as_integer(aLStack96);
          app::lua_bind::WorkModule__on_flag_impl(*ppBVar11,iVar3);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack96,0);
          lib::L2CValue::L2CValue(aLStack128,_SHIELD_STATUS_NORMAL);
          lib::L2CValue::L2CValue(aLStack160,_FIGHTER_TRAIL_SHIELD_GROUP_KIND_SPECIAL_LW);
          iVar3 = lib::L2CValue::as_integer(aLStack96);
          SVar4 = lib::L2CValue::as_integer(aLStack128);
          iVar5 = lib::L2CValue::as_integer(aLStack160);
          app::lua_bind::ShieldModule__set_status_impl(*ppBVar11,iVar3,SVar4,iVar5);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack96,0);
          lib::L2CValue::L2CValue(aLStack128,_SHIELD_STATUS_NORMAL);
          lib::L2CValue::L2CValue(aLStack160,_FIGHTER_TRAIL_REFLECTOR_GROUP_SPECIAL_LW);
          iVar3 = lib::L2CValue::as_integer(aLStack96);
          SVar4 = lib::L2CValue::as_integer(aLStack128);
          iVar5 = lib::L2CValue::as_integer(aLStack160);
          app::lua_bind::ReflectorModule__set_status_impl(*ppBVar11,iVar3,SVar4,iVar5);
LAB_7100021828:
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack96);
        }
      }
      lib::L2CValue::L2CValue(aLStack160,_FIGHTER_TRAIL_STATUS_SPECIAL_LW_FLAG_SHIELD_HIT);
      iVar3 = lib::L2CValue::as_integer(aLStack160);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar11,iVar3);
      lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack96,true);
      uVar7 = lib::L2CValue::operator__(aLStack128,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack160);
      if ((uVar7 & 1) != 0) {
        FUN_71000210a0(aLStack128,this);
        lib::L2CValue::L2CValue(aLStack96,true);
        uVar7 = lib::L2CValue::operator__(aLStack128,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack128);
        if ((uVar7 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TRAIL_STATUS_SPECIAL_LW_FLAG_SHIELD_HIT);
          iVar3 = lib::L2CValue::as_integer(aLStack96);
          app::lua_bind::WorkModule__off_flag_impl(*ppBVar11,iVar3);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue((L2CValue *)return_value,0);
          goto LAB_7100021ed4;
        }
        lib::L2CValue::L2CValue(aLStack320,_FIGHTER_TRAIL_STATUS_SPECIAL_LW_FLOAT_SHIELD_LR);
        iVar3 = lib::L2CValue::as_integer(aLStack320);
        fVar12 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar11,iVar3);
        lib::L2CValue::L2CValue(aLStack160,fVar12);
        fVar12 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar11);
        lib::L2CValue::L2CValue(aLStack336,fVar12);
        lib::L2CValue::operator_(aLStack160,aLStack336);
        lib::L2CValue::L2CValue(aLStack96,0.0);
        uVar7 = lib::L2CValue::operator_(aLStack128,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack336);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack320);
        if ((uVar7 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack160,_FIGHTER_TRAIL_STATUS_SPECIAL_LW_FLAG_HIT_STOP);
          iVar3 = lib::L2CValue::as_integer(aLStack160);
          bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar11,iVar3);
          lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
          lib::L2CValue::L2CValue(aLStack96,false);
          uVar7 = lib::L2CValue::operator__(aLStack128,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack160);
          if ((uVar7 & 1) == 0) {
            bVar1 = app::lua_bind::StopModule__is_hit_impl(*ppBVar11);
            lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
            lib::L2CValue::L2CValue(aLStack96,false);
            uVar7 = lib::L2CValue::operator__(aLStack128,aLStack96);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::_L2CValue(aLStack128);
            if ((uVar7 & 1) == 0) goto LAB_7100021ec8;
            lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TRAIL_STATUS_SPECIAL_LW_FLAG_SHIELD_HIT);
            iVar3 = lib::L2CValue::as_integer(aLStack96);
            app::lua_bind::WorkModule__off_flag_impl(*ppBVar11,iVar3);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::L2CValue(aLStack160,_FIGHTER_TRAIL_STATUS_SPECIAL_LW_FLAG_DIRECT);
            iVar3 = lib::L2CValue::as_integer(aLStack160);
            bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar11,iVar3);
            lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
            lib::L2CValue::L2CValue(aLStack96,true);
            uVar7 = lib::L2CValue::operator__(aLStack128,aLStack96);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::_L2CValue(aLStack128);
            lib::L2CValue::_L2CValue(aLStack160);
            if ((uVar7 & 1) == 0) {
              lib::L2CValue::L2CValue(aLStack448,_FIGHTER_TRAIL_STATUS_KIND_SPECIAL_LW_ATTACK);
              lib::L2CValue::L2CValue(aLStack464,false);
              lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x40,(L2CValue)0x30);
              lib::L2CValue::_L2CValue(aLStack464);
              pLVar8 = aLStack448;
            }
            else {
              lib::L2CValue::L2CValue(aLStack416,_FIGHTER_TRAIL_STATUS_KIND_SPECIAL_LW_REBOUND);
              lib::L2CValue::L2CValue(aLStack432,false);
              lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x60,(L2CValue)0x50);
              lib::L2CValue::_L2CValue(aLStack432);
              pLVar8 = aLStack416;
            }
          }
          else {
            lib::L2CValue::L2CValue(aLStack96,0);
            lib::L2CValue::L2CValue(aLStack128,_SHIELD_STATUS_NONE);
            lib::L2CValue::L2CValue(aLStack160,_FIGHTER_TRAIL_SHIELD_GROUP_KIND_SPECIAL_LW);
            iVar3 = lib::L2CValue::as_integer(aLStack96);
            SVar4 = lib::L2CValue::as_integer(aLStack128);
            iVar5 = lib::L2CValue::as_integer(aLStack160);
            app::lua_bind::ShieldModule__set_status_impl(*ppBVar11,iVar3,SVar4,iVar5);
            lib::L2CValue::_L2CValue(aLStack160);
            lib::L2CValue::_L2CValue(aLStack128);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::L2CValue(aLStack128,0);
            lib::L2CValue::L2CValue(aLStack320,_FIGHTER_TRAIL_STATUS_SPECIAL_LW_FLAG_DIRECT);
            iVar3 = lib::L2CValue::as_integer(aLStack320);
            bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar11,iVar3);
            lib::L2CValue::L2CValue(aLStack160,(bool)(bVar1 & 1));
            lib::L2CValue::L2CValue(aLStack96,true);
            uVar7 = lib::L2CValue::operator__(aLStack160,aLStack96);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::_L2CValue(aLStack160);
            lib::L2CValue::_L2CValue(aLStack320);
            if ((uVar7 & 1) == 0) {
              lib::L2CValue::L2CValue(aLStack160,0x1018dfb2f4);
              lib::L2CValue::L2CValue(aLStack320,0xd7b1487d5);
              uVar7 = lib::L2CValue::as_integer(aLStack160);
              uVar9 = lib::L2CValue::as_integer(aLStack320);
              iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar11,uVar7,uVar9);
              lib::L2CValue::L2CValue(aLStack96,iVar3);
              lib::L2CValue::operator_(aLStack128,aLStack96);
              lib::L2CValue::_L2CValue(aLStack96);
              lib::L2CValue::_L2CValue(aLStack320);
              lib::L2CValue::_L2CValue(aLStack160);
              lib::L2CValue::L2CValue(aLStack96,0x1ed8ef3c34);
              HVar10 = lib::L2CValue::as_hash(aLStack96);
              iVar3 = app::lua_bind::SoundModule__play_se_impl
                                (*ppBVar11,HVar10,true,false,false,false,0);
              lib::L2CValue::L2CValue(aLStack400,iVar3);
              pLVar8 = aLStack400;
            }
            else {
              lib::L2CValue::L2CValue(aLStack160,0x1018dfb2f4);
              lib::L2CValue::L2CValue(aLStack320,0x140a34ec90);
              uVar7 = lib::L2CValue::as_integer(aLStack160);
              uVar9 = lib::L2CValue::as_integer(aLStack320);
              iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar11,uVar7,uVar9);
              lib::L2CValue::L2CValue(aLStack96,iVar3);
              lib::L2CValue::operator_(aLStack128,aLStack96);
              lib::L2CValue::_L2CValue(aLStack96);
              lib::L2CValue::_L2CValue(aLStack320);
              lib::L2CValue::_L2CValue(aLStack160);
              lib::L2CValue::L2CValue(aLStack96,0x1e41e66d8e);
              HVar10 = lib::L2CValue::as_hash(aLStack96);
              iVar3 = app::lua_bind::SoundModule__play_se_impl
                                (*ppBVar11,HVar10,true,false,false,false,0);
              lib::L2CValue::L2CValue(aLStack384,iVar3);
              pLVar8 = aLStack384;
            }
            lib::L2CValue::_L2CValue(pLVar8);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::L2CValue(aLStack96,false);
            iVar3 = lib::L2CValue::as_integer(aLStack128);
            bVar1 = lib::L2CValue::as_bool(aLStack96);
            app::lua_bind::StopModule__set_hit_stop_frame_impl(*ppBVar11,iVar3,(bool)(bVar1 & 1));
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TRAIL_STATUS_SPECIAL_LW_FLAG_HIT_STOP);
            iVar3 = lib::L2CValue::as_integer(aLStack96);
            app::lua_bind::WorkModule__on_flag_impl(*ppBVar11,iVar3);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::L2CValue(aLStack96,_HIT_STATUS_XLU);
            HVar6 = lib::L2CValue::as_integer(aLStack96);
            app::lua_bind::HitModule__set_whole_impl(*ppBVar11,HVar6,0);
            lib::L2CValue::_L2CValue(aLStack96);
            pLVar8 = aLStack128;
          }
        }
        else {
          lib::L2CValue::L2CValue(aLStack352,_FIGHTER_TRAIL_STATUS_KIND_SPECIAL_LW_TURN);
          lib::L2CValue::L2CValue(aLStack368,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
          lib::L2CValue::_L2CValue(aLStack368);
          pLVar8 = aLStack352;
        }
        lib::L2CValue::_L2CValue(pLVar8);
      }
LAB_7100021ec8:
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_7100021ed4:
      lib::L2CValue::_L2CValue(aLStack112);
      return;
    }
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar7 = lib::L2CValue::operator__(pLVar8,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack208,_FIGHTER_STATUS_KIND_FALL);
      lib::L2CValue::L2CValue(aLStack224,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x30,(L2CValue)0x20);
      lib::L2CValue::_L2CValue(aLStack224);
      pLVar8 = aLStack208;
    }
    else {
      lib::L2CValue::L2CValue(aLStack176,_FIGHTER_STATUS_KIND_WAIT);
      lib::L2CValue::L2CValue(aLStack192,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x50,(L2CValue)0x40);
      lib::L2CValue::_L2CValue(aLStack192);
      pLVar8 = aLStack176;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack144,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x70);
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar7 = lib::L2CValue::operator__(aLStack128,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar7 & 1) != 0) {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack96,false);
      uVar7 = lib::L2CValue::operator__(aLStack160,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar7 & 1) == 0) goto LAB_71000216e4;
      goto LAB_7100021348;
    }
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    pLVar8 = aLStack112;
  }
  lib::L2CValue::_L2CValue(pLVar8);
LAB_71000216e4:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

