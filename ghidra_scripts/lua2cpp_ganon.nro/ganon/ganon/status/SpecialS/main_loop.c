
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterGanon::status::SpecialS_main_loop(L2CFighterGanon *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  BattleObjectModuleAccessor *pBVar7;
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
    uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack96);
LAB_7100016280:
      bVar2 = app::lua_bind::GroundModule__is_ottotto_impl(this->moduleAccessor,1.5);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((bVar1 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack96,0);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        bVar2 = app::lua_bind::GrabModule__is_grab_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
        bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((bVar1 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack80,30.0);
          fVar8 = (float)lib::L2CValue::as_number(aLStack80);
          app::lua_bind::MotionModule__set_frame_impl(this->moduleAccessor,fVar8,true);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack80,FIGHTER_KINETIC_ENERGY_ID_MOTION);
          pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
          iVar3 = lib::L2CValue::as_integer(aLStack80);
          pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar6);
          app::KineticUtility::clear_unable_energy(iVar3,pBVar7);
          lib::L2CValue::_L2CValue(aLStack80);
        }
        app::lua_bind::GrabModule__clear_all_impl(this->moduleAccessor);
        app::lua_bind::AttackModule__clear_all_impl(this->moduleAccessor);
      }
      iVar3 = _SITUATION_KIND_GROUND;
      lib::L2CValue::L2CValue
                (aLStack112,_FIGHTER_GANON_STATUS_WORK_ID_INT_EXPLOSION_START_SITUATION);
      iVar4 = lib::L2CValue::as_integer(aLStack112);
      iVar4 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar4);
      lib::L2CValue::L2CValue(aLStack96,iVar4);
      lib::L2CValue::L2CValue(aLStack80,iVar3);
      uVar5 = lib::L2CValue::operator__(aLStack80,aLStack96);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar5 & 1) == 0) {
        bVar2 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
        bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((bVar1 & 1U) == 0) {
          pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
          lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
          uVar5 = lib::L2CValue::operator__(pLVar6,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar5 & 1) != 0) {
            lib::L2CValue::L2CValue
                      (aLStack96,_FIGHTER_GANON_STATUS_WORK_ID_FLAG_EXPLOSION_GRAVITY_ONOFF);
            iVar3 = lib::L2CValue::as_integer(aLStack96);
            bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
            lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
            bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
            lib::L2CValue::_L2CValue(aLStack80);
            lib::L2CValue::_L2CValue(aLStack96);
            if ((bVar1 & 1U) != 0) {
              lib::L2CValue::L2CValue(aLStack80,0.0);
              lib::L2CValue::L2CValue(aLStack96,_FIGHTER_INSTANCE_WORK_ID_FLOAT_LANDING_FRAME);
              fVar8 = (float)lib::L2CValue::as_number(aLStack80);
              iVar3 = lib::L2CValue::as_integer(aLStack96);
              app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar8,iVar3);
              lib::L2CValue::_L2CValue(aLStack96);
              lib::L2CValue::_L2CValue(aLStack80);
              lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_LANDING_FALL_SPECIAL);
              lib::L2CValue::L2CValue(aLStack96,false);
              lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
              goto LAB_710001651c;
            }
          }
LAB_7100016650:
          iVar3 = 0;
          goto LAB_7100016534;
        }
        lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_FALL_SPECIAL);
        lib::L2CValue::L2CValue(aLStack96,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
      }
      else {
        pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
        lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
        uVar5 = lib::L2CValue::operator__(pLVar6,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_FALL);
          lib::L2CValue::L2CValue(aLStack96,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
        }
        else {
          bVar2 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
          lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
          bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((bVar1 & 1U) == 0) goto LAB_7100016650;
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_WAIT);
          lib::L2CValue::L2CValue(aLStack96,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
        }
      }
LAB_710001651c:
      lib::L2CValue::_L2CValue(aLStack96);
      pLVar6 = aLStack80;
    }
    else {
      lib::L2CValue::L2CValue(aLStack128,false);
      lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x80);
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar5 = lib::L2CValue::operator__(aLStack112,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar5 & 1) != 0) {
        lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
        lib::L2CValue::L2CValue(aLStack80,false);
        uVar5 = lib::L2CValue::operator__(aLStack144,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar5 & 1) == 0) goto LAB_710001652c;
        goto LAB_7100016280;
      }
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      pLVar6 = aLStack96;
    }
    lib::L2CValue::_L2CValue(pLVar6);
  }
LAB_710001652c:
  iVar3 = 1;
LAB_7100016534:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

