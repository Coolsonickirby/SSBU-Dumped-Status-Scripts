
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBayonetta::status::SpecialAirSWallEnd_main_loop
          (L2CFighterBayonetta *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  GroundCorrectKind GVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  L2CValue *pLVar7;
  float fVar8;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack128,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x80);
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar5 = lib::L2CValue::operator__(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
    }
    else {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar5 = lib::L2CValue::operator__(aLStack144,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar5 & 1) != 0) goto LAB_7100027e10;
    }
    iVar3 = 1;
    goto LAB_7100028068;
  }
  lib::L2CValue::_L2CValue(aLStack96);
LAB_7100027e10:
  bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar2 & 1U) == 0) {
    this_00 = &this->globalTable;
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar6,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack112,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      fVar8 = (float)app::lua_bind::KineticModule__get_sum_speed_y_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack96,fVar8);
      lib::L2CValue::L2CValue(aLStack80,0.0);
      uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_LANDING_LIGHT);
        lib::L2CValue::L2CValue(aLStack96,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
        goto LAB_7100027e6c;
      }
    }
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
    uVar5 = lib::L2CValue::operator__(pLVar6,pLVar7);
    if ((uVar5 & 1) == 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
      uVar5 = lib::L2CValue::operator__(pLVar6,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
        lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0xb0);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_AIR);
        GVar4 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar4);
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
        lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0xb0);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_GROUND);
        GVar4 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar4);
      }
      pLVar6 = aLStack96;
      goto LAB_710002805c;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_FALL);
    lib::L2CValue::L2CValue(aLStack96,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
LAB_7100027e6c:
    lib::L2CValue::_L2CValue(aLStack96);
    pLVar6 = aLStack80;
LAB_710002805c:
    lib::L2CValue::_L2CValue(pLVar6);
  }
  iVar3 = 0;
LAB_7100028068:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

