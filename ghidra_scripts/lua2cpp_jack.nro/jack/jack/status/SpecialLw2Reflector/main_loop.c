
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterJack::status::SpecialLw2Reflector_main_loop(L2CFighterJack *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  ulong uVar2;
  L2CValue *pLVar3;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar2 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack96);
LAB_710001eeb0:
    bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar2 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar2 & 1) == 0) {
      bVar1 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar2 = lib::L2CValue::operator__(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar2 & 1) == 0) goto LAB_710001f034;
      this_00 = &this->globalTable;
      pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
      lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
      uVar2 = lib::L2CValue::operator__(pLVar3,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar2 & 1) == 0) {
LAB_710001f068:
        pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
        lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
        uVar2 = lib::L2CValue::operator__(pLVar3,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar2 & 1) != 0) goto LAB_710001f034;
        pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
        uVar2 = lib::L2CValue::operator__(pLVar3,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar2 & 1) == 0) goto LAB_710001f140;
      }
      else {
        pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
        uVar2 = lib::L2CValue::operator__(pLVar3,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar2 & 1) == 0) goto LAB_710001f068;
        lib::L2CValue::_L2CValue(aLStack96);
      }
      lib::L2CValue::L2CValue(aLStack80,false);
      lib::L2CValue::L2CValue(aLStack96,0x14b794270c);
      lib::L2CValue::L2CValue(aLStack112,0x18c5e4cac7);
      FUN_710001e750(this,aLStack80,aLStack96,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
    }
    else {
      pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
      uVar2 = lib::L2CValue::operator__(pLVar3,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar2 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_FALL);
        lib::L2CValue::L2CValue(aLStack96,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_WAIT);
        lib::L2CValue::L2CValue(aLStack96,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
      }
    }
    lib::L2CValue::_L2CValue(aLStack96);
    pLVar3 = aLStack80;
  }
  else {
    lib::L2CValue::L2CValue(aLStack128,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x80);
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar2 = lib::L2CValue::operator__(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar2 & 1) != 0) {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar2 = lib::L2CValue::operator__(aLStack144,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar2 & 1) == 0) goto LAB_710001f140;
      goto LAB_710001eeb0;
    }
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
LAB_710001f034:
    pLVar3 = aLStack96;
  }
  lib::L2CValue::_L2CValue(pLVar3);
LAB_710001f140:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}
