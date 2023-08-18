
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterMiifighter::status::SpecialS_main_loop(L2CFighterMiifighter *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  BattleObjectModuleAccessor *pBVar6;
  ulong uVar7;
  float fVar8;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar1 & 1U) == 0) {
    bVar2 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar4 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack96);
LAB_71000210a0:
      lib::L2CValue::L2CValue
                (aLStack112,_FIGHTER_MIIFIGHTER_STATUS_WORK_ID_INT_100KICK_START_SITUATION);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack96,iVar3);
      lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
      uVar4 = lib::L2CValue::operator__(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar4 & 1) == 0) {
        bVar2 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
        bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((bVar1 & 1U) == 0) {
          pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
          lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
          uVar4 = lib::L2CValue::operator__(pLVar5,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar4 & 1) == 0) goto LAB_71000212a0;
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_LANDING_FALL_SPECIAL);
          lib::L2CValue::L2CValue(aLStack96,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
        }
        else {
          lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_FALL_SPECIAL);
          lib::L2CValue::L2CValue(aLStack96,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
        }
      }
      else {
        pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
        lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
        uVar4 = lib::L2CValue::operator__(pLVar5,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar4 & 1) == 0) {
          bVar2 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
          lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
          bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((bVar1 & 1U) == 0) {
LAB_71000212a0:
            lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MIIFIGHTER_STATUS_WORK_ID_FLAG_100KICK_HIT);
            iVar3 = lib::L2CValue::as_integer(aLStack96);
            bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
            lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
            bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
            lib::L2CValue::_L2CValue(aLStack80);
            lib::L2CValue::_L2CValue(aLStack96);
            if ((bVar1 & 1U) == 0) {
              lib::L2CValue::L2CValue
                        (aLStack96,_FIGHTER_MIIFIGHTER_STATUS_WORK_ID_FLAG_100KICK_SHIELD_HIT);
              iVar3 = lib::L2CValue::as_integer(aLStack96);
              bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
              lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
              bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
              lib::L2CValue::_L2CValue(aLStack80);
              lib::L2CValue::_L2CValue(aLStack96);
              if ((bVar1 & 1U) != 0) {
                lib::L2CValue::L2CValue(aLStack80,FIGHTER_KINETIC_ENERGY_ID_MOTION);
                pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
                iVar3 = lib::L2CValue::as_integer(aLStack80);
                pBVar6 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar5);
                app::KineticUtility::clear_unable_energy(iVar3,pBVar6);
                lib::L2CValue::_L2CValue(aLStack80);
                lib::L2CValue::L2CValue
                          (aLStack80,_FIGHTER_MIIFIGHTER_STATUS_WORK_ID_FLAG_100KICK_SHIELD_HIT);
                iVar3 = lib::L2CValue::as_integer(aLStack80);
                app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
                lib::L2CValue::_L2CValue(aLStack80);
              }
              lib::L2CValue::L2CValue
                        (aLStack96,
                         _FIGHTER_MIIFIGHTER_STATUS_WORK_ID_FLAG_100KICK_ENABLE_MOTION_SPEED_MUL);
              iVar3 = lib::L2CValue::as_integer(aLStack96);
              bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
              lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
              bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
              lib::L2CValue::_L2CValue(aLStack80);
              lib::L2CValue::_L2CValue(aLStack96);
              if ((bVar1 & 1U) != 0) {
                lib::L2CValue::L2CValue
                          (aLStack80,
                           _FIGHTER_MIIFIGHTER_STATUS_WORK_ID_FLAG_100KICK_ENABLE_MOTION_SPEED_MUL);
                iVar3 = lib::L2CValue::as_integer(aLStack80);
                app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
                lib::L2CValue::_L2CValue(aLStack80);
                lib::L2CValue::L2CValue(aLStack96,0xfea97fe73);
                lib::L2CValue::L2CValue(aLStack112,0x191c05b1dd);
                uVar4 = lib::L2CValue::as_integer(aLStack96);
                uVar7 = lib::L2CValue::as_integer(aLStack112);
                fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                         (this->moduleAccessor,uVar4,uVar7);
                lib::L2CValue::L2CValue(aLStack80,fVar8);
                lib::L2CValue::_L2CValue(aLStack112);
                lib::L2CValue::_L2CValue(aLStack96);
                lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_MOTION);
                lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
                lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
                lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
                app::sv_kinetic_energy::set_speed_mul(this->luaStateAgent);
                lib::L2CValue::_L2CValue(aLStack96);
                lib::L2CValue::_L2CValue(aLStack80);
              }
              iVar3 = 0;
              goto LAB_7100021334;
            }
            lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MIIFIGHTER_STATUS_KIND_SPECIAL_S1_END);
            lib::L2CValue::L2CValue(aLStack96,false);
            lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
          }
          else {
            lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_WAIT);
            lib::L2CValue::L2CValue(aLStack96,false);
            lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
          }
        }
        else {
          lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_FALL_SPECIAL);
          lib::L2CValue::L2CValue(aLStack96,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
        }
      }
      lib::L2CValue::_L2CValue(aLStack96);
      pLVar5 = aLStack80;
    }
    else {
      lib::L2CValue::L2CValue(aLStack128,false);
      lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x80);
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar4 = lib::L2CValue::operator__(aLStack112,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar4 & 1) != 0) {
        lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
        lib::L2CValue::L2CValue(aLStack80,false);
        uVar4 = lib::L2CValue::operator__(aLStack144,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar4 & 1) == 0) goto LAB_710002132c;
        goto LAB_71000210a0;
      }
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      pLVar5 = aLStack96;
    }
    lib::L2CValue::_L2CValue(pLVar5);
  }
LAB_710002132c:
  iVar3 = 1;
LAB_7100021334:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

