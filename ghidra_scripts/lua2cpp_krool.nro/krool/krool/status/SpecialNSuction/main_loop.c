
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKrool::status::SpecialNSuction_main_loop(L2CFighterKrool *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  float fVar7;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  bVar1 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar4 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) {
    this_00 = &this->globalTable;
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar4 = lib::L2CValue::operator__(pLVar6,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar4 & 1) != 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
      uVar4 = lib::L2CValue::operator__(pLVar6,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar4 & 1) != 0) goto LAB_710002a01c;
    }
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar4 = lib::L2CValue::operator__(pLVar6,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar4 & 1) != 0) goto LAB_710002a11c;
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar4 = lib::L2CValue::operator__(pLVar6,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar4 & 1) != 0) goto LAB_710002a024;
  }
  else {
LAB_710002a01c:
    lib::L2CValue::_L2CValue(aLStack96);
LAB_710002a024:
    lib::L2CValue::L2CValue(aLStack96,0x11238cb374);
    lib::L2CValue::L2CValue(aLStack112,0x1555d1476b);
    FUN_7100027ed0(this,aLStack96,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
LAB_710002a11c:
    lib::L2CValue::_L2CValue(aLStack96);
  }
  fVar7 = (float)app::lua_bind::ControlModule__get_stick_y_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,fVar7);
  lib::L2CValue::L2CValue(aLStack144,0x6e5ec7051);
  lib::L2CValue::L2CValue(aLStack160,0xc36694af0);
  uVar4 = lib::L2CValue::as_integer(aLStack144);
  uVar5 = lib::L2CValue::as_integer(aLStack160);
  fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack128,fVar7);
  uVar4 = lib::L2CValue::operator__(aLStack80,aLStack128);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) {
    bVar1 = app::lua_bind::GroundModule__is_passable_check_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((bVar2 & 1U) == 0) goto LAB_710002a3dc;
    lib::L2CValue::L2CValue(aLStack80,false);
    bVar1 = lib::L2CValue::as_bool(aLStack80);
    app::lua_bind::GroundModule__set_passable_check_impl(this->moduleAccessor,(bool)(bVar1 & 1));
LAB_710002a3d4:
    pLVar6 = aLStack80;
  }
  else {
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar4 = lib::L2CValue::operator__(pLVar6,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,true);
      bVar1 = lib::L2CValue::as_bool(aLStack80);
      app::lua_bind::GroundModule__set_passable_check_impl(this->moduleAccessor,(bool)(bVar1 & 1));
      goto LAB_710002a3d4;
    }
    bVar1 = app::lua_bind::GroundModule__is_passable_ground_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((bVar2 & 1U) == 0) goto LAB_710002a3dc;
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x1d);
    lib::L2CValue::L2CValue(aLStack128,0x6e5ec7051);
    lib::L2CValue::L2CValue(aLStack144,0xcec0a796f);
    uVar4 = lib::L2CValue::as_integer(aLStack128);
    uVar5 = lib::L2CValue::as_integer(aLStack144);
    iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar4,uVar5);
    lib::L2CValue::L2CValue(aLStack80,iVar3);
    uVar4 = lib::L2CValue::operator_(pLVar6,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar4 & 1) == 0) goto LAB_710002a3dc;
    lib::L2CValue::L2CValue(aLStack80,true);
    bVar1 = lib::L2CValue::as_bool(aLStack80);
    app::lua_bind::GroundModule__set_passable_check_impl(this->moduleAccessor,(bool)(bVar1 & 1));
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
    lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0xb0);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_KINETIC_TYPE_FALL);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    app::lua_bind::KineticModule__unable_energy_impl(this->moduleAccessor,iVar3);
    pLVar6 = aLStack128;
  }
  lib::L2CValue::_L2CValue(pLVar6);
LAB_710002a3dc:
  bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack128);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((bVar2 & 1U) == 0) {
    FUN_7100028840(this);
  }
  else {
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_KROOL_STATUS_KIND_SPECIAL_N_LOOP);
    lib::L2CValue::L2CValue(aLStack144,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x80,(L2CValue)0x70);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

