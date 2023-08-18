
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKrool::status::SpecialNLoop_main_loop(L2CFighterKrool *this,L2CValue *return_value)

{
  L2CValue *pLVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  float fVar8;
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
  
  lib::L2CValue::L2CValue(aLStack80,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack112,0x1b1b3ec980);
  uVar5 = lib::L2CValue::as_integer(aLStack80);
  uVar6 = lib::L2CValue::as_integer(aLStack112);
  iVar4 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack96,iVar4);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack128,0x1b2733f6d9);
  uVar5 = lib::L2CValue::as_integer(aLStack80);
  uVar6 = lib::L2CValue::as_integer(aLStack128);
  iVar4 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack112,iVar4);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack80);
  bVar2 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar5 = lib::L2CValue::operator__(aLStack128,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
    pLVar1 = &this->globalTable;
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,0x17);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar7,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) != 0) {
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,0x16);
      lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
      uVar5 = lib::L2CValue::operator__(pLVar7,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar5 & 1) != 0) goto LAB_710002959c;
    }
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,0x17);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar7,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) != 0) goto LAB_710002969c;
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,0x16);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar7,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar5 & 1) != 0) goto LAB_71000295a4;
  }
  else {
LAB_710002959c:
    lib::L2CValue::_L2CValue(aLStack128);
LAB_71000295a4:
    lib::L2CValue::L2CValue(aLStack128,0xeb8131ac9);
    lib::L2CValue::L2CValue(aLStack144,0x12fa41ef06);
    FUN_7100027ed0(this,aLStack128,aLStack144);
    lib::L2CValue::_L2CValue(aLStack144);
LAB_710002969c:
    lib::L2CValue::_L2CValue(aLStack128);
  }
  fVar8 = (float)app::lua_bind::ControlModule__get_stick_y_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,fVar8);
  lib::L2CValue::L2CValue(aLStack176,0x6e5ec7051);
  lib::L2CValue::L2CValue(aLStack192,0xc36694af0);
  uVar5 = lib::L2CValue::as_integer(aLStack176);
  uVar6 = lib::L2CValue::as_integer(aLStack192);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack160,fVar8);
  uVar5 = lib::L2CValue::operator__(aLStack80,aLStack160);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
    bVar2 = app::lua_bind::GroundModule__is_passable_check_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
    bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((bVar3 & 1U) == 0) goto LAB_7100029958;
    lib::L2CValue::L2CValue(aLStack80,false);
    bVar2 = lib::L2CValue::as_bool(aLStack80);
    app::lua_bind::GroundModule__set_passable_check_impl(this->moduleAccessor,(bool)(bVar2 & 1));
LAB_7100029950:
    lib::L2CValue::_L2CValue(aLStack80);
  }
  else {
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar7,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,true);
      bVar2 = lib::L2CValue::as_bool(aLStack80);
      app::lua_bind::GroundModule__set_passable_check_impl(this->moduleAccessor,(bool)(bVar2 & 1));
      goto LAB_7100029950;
    }
    bVar2 = app::lua_bind::GroundModule__is_passable_ground_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
    bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((bVar3 & 1U) != 0) {
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x1d);
      lib::L2CValue::L2CValue(aLStack160,0x6e5ec7051);
      lib::L2CValue::L2CValue(aLStack176,0xcec0a796f);
      uVar5 = lib::L2CValue::as_integer(aLStack160);
      uVar6 = lib::L2CValue::as_integer(aLStack176);
      iVar4 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar5,uVar6);
      lib::L2CValue::L2CValue(aLStack80,iVar4);
      uVar5 = lib::L2CValue::operator_(pLVar7,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack160);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack80,true);
        bVar2 = lib::L2CValue::as_bool(aLStack80);
        app::lua_bind::GroundModule__set_passable_check_impl(this->moduleAccessor,(bool)(bVar2 & 1))
        ;
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack160,SITUATION_KIND_AIR);
        lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0x60);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_TYPE_FALL);
        iVar4 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar4);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
        iVar4 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::KineticModule__unable_energy_impl(this->moduleAccessor,iVar4);
        goto LAB_7100029950;
      }
    }
  }
LAB_7100029958:
  bVar2 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack176,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar5 = lib::L2CValue::operator__(aLStack176,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
    pLVar1 = &this->globalTable;
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,0x17);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar7,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) != 0) {
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,0x16);
      lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
      uVar5 = lib::L2CValue::operator__(pLVar7,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar5 & 1) != 0) goto LAB_7100029994;
    }
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,0x17);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar7,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) != 0) goto LAB_7100029a94;
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,0x16);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar7,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack176);
    if ((uVar5 & 1) != 0) goto LAB_710002999c;
  }
  else {
LAB_7100029994:
    lib::L2CValue::_L2CValue(aLStack176);
LAB_710002999c:
    lib::L2CValue::L2CValue(aLStack176,0xeb8131ac9);
    lib::L2CValue::L2CValue(aLStack192,0x12fa41ef06);
    FUN_7100027ed0(this,aLStack176,aLStack192);
    lib::L2CValue::_L2CValue(aLStack192);
LAB_7100029a94:
    lib::L2CValue::_L2CValue(aLStack176);
  }
  lib::L2CValue::L2CValue(aLStack224,_FIGHTER_KROOL_STATUS_SPECIAL_N_FLAG_START_SWALLOW);
  iVar4 = lib::L2CValue::as_integer(aLStack224);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::L2CValue(aLStack208,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar5 = lib::L2CValue::operator__(aLStack208,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack224);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack208,CONTROL_PAD_BUTTON_SPECIAL);
    iVar4 = lib::L2CValue::as_integer(aLStack208);
    bVar2 = app::lua_bind::ControlModule__check_button_on_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
    bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack208);
    if ((bVar3 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack208,_FIGHTER_KROOL_STATUS_SPECIAL_N_WORK_INT_LOOP_COUNT);
      iVar4 = lib::L2CValue::as_integer(aLStack208);
      iVar4 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar4);
      lib::L2CValue::L2CValue(aLStack80,iVar4);
      uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack208);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KROOL_STATUS_KIND_SPECIAL_N_END);
        lib::L2CValue::L2CValue(aLStack208,true);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x30);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue((L2CValue *)return_value,1);
        goto LAB_7100029ca8;
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack208,_FIGHTER_KROOL_STATUS_SPECIAL_N_WORK_INT_LOOP_COUNT);
      iVar4 = lib::L2CValue::as_integer(aLStack208);
      iVar4 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar4);
      lib::L2CValue::L2CValue(aLStack80,iVar4);
      uVar5 = lib::L2CValue::operator__(aLStack112,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack208);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KROOL_STATUS_KIND_SPECIAL_N_END);
        lib::L2CValue::L2CValue(aLStack208,true);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x30);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue((L2CValue *)return_value,1);
        goto LAB_7100029ca8;
      }
    }
  }
  FUN_7100028840(this);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_7100029ca8:
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

