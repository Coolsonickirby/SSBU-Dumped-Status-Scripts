
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterLuigi::status::SpecialLw_exec(L2CFighterLuigi *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  GroundCorrectKind GVar4;
  ulong uVar5;
  ulong uVar6;
  void *pvVar7;
  KineticEnergyNormal *pKVar8;
  ulong *this_00;
  float fVar9;
  uint uVar10;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  ulong auStack112 [2];
  L2CValue aLStack96 [16];
  ulong local_50;
  undefined8 uStack72;
  
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_LUIGI_STATUS_SPECIAL_LW_FLAG_LIMIT_X_DEC);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_50,_FIGHTER_LUIGI_STATUS_SPECIAL_LW_FLOAT_LIMIT_X_DEC);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack96,fVar9);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue(aLStack128,0x1018dfb2f4);
    lib::L2CValue::L2CValue(aLStack144,0xb42ef71d6);
    uVar5 = lib::L2CValue::as_integer(aLStack128);
    uVar6 = lib::L2CValue::as_integer(aLStack144);
    fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6)
    ;
    lib::L2CValue::L2CValue((L2CValue *)auStack112,fVar9);
    lib::L2CValue::operator_(aLStack96,(L2CValue *)auStack112);
    lib::L2CValue::operator_(aLStack96,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)auStack112);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_50,_FIGHTER_LUIGI_STATUS_SPECIAL_LW_FLOAT_LIMIT_X_DEC);
    fVar9 = (float)lib::L2CValue::as_number(aLStack96);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar9,iVar3);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    pvVar7 = (void *)app::lua_bind::KineticModule__get_energy_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)auStack112,pvVar7);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue(aLStack128,0.0);
    iVar3 = app::lua_bind::KineticModule__get_kinetic_type_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack144,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_KINETIC_TYPE_LUIGI_SPECIAL_LW);
    uVar5 = lib::L2CValue::operator__(aLStack144,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack144,0x1018dfb2f4);
      lib::L2CValue::L2CValue(aLStack160,0xbf118d6f8);
      uVar5 = lib::L2CValue::as_integer(aLStack144);
      uVar6 = lib::L2CValue::as_integer(aLStack160);
      fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar5,uVar6);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar9);
      lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_50);
    }
    else {
      lib::L2CValue::L2CValue(aLStack144,0x1018dfb2f4);
      lib::L2CValue::L2CValue(aLStack160,0x7e908d411);
      uVar5 = lib::L2CValue::as_integer(aLStack144);
      uVar6 = lib::L2CValue::as_integer(aLStack160);
      fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar5,uVar6);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar9);
      lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_50);
    }
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    uVar5 = lib::L2CValue::operator_(aLStack96,aLStack128);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
      lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_50);
    }
    else {
      lib::L2CValue::operator_(aLStack128,aLStack96);
      lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_50);
    }
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue(aLStack144,0.0);
    uVar5 = lib::L2CValue::as_number(aLStack128);
    uVar10 = lib::L2CValue::as_number(aLStack144);
    local_50 = uVar5 & 0xffffffff | (ulong)uVar10 << 0x20;
    uStack72 = 0;
    pKVar8 = (KineticEnergyNormal *)lib::L2CValue::as_pointer((L2CValue *)auStack112);
    app::lua_bind::KineticEnergyNormal__set_limit_speed_impl(pKVar8,(Vector2f *)&local_50);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue((L2CValue *)auStack112);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_LUIGI_INSTANCE_WORK_ID_FLAG_SPECIAL_LW_BUOYANCY);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)auStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_50,false);
  uVar5 = lib::L2CValue::operator__((L2CValue *)auStack112,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  if ((uVar5 & 1) == 0) {
LAB_7100002f88:
    lib::L2CValue::_L2CValue((L2CValue *)auStack112);
    lib::L2CValue::_L2CValue(aLStack128);
LAB_7100002f98:
    lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
    lib::L2CValue::operator_(aLStack96,(L2CValue *)&local_50);
    this_00 = &local_50;
  }
  else {
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_LUIGI_STATUS_SPECIAL_LW_FLAG_RISE);
    iVar3 = lib::L2CValue::as_integer(aLStack160);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_50,true);
    uVar5 = lib::L2CValue::operator__(aLStack144,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack160);
      goto LAB_7100002f88;
    }
    lib::L2CValue::L2CValue(aLStack176,CONTROL_PAD_BUTTON_SPECIAL);
    iVar3 = lib::L2CValue::as_integer(aLStack176);
    bVar1 = app::lua_bind::ControlModule__check_button_trigger_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue((L2CValue *)auStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((bVar2 & 1U) == 0) goto LAB_7100002f98;
    lib::L2CValue::L2CValue((L2CValue *)auStack112,0x1018dfb2f4);
    lib::L2CValue::L2CValue(aLStack128,0x8e2063fa2);
    uVar5 = lib::L2CValue::as_integer((L2CValue *)auStack112);
    uVar6 = lib::L2CValue::as_integer(aLStack128);
    fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6)
    ;
    lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar9);
    lib::L2CValue::operator_(aLStack96,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue((L2CValue *)auStack112);
    iVar3 = app::lua_bind::StatusModule__situation_kind_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue((L2CValue *)auStack112,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,SITUATION_KIND_AIR);
    uVar5 = lib::L2CValue::operator__((L2CValue *)auStack112,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)auStack112);
    if ((uVar5 & 1) != 0) goto LAB_7100002fb8;
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_KINETIC_TYPE_LUIGI_SPECIAL_AIR_LW);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,SITUATION_KIND_AIR);
    lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0xb0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue((L2CValue *)auStack112,GROUND_CORRECT_KIND_AIR);
    GVar4 = lib::L2CValue::as_integer((L2CValue *)auStack112);
    app::lua_bind::GroundModule__set_correct_impl(this->moduleAccessor,GVar4);
    this_00 = auStack112;
  }
  lib::L2CValue::_L2CValue((L2CValue *)this_00);
LAB_7100002fb8:
  lib::L2CValue::L2CValue((L2CValue *)auStack112,_FIGHTER_LUIGI_STATUS_SPECIAL_LW_FLOAT_RISE_Y);
  fVar9 = (float)lib::L2CValue::as_number(aLStack96);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack112);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar9,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)auStack112);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

