
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterMaster::status::SpecialSFrontDash_main_loop(L2CFighterMaster *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  Hash40 HVar6;
  ulong uVar7;
  float fVar8;
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
  L2CValue aLStack80 [16];
  
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar4 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack96);
LAB_7100030910:
    lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((bVar2 & 1U) == 0) {
      FUN_71000315b0(aLStack80,this);
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((bVar2 & 1U) == 0) {
        bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((bVar2 & 1U) == 0) {
          lib::L2CValue::L2CValue(aLStack240,0x145bb51d9a);
          lib::L2CValue::L2CValue(aLStack256,0x1829c5f051);
          lib::L2CValue::L2CValue(aLStack272,true);
          lib::L2CValue::L2CValue(aLStack304,aLStack240);
          lib::L2CValue::L2CValue(aLStack320,aLStack256);
          lib::L2CValue::L2CValue(aLStack336,aLStack272);
          lua2cpp::L2CFighterCommon::sub_change_motion_by_situation
                    (this,(L2CValue)0xd0,(L2CValue)0xc0,(L2CValue)0xb0);
          lib::L2CValue::_L2CValue(aLStack336);
          lib::L2CValue::_L2CValue(aLStack320);
          lib::L2CValue::_L2CValue(aLStack304);
          lib::L2CValue::L2CValue(aLStack80,true);
          uVar4 = lib::L2CValue::operator__(aLStack288,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar4 & 1) != 0) {
            pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
            lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
            uVar4 = lib::L2CValue::operator__(pLVar5,aLStack80);
            lib::L2CValue::_L2CValue(aLStack80);
            if ((uVar4 & 1) != 0) {
              lib::L2CValue::L2CValue(aLStack80,0x139538a2ac);
              HVar6 = lib::L2CValue::as_hash(aLStack80);
              app::lua_bind::SoundModule__play_landing_se_impl(this->moduleAccessor,HVar6);
              lib::L2CValue::_L2CValue(aLStack80);
            }
          }
          lib::L2CValue::L2CValue(aLStack368,true);
          lua2cpp::L2CFighterCommon::sub_set_ground_correct_by_situation(this,(L2CValue)0x90);
          lib::L2CValue::_L2CValue(aLStack352);
          lib::L2CValue::_L2CValue(aLStack368);
          lib::L2CValue::L2CValue(aLStack192,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
          lib::L2CValue::L2CValue(aLStack208,_FIGHTER_KINETIC_TYPE_AIR_STOP);
          lua2cpp::L2CFighterCommon::sub_change_kinetic_type_by_situation
                    (this,(L2CValue)0x40,(L2CValue)0x30);
          lib::L2CValue::_L2CValue(aLStack208);
          lib::L2CValue::_L2CValue(aLStack192);
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MASTER_STATUS_SPECIAL_S_FLAG_SPEED_UP_CHANGED)
          ;
          iVar3 = lib::L2CValue::as_integer(aLStack112);
          bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
          lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
          lib::L2CValue::L2CValue(aLStack80,false);
          uVar4 = lib::L2CValue::operator__(aLStack96,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack112);
          if ((uVar4 & 1) == 0) {
            lib::L2CValue::L2CValue
                      (aLStack112,_FIGHTER_MASTER_STATUS_SPECIAL_S_FLAG_SPEED_DOWN_CHANGED);
            iVar3 = lib::L2CValue::as_integer(aLStack112);
            bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
            lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
            lib::L2CValue::L2CValue(aLStack80,false);
            uVar4 = lib::L2CValue::operator__(aLStack96,aLStack80);
            lib::L2CValue::_L2CValue(aLStack80);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::_L2CValue(aLStack112);
            if ((uVar4 & 1) == 0) {
              lib::L2CValue::L2CValue
                        (aLStack112,
                         _FIGHTER_MASTER_STATUS_SPECIAL_S_FLAG_SPEED_CHANGE_ATK_END_CHANGED);
              iVar3 = lib::L2CValue::as_integer(aLStack112);
              bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
              lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
              lib::L2CValue::L2CValue(aLStack80,false);
              uVar4 = lib::L2CValue::operator__(aLStack96,aLStack80);
              lib::L2CValue::_L2CValue(aLStack80);
              lib::L2CValue::_L2CValue(aLStack96);
              lib::L2CValue::_L2CValue(aLStack112);
              if ((uVar4 & 1) == 0) {
                lib::L2CValue::L2CValue
                          (aLStack112,_FIGHTER_MASTER_STATUS_SPECIAL_S_FLAG_SPEED_CONTROL_CHANGED);
                iVar3 = lib::L2CValue::as_integer(aLStack112);
                bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
                lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
                lib::L2CValue::L2CValue(aLStack80,false);
                uVar4 = lib::L2CValue::operator__(aLStack96,aLStack80);
                lib::L2CValue::_L2CValue(aLStack80);
                lib::L2CValue::_L2CValue(aLStack96);
                lib::L2CValue::_L2CValue(aLStack112);
                if ((uVar4 & 1) == 0) {
                  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack176);
                  if ((bVar2 & 1U) != 0) {
                    FUN_7100032610(this);
                  }
                }
                else {
                  lib::L2CValue::L2CValue
                            (aLStack112,_FIGHTER_MASTER_STATUS_SPECIAL_S_FLAG_SPEED_CONTROL_REQUEST)
                  ;
                  iVar3 = lib::L2CValue::as_integer(aLStack112);
                  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
                  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
                  lib::L2CValue::L2CValue(aLStack80,false);
                  uVar4 = lib::L2CValue::operator__(aLStack96,aLStack80);
                  lib::L2CValue::_L2CValue(aLStack80);
                  lib::L2CValue::_L2CValue(aLStack96);
                  lib::L2CValue::_L2CValue(aLStack112);
                  if ((uVar4 & 1) == 0) {
                    FUN_71000334f0(this);
                  }
                  else {
                    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack176);
                    if ((bVar2 & 1U) != 0) {
                      FUN_7100032610(this);
                    }
                  }
                }
              }
              else {
                lib::L2CValue::L2CValue
                          (aLStack112,
                           _FIGHTER_MASTER_STATUS_SPECIAL_S_FLAG_SPEED_CHANGE_ATK_END_REQUEST);
                iVar3 = lib::L2CValue::as_integer(aLStack112);
                bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
                lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
                lib::L2CValue::L2CValue(aLStack80,false);
                uVar4 = lib::L2CValue::operator__(aLStack96,aLStack80);
                lib::L2CValue::_L2CValue(aLStack80);
                lib::L2CValue::_L2CValue(aLStack96);
                lib::L2CValue::_L2CValue(aLStack112);
                if ((uVar4 & 1) == 0) {
                  FUN_7100032060(this);
                }
                else {
                  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack176);
                  if ((bVar2 & 1U) != 0) {
                    FUN_7100031d80(this);
                  }
                }
              }
            }
            else {
              lib::L2CValue::L2CValue
                        (aLStack112,_FIGHTER_MASTER_STATUS_SPECIAL_S_FLAG_SPEED_DOWN_REQUEST);
              iVar3 = lib::L2CValue::as_integer(aLStack112);
              bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
              lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
              lib::L2CValue::L2CValue(aLStack80,false);
              uVar4 = lib::L2CValue::operator__(aLStack96,aLStack80);
              lib::L2CValue::_L2CValue(aLStack80);
              lib::L2CValue::_L2CValue(aLStack96);
              lib::L2CValue::_L2CValue(aLStack112);
              if ((uVar4 & 1) == 0) {
                lib::L2CValue::L2CValue
                          (aLStack80,_FIGHTER_MASTER_STATUS_SPECIAL_S_FLAG_SPEED_DOWN_CHANGED);
                iVar3 = lib::L2CValue::as_integer(aLStack80);
                app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
                lib::L2CValue::_L2CValue(aLStack80);
                FUN_7100031d80(this);
              }
              else {
                bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack176);
                if ((bVar2 & 1U) != 0) {
                  FUN_71000318b0(this);
                }
              }
            }
          }
          else {
            lib::L2CValue::L2CValue
                      (aLStack112,_FIGHTER_MASTER_STATUS_SPECIAL_S_FLAG_SPEED_UP_REQUEST);
            iVar3 = lib::L2CValue::as_integer(aLStack112);
            bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
            lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
            lib::L2CValue::L2CValue(aLStack80,false);
            uVar4 = lib::L2CValue::operator__(aLStack96,aLStack80);
            lib::L2CValue::_L2CValue(aLStack80);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::_L2CValue(aLStack112);
            if ((uVar4 & 1) == 0) {
              lib::L2CValue::L2CValue(aLStack96,0.0);
              fVar8 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
              lib::L2CValue::L2CValue(aLStack80,fVar8);
              lib::L2CValue::operator_(aLStack96,aLStack80);
              lib::L2CValue::_L2CValue(aLStack80);
              lib::L2CValue::L2CValue(aLStack80,0xfea97fe73);
              lib::L2CValue::L2CValue(aLStack128,0xc7cbfe735);
              uVar4 = lib::L2CValue::as_integer(aLStack80);
              uVar7 = lib::L2CValue::as_integer(aLStack128);
              fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                       (this->moduleAccessor,uVar4,uVar7);
              lib::L2CValue::L2CValue(aLStack112,fVar8);
              lib::L2CValue::_L2CValue(aLStack128);
              lib::L2CValue::_L2CValue(aLStack80);
              lib::L2CValue::operator_(aLStack112,aLStack96);
              pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
              lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
              uVar4 = lib::L2CValue::operator__(pLVar5,aLStack80);
              lib::L2CValue::_L2CValue(aLStack80);
              if ((uVar4 & 1) == 0) {
                lib::L2CValue::L2CValue(aLStack144,0xfea97fe73);
                lib::L2CValue::L2CValue(aLStack160,0x1471b51ac6);
                uVar4 = lib::L2CValue::as_integer(aLStack144);
                uVar7 = lib::L2CValue::as_integer(aLStack160);
                fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                         (this->moduleAccessor,uVar4,uVar7);
                lib::L2CValue::L2CValue(aLStack80,fVar8);
                lib::L2CValue::_L2CValue(aLStack160);
                lib::L2CValue::_L2CValue(aLStack144);
                lib::L2CValue::operator_(aLStack128,aLStack80);
                lib::L2CValue::operator_(aLStack128,aLStack144);
                lib::L2CValue::_L2CValue(aLStack144);
                lib::L2CValue::L2CValue(aLStack144,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
                lib::L2CValue::L2CValue(aLStack160,0);
                lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
                lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
                lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
                app::sv_kinetic_energy::set_speed(this->luaStateAgent);
                lib::L2CValue::_L2CValue(aLStack160);
                lib::L2CValue::_L2CValue(aLStack144);
                lib::L2CValue::_L2CValue(aLStack80);
              }
              lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_STOP);
              lib::L2CValue::L2CValue(aLStack144,0);
              lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
              lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
              lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
              lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
              app::sv_kinetic_energy::set_speed(this->luaStateAgent);
              lib::L2CValue::_L2CValue(aLStack144);
              lib::L2CValue::_L2CValue(aLStack80);
              lib::L2CValue::L2CValue
                        (aLStack80,_FIGHTER_MASTER_STATUS_SPECIAL_S_FLAG_SPEED_UP_CHANGED);
              iVar3 = lib::L2CValue::as_integer(aLStack80);
              app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
              lib::L2CValue::_L2CValue(aLStack80);
              FUN_71000318b0(this);
              lib::L2CValue::_L2CValue(aLStack128);
              lib::L2CValue::_L2CValue(aLStack112);
              lib::L2CValue::_L2CValue(aLStack96);
            }
            else {
              lib::L2CValue::L2CValue(aLStack80,0xfea97fe73);
              lua2cpp::L2CFighterCommon::sub_set_special_start_inherit_common_kinetic_setting
                        (this,(L2CValue)0xb0);
              lib::L2CValue::_L2CValue(aLStack80);
            }
          }
          lib::L2CValue::_L2CValue(aLStack176);
          lib::L2CValue::L2CValue((L2CValue *)return_value,0);
          lib::L2CValue::_L2CValue(aLStack288);
          lib::L2CValue::_L2CValue(aLStack272);
          lib::L2CValue::_L2CValue(aLStack256);
          lib::L2CValue::_L2CValue(aLStack240);
          return;
        }
        pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
        lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
        uVar4 = lib::L2CValue::operator__(pLVar5,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar4 & 1) == 0) {
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
      iVar3 = 1;
      goto LAB_7100030ce0;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack224,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x20);
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar4 = lib::L2CValue::operator__(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack96);
    }
    else {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar4 = lib::L2CValue::operator__(aLStack128,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar4 & 1) != 0) goto LAB_7100030910;
    }
  }
  iVar3 = 0;
LAB_7100030ce0:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

