
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterRyu::status::SpecialSEnd_main_loop(L2CFighterRyu *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  GroundCorrectKind GVar3;
  int iVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  long lVar7;
  Hash40 HVar8;
  ulong uVar9;
  L2CValue *pLVar10;
  BattleObjectModuleAccessor **ppBVar11;
  float fVar12;
  float fVar13;
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
  
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((bVar1 & 1U) == 0) {
    ppBVar11 = &this->moduleAccessor;
    bVar2 = app::lua_bind::CancelModule__is_enable_cancel_impl(*ppBVar11);
    lib::L2CValue::L2CValue(aLStack128,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue(aLStack112,true);
    uVar5 = lib::L2CValue::operator__(aLStack128,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack128);
LAB_7100049abc:
      bVar2 = app::lua_bind::StatusModule__is_changing_impl(*ppBVar11);
      lib::L2CValue::L2CValue(aLStack128,(bool)(bVar2 & 1));
      lib::L2CValue::L2CValue(aLStack112,true);
      uVar5 = lib::L2CValue::operator__(aLStack128,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar5 & 1) == 0) {
        pLVar10 = &this->globalTable;
        pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar10,0x17);
        lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
        uVar5 = lib::L2CValue::operator__(pLVar6,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar5 & 1) != 0) {
          pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar10,0x16);
          lib::L2CValue::L2CValue(aLStack112,SITUATION_KIND_AIR);
          uVar5 = lib::L2CValue::operator__(pLVar6,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          if ((uVar5 & 1) != 0) {
            lib::L2CValue::_L2CValue(aLStack128);
            goto LAB_7100049b04;
          }
        }
        pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar10,0x17);
        lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
        uVar5 = lib::L2CValue::operator__(pLVar6,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar5 & 1) != 0) goto LAB_710004a57c;
        pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar10,0x16);
        lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
        uVar5 = lib::L2CValue::operator__(pLVar6,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack128);
        if ((uVar5 & 1) != 0) goto LAB_7100049b04;
      }
      else {
        lib::L2CValue::_L2CValue(aLStack128);
LAB_7100049b04:
        lib::L2CValue::L2CValue(aLStack128,0);
        pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
        lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
        uVar5 = lib::L2CValue::operator__(pLVar6,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack112,GROUND_CORRECT_KIND_AIR);
          GVar3 = lib::L2CValue::as_integer(aLStack112);
          app::lua_bind::GroundModule__correct_impl(*ppBVar11,GVar3);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack144,_FIGHTER_RYU_STATUS_WORK_ID_SPECIAL_S_INT_MOTION_AIR);
          iVar4 = lib::L2CValue::as_integer(aLStack144);
          lVar7 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar11,iVar4);
          lib::L2CValue::L2CValue(aLStack112,lVar7);
          lib::L2CValue::operator_(aLStack128,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::L2CValue
                    (aLStack144,_FIGHTER_RYU_STATUS_WORK_ID_SPECIAL_COMMON_FLAG_MOTION_FIRST);
          iVar4 = lib::L2CValue::as_integer(aLStack144);
          bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar11,iVar4);
          lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
          bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack144);
          if ((bVar1 & 1U) == 0) {
            lib::L2CValue::L2CValue(aLStack112,0.0);
            lib::L2CValue::L2CValue(aLStack144,1.0);
            lib::L2CValue::L2CValue(aLStack160,false);
            HVar8 = lib::L2CValue::as_hash(aLStack128);
            fVar13 = (float)lib::L2CValue::as_number(aLStack112);
            fVar12 = (float)lib::L2CValue::as_number(aLStack144);
            bVar2 = lib::L2CValue::as_bool(aLStack160);
            app::lua_bind::MotionModule__change_motion_impl
                      (*ppBVar11,HVar8,fVar13,fVar12,(bool)(bVar2 & 1),0.0,false,false);
            lib::L2CValue::_L2CValue(aLStack160);
            lib::L2CValue::_L2CValue(aLStack144);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::L2CValue
                      (aLStack112,_FIGHTER_RYU_STATUS_WORK_ID_SPECIAL_COMMON_FLAG_MOTION_FIRST);
            iVar4 = lib::L2CValue::as_integer(aLStack112);
            app::lua_bind::WorkModule__on_flag_impl(*ppBVar11,iVar4);
            lib::L2CValue::_L2CValue(aLStack112);
          }
          else {
            HVar8 = lib::L2CValue::as_hash(aLStack128);
            app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                      (*ppBVar11,HVar8,-1.0,1.0,0.0,false,false);
          }
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_TYPE_AIR_STOP);
          iVar4 = lib::L2CValue::as_integer(aLStack112);
          app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar11,iVar4);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_ENERGY_ID_STOP);
          lib::L2CValue::L2CValue(aLStack160,0xfea97fe73);
          lib::L2CValue::L2CValue(aLStack176,0xfc6a9b0eb);
          uVar5 = lib::L2CValue::as_integer(aLStack160);
          uVar9 = lib::L2CValue::as_integer(aLStack176);
          fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar5,uVar9);
          lib::L2CValue::L2CValue(aLStack144,fVar13);
          lib::L2CValue::L2CValue(aLStack192,0.0);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
          app::sv_kinetic_energy::set_brake(this->luaStateAgent);
          lib::L2CValue::_L2CValue(aLStack192);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack176);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack112,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
          lib::L2CValue::L2CValue(aLStack160,0xfea97fe73);
          lib::L2CValue::L2CValue(aLStack176,0x13c80bde2d);
          uVar5 = lib::L2CValue::as_integer(aLStack160);
          uVar9 = lib::L2CValue::as_integer(aLStack176);
          fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar5,uVar9);
          lib::L2CValue::L2CValue(aLStack144,fVar13);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
          app::sv_kinetic_energy::set_limit_speed(this->luaStateAgent);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack176);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack112,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
          lib::L2CValue::L2CValue(aLStack176,0xfea97fe73);
          lib::L2CValue::L2CValue(aLStack192,0xfab8eb1a6);
          uVar5 = lib::L2CValue::as_integer(aLStack176);
          uVar9 = lib::L2CValue::as_integer(aLStack192);
          fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar5,uVar9);
          lib::L2CValue::L2CValue(aLStack160,fVar13);
          lib::L2CValue::operator_(aLStack160);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
          app::sv_kinetic_energy::set_accel(this->luaStateAgent);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack192);
          pLVar6 = aLStack176;
        }
        else {
          lib::L2CValue::L2CValue(aLStack112,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
          GVar3 = lib::L2CValue::as_integer(aLStack112);
          app::lua_bind::GroundModule__correct_impl(*ppBVar11,GVar3);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::L2CValue
                    (aLStack144,_FIGHTER_RYU_STATUS_WORK_ID_SPECIAL_S_INT_MOTION_GROUND);
          iVar4 = lib::L2CValue::as_integer(aLStack144);
          lVar7 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar11,iVar4);
          lib::L2CValue::L2CValue(aLStack112,lVar7);
          lib::L2CValue::operator_(aLStack128,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::L2CValue
                    (aLStack144,_FIGHTER_RYU_STATUS_WORK_ID_SPECIAL_COMMON_FLAG_MOTION_FIRST);
          iVar4 = lib::L2CValue::as_integer(aLStack144);
          bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar11,iVar4);
          lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
          bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack144);
          if ((bVar1 & 1U) == 0) {
            lib::L2CValue::L2CValue(aLStack112,0.0);
            lib::L2CValue::L2CValue(aLStack144,1.0);
            lib::L2CValue::L2CValue(aLStack160,false);
            HVar8 = lib::L2CValue::as_hash(aLStack128);
            fVar13 = (float)lib::L2CValue::as_number(aLStack112);
            fVar12 = (float)lib::L2CValue::as_number(aLStack144);
            bVar2 = lib::L2CValue::as_bool(aLStack160);
            app::lua_bind::MotionModule__change_motion_impl
                      (*ppBVar11,HVar8,fVar13,fVar12,(bool)(bVar2 & 1),0.0,false,false);
            lib::L2CValue::_L2CValue(aLStack160);
            lib::L2CValue::_L2CValue(aLStack144);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::L2CValue
                      (aLStack112,_FIGHTER_RYU_STATUS_WORK_ID_SPECIAL_COMMON_FLAG_MOTION_FIRST);
            iVar4 = lib::L2CValue::as_integer(aLStack112);
            app::lua_bind::WorkModule__on_flag_impl(*ppBVar11,iVar4);
            lib::L2CValue::_L2CValue(aLStack112);
          }
          else {
            HVar8 = lib::L2CValue::as_hash(aLStack128);
            app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                      (*ppBVar11,HVar8,-1.0,1.0,0.0,false,false);
          }
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
          iVar4 = lib::L2CValue::as_integer(aLStack112);
          app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar11,iVar4);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_ENERGY_ID_STOP);
          lib::L2CValue::L2CValue(aLStack160,0xfea97fe73);
          lib::L2CValue::L2CValue(aLStack176,0xb37f4e030);
          uVar5 = lib::L2CValue::as_integer(aLStack160);
          uVar9 = lib::L2CValue::as_integer(aLStack176);
          fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar5,uVar9);
          lib::L2CValue::L2CValue(aLStack144,fVar13);
          lib::L2CValue::L2CValue(aLStack192,0.0);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
          app::sv_kinetic_energy::set_brake(this->luaStateAgent);
          lib::L2CValue::_L2CValue(aLStack192);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack176);
          pLVar6 = aLStack160;
        }
        lib::L2CValue::_L2CValue(pLVar6);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack144,1.0);
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_RYU_STATUS_WORK_ID_SPECIAL_COMMON_INT_STRENGTH);
        iVar4 = lib::L2CValue::as_integer(aLStack112);
        iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar11,iVar4);
        lib::L2CValue::L2CValue(aLStack160,iVar4);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_RYU_STRENGTH_W);
        uVar5 = lib::L2CValue::operator__(aLStack160,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_RYU_STRENGTH_M);
          uVar5 = lib::L2CValue::operator__(aLStack160,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          if ((uVar5 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack176,aLStack128);
            lib::L2CValue::L2CValue(aLStack208,0xfea97fe73);
            lib::L2CValue::L2CValue(aLStack224,0x14836b876d);
            uVar5 = lib::L2CValue::as_integer(aLStack208);
            uVar9 = lib::L2CValue::as_integer(aLStack224);
            iVar4 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar11,uVar5,uVar9);
            lib::L2CValue::L2CValue(aLStack192,iVar4);
            FUN_710004ab10(aLStack112,this,aLStack176,aLStack192);
            lib::L2CValue::operator_(aLStack144,aLStack112);
          }
          else {
            lib::L2CValue::L2CValue(aLStack176,aLStack128);
            lib::L2CValue::L2CValue(aLStack208,0xfea97fe73);
            lib::L2CValue::L2CValue(aLStack224,0x147964ba0e);
            uVar5 = lib::L2CValue::as_integer(aLStack208);
            uVar9 = lib::L2CValue::as_integer(aLStack224);
            iVar4 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar11,uVar5,uVar9);
            lib::L2CValue::L2CValue(aLStack192,iVar4);
            FUN_710004ab10(aLStack112,this,aLStack176,aLStack192);
            lib::L2CValue::operator_(aLStack144,aLStack112);
          }
        }
        else {
          lib::L2CValue::L2CValue(aLStack176,aLStack128);
          lib::L2CValue::L2CValue(aLStack208,0xfea97fe73);
          lib::L2CValue::L2CValue(aLStack224,0x1484064374);
          uVar5 = lib::L2CValue::as_integer(aLStack208);
          uVar9 = lib::L2CValue::as_integer(aLStack224);
          iVar4 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar11,uVar5,uVar9);
          lib::L2CValue::L2CValue(aLStack192,iVar4);
          FUN_710004ab10(aLStack112,this,aLStack176,aLStack192);
          lib::L2CValue::operator_(aLStack144,aLStack112);
        }
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack224);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::_L2CValue(aLStack176);
        fVar13 = (float)lib::L2CValue::as_number(aLStack144);
        app::lua_bind::MotionModule__set_rate_impl(*ppBVar11,fVar13);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack144);
