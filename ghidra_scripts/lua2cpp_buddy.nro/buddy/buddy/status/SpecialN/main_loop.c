
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBuddy::status::SpecialN_main_loop(L2CFighterBuddy *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  GroundCorrectKind GVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  ulong uVar8;
  Hash40 HVar9;
  BattleObjectModuleAccessor **ppBVar10;
  float fVar11;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar1 & 1U) == 0) {
    ppBVar10 = &this->moduleAccessor;
    bVar2 = app::lua_bind::CancelModule__is_enable_cancel_impl(*ppBVar10);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar6 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack96);
LAB_710002f4f0:
      lib::L2CValue::L2CValue(aLStack96,0xf899192aa);
      lua2cpp::L2CFighterCommon::sub_exec_special_start_common_kinetic_setting(this,(L2CValue)0xa0);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack112,true);
      FUN_7100026bf0(aLStack80,this,aLStack112);
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((bVar1 & 1U) != 0) {
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
        lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
        uVar6 = lib::L2CValue::operator__(pLVar7,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack160,0xf899192aa);
          lib::L2CValue::L2CValue(aLStack176,0x11458889e4);
          uVar6 = lib::L2CValue::as_integer(aLStack160);
          uVar8 = lib::L2CValue::as_integer(aLStack176);
          fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar6,uVar8);
          lib::L2CValue::L2CValue(aLStack80,fVar11);
          fVar11 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar10);
          lib::L2CValue::L2CValue(aLStack192,fVar11);
          lib::L2CValue::operator_(aLStack80,aLStack192);
          lib::L2CValue::_L2CValue(aLStack192);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack176);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
          lib::L2CValue::L2CValue(aLStack160,0.0);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
          app::sv_kinetic_energy::add_speed(this->luaStateAgent);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack176,_FIGHTER_BUDDY_INSTANCE_WORK_ID_FLAG_SPECIAL_N_LANDING)
          ;
          iVar3 = lib::L2CValue::as_integer(aLStack176);
          bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
          lib::L2CValue::L2CValue(aLStack160,(bool)(bVar2 & 1));
          lib::L2CValue::L2CValue(aLStack80,false);
          uVar6 = lib::L2CValue::operator__(aLStack160,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack176);
          if ((uVar6 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack160,0xf899192aa);
            lib::L2CValue::L2CValue(aLStack176,0x11e3ff8250);
            uVar6 = lib::L2CValue::as_integer(aLStack160);
            uVar8 = lib::L2CValue::as_integer(aLStack176);
            fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar6,uVar8);
            lib::L2CValue::L2CValue(aLStack80,fVar11);
            lib::L2CValue::_L2CValue(aLStack176);
            lib::L2CValue::_L2CValue(aLStack160);
            lib::L2CValue::L2CValue(aLStack160,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
            lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
            app::sv_kinetic_energy::add_speed(this->luaStateAgent);
            lib::L2CValue::_L2CValue(aLStack160);
            lib::L2CValue::_L2CValue(aLStack80);
          }
          lib::L2CValue::_L2CValue(aLStack144);
        }
      }
      bVar2 = app::lua_bind::MotionModule__is_end_impl(*ppBVar10);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((bVar1 & 1U) == 0) {
LAB_710002f8bc:
        lib::L2CValue::L2CValue(aLStack144,_FIGHTER_BUDDY_STATUS_SPECIAL_N_FLAG_ENABLE_SHOOT);
        iVar3 = lib::L2CValue::as_integer(aLStack144);
        bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
        lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
        bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack144);
        if ((bVar1 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BUDDY_STATUS_SPECIAL_N_FLAG_ENABLE_SHOOT);
          iVar3 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::WorkModule__off_flag_impl(*ppBVar10,iVar3);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BUDDY_STATUS_SPECIAL_N_FLAG_BUTTON_ON_CHECK);
          iVar3 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::WorkModule__on_flag_impl(*ppBVar10,iVar3);
          lib::L2CValue::_L2CValue(aLStack80);
          pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xe);
          lib::L2CValue::L2CValue
                    (aLStack80,_FIGHTER_BUDDY_STATUS_SPECIAL_N_WORK_INT_BUTTON_ON_START_FRAME);
          iVar3 = lib::L2CValue::as_integer(pLVar7);
          iVar4 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::WorkModule__set_int_impl(*ppBVar10,iVar3,iVar4);
          lib::L2CValue::_L2CValue(aLStack80);
        }
        lib::L2CValue::L2CValue(aLStack160,_FIGHTER_BUDDY_STATUS_SPECIAL_N_FLAG_BUTTON_ON_CHECK);
        iVar3 = lib::L2CValue::as_integer(aLStack160);
        bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
        lib::L2CValue::L2CValue(aLStack144,(bool)(bVar2 & 1));
        bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack144);
        if ((bVar1 & 1U) == 0) {
          lib::L2CValue::_L2CValue(aLStack144);
          pLVar7 = aLStack160;
LAB_710002fbf8:
          lib::L2CValue::_L2CValue(pLVar7);
        }
        else {
          lib::L2CValue::L2CValue(aLStack192,_FIGHTER_INSTANCE_WORK_ID_FLAG_ASSIST);
          iVar3 = lib::L2CValue::as_integer(aLStack192);
          bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
          lib::L2CValue::L2CValue(aLStack176,(bool)(bVar2 & 1));
          lib::L2CValue::L2CValue(aLStack80,false);
          uVar6 = lib::L2CValue::operator__(aLStack176,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack176);
          lib::L2CValue::_L2CValue(aLStack192);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack160);
          if ((uVar6 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack144,CONTROL_PAD_BUTTON_SPECIAL);
            iVar3 = lib::L2CValue::as_integer(aLStack144);
            bVar2 = app::lua_bind::ControlModule__check_button_on_impl(*ppBVar10,iVar3);
            lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
            bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
            lib::L2CValue::_L2CValue(aLStack80);
            lib::L2CValue::_L2CValue(aLStack144);
            if ((bVar1 & 1U) == 0) {
              lib::L2CValue::L2CValue
                        (aLStack80,_FIGHTER_BUDDY_STATUS_SPECIAL_N_FLAG_BUTTON_ON_CHECK);
              iVar3 = lib::L2CValue::as_integer(aLStack80);
              app::lua_bind::WorkModule__off_flag_impl(*ppBVar10,iVar3);
              pLVar7 = aLStack80;
            }
            else {
              pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xe);
              lib::L2CValue::L2CValue
                        (aLStack160,_FIGHTER_BUDDY_STATUS_SPECIAL_N_WORK_INT_BUTTON_ON_START_FRAME);
              iVar3 = lib::L2CValue::as_integer(aLStack160);
              iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar3);
              lib::L2CValue::L2CValue(aLStack144,iVar3);
              lib::L2CValue::operator_(pLVar7,aLStack144);
              lib::L2CValue::_L2CValue(aLStack144);
              lib::L2CValue::_L2CValue(aLStack160);
              lib::L2CValue::L2CValue(aLStack160,0xf899192aa);
              lib::L2CValue::L2CValue(aLStack176,0x1c5338fe5f);
              uVar6 = lib::L2CValue::as_integer(aLStack160);
              uVar8 = lib::L2CValue::as_integer(aLStack176);
              iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar10,uVar6,uVar8);
              lib::L2CValue::L2CValue(aLStack144,iVar3);
              lib::L2CValue::_L2CValue(aLStack176);
              lib::L2CValue::_L2CValue(aLStack160);
              uVar6 = lib::L2CValue::operator__(aLStack144,aLStack80);
              if ((uVar6 & 1) != 0) {
                lib::L2CValue::L2CValue(aLStack160,_FIGHTER_BUDDY_STATUS_KIND_SPECIAL_N_SHOOT_START)
                ;
                lib::L2CValue::L2CValue(aLStack176,true);
                lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x60,(L2CValue)0x50);
                lib::L2CValue::_L2CValue(aLStack176);
                lib::L2CValue::_L2CValue(aLStack160);
                lib::L2CValue::L2CValue((L2CValue *)return_value,0);
                lib::L2CValue::_L2CValue(aLStack144);
                lib::L2CValue::_L2CValue(aLStack80);
                return;
              }
              lib::L2CValue::_L2CValue(aLStack144);
              pLVar7 = aLStack80;
            }
            goto LAB_710002fbf8;
          }
        }
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x17);
        lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
        uVar6 = lib::L2CValue::operator__(pLVar7,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
        if ((uVar6 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
          uVar6 = lib::L2CValue::operator__(pLVar7,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar6 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
            GVar5 = lib::L2CValue::as_integer(aLStack80);
            app::lua_bind::GroundModule__correct_impl(*ppBVar10,GVar5);
            lib::L2CValue::_L2CValue(aLStack80);
            lib::L2CValue::L2CValue(aLStack80,0x915c5de42);
            HVar9 = lib::L2CValue::as_hash(aLStack80);
            app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                      (*ppBVar10,HVar9,-1.0,1.0,0.0,false,false);
            goto LAB_710002fd64;
          }
        }
        else {
          lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
          uVar6 = lib::L2CValue::operator__(pLVar7,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar6 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_AIR);
            GVar5 = lib::L2CValue::as_integer(aLStack80);
            app::lua_bind::GroundModule__correct_impl(*ppBVar10,GVar5);
            lib::L2CValue::_L2CValue(aLStack80);
            lib::L2CValue::L2CValue(aLStack80,0xd483c0ed2);
            HVar9 = lib::L2CValue::as_hash(aLStack80);
            app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                      (*ppBVar10,HVar9,-1.0,1.0,0.0,false,false);
            goto LAB_710002fd64;
          }
        }
      }
      else {
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
        lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
        uVar6 = lib::L2CValue::operator__(pLVar7,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar6 & 1) == 0) {
          pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
          lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
          uVar6 = lib::L2CValue::operator__(pLVar7,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar6 & 1) == 0) goto LAB_710002f8bc;
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_FALL);
          lib::L2CValue::L2CValue(aLStack144,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x70);
        }
        else {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_WAIT);
          lib::L2CValue::L2CValue(aLStack144,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x70);
        }
        lib::L2CValue::_L2CValue(aLStack144);
LAB_710002fd64:
        lib::L2CValue::_L2CValue(aLStack80);
      }
      iVar3 = 0;
      goto LAB_710002fd74;
    }
    lib::L2CValue::L2CValue(aLStack128,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x80);
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar6 = lib::L2CValue::operator__(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
    }
    else {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar6 = lib::L2CValue::operator__(aLStack144,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar6 & 1) != 0) goto LAB_710002f4f0;
    }
  }
  iVar3 = 1;
LAB_710002fd74:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

