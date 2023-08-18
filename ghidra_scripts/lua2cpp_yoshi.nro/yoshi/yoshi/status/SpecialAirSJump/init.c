
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterYoshi::status::SpecialAirSJump_init(L2CFighterYoshi *this,L2CValue *return_value)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  L2CValue *pLVar4;
  L2CValue *this_00;
  void *pvVar5;
  KineticEnergyNormal *pKVar6;
  FighterKineticEnergyGravity *pFVar7;
  uint uVar8;
  float fVar9;
  undefined8 uVar10;
  ulong local_d0;
  undefined8 uStack200;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack112,0.0);
  lib::L2CValue::L2CValue(aLStack128,0.0);
  lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x90,(L2CValue)0x80);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  iVar1 = app::lua_bind::StatusModule__situation_kind_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack144,iVar1);
  lib::L2CValue::L2CValue((L2CValue *)&local_d0,SITUATION_KIND_AIR);
  uVar3 = lib::L2CValue::operator__(aLStack144,(L2CValue *)&local_d0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_d0);
  lib::L2CValue::_L2CValue(aLStack144);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_YOSHI_STATUS_SPECIAL_S_WORK_FLOAT_SPEED);
    iVar1 = lib::L2CValue::as_integer(aLStack160);
    fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue(aLStack144,fVar9);
    fVar9 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack176,fVar9);
    lib::L2CValue::operator_(aLStack144,aLStack176);
    pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x18cdc1683);
    lib::L2CValue::operator_(pLVar4,(L2CValue *)&local_d0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_d0);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack160);
    pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x1fbdb2615);
    lib::L2CValue::L2CValue((L2CValue *)&local_d0,0.0);
    lib::L2CValue::operator_(pLVar4,(L2CValue *)&local_d0);
  }
  else {
    pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x18cdc1683);
    this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x1fbdb2615);
    uVar10 = app::lua_bind::KineticModule__get_sum_speed_impl(this->moduleAccessor,-1);
    lib::L2CValue::L2CValue((L2CValue *)&local_d0,(float)uVar10);
    lib::L2CValue::L2CValue(aLStack192,(float)((ulong)uVar10 >> 0x20));
    lib::L2CValue::operator_(pLVar4,(L2CValue *)&local_d0);
    lib::L2CValue::operator_(this_00,aLStack192);
    lib::L2CValue::_L2CValue(aLStack192);
  }
  lib::L2CValue::_L2CValue((L2CValue *)&local_d0);
  lib::L2CValue::L2CValue((L2CValue *)&local_d0,_FIGHTER_KINETIC_TYPE_YOSHI_SPECIAL_S_AIR);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_d0);
  app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue((L2CValue *)&local_d0);
  lib::L2CValue::L2CValue((L2CValue *)&local_d0,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_d0);
  pvVar5 = (void *)app::lua_bind::KineticModule__get_energy_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack144,pvVar5);
  lib::L2CValue::_L2CValue((L2CValue *)&local_d0);
  lib::L2CValue::L2CValue((L2CValue *)&local_d0,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_d0);
  pvVar5 = (void *)app::lua_bind::KineticModule__get_energy_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack160,pvVar5);
  lib::L2CValue::_L2CValue((L2CValue *)&local_d0);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x18cdc1683);
  lib::L2CValue::L2CValue(aLStack176,0.0);
  uVar3 = lib::L2CValue::as_number(pLVar4);
  uVar8 = lib::L2CValue::as_number(aLStack176);
  local_d0 = uVar3 & 0xffffffff | (ulong)uVar8 << 0x20;
  uStack200 = 0;
  pKVar6 = (KineticEnergyNormal *)lib::L2CValue::as_pointer(aLStack144);
  app::lua_bind::KineticEnergyNormal__set_speed_impl(pKVar6,(Vector2f *)&local_d0);
  lib::L2CValue::_L2CValue(aLStack176);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x1fbdb2615);
  fVar9 = (float)lib::L2CValue::as_number(pLVar4);
  pFVar7 = (FighterKineticEnergyGravity *)lib::L2CValue::as_pointer(aLStack160);
  app::lua_bind::FighterKineticEnergyGravity__set_speed_impl(pFVar7,fVar9);
  lib::L2CValue::L2CValue((L2CValue *)&local_d0,_STATUS_KIND_NONE);
  lib::L2CValue::L2CValue(aLStack176,_FIGHTER_YOSHI_STATUS_SPECIAL_S_WORK_INT_NEXT_STATUS);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_d0);
  iVar2 = lib::L2CValue::as_integer(aLStack176);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar2);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue((L2CValue *)&local_d0);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