LAB_710004a57c:
        lib::L2CValue::_L2CValue(aLStack128);
      }
      pLVar10 = &this->globalTable;
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar10,0x17);
      lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
      uVar5 = lib::L2CValue::operator__(pLVar6,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar5 & 1) != 0) {
        pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar10,0x16);
        lib::L2CValue::L2CValue(aLStack112,SITUATION_KIND_AIR);
        uVar5 = lib::L2CValue::operator__(pLVar6,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack256,_FIGHTER_STATUS_KIND_FALL);
          lib::L2CValue::L2CValue(aLStack272,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x0,(L2CValue)0xf0);
          lib::L2CValue::_L2CValue(aLStack272);
          lib::L2CValue::_L2CValue(aLStack256);
          goto LAB_71000499ac;
        }
      }
      bVar2 = app::lua_bind::MotionModule__is_end_impl(*ppBVar11);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((bVar1 & 1U) == 0) {
LAB_710004a74c:
        iVar4 = 0;
        goto LAB_71000499b4;
      }
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar10,0x16);
      lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
      uVar5 = lib::L2CValue::operator__(pLVar6,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar5 & 1) == 0) {
        pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar10,0x16);
        lib::L2CValue::L2CValue(aLStack112,SITUATION_KIND_AIR);
        uVar5 = lib::L2CValue::operator__(pLVar6,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar5 & 1) == 0) goto LAB_710004a74c;
        lib::L2CValue::L2CValue(aLStack320,_FIGHTER_STATUS_KIND_FALL);
        lib::L2CValue::L2CValue(aLStack336,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
        lib::L2CValue::_L2CValue(aLStack336);
        lib::L2CValue::_L2CValue(aLStack320);
      }
      else {
        lib::L2CValue::L2CValue(aLStack288,_FIGHTER_STATUS_KIND_WAIT);
        lib::L2CValue::L2CValue(aLStack304,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xe0,(L2CValue)0xd0);
        lib::L2CValue::_L2CValue(aLStack304);
        lib::L2CValue::_L2CValue(aLStack288);
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack240,false);
      lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x10);
      lib::L2CValue::L2CValue(aLStack112,false);
      uVar5 = lib::L2CValue::operator__(aLStack144,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack240);
        lib::L2CValue::_L2CValue(aLStack128);
      }
      else {
        lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
        lib::L2CValue::L2CValue(aLStack112,false);
        uVar5 = lib::L2CValue::operator__(aLStack160,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack240);
        lib::L2CValue::_L2CValue(aLStack128);
        if ((uVar5 & 1) != 0) goto LAB_7100049abc;
      }
    }
  }
LAB_71000499ac:
  iVar4 = 1;
LAB_71000499b4:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar4);
  return;
}

