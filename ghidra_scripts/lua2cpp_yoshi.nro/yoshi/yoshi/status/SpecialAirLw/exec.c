
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterYoshi::status::SpecialLwToAir_exec(L2CFighterYoshi *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  void *pvVar6;
  FighterKineticEnergyGravity *pFVar7;
  float fVar8;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_GROUND_CLIFF_CHECK_KIND_ON_DROP_BOTH_SIDES);
  lua2cpp::L2CFighterCommon::sub_fighter_cliff_check(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack112,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack128,0x5484b2661);
  uVar4 = lib::L2CValue::as_integer(aLStack112);
  uVar5 = lib::L2CValue::as_integer(aLStack128);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack96,fVar8);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_YOSHI_STATUS_SPECIAL_LW_FLAG_FALL);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack128);
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_KINETIC_TYPE_FALL);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    app::lua_bind::KineticModule__unable_energy_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::L2CValue(aLStack144,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
    iVar3 = lib::L2CValue::as_integer(aLStack144);
    pvVar6 = (void *)app::lua_bind::KineticModule__get_energy_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack128,pvVar6);
    lib::L2CValue::_L2CValue(aLStack144);
    fVar8 = (float)lib::L2CValue::as_number(aLStack96);
    pFVar7 = (FighterKineticEnergyGravity *)lib::L2CValue::as_pointer(aLStack128);
    app::lua_bind::FighterKineticEnergyGravity__set_speed_impl(pFVar7,fVar8);
    lib::L2CValue::L2CValue(aLStack144,0.0);
    fVar8 = (float)lib::L2CValue::as_number(aLStack144);
    pFVar7 = (FighterKineticEnergyGravity *)lib::L2CValue::as_pointer(aLStack128);
    app::lua_bind::FighterKineticEnergyGravity__set_accel_impl(pFVar7,fVar8);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

