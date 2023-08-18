
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBayonetta::status::SpecialAirSU_main_loop
          (L2CFighterBayonetta *this,L2CValue *return_value)

{
  L2CValue *this_00;
  char cVar1;
  long lVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  L2CValue *pLVar7;
  ulong uVar8;
  ulong uVar9;
  float fVar10;
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue
            (aLStack112,_FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_AIR_S_U_FLAG_SITUATION_KEEP);
  iVar5 = lib::L2CValue::as_integer(aLStack112);
  bVar3 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar5);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar3 & 1));
  bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  cVar1 = (char)&stack0xfffffffffffffff0;
  if ((bVar4 & 1U) == 0) {
    lib::L2CValue::_L2CValue(aLStack96);
    lVar2 = -0x60;
LAB_710002a76c:
    lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar2));
  }
  else {
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xe);
    lib::L2CValue::L2CValue(aLStack144,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack160,0x1a443ff2a2);
    uVar8 = lib::L2CValue::as_integer(aLStack144);
    uVar9 = lib::L2CValue::as_integer(aLStack160);
    iVar5 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar8,uVar9);
    lib::L2CValue::L2CValue(aLStack128,iVar5);
    uVar8 = lib::L2CValue::operator_(aLStack128,pLVar7);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar8 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack112,SITUATION_KIND_AIR);
      lib::L2CValue::L2CValue(aLStack128,false);
      lua2cpp::L2CFighterBase::set_situation_keep(this,(L2CValue)(cVar1 + -0x60),(L2CValue)0x80);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue
                (aLStack96,_FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_AIR_S_U_FLAG_SITUATION_KEEP);
      iVar5 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar5);
      lVar2 = -0x50;
      goto LAB_710002a76c;
    }
  }
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar4 & 1U) != 0) {
LAB_710002a794:
    iVar5 = 1;
    goto LAB_710002accc;
  }
  bVar3 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack144,(bool)(bVar3 & 1));
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar8 = lib::L2CValue::operator__(aLStack144,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar8 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack144);
  }
  else {
    lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar8 = lib::L2CValue::operator__(aLStack160,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((uVar8 & 1) == 0) goto LAB_710002a794;
  }
  lib::L2CValue::L2CValue
            (aLStack144,_FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_AIR_S_FLAG_WALL_CHECK);
  iVar5 = lib::L2CValue::as_integer(aLStack144);
  bVar3 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar5);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar3 & 1));
  bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack144);
  if ((bVar4 & 1U) == 0) {
LAB_710002a9b4:
    this_00 = &this->globalTable;
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar8 = lib::L2CValue::operator__(pLVar7,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar8 & 1) != 0) {
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xe);
      lib::L2CValue::L2CValue(aLStack144,0xfea97fe73);
      lib::L2CValue::L2CValue(aLStack160,0x1a443ff2a2);
      uVar8 = lib::L2CValue::as_integer(aLStack144);
      uVar9 = lib::L2CValue::as_integer(aLStack160);
      iVar5 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar8,uVar9);
      lib::L2CValue::L2CValue(aLStack96,iVar5);
      uVar8 = lib::L2CValue::operator_(aLStack96,pLVar7);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar8 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_LANDING_FALL_SPECIAL);
        lib::L2CValue::L2CValue(aLStack144,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)(cVar1 + -0x50),(L2CValue)0x70);
        goto LAB_710002aca8;
      }
    }
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xe);
    lib::L2CValue::L2CValue(aLStack144,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack160,0x11702a4722);
    uVar8 = lib::L2CValue::as_integer(aLStack144);
    uVar9 = lib::L2CValue::as_integer(aLStack160);
    iVar5 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar8,uVar9);
    lib::L2CValue::L2CValue(aLStack96,iVar5);
    uVar8 = lib::L2CValue::operator__(pLVar7,aLStack96);
    if ((uVar8 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
    }
    else {
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1b);
      lib::L2CValue::L2CValue(aLStack208,0xfea97fe73);
      lib::L2CValue::L2CValue(aLStack224,0xca5f64184);
      uVar8 = lib::L2CValue::as_integer(aLStack208);
      uVar9 = lib::L2CValue::as_integer(aLStack224);
      fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                (this->moduleAccessor,uVar8,uVar9);
      lib::L2CValue::L2CValue(aLStack192,fVar10);
      lib::L2CValue::operator_(aLStack192);
      uVar8 = lib::L2CValue::operator_(pLVar7,aLStack176);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar8 & 1) != 0) {
        lib::L2CValue::L2CValue
                  (aLStack96,_FIGHTER_BAYONETTA_INSTANCE_WORK_ID_FLAG_AIR_SPECIAL_S_U_TO_D);
        iVar5 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar5);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BAYONETTA_STATUS_KIND_SPECIAL_AIR_S_D);
        lib::L2CValue::L2CValue(aLStack144,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)(cVar1 + -0x50),(L2CValue)0x70);
        goto LAB_710002aca8;
      }
    }
    bVar3 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar3 & 1));
    bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar4 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_FALL);
      lib::L2CValue::L2CValue(aLStack144,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)(cVar1 + -0x50),(L2CValue)0x70);
      goto LAB_710002aca8;
    }
    FUN_7100029160(this);
  }
  else {
    fVar10 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack144,fVar10);
    lib::L2CValue::L2CValue(aLStack96,0.0);
    uVar8 = lib::L2CValue::operator__(aLStack96,aLStack144);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((uVar8 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack144,_GROUND_TOUCH_FLAG_LEFT);
      uVar6 = lib::L2CValue::as_integer(aLStack144);
      bVar3 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar6);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar3 & 1));
      bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((bVar4 & 1U) == 0) goto LAB_710002a9b4;
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BAYONETTA_STATUS_KIND_SPECIAL_AIR_S_WALL_END);
      lib::L2CValue::L2CValue(aLStack144,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)(cVar1 + -0x50),(L2CValue)0x70);
    }
    else {
      lib::L2CValue::L2CValue(aLStack144,GROUND_TOUCH_FLAG_RIGHT);
      uVar6 = lib::L2CValue::as_integer(aLStack144);
      bVar3 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar6);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar3 & 1));
      bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((bVar4 & 1U) == 0) goto LAB_710002a9b4;
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BAYONETTA_STATUS_KIND_SPECIAL_AIR_S_WALL_END);
      lib::L2CValue::L2CValue(aLStack144,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)(cVar1 + -0x50),(L2CValue)0x70);
    }
LAB_710002aca8:
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  iVar5 = 0;
LAB_710002accc:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar5);
  return;
}

