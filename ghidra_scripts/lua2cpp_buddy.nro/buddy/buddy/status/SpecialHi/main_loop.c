
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBuddy::status::SpecialHi_main_loop(L2CFighterBuddy *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  float fVar7;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,0x1086bc4a93);
  lua2cpp::L2CFighterCommon::sub_exec_special_start_common_kinetic_setting(this,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack80,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack128,0x10b8aaa5c5);
  uVar4 = lib::L2CValue::as_integer(aLStack80);
  uVar5 = lib::L2CValue::as_integer(aLStack128);
  iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack112,iVar3);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack80);
  this_00 = &this->globalTable;
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xe);
  uVar4 = lib::L2CValue::operator__(aLStack112,pLVar6);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack144,0x106f411784);
    uVar4 = lib::L2CValue::as_integer(aLStack80);
    uVar5 = lib::L2CValue::as_integer(aLStack144);
    iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar4,uVar5);
    lib::L2CValue::L2CValue(aLStack128,iVar3);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack144,false);
    lib::L2CValue::L2CValue(aLStack176,CONTROL_PAD_BUTTON_SPECIAL);
    iVar3 = lib::L2CValue::as_integer(aLStack176);
    bVar1 = app::lua_bind::ControlModule__check_button_on_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack160,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar4 = lib::L2CValue::operator__(aLStack160,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack176);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,true);
      lib::L2CValue::operator_(aLStack144,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
    }
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xe);
    uVar4 = lib::L2CValue::operator__(aLStack128,pLVar6);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,true);
      lib::L2CValue::operator_(aLStack144,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
    }
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack144);
    if ((bVar2 & 1U) != 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xe);
      lib::L2CValue::operator_(pLVar6,aLStack112);
      lib::L2CValue::L2CValue(aLStack176,0.0);
      lib::L2CValue::L2CValue(aLStack80,0);
      uVar4 = lib::L2CValue::operator__(aLStack80,aLStack160);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::operator_(aLStack128,aLStack112);
        lib::L2CValue::operator_(aLStack160,aLStack192);
        lib::L2CValue::operator_(aLStack176,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack192);
      }
      lib::L2CValue::L2CValue(aLStack80,0.0);
      lib::L2CValue::operator_(aLStack176,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BUDDY_STATUS_SPECIAL_HI_WORK_FLOAT_CHARGE_RATE);
      fVar7 = (float)lib::L2CValue::as_number(aLStack192);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar7,iVar3);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BUDDY_STATUS_KIND_SPECIAL_HI_JUMP);
      lib::L2CValue::L2CValue(aLStack192,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x40);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      goto LAB_710001eba0;
    }
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
  }
  bVar1 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar2 & 1U) == 0) {
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar4 = lib::L2CValue::operator__(pLVar6,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar4 & 1) == 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
      uVar4 = lib::L2CValue::operator__(pLVar6,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_ENV_WIND);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::KineticModule__unable_energy_impl(this->moduleAccessor,iVar3);
        goto LAB_710001eb8c;
      }
    }
    else {
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
      uVar4 = lib::L2CValue::operator__(pLVar6,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_ENV_WIND);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::KineticModule__enable_energy_impl(this->moduleAccessor,iVar3);
LAB_710001eb8c:
        lib::L2CValue::_L2CValue(aLStack80);
      }
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_BUDDY_STATUS_SPECIAL_HI_FLAG_INVOKE_AIR);
    iVar3 = lib::L2CValue::as_integer(aLStack144);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar4 = lib::L2CValue::operator__(aLStack128,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_KINETIC_ENERGY_ID_ENV_WIND);
      iVar3 = lib::L2CValue::as_integer(aLStack144);
      bVar1 = app::lua_bind::KineticModule__is_enable_energy_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack80,true);
      uVar4 = lib::L2CValue::operator__(aLStack128,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_ENV_WIND);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::KineticModule__unable_energy_impl(this->moduleAccessor,iVar3);
        goto LAB_710001eb8c;
      }
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_710001eba0:
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

