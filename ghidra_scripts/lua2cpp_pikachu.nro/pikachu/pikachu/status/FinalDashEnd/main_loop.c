
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPikachu::status::FinalDashEnd_main_loop(L2CFighterPikachu *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  ulong uVar3;
  L2CValue *pLVar4;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar3 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack96);
LAB_710001cc90:
    bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((bVar2 & 1U) == 0) {
      bVar1 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar3 = lib::L2CValue::operator__(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar3 & 1) == 0) goto LAB_710001cdfc;
      this_00 = &this->globalTable;
      pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
      lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
      uVar3 = lib::L2CValue::operator__(pLVar4,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar3 & 1) == 0) {
LAB_710001ce60:
        pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
        lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
        uVar3 = lib::L2CValue::operator__(pLVar4,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar3 & 1) != 0) goto LAB_710001cdfc;
        pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
        uVar3 = lib::L2CValue::operator__(pLVar4,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar3 & 1) == 0) goto LAB_710001ce3c;
      }
      else {
        pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
        uVar3 = lib::L2CValue::operator__(pLVar4,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar3 & 1) == 0) goto LAB_710001ce60;
        lib::L2CValue::_L2CValue(aLStack96);
      }
      lib::L2CValue::L2CValue(aLStack80,false);
      FUN_710001c880(this,aLStack80);
    }
    else {
      pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
      uVar3 = lib::L2CValue::operator__(pLVar4,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar3 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_FINAL_JUMP_END);
        lib::L2CValue::L2CValue(aLStack96,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_WAIT);
        lib::L2CValue::L2CValue(aLStack96,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
      }
      lib::L2CValue::_L2CValue(aLStack96);
    }
    pLVar4 = aLStack80;
  }
  else {
    lib::L2CValue::L2CValue(aLStack128,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x80);
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar3 = lib::L2CValue::operator__(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar3 & 1) != 0) {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar3 = lib::L2CValue::operator__(aLStack144,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar3 & 1) == 0) goto LAB_710001ce3c;
      goto LAB_710001cc90;
    }
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
LAB_710001cdfc:
    pLVar4 = aLStack96;
  }
  lib::L2CValue::_L2CValue(pLVar4);
LAB_710001ce3c:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

