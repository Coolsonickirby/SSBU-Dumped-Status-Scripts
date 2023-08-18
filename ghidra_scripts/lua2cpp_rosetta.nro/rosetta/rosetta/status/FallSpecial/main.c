
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterRosetta::status::FallSpecial_main(L2CFighterRosetta *this,L2CValue *return_value)

{
  int iVar1;
  L2CValue *this_00;
  ulong uVar2;
  void *pvVar3;
  ulong uVar4;
  FighterKineticEnergyController *pFVar5;
  KineticEnergyNormal *pKVar6;
  float fVar7;
  uint uVar8;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  ulong local_50;
  undefined8 uStack72;
  
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,10);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_ROSETTA_STATUS_KIND_SPECIAL_HI_END);
  uVar2 = lib::L2CValue::operator__(this_00,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  if ((uVar2 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
    iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    pvVar3 = (void *)app::lua_bind::KineticModule__get_energy_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue(aLStack96,pvVar3);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue(aLStack112,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack128,0x18689b3939);
    uVar2 = lib::L2CValue::as_integer(aLStack112);
    uVar4 = lib::L2CValue::as_integer(aLStack128);
    fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar2,uVar4)
    ;
    lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar7);
    fVar7 = (float)lib::L2CValue::as_number((L2CValue *)&local_50);
    pFVar5 = (FighterKineticEnergyController *)lib::L2CValue::as_pointer(aLStack96);
    app::lua_bind::FighterKineticEnergyController__set_accel_x_mul_impl(pFVar5,fVar7);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack128,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack144,0x184e5f63cd);
    uVar2 = lib::L2CValue::as_integer(aLStack128);
    uVar4 = lib::L2CValue::as_integer(aLStack144);
    fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar2,uVar4)
    ;
    lib::L2CValue::L2CValue(aLStack112,fVar7);
    lib::L2CValue::L2CValue(aLStack160,0.0);
    uVar2 = lib::L2CValue::as_number(aLStack112);
    uVar8 = lib::L2CValue::as_number(aLStack160);
    local_50 = uVar2 & 0xffffffff | (ulong)uVar8 << 0x20;
    uStack72 = 0;
    pKVar6 = (KineticEnergyNormal *)lib::L2CValue::as_pointer(aLStack96);
    app::lua_bind::KineticEnergyNormal__set_stable_speed_impl(pKVar6,(Vector2f *)&local_50);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lua2cpp::L2CFighterCommon::status_fall_special(this);
  return;
}

