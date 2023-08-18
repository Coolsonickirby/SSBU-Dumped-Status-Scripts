
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterIke::status::SpecialSEnd_exec(L2CFighterIke *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  Hash40 HVar7;
  L2CValue *pLVar8;
  ulong uVar9;
  BattleObjectModuleAccessor *pBVar10;
  float fVar11;
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
  
  pLVar8 = aLStack272;
  this_00 = &this->globalTable;
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,9);
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_SPECIAL_S);
  uVar6 = lib::L2CValue::operator__(pLVar5,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar6 & 1) == 0) {
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,9);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_IKE_STATUS_KIND_SPECIAL_S_HOLD);
    uVar6 = lib::L2CValue::operator__(pLVar5,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar6 & 1) != 0) goto LAB_7100008990;
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,9);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_IKE_STATUS_KIND_SPECIAL_S_DASH);
    uVar6 = lib::L2CValue::operator__(pLVar5,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar6 & 1) == 0) {
      pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,9);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_IKE_STATUS_KIND_SPECIAL_S_ATTACK);
      uVar6 = lib::L2CValue::operator__(pLVar8,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar6 & 1) == 0) {
        pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,9);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_IKE_STATUS_KIND_SPECIAL_S_END);
        uVar6 = lib::L2CValue::operator__(pLVar8,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar6 & 1) == 0) goto LAB_710000961c;
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        fVar11 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl
                                  (this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack96,fVar11);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        fVar11 = (float)app::lua_bind::KineticModule__get_sum_speed_y_impl
                                  (this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack112,fVar11);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack128,_FIGHTER_IKE_STATUS_SPECIAL_S_FLAG_ATTACK_END);
        iVar3 = lib::L2CValue::as_integer(aLStack128);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack128);
        if ((bVar2 & 1U) != 0) {
          pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
          lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
          uVar6 = lib::L2CValue::operator__(pLVar8,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar6 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack144,0xfea97fe73);
            lib::L2CValue::L2CValue(aLStack160,0x1e0f06c380);
            uVar6 = lib::L2CValue::as_integer(aLStack144);
            uVar9 = lib::L2CValue::as_integer(aLStack160);
            fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                      (this->moduleAccessor,uVar6,uVar9);
            lib::L2CValue::L2CValue(aLStack128,fVar11);
            lib::L2CValue::operator_(aLStack96,aLStack128);
            lib::L2CValue::operator_(aLStack96,aLStack80);
          }
          else {
            lib::L2CValue::L2CValue(aLStack144,0xfea97fe73);
            lib::L2CValue::L2CValue(aLStack160,0x1b0ebbcadb);
            uVar6 = lib::L2CValue::as_integer(aLStack144);
            uVar9 = lib::L2CValue::as_integer(aLStack160);
            fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                      (this->moduleAccessor,uVar6,uVar9);
            lib::L2CValue::L2CValue(aLStack128,fVar11);
            lib::L2CValue::operator_(aLStack96,aLStack128);
            lib::L2CValue::operator_(aLStack96,aLStack80);
          }
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_STOP);
          lib::L2CValue::L2CValue(aLStack128,0.0);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
          app::sv_kinetic_energy::set_speed(this->luaStateAgent);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_IKE_STATUS_SPECIAL_S_FLAG_ATTACK_END);
          iVar3 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
          lib::L2CValue::_L2CValue(aLStack80);
        }
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack96);
      }
      FUN_7100009970(this);
      goto LAB_710000961c;
    }
    lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack80,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      fVar11 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl(this->moduleAccessor,iVar3)
      ;
      lib::L2CValue::L2CValue(aLStack96,fVar11);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      fVar11 = (float)app::lua_bind::KineticModule__get_sum_speed_y_impl(this->moduleAccessor,iVar3)
      ;
      lib::L2CValue::L2CValue(aLStack112,fVar11);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack128,aLStack96);
      lib::L2CValue::L2CValue(aLStack144,aLStack112);
      lib::L2CValue::L2CValue(aLStack80,0xfea97fe73);
      lib::L2CValue::L2CValue(aLStack176,0x10e7c70b4d);
      uVar6 = lib::L2CValue::as_integer(aLStack80);
      uVar9 = lib::L2CValue::as_integer(aLStack176);
      fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                (this->moduleAccessor,uVar6,uVar9);
      lib::L2CValue::L2CValue(aLStack160,fVar11);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack80);
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack176,_FIGHTER_IKE_STATUS_SPECIAL_S_WORK_INT_SITUATION_PREV);
      iVar3 = lib::L2CValue::as_integer(aLStack176);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack80,iVar3);
      uVar6 = lib::L2CValue::operator__(pLVar5,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack176);
      if ((uVar6 & 1) == 0) {
        pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
        uVar6 = lib::L2CValue::operator__(pLVar5,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar6 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack176,0xfea97fe73);
          lib::L2CValue::L2CValue(aLStack192,0x1de3b8e644);
          uVar6 = lib::L2CValue::as_integer(aLStack176);
          uVar9 = lib::L2CValue::as_integer(aLStack192);
          fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                    (this->moduleAccessor,uVar6,uVar9);
          lib::L2CValue::L2CValue(aLStack80,fVar11);
          lib::L2CValue::_L2CValue(aLStack192);
          lib::L2CValue::_L2CValue(aLStack176);
          lib::L2CValue::L2CValue(aLStack176,_FIGHTER_KINETIC_ENERGY_ID_STOP);
          lib::L2CValue::L2CValue(aLStack192,ENERGY_STOP_RESET_TYPE_GROUND);
          lib::L2CValue::L2CValue(aLStack208,0.0);
          lib::L2CValue::L2CValue(aLStack224,0.0);
          lib::L2CValue::L2CValue(aLStack240,0.0);
          lib::L2CValue::L2CValue(aLStack256,0.0);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack224);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack240);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack256);
          app::sv_kinetic_energy::reset_energy(this->luaStateAgent);
          lib::L2CValue::_L2CValue(aLStack256);
          lib::L2CValue::_L2CValue(aLStack240);
          lib::L2CValue::_L2CValue(aLStack224);
          lib::L2CValue::_L2CValue(aLStack208);
          lib::L2CValue::_L2CValue(aLStack192);
          lib::L2CValue::_L2CValue(aLStack176);
          lib::L2CValue::L2CValue(aLStack176,_FIGHTER_KINETIC_ENERGY_ID_STOP);
          lib::L2CValue::operator_(aLStack80,aLStack160);
          lib::L2CValue::L2CValue(aLStack208,0.0);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
          app::sv_kinetic_energy::set_brake(this->luaStateAgent);
        }
        else {
          lib::L2CValue::L2CValue(aLStack176,0xfea97fe73);
          lib::L2CValue::L2CValue(aLStack192,0x1a85c0bb05);
          uVar6 = lib::L2CValue::as_integer(aLStack176);
          uVar9 = lib::L2CValue::as_integer(aLStack192);
          fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                    (this->moduleAccessor,uVar6,uVar9);
          lib::L2CValue::L2CValue(aLStack80,fVar11);
          lib::L2CValue::_L2CValue(aLStack192);
          lib::L2CValue::_L2CValue(aLStack176);
          lib::L2CValue::L2CValue(aLStack176,_FIGHTER_KINETIC_ENERGY_ID_STOP);
          lib::L2CValue::L2CValue(aLStack192,ENERGY_STOP_RESET_TYPE_AIR);
          lib::L2CValue::L2CValue(aLStack208,0.0);
          lib::L2CValue::L2CValue(aLStack224,0.0);
          lib::L2CValue::L2CValue(aLStack240,0.0);
          lib::L2CValue::L2CValue(aLStack256,0.0);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack224);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack240);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack256);
          app::sv_kinetic_energy::reset_energy(this->luaStateAgent);
          lib::L2CValue::_L2CValue(aLStack256);
          lib::L2CValue::_L2CValue(aLStack240);
          lib::L2CValue::_L2CValue(aLStack224);
          lib::L2CValue::_L2CValue(aLStack208);
          lib::L2CValue::_L2CValue(aLStack192);
          lib::L2CValue::_L2CValue(aLStack176);
          lib::L2CValue::L2CValue(aLStack176,_FIGHTER_KINETIC_ENERGY_ID_STOP);
          lib::L2CValue::operator_(aLStack80,aLStack160);
          lib::L2CValue::L2CValue(aLStack208,0.0);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
          app::sv_kinetic_energy::set_brake(this->luaStateAgent);
        }
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_STOP);
        lib::L2CValue::L2CValue(aLStack176,-1.0);
        lib::L2CValue::L2CValue(aLStack192,0.0);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
        app::sv_kinetic_energy::set_limit_speed(this->luaStateAgent);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_STOP);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::KineticModule__enable_energy_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::_L2CValue(aLStack80);
        pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_IKE_STATUS_SPECIAL_S_WORK_INT_SITUATION_PREV);
        iVar3 = lib::L2CValue::as_integer(pLVar5);
        iVar4 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
        pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar5);
        app::KineticUtility::clear_unable_energy(iVar3,pBVar10);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
        pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar5);
        app::KineticUtility::clear_unable_energy(iVar3,pBVar10);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,FIGHTER_KINETIC_ENERGY_ID_MOTION);
        pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar5);
        app::KineticUtility::clear_unable_energy(iVar3,pBVar10);
        lib::L2CValue::_L2CValue(aLStack80);
      }
      lib::L2CValue::L2CValue(aLStack272,0);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack96);
    }
    else {
      lib::L2CValue::L2CValue(aLStack272,1);
      pLVar8 = aLStack272;
    }
  }
  else {
LAB_7100008990:
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_IKE_STATUS_SPECIAL_S_FLAG_ATK_CHARGE_MAX);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_IKE_STATUS_SPECIAL_S_WORK_INT_HOLD_SE_HANDLE);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack96,iVar3);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0);
      uVar6 = lib::L2CValue::operator__(aLStack80,aLStack96);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar6 & 1) != 0) {
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        fVar11 = (float)app::lua_bind::SoundModule__get_se_vol_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack112,fVar11);
        lib::L2CValue::L2CValue(aLStack80,0.5);
        uVar6 = lib::L2CValue::operator_(aLStack80,aLStack112);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack80,0.5);
          iVar3 = lib::L2CValue::as_integer(aLStack96);
          fVar11 = (float)lib::L2CValue::as_number(aLStack80);
          app::lua_bind::SoundModule__set_se_vol_impl(this->moduleAccessor,iVar3,fVar11,0);
          lib::L2CValue::_L2CValue(aLStack80);
        }
        lib::L2CValue::_L2CValue(aLStack112);
      }
      lib::L2CValue::_L2CValue(aLStack96);
    }
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_IKE_STATUS_SPECIAL_S_FLAG_CHARGE_MAX_EFT);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    lib::L2CValue::operator_(aLStack96);
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((bVar2 & 1U) == 0) goto LAB_710000961c;
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_IKE_STATUS_SPECIAL_S_FLAG_ATK_CHARGE_MAX);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar2 & 1U) == 0) goto LAB_710000961c;
    lib::L2CValue::L2CValue(aLStack80,0x238f062c49);
    HVar7 = lib::L2CValue::as_hash(aLStack80);
    app::lua_bind::EffectModule__req_common_impl(this->moduleAccessor,HVar7,0.0);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_IKE_STATUS_SPECIAL_S_FLAG_CHARGE_MAX_EFT);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
    pLVar8 = aLStack80;
  }
  lib::L2CValue::_L2CValue(pLVar8);
LAB_710000961c:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

