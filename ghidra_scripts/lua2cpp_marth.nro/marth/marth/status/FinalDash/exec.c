
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterMarth::status::FinalEnd_exec(L2CFighterMarth *this,L2CValue *return_value)

{
  int *piVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  void *pvVar5;
  KineticEnergyNormal *pKVar6;
  L2CValue *this_00;
  BattleObjectModuleAccessor *pBVar7;
  KineticEnergy *pKVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  undefined8 local_60;
  ulong uStack88;
  undefined8 local_50;
  undefined8 uStack72;
  
  iVar2 = app::lua_bind::StatusModule__status_kind_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack112,iVar2);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_MARTH_STATUS_KIND_FINAL_DASH);
  uVar3 = lib::L2CValue::operator__(aLStack112,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_MARTH_STATUS_KIND_FINAL_END);
    uVar3 = lib::L2CValue::operator__(aLStack112,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    if ((uVar3 & 1) != 0) {
      FUN_71000071b0(this);
    }
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0xdf05c072b);
    lib::L2CValue::L2CValue(aLStack144,0xadec47ea3);
    uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    uVar4 = lib::L2CValue::as_integer(aLStack144);
    fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar3,uVar4)
    ;
    lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar9);
    fVar9 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack160,fVar9);
    lib::L2CValue::operator_((L2CValue *)&local_50,aLStack160);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    pvVar5 = (void *)app::lua_bind::KineticModule__get_energy_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack144,pvVar5);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    iVar2 = app::lua_bind::StatusModule__situation_kind_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,iVar2);
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_MARTH_STATUS_FINAL_WORK_INT_SITUATION_PREV);
    iVar2 = lib::L2CValue::as_integer(aLStack160);
    iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,iVar2);
    uVar3 = lib::L2CValue::operator__((L2CValue *)&local_50,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    if ((uVar3 & 1) == 0) {
      iVar2 = app::lua_bind::StatusModule__situation_kind_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack176,iVar2);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,SITUATION_KIND_AIR);
      uVar3 = lib::L2CValue::operator__(aLStack176,(L2CValue *)&local_50);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      piVar1 = &ENERGY_STOP_RESET_TYPE_AIR;
      if ((uVar3 & 1) == 0) {
        piVar1 = &ENERGY_STOP_RESET_TYPE_GROUND;
      }
      lib::L2CValue::L2CValue(aLStack160,*piVar1);
      lib::L2CValue::L2CValue(aLStack192,0.0);
      lib::L2CValue::L2CValue(aLStack208,0.0);
      lib::L2CValue::L2CValue(aLStack224,0.0);
      lib::L2CValue::L2CValue(aLStack240,0.0);
      this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
      iVar2 = lib::L2CValue::as_integer(aLStack160);
      uVar10 = lib::L2CValue::as_number(aLStack128);
      uVar11 = lib::L2CValue::as_number(aLStack192);
      local_50 = CONCAT44(uVar11,uVar10);
      uStack72 = 0;
      uVar10 = lib::L2CValue::as_number(aLStack208);
      uVar11 = lib::L2CValue::as_number(aLStack224);
      uVar12 = lib::L2CValue::as_number(aLStack240);
      local_60 = CONCAT44(uVar11,uVar10);
      uStack88 = (ulong)uVar12;
      pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(this_00);
      pKVar8 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack144);
      app::lua_bind::KineticEnergy__reset_energy_impl
                (pKVar8,iVar2,(Vector2f *)&local_50,(Vector3f *)&local_60,pBVar7);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
      lib::L2CValue::L2CValue(aLStack160,0.0);
      uVar10 = lib::L2CValue::as_number((L2CValue *)&local_60);
      uVar11 = lib::L2CValue::as_number(aLStack160);
      local_50 = CONCAT44(uVar11,uVar10);
      uStack72 = 0;
      pKVar6 = (KineticEnergyNormal *)lib::L2CValue::as_pointer(aLStack144);
      app::lua_bind::KineticEnergyNormal__set_brake_impl(pKVar6,(Vector2f *)&local_50);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,-1.0);
      lib::L2CValue::L2CValue(aLStack160,0.0);
      uVar10 = lib::L2CValue::as_number((L2CValue *)&local_60);
      uVar11 = lib::L2CValue::as_number(aLStack160);
      local_50 = CONCAT44(uVar11,uVar10);
      uStack72 = 0;
      pKVar6 = (KineticEnergyNormal *)lib::L2CValue::as_pointer(aLStack144);
      app::lua_bind::KineticEnergyNormal__set_limit_speed_impl(pKVar6,(Vector2f *)&local_50);
      lib::L2CValue::_L2CValue(aLStack160);
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
      uVar10 = lib::L2CValue::as_number(aLStack128);
      uVar11 = lib::L2CValue::as_number((L2CValue *)&local_60);
      local_50 = CONCAT44(uVar11,uVar10);
      uStack72 = 0;
      pKVar6 = (KineticEnergyNormal *)lib::L2CValue::as_pointer(aLStack144);
      app::lua_bind::KineticEnergyNormal__set_speed_impl(pKVar6,(Vector2f *)&local_50);
    }
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
  }
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

