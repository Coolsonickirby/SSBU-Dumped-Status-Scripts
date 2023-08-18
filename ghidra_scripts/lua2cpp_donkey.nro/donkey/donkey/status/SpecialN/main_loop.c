
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDonkey::status::SpecialN_main_loop(L2CFighterDonkey *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  ulong uVar7;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  bVar1 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
    this_00 = &this->globalTable;
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar6,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) != 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
      uVar5 = lib::L2CValue::operator__(pLVar6,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar5 & 1) != 0) goto LAB_71000161ec;
    }
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar6,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) != 0) {
      pLVar6 = aLStack96;
      goto LAB_71000162f4;
    }
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar6,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) != 0) goto LAB_71000161f4;
  }
  else {
LAB_71000161ec:
    lib::L2CValue::_L2CValue(aLStack96);
LAB_71000161f4:
    lib::L2CValue::L2CValue(aLStack80,0xf3a6aace3);
    lib::L2CValue::L2CValue(aLStack96,0x1331f32137);
    FUN_710000e9f0(this,aLStack80,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    pLVar6 = aLStack80;
LAB_71000162f4:
    lib::L2CValue::_L2CValue(pLVar6);
  }
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((bVar2 & 1U) == 0) {
    bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_DONKEY_INSTANCE_WORK_ID_INT_SPECIAL_N_COUNT);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack112,iVar3);
      lib::L2CValue::L2CValue(aLStack160,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack176,0x1008b0a33d);
      uVar5 = lib::L2CValue::as_integer(aLStack160);
      uVar7 = lib::L2CValue::as_integer(aLStack176);
      iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar5,uVar7);
      lib::L2CValue::L2CValue(aLStack144,iVar3);
      uVar5 = lib::L2CValue::operator__(aLStack144,aLStack112);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack112,0);
        lib::L2CValue::L2CValue(aLStack128,_FIGHTER_DONKEY_STATUS_SPECIAL_N_WORK_INT_PUNCH_COUNT);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        iVar4 = lib::L2CValue::as_integer(aLStack128);
        app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack112);
        iVar3 = 0;
        goto LAB_7100016484;
      }
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_DONKEY_STATUS_KIND_SPECIAL_N_ATTACK);
      lib::L2CValue::L2CValue(aLStack128,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x90,(L2CValue)0x80);
    }
    else {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_DONKEY_STATUS_KIND_SPECIAL_N_LOOP);
      lib::L2CValue::L2CValue(aLStack128,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x90,(L2CValue)0x80);
    }
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
  }
  iVar3 = 1;
LAB_7100016484:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

