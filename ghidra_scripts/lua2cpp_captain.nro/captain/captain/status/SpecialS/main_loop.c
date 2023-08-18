
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterCaptain::status::SpecialS_main_loop(L2CFighterCaptain *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((bVar1 & 1U) == 0) {
    bVar2 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue(aLStack64,true);
    uVar4 = lib::L2CValue::operator__(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack80);
LAB_710001458c:
      lib::L2CValue::L2CValue
                (aLStack96,_FIGHTER_CAPTAIN_STATUS_WORK_ID_INT_FALCON_KNUCKLE_START_SITUATION);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack80,iVar3);
      lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
      uVar4 = lib::L2CValue::operator__(aLStack80,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar4 & 1) == 0) {
        bVar2 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack64,(bool)(bVar2 & 1));
        bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
        if ((bVar1 & 1U) == 0) {
          pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
          lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
          uVar4 = lib::L2CValue::operator__(pLVar5,aLStack64);
          lib::L2CValue::_L2CValue(aLStack64);
          if ((uVar4 & 1) == 0) goto LAB_710001478c;
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_LANDING_FALL_SPECIAL);
          lib::L2CValue::L2CValue(aLStack80,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
        }
        else {
          lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_KIND_FALL_SPECIAL);
          lib::L2CValue::L2CValue(aLStack80,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
        }
      }
      else {
        pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
        lib::L2CValue::L2CValue(aLStack64,SITUATION_KIND_AIR);
        uVar4 = lib::L2CValue::operator__(pLVar5,aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
        if ((uVar4 & 1) == 0) {
          bVar2 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
          lib::L2CValue::L2CValue(aLStack64,(bool)(bVar2 & 1));
          bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
          lib::L2CValue::_L2CValue(aLStack64);
          if ((bVar1 & 1U) == 0) {
LAB_710001478c:
            lib::L2CValue::L2CValue
                      (aLStack80,_FIGHTER_CAPTAIN_STATUS_WORK_ID_FLAG_FALCON_KNUCKLE_HIT);
            iVar3 = lib::L2CValue::as_integer(aLStack80);
            bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
            lib::L2CValue::L2CValue(aLStack64,(bool)(bVar2 & 1));
            bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
            lib::L2CValue::_L2CValue(aLStack64);
            lib::L2CValue::_L2CValue(aLStack80);
            if ((bVar1 & 1U) == 0) {
              iVar3 = 0;
              goto LAB_7100014820;
            }
            lib::L2CValue::L2CValue(aLStack64,_FIGHTER_CAPTAIN_STATUS_KIND_SPECIAL_S_END);
            lib::L2CValue::L2CValue(aLStack80,false);
            lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
          }
          else {
            lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_WAIT);
            lib::L2CValue::L2CValue(aLStack80,false);
            lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
          }
        }
        else {
          lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_KIND_FALL_SPECIAL);
          lib::L2CValue::L2CValue(aLStack80,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
        }
      }
      lib::L2CValue::_L2CValue(aLStack80);
      pLVar5 = aLStack64;
    }
    else {
      lib::L2CValue::L2CValue(aLStack112,false);
      lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x90);
      lib::L2CValue::L2CValue(aLStack64,false);
      uVar4 = lib::L2CValue::operator__(aLStack96,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      if ((uVar4 & 1) != 0) {
        lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
        lib::L2CValue::L2CValue(aLStack64,false);
        uVar4 = lib::L2CValue::operator__(aLStack128,aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar4 & 1) == 0) goto LAB_7100014818;
        goto LAB_710001458c;
      }
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      pLVar5 = aLStack80;
    }
    lib::L2CValue::_L2CValue(pLVar5);
  }
LAB_7100014818:
  iVar3 = 1;
LAB_7100014820:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

