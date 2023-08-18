
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterMaster::status::SpecialSFront_main_loop(L2CFighterMaster *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  Hash40 HVar6;
  ulong uVar7;
  float fVar8;
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
LAB_7100033c70:
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
          lib::L2CValue::L2CValue(aLStack208,0xf5de16694);
          lib::L2CValue::L2CValue(aLStack224,0x135678eb40);
          lib::L2CValue::L2CValue(aLStack240,true);
          lib::L2CValue::L2CValue(aLStack272,aLStack208);
          lib::L2CValue::L2CValue(aLStack288,aLStack224);
          lib::L2CValue::L2CValue(aLStack304,aLStack240);
          lua2cpp::L2CFighterCommon::sub_change_motion_by_situation
                    (this,(L2CValue)0xf0,(L2CValue)0xe0,(L2CValue)0xd0);
          lib::L2CValue::_L2CValue(aLStack304);
          lib::L2CValue::_L2CValue(aLStack288);
          lib::L2CValue::_L2CValue(aLStack272);
          lib::L2CValue::L2CValue(aLStack80,true);
          uVar4 = lib::L2CValue::operator__(aLStack256,aLStack80);
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
          lib::L2CValue::L2CValue(aLStack336,true);
          lua2cpp::L2CFighterCommon::sub_set_ground_correct_by_situation(this,(L2CValue)0xb0);
          lib::L2CValue::_L2CValue(aLStack320);
          lib::L2CValue::_L2CValue(aLStack336);
          lib::L2CValue::L2CValue(aLStack96,false);
          lib::L2CValue::L2CValue(aLStack128,_FIGHTER_MASTER_STATUS_SPECIAL_S_FLAG_SPEED_F_CHANGED);
          iVar3 = lib::L2CValue::as_integer(aLStack128);
          bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
          lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
          lib::L2CValue::L2CValue(aLStack80,false);
          uVar4 = lib::L2CValue::operator__(aLStack112,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack128);
          if ((uVar4 & 1) == 0) {
            lib::L2CValue::L2CValue
                      (aLStack128,_FIGHTER_MASTER_STATUS_SPECIAL_S_FLAG_SPEED_CHANGE_ATK_END_CHANGED
                      );
            iVar3 = lib::L2CValue::as_integer(aLStack128);
            bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
            lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
            lib::L2CValue::L2CValue(aLStack80,false);
            uVar4 = lib::L2CValue::operator__(aLStack112,aLStack80);
            lib::L2CValue::_L2CValue(aLStack80);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::_L2CValue(aLStack128);
            if ((uVar4 & 1) == 0) {
              lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
              lib::L2CValue::L2CValue(aLStack128,_FIGHTER_KINETIC_TYPE_AIR_STOP);
              lua2cpp::L2CFighterCommon::sub_change_kinetic_type_by_situation
                        (this,(L2CValue)0x90,(L2CValue)0x80);
              lib::L2CValue::operator_(aLStack96,aLStack80);
              lib::L2CValue::_L2CValue(aLStack80);
              lib::L2CValue::_L2CValue(aLStack128);
              lib::L2CValue::_L2CValue(aLStack112);
              lib::L2CValue::L2CValue
                        (aLStack160,_FIGHTER_MASTER_STATUS_SPECIAL_S_FLAG_SPEED_CONTROL_CHANGED);
              iVar3 = lib::L2CValue::as_integer(aLStack160);
              bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
              lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
              lib::L2CValue::L2CValue(aLStack80,false);
              uVar4 = lib::L2CValue::operator__(aLStack144,aLStack80);
              lib::L2CValue::_L2CValue(aLStack80);
              lib::L2CValue::_L2CValue(aLStack144);
              lib::L2CValue::_L2CValue(aLStack160);
              if ((uVar4 & 1) == 0) {
                bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
                if ((bVar2 & 1U) != 0) {
                  FUN_7100032610(this);
                }
              }
              else {
                lib::L2CValue::L2CValue
                          (aLStack160,_FIGHTER_MASTER_STATUS_SPECIAL_S_FLAG_SPEED_CONTROL_REQUEST);
                iVar3 = lib::L2CValue::as_integer(aLStack160);
                bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
                lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
                lib::L2CValue::L2CValue(aLStack80,false);
                uVar4 = lib::L2CValue::operator__(aLStack144,aLStack80);
                lib::L2CValue::_L2CValue(aLStack80);
                lib::L2CValue::_L2CValue(aLStack144);
                lib::L2CValue::_L2CValue(aLStack160);
                if ((uVar4 & 1) == 0) {
                  FUN_71000334f0(this);
                }
                else {
                  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
                  if ((bVar2 & 1U) != 0) {
                    FUN_7100032610(this);
                  }
                }
              }
              goto LAB_71000343f4;
            }
            lib::L2CValue::L2CValue
                      (aLStack128,_FIGHTER_MASTER_STATUS_SPECIAL_S_FLAG_SPEED_CHANGE_ATK_END_REQUEST
                      );
            iVar3 = lib::L2CValue::as_integer(aLStack128);
            bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
            lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
            lib::L2CValue::L2CValue(aLStack80,false);
            uVar4 = lib::L2CValue::operator__(aLStack112,aLStack80);
            lib::L2CValue::_L2CValue(aLStack80);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::_L2CValue(aLStack128);
            if ((uVar4 & 1) == 0) {
              FUN_7100032060(this);
              goto LAB_71000343f4;
            }
            lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_ENERGY_ID_STOP);
            lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
            fVar8 = (float)app::sv_kinetic_energy::get_speed_x(this->luaStateAgent);
            lib::L2CValue::L2CValue(aLStack80,fVar8);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::L2CValue(aLStack128,FIGHTER_KINETIC_TYPE_MOTION);
            lib::L2CValue::L2CValue(aLStack144,_FIGHTER_KINETIC_TYPE_MOTION_FALL);
            lua2cpp::L2CFighterCommon::sub_change_kinetic_type_by_situation
                      (this,(L2CValue)0x80,(L2CValue)0x70);
            lib::L2CValue::operator_(aLStack96,aLStack112);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::_L2CValue(aLStack144);
            lib::L2CValue::_L2CValue(aLStack128);
            bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
            if ((bVar2 & 1U) != 0) {
              lib::L2CValue::L2CValue(aLStack112,aLStack80);
              FUN_71000348b0(this,aLStack112);
              goto LAB_710003422c;
            }
          }
          else {
            lib::L2CValue::L2CValue
                      (aLStack128,_FIGHTER_MASTER_STATUS_SPECIAL_S_FLAG_SPEED_F_REQUEST);
            iVar3 = lib::L2CValue::as_integer(aLStack128);
            bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
            lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
            lib::L2CValue::L2CValue(aLStack80,false);
            uVar4 = lib::L2CValue::operator__(aLStack112,aLStack80);
            lib::L2CValue::_L2CValue(aLStack80);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::_L2CValue(aLStack128);
            if ((uVar4 & 1) == 0) {
              pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
              lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
              uVar4 = lib::L2CValue::operator__(pLVar5,aLStack80);
              lib::L2CValue::_L2CValue(aLStack80);
              if ((uVar4 & 1) == 0) {
                lib::L2CValue::L2CValue(aLStack80,0.0);
                lib::L2CValue::L2CValue(aLStack128,0xfea97fe73);
                lib::L2CValue::L2CValue(aLStack144,0x1407cb5bc0);
                uVar4 = lib::L2CValue::as_integer(aLStack128);
                uVar7 = lib::L2CValue::as_integer(aLStack144);
                fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                         (this->moduleAccessor,uVar4,uVar7);
                lib::L2CValue::L2CValue(aLStack112,fVar8);
                lib::L2CValue::operator_(aLStack80,aLStack112);
                lib::L2CValue::_L2CValue(aLStack112);
                lib::L2CValue::_L2CValue(aLStack144);
                lib::L2CValue::_L2CValue(aLStack128);
                lib::L2CValue::L2CValue(aLStack160,0xba18057d9);
                lib::L2CValue::L2CValue(aLStack176,0);
                uVar4 = lib::L2CValue::as_integer(aLStack160);
                uVar7 = lib::L2CValue::as_integer(aLStack176);
                fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                         (this->moduleAccessor,uVar4,uVar7);
                lib::L2CValue::L2CValue(aLStack144,fVar8);
                lib::L2CValue::operator_(aLStack144);
                lib::L2CValue::operator_(aLStack128,aLStack80);
                lib::L2CValue::_L2CValue(aLStack128);
                lib::L2CValue::_L2CValue(aLStack144);
                lib::L2CValue::_L2CValue(aLStack176);
                lib::L2CValue::_L2CValue(aLStack160);
                lib::L2CValue::L2CValue(aLStack128,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
                lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
                lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
                lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
                app::sv_kinetic_energy::set_accel(this->luaStateAgent);
                lib::L2CValue::_L2CValue(aLStack128);
                lib::L2CValue::_L2CValue(aLStack112);
                lib::L2CValue::_L2CValue(aLStack80);
              }
              lib::L2CValue::L2CValue
                        (aLStack80,_FIGHTER_MASTER_STATUS_SPECIAL_S_FLAG_SPEED_F_CHANGED);
              iVar3 = lib::L2CValue::as_integer(aLStack80);
              app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
            }
            else {
              lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_ENERGY_ID_STOP);
              lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
              lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
              fVar8 = (float)app::sv_kinetic_energy::get_speed_x(this->luaStateAgent);
              lib::L2CValue::L2CValue(aLStack80,fVar8);
              lib::L2CValue::_L2CValue(aLStack112);
              lib::L2CValue::L2CValue(aLStack128,FIGHTER_KINETIC_TYPE_MOTION);
              lib::L2CValue::L2CValue(aLStack144,_FIGHTER_KINETIC_TYPE_MOTION_FALL);
              lua2cpp::L2CFighterCommon::sub_change_kinetic_type_by_situation
                        (this,(L2CValue)0x80,(L2CValue)0x70);
              lib::L2CValue::operator_(aLStack96,aLStack112);
              lib::L2CValue::_L2CValue(aLStack112);
              lib::L2CValue::_L2CValue(aLStack144);
              lib::L2CValue::_L2CValue(aLStack128);
              bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
              if ((bVar2 & 1U) != 0) {
                lib::L2CValue::L2CValue(aLStack112,aLStack80);
                FUN_71000348b0(this,aLStack112);
LAB_710003422c:
                lib::L2CValue::_L2CValue(aLStack112);
              }
            }
          }
          lib::L2CValue::_L2CValue(aLStack80);
LAB_71000343f4:
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue((L2CValue *)return_value,0);
          lib::L2CValue::_L2CValue(aLStack256);
          lib::L2CValue::_L2CValue(aLStack240);
          lib::L2CValue::_L2CValue(aLStack224);
          lib::L2CValue::_L2CValue(aLStack208);
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
      goto LAB_7100034094;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack192,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x40);
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar4 = lib::L2CValue::operator__(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack96);
    }
    else {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar4 = lib::L2CValue::operator__(aLStack128,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar4 & 1) != 0) goto LAB_7100033c70;
    }
  }
  iVar3 = 0;
LAB_7100034094:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

