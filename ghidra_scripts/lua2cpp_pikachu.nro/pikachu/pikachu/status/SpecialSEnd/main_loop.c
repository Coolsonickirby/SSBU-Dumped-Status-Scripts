
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPikachu::status::SpecialSEnd_main_loop(L2CFighterPikachu *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  GroundCorrectKind GVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  Hash40 HVar7;
  BattleObjectModuleAccessor **ppBVar8;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar1 & 1U) == 0) {
    ppBVar8 = &this->moduleAccessor;
    bVar2 = app::lua_bind::CancelModule__is_enable_cancel_impl(*ppBVar8);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack96);
LAB_7100020de8:
      bVar2 = app::lua_bind::MotionModule__is_end_impl(*ppBVar8);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((bVar1 & 1U) == 0) {
LAB_7100020f40:
        FUN_710001e380(aLStack96,this);
        lib::L2CValue::operator_(aLStack96);
        bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((bVar1 & 1U) != 0) {
          FUN_710001e5d0(this);
          pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
          lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
          uVar5 = lib::L2CValue::operator__(pLVar6,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar5 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_TYPE_AIR_STOP);
            iVar3 = lib::L2CValue::as_integer(aLStack80);
            app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar8,iVar3);
            lib::L2CValue::_L2CValue(aLStack80);
            lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_AIR);
            GVar4 = lib::L2CValue::as_integer(aLStack80);
            app::lua_bind::GroundModule__correct_impl(*ppBVar8,GVar4);
            lib::L2CValue::_L2CValue(aLStack80);
            lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
            lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0xb0);
            lib::L2CValue::_L2CValue(aLStack80);
            lib::L2CValue::L2CValue
                      (aLStack96,_FIGHTER_PIKACHU_STATUS_TRANSITION_TERM_ID_SKULL_BASH_FALL);
            iVar3 = lib::L2CValue::as_integer(aLStack96);
            app::lua_bind::WorkModule__enable_transition_term_impl(*ppBVar8,iVar3);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::L2CValue
                      (aLStack96,_FIGHTER_PIKACHU_STATUS_TRANSITION_TERM_ID_SKULL_BASH_WAIT);
            iVar3 = lib::L2CValue::as_integer(aLStack96);
            app::lua_bind::WorkModule__unable_transition_term_impl(*ppBVar8,iVar3);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::L2CValue
                      (aLStack96,_FIGHTER_PIKACHU_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_GROUND);
            iVar3 = lib::L2CValue::as_integer(aLStack96);
            app::lua_bind::WorkModule__on_flag_impl(*ppBVar8,iVar3);
            pLVar6 = aLStack96;
          }
          else {
            lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
            iVar3 = lib::L2CValue::as_integer(aLStack80);
            app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar8,iVar3);
            lib::L2CValue::_L2CValue(aLStack80);
            lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_GROUND);
            GVar4 = lib::L2CValue::as_integer(aLStack80);
            app::lua_bind::GroundModule__correct_impl(*ppBVar8,GVar4);
            lib::L2CValue::_L2CValue(aLStack80);
            lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
            lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0xa0);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::L2CValue(aLStack144,_FIGHTER_INSTANCE_WORK_ID_INT_KIND);
            iVar3 = lib::L2CValue::as_integer(aLStack144);
            iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar8,iVar3);
            lib::L2CValue::L2CValue(aLStack112,iVar3);
            lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIND_PICHU);
            uVar5 = lib::L2CValue::operator__(aLStack112,aLStack80);
            lib::L2CValue::_L2CValue(aLStack80);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::_L2CValue(aLStack144);
            if ((uVar5 & 1) == 0) {
              lib::L2CValue::L2CValue(aLStack80,0x141d397f1d);
              HVar7 = lib::L2CValue::as_hash(aLStack80);
              app::lua_bind::SoundModule__play_landing_se_impl(*ppBVar8,HVar7);
            }
            else {
              lib::L2CValue::L2CValue(aLStack80,0x12e99c95e2);
              HVar7 = lib::L2CValue::as_hash(aLStack80);
              app::lua_bind::SoundModule__play_landing_se_impl(*ppBVar8,HVar7);
            }
            lib::L2CValue::_L2CValue(aLStack80);
            lib::L2CValue::L2CValue
                      (aLStack80,_FIGHTER_PIKACHU_STATUS_TRANSITION_TERM_ID_SKULL_BASH_WAIT);
            iVar3 = lib::L2CValue::as_integer(aLStack80);
            app::lua_bind::WorkModule__enable_transition_term_impl(*ppBVar8,iVar3);
            lib::L2CValue::_L2CValue(aLStack80);
            lib::L2CValue::L2CValue
                      (aLStack80,_FIGHTER_PIKACHU_STATUS_TRANSITION_TERM_ID_SKULL_BASH_FALL);
            iVar3 = lib::L2CValue::as_integer(aLStack80);
            app::lua_bind::WorkModule__unable_transition_term_impl(*ppBVar8,iVar3);
            lib::L2CValue::_L2CValue(aLStack80);
            lib::L2CValue::L2CValue
                      (aLStack80,_FIGHTER_PIKACHU_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_AIR);
            iVar3 = lib::L2CValue::as_integer(aLStack80);
            app::lua_bind::WorkModule__on_flag_impl(*ppBVar8,iVar3);
            lib::L2CValue::_L2CValue(aLStack80);
            lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PIKACHU_STATUS_WORK_ID_FLAG_SKULL_BASH_HIT);
            iVar3 = lib::L2CValue::as_integer(aLStack112);
            bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar8,iVar3);
            lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
            bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
            lib::L2CValue::_L2CValue(aLStack80);
            lib::L2CValue::_L2CValue(aLStack112);
            if ((bVar1 & 1U) == 0) {
              lib::L2CValue::L2CValue
                        (aLStack112,
                         _FIGHTER_PIKACHU_STATUS_WORK_ID_FLAG_SKULL_BASH_MISS_END_RUMBLE_2);
              iVar3 = lib::L2CValue::as_integer(aLStack112);
              bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar8,iVar3);
              lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
              bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
              lib::L2CValue::_L2CValue(aLStack80);
              lib::L2CValue::_L2CValue(aLStack112);
              if ((bVar1 & 1U) == 0) {
                lib::L2CValue::L2CValue(aLStack80,0xb41cc0a88);
                lib::L2CValue::L2CValue(aLStack112,0);
                lib::L2CValue::L2CValue(aLStack144,true);
                HVar7 = lib::L2CValue::as_hash(aLStack80);
                iVar3 = lib::L2CValue::as_integer(aLStack112);
                bVar2 = lib::L2CValue::as_bool(aLStack144);
                app::lua_bind::ControlModule__set_rumble_impl
                          (*ppBVar8,HVar7,iVar3,(bool)(bVar2 & 1),0x50000000);
              }
              else {
                lib::L2CValue::L2CValue(aLStack80,0xcfd1f3108);
                lib::L2CValue::L2CValue(aLStack112,0);
                lib::L2CValue::L2CValue(aLStack144,true);
                HVar7 = lib::L2CValue::as_hash(aLStack80);
                iVar3 = lib::L2CValue::as_integer(aLStack112);
                bVar2 = lib::L2CValue::as_bool(aLStack144);
                app::lua_bind::ControlModule__set_rumble_impl
                          (*ppBVar8,HVar7,iVar3,(bool)(bVar2 & 1),0x50000000);
              }
            }
            else {
              lib::L2CValue::L2CValue(aLStack80,0xb41cc0a88);
              lib::L2CValue::L2CValue(aLStack112,0);
              lib::L2CValue::L2CValue(aLStack144,true);
              HVar7 = lib::L2CValue::as_hash(aLStack80);
              iVar3 = lib::L2CValue::as_integer(aLStack112);
              bVar2 = lib::L2CValue::as_bool(aLStack144);
              app::lua_bind::ControlModule__set_rumble_impl
                        (*ppBVar8,HVar7,iVar3,(bool)(bVar2 & 1),0x50000000);
            }
            lib::L2CValue::_L2CValue(aLStack144);
            lib::L2CValue::_L2CValue(aLStack112);
            pLVar6 = aLStack80;
          }
          lib::L2CValue::_L2CValue(pLVar6);
        }
        FUN_710001e660(aLStack112,this);
        bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((bVar1 & 1U) != 0) {
          FUN_710001dc10(this);
        }
        iVar3 = 0;
        goto LAB_7100020ce8;
      }
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PIKACHU_STATUS_TRANSITION_TERM_ID_SKULL_BASH_WAIT);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      bVar2 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar8,iVar3);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((bVar1 & 1U) == 0) {
        lib::L2CValue::L2CValue
                  (aLStack96,_FIGHTER_PIKACHU_STATUS_TRANSITION_TERM_ID_SKULL_BASH_FALL);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        bVar2 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar8,iVar3);
        lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
        bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((bVar1 & 1U) == 0) goto LAB_7100020f40;
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_FALL);
        lib::L2CValue::L2CValue(aLStack96,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_WAIT);
        lib::L2CValue::L2CValue(aLStack96,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
      }
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack80);
    }
    else {
      lib::L2CValue::L2CValue(aLStack128,false);
      lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x80);
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar5 = lib::L2CValue::operator__(aLStack112,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack96);
      }
      else {
        lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
        lib::L2CValue::L2CValue(aLStack80,false);
        uVar5 = lib::L2CValue::operator__(aLStack144,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar5 & 1) != 0) goto LAB_7100020de8;
      }
    }
  }
  iVar3 = 1;
LAB_7100020ce8:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

