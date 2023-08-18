
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterLucario::status::SpecialLwAppear_init(L2CFighterLucario *this,L2CValue *return_value)

{
  L2CValue *this_00;
  bool bVar1;
  int iVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  ulong uVar5;
  void *pvVar6;
  L2CValue *pLVar7;
  KineticEnergyNormal *pKVar8;
  BattleObjectModuleAccessor *pBVar9;
  Hash40MapEntry ***pppHVar10;
  float fVar11;
  uint uVar12;
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  Hash40MapEntry **local_60;
  ulonglong uStack88;
  
  fVar11 = (float)app::lua_bind::ControlModule__get_stick_x_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack112,fVar11);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0x6e5ec7051);
  lib::L2CValue::L2CValue(aLStack144,0xcf44ba9e5);
  pLVar3 = (L2CValue *)lib::L2CValue::as_integer((L2CValue *)&local_60);
  uVar4 = lib::L2CValue::as_integer(aLStack144);
  fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl
                            (this->moduleAccessor,(ulong)pLVar3,uVar4);
  lib::L2CValue::L2CValue(aLStack128,fVar11);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue(aLStack256,0.0);
  lib::L2CValue::L2CValue(aLStack144,1.0);
  lib::L2CAgent::math_abs((L2CAgent *)aLStack112,pLVar3);
  pppHVar10 = &local_60;
  uVar4 = lib::L2CValue::operator__(aLStack128,(L2CValue *)pppHVar10);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
    lib::L2CValue::operator_(aLStack256,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    fVar11 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack176,fVar11);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,-1.0);
    lib::L2CValue::operator_(aLStack176,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::operator_(aLStack144,aLStack160);
    lib::L2CValue::_L2CValue(aLStack160);
    pLVar3 = aLStack176;
  }
  else {
    lib::L2CAgent::math_abs((L2CAgent *)aLStack112,(L2CValue *)pppHVar10);
    lib::L2CValue::operator_(aLStack192,aLStack128);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,1.0);
    lib::L2CValue::operator_((L2CValue *)&local_60,aLStack128);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::operator_(aLStack176,aLStack208);
    lib::L2CValue::operator_(aLStack256,aLStack160);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::L2CValue(aLStack160,aLStack256);
    lib::L2CValue::L2CValue(aLStack176,0.0);
    lib::L2CValue::L2CValue(aLStack192,1.0);
    lua2cpp::L2CFighterBase::clamp(this,(L2CValue)0x60,(L2CValue)0x50,(L2CValue)0x40);
    lib::L2CValue::operator_(aLStack256,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
    uVar4 = lib::L2CValue::operator_((L2CValue *)&local_60,aLStack112);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    bVar1 = (uVar4 & 1) == 0;
    if (bVar1) {
      lib::L2CValue::L2CValue(aLStack240,1.0);
      lib::L2CValue::operator_(aLStack240);
    }
    else {
      lib::L2CValue::L2CValue(aLStack208,1.0);
    }
    lib::L2CValue::operator_(aLStack144,aLStack208);
    lib::L2CValue::_L2CValue(aLStack208);
    if (!bVar1) goto LAB_710000dd94;
    pLVar3 = aLStack240;
  }
  lib::L2CValue::_L2CValue(pLVar3);
