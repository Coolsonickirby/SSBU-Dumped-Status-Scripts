
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterRobot::status::SpecialHi_exec(L2CFighterRobot *this,L2CValue *return_value)

{
  int iVar1;
  ulong uVar2;
  void *pvVar3;
  KineticEnergy *pKVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  FighterKineticEnergyGravity *pFVar7;
  float fVar8;
  undefined8 uVar9;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack176,_FIGHTER_ROBOT_INSTANCE_WORK_ID_FLOAT_BURNER_ENERGY_VALUE);
  iVar1 = lib::L2CValue::as_integer(aLStack176);
  fVar8 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack112,fVar8);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::L2CValue(aLStack176,0.0);
  uVar2 = lib::L2CValue::operator_(aLStack176,aLStack112);
  lib::L2CValue::_L2CValue(aLStack176);
  if ((uVar2 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack176,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
    iVar1 = lib::L2CValue::as_integer(aLStack176);
    pvVar3 = (void *)app::lua_bind::KineticModule__get_energy_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue(aLStack128,pvVar3);
    lib::L2CValue::_L2CValue(aLStack176);
    pKVar4 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack128);
    uVar9 = app::lua_bind::KineticEnergy__get_speed_impl(pKVar4);
    lib::L2CValue::L2CValue(aLStack176,(float)uVar9);
    lib::L2CValue::L2CValue(aLStack160,(float)((ulong)uVar9 >> 0x20));
    lib::L2CValue::L2CValue(aLStack80,aLStack176);
    lib::L2CValue::L2CValue(aLStack96,aLStack160);
    lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xb0,(L2CValue)0xa0);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::L2CValue(aLStack80,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack192,0xcf9a6aac2);
    uVar2 = lib::L2CValue::as_integer(aLStack80);
    uVar5 = lib::L2CValue::as_integer(aLStack192);
    fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar2,uVar5)
    ;
    lib::L2CValue::L2CValue(aLStack96,fVar8);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,1.0);
    lib::L2CValue::operator_(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::operator_(aLStack112,aLStack192);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROBOT_INSTANCE_WORK_ID_FLOAT_BURNER_ENERGY_VALUE);
    fVar8 = (float)lib::L2CValue::as_number(aLStack112);
    iVar1 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar8,iVar1);
    lib::L2CValue::_L2CValue(aLStack80);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x1fbdb2615);
    lib::L2CValue::L2CValue(aLStack192,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack208,0xe6f8f0be1);
    uVar2 = lib::L2CValue::as_integer(aLStack192);
    uVar5 = lib::L2CValue::as_integer(aLStack208);
    fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar2,uVar5)
    ;
    lib::L2CValue::L2CValue(aLStack80,fVar8);
    uVar2 = lib::L2CValue::operator__(aLStack80,pLVar6);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack192);
    if ((uVar2 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack192,0x1086bc4a93);
      lib::L2CValue::L2CValue(aLStack208,0x14be9a6b83);
      uVar2 = lib::L2CValue::as_integer(aLStack192);
      uVar5 = lib::L2CValue::as_integer(aLStack208);
      fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar2,uVar5);
      lib::L2CValue::L2CValue(aLStack80,fVar8);
      lib::L2CValue::operator_(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack192);
    }
    fVar8 = (float)lib::L2CValue::as_number(aLStack96);
    pFVar7 = (FighterKineticEnergyGravity *)lib::L2CValue::as_pointer(aLStack128);
    app::lua_bind::FighterKineticEnergyGravity__set_accel_impl(pFVar7,fVar8);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

