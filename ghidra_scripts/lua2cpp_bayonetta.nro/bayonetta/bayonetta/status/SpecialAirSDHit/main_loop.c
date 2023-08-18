
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBayonetta::status::SpecialAirSDHit_main_loop
          (L2CFighterBayonetta *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  ulong uVar3;
  L2CValue *pLVar4;
  int iVar5;
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
    uVar3 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack96);
LAB_71000287ec:
      pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
      uVar3 = lib::L2CValue::operator__(pLVar4,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar3 & 1) == 0) {
        bVar2 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
        bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((bVar1 & 1U) != 0) {
          pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
          lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
          uVar3 = lib::L2CValue::operator__(pLVar4,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar3 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_FALL);
            lib::L2CValue::L2CValue(aLStack96,false);
            lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
            goto LAB_7100028858;
          }
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_LANDING_FALL_SPECIAL);
        lib::L2CValue::L2CValue(aLStack96,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
LAB_7100028858:
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack80);
      }
      iVar5 = 0;
      goto LAB_7100028904;
    }
    lib::L2CValue::L2CValue(aLStack128,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x80);
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar3 = lib::L2CValue::operator__(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
    }
    else {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar3 = lib::L2CValue::operator__(aLStack144,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar3 & 1) != 0) goto LAB_71000287ec;
    }
  }
  iVar5 = 1;
LAB_7100028904:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar5);
  return;
}