LAB_710000dd94:
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_60,_FIGHTER_LUCARIO_STATUS_WORK_ID_FLOAT_SPLIT_APPEAR_LR);
  fVar11 = (float)lib::L2CValue::as_number(aLStack144);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar11,iVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  fVar11 = (float)lib::L2CValue::as_number(aLStack144);
  app::lua_bind::PostureModule__set_lr_impl(this->moduleAccessor,fVar11);
  app::lua_bind::PostureModule__update_rot_y_lr_impl(this->moduleAccessor);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack272,aLStack256);
  lib::L2CValue::L2CValue(aLStack112,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack128,0xe20858ca6);
  uVar4 = lib::L2CValue::as_integer(aLStack112);
  uVar5 = lib::L2CValue::as_integer(aLStack128);
  fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar5);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar11);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack128,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack144,0xe1c88b3ff);
  uVar4 = lib::L2CValue::as_integer(aLStack128);
  uVar5 = lib::L2CValue::as_integer(aLStack144);
  fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack112,fVar11);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::operator_(aLStack112,(L2CValue *)&local_60);
  lib::L2CValue::operator_(aLStack160,aLStack272);
  lib::L2CValue::operator_((L2CValue *)&local_60,aLStack144);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_LUCARIO_STATUS_WORK_ID_FLOAT_SPLIT_APPEAR_OFFSET);
  fVar11 = (float)lib::L2CValue::as_number(aLStack128);
  iVar2 = lib::L2CValue::as_integer(aLStack144);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar11,iVar2);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack272);
  FUN_710000e690(this);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  pvVar6 = (void *)app::lua_bind::KineticModule__get_energy_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack112,pvVar6);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack144,0x961fca4f1);
  uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  uVar5 = lib::L2CValue::as_integer(aLStack144);
  iVar2 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack128,iVar2);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue(aLStack160,0.0);
  lib::L2CValue::L2CValue(aLStack176,0.0);
  lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x60,(L2CValue)0x50);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0);
  uVar4 = lib::L2CValue::operator__(aLStack128,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack192,_FIGHTER_LUCARIO_STATUS_WORK_ID_FLOAT_SPLIT_APPEAR_OFFSET);
    iVar2 = lib::L2CValue::as_integer(aLStack192);
    fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar11);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::L2CValue(aLStack208,_FIGHTER_LUCARIO_STATUS_WORK_ID_FLOAT_SPLIT_APPEAR_LR);
    iVar2 = lib::L2CValue::as_integer(aLStack208);
    fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack192,fVar11);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::operator_((L2CValue *)&local_60,aLStack128);
    lib::L2CValue::operator_(aLStack224,aLStack192);
    pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x18cdc1683);
    lib::L2CValue::operator_(pLVar3,aLStack208);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  }
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x18cdc1683);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x1fbdb2615);
  uVar4 = lib::L2CValue::as_number(pLVar3);
  uVar12 = lib::L2CValue::as_number(pLVar7);
  local_60 = (Hash40MapEntry **)(uVar4 & 0xffffffff | (ulong)uVar12 << 0x20);
  uStack88 = 0;
  pKVar8 = (KineticEnergyNormal *)lib::L2CValue::as_pointer(aLStack112);
  app::lua_bind::KineticEnergyNormal__set_limit_speed_impl(pKVar8,(Vector2f *)&local_60);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x18cdc1683);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x1fbdb2615);
  uVar4 = lib::L2CValue::as_number(pLVar3);
  uVar12 = lib::L2CValue::as_number(pLVar7);
  local_60 = (Hash40MapEntry **)(uVar4 & 0xffffffff | (ulong)uVar12 << 0x20);
  uStack88 = 0;
  pKVar8 = (KineticEnergyNormal *)lib::L2CValue::as_pointer(aLStack112);
  app::lua_bind::KineticEnergyNormal__set_speed_impl(pKVar8,(Vector2f *)&local_60);
  lib::L2CValue::L2CValue(aLStack192,0);
  lib::L2CValue::L2CValue(aLStack208,0);
  uVar4 = lib::L2CValue::as_number(aLStack192);
  uVar12 = lib::L2CValue::as_number(aLStack208);
  local_60 = (Hash40MapEntry **)(uVar4 & 0xffffffff | (ulong)uVar12 << 0x20);
  uStack88 = 0;
  pKVar8 = (KineticEnergyNormal *)lib::L2CValue::as_pointer(aLStack112);
  app::lua_bind::KineticEnergyNormal__set_brake_impl(pKVar8,(Vector2f *)&local_60);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
  this_00 = &this->globalTable;
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar3);
  app::KineticUtility::clear_unable_energy(iVar2,pBVar9);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,FIGHTER_KINETIC_ENERGY_ID_MOTION);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar3);
  app::KineticUtility::clear_unable_energy(iVar2,pBVar9);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
  pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar3);
  app::FighterSpecializer_Lucario::effect_resume(pBVar9);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack256);
  return;
}

