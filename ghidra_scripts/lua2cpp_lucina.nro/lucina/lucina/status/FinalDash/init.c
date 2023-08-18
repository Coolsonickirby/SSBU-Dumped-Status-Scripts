
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterLucina::status::FinalEnd_init(L2CFighterLucina *this,L2CValue *return_value)

{
  L2CValue *this_00;
  int *piVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  L2CValue *pLVar7;
  BattleObjectModuleAccessor *pBVar8;
  ulong uVar9;
  ulong uVar10;
  Hash40 HVar11;
  void *pvVar12;
  KineticEnergy *pKVar13;
  KineticEnergyNormal *pKVar14;
  undefined8 *this_01;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  uint uVar18;
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  undefined8 auStack176 [2];
  L2CValue aLStack160 [16];
  undefined8 local_90;
  ulong uStack136;
  undefined8 local_80;
  undefined8 uStack120;
  
  lib::L2CValue::L2CValue((L2CValue *)&local_80,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  this_00 = &this->globalTable;
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_80);
  pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar7);
  app::KineticUtility::clear_unable_energy(iVar3,pBVar8);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  lib::L2CValue::L2CValue((L2CValue *)&local_80,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_80);
  pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar7);
  app::KineticUtility::clear_unable_energy(iVar3,pBVar8);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  lib::L2CValue::L2CValue((L2CValue *)&local_80,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_80);
  pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar7);
  app::KineticUtility::clear_unable_energy(iVar3,pBVar8);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  lib::L2CValue::L2CValue((L2CValue *)&local_80,_FIGHTER_KINETIC_ENERGY_ID_DAMAGE);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_80);
  pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar7);
  app::KineticUtility::clear_unable_energy(iVar3,pBVar8);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  lib::L2CValue::L2CValue((L2CValue *)&local_80,FIGHTER_KINETIC_ENERGY_ID_MOTION);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_80);
  pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar7);
  app::KineticUtility::clear_unable_energy(iVar3,pBVar8);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  iVar3 = app::lua_bind::StatusModule__status_kind_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack160,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_80,FIGHTER_STATUS_KIND_FINAL);
  uVar9 = lib::L2CValue::operator__(aLStack160,(L2CValue *)&local_80);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  iVar3 = _FIGHTER_MARTH_FINAL_INFO_NUM_MAX;
  if ((uVar9 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_80,_FIGHTER_MARTH_STATUS_KIND_FINAL_DASH);
    uVar9 = lib::L2CValue::operator__(aLStack160,(L2CValue *)&local_80);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    if ((uVar9 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_80,0xe35b6b29f);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,true);
      HVar11 = lib::L2CValue::as_hash((L2CValue *)&local_80);
      bVar2 = lib::L2CValue::as_bool((L2CValue *)&local_90);
      app::lua_bind::EffectModule__kill_kind_impl
                (this->moduleAccessor,HVar11,(bool)(bVar2 & 1),true);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,0xdf05c072b);
      lib::L2CValue::L2CValue(aLStack192,0xadec47ea3);
      uVar9 = lib::L2CValue::as_integer((L2CValue *)&local_90);
      uVar10 = lib::L2CValue::as_integer(aLStack192);
      fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                (this->moduleAccessor,uVar9,uVar10);
      lib::L2CValue::L2CValue((L2CValue *)&local_80,fVar15);
      fVar15 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack208,fVar15);
      lib::L2CValue::operator_((L2CValue *)&local_80,aLStack208);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      lib::L2CValue::L2CValue((L2CValue *)&local_80,_FIGHTER_KINETIC_ENERGY_ID_STOP);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_80);
      pvVar12 = (void *)app::lua_bind::KineticModule__get_energy_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack192,pvVar12);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      iVar3 = app::lua_bind::StatusModule__situation_kind_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack224,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_80,SITUATION_KIND_AIR);
      uVar9 = lib::L2CValue::operator__(aLStack224,(L2CValue *)&local_80);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      piVar1 = &ENERGY_STOP_RESET_TYPE_AIR;
      if ((uVar9 & 1) == 0) {
        piVar1 = &ENERGY_STOP_RESET_TYPE_GROUND;
      }
      lib::L2CValue::L2CValue(aLStack208,*piVar1);
      lib::L2CValue::L2CValue(aLStack240,0.0);
      lib::L2CValue::L2CValue(aLStack256,0.0);
      lib::L2CValue::L2CValue(aLStack272,0.0);
      lib::L2CValue::L2CValue(aLStack288,0.0);
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
      iVar3 = lib::L2CValue::as_integer(aLStack208);
      uVar16 = lib::L2CValue::as_number((L2CValue *)auStack176);
      uVar17 = lib::L2CValue::as_number(aLStack240);
      local_80 = CONCAT44(uVar17,uVar16);
      uStack120 = 0;
      uVar16 = lib::L2CValue::as_number(aLStack256);
      uVar17 = lib::L2CValue::as_number(aLStack272);
      uVar18 = lib::L2CValue::as_number(aLStack288);
      local_90 = CONCAT44(uVar17,uVar16);
      uStack136 = (ulong)uVar18;
      pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar7);
      pKVar13 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack192);
      app::lua_bind::KineticEnergy__reset_energy_impl
                (pKVar13,iVar3,(Vector2f *)&local_80,(Vector3f *)&local_90,pBVar8);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,0.0);
      lib::L2CValue::L2CValue(aLStack208,0.0);
      uVar16 = lib::L2CValue::as_number((L2CValue *)&local_90);
      uVar17 = lib::L2CValue::as_number(aLStack208);
      local_80 = CONCAT44(uVar17,uVar16);
      uStack120 = 0;
      pKVar14 = (KineticEnergyNormal *)lib::L2CValue::as_pointer(aLStack192);
      app::lua_bind::KineticEnergyNormal__set_brake_impl(pKVar14,(Vector2f *)&local_80);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,-1.0);
      lib::L2CValue::L2CValue(aLStack208,0.0);
      uVar16 = lib::L2CValue::as_number((L2CValue *)&local_90);
      uVar17 = lib::L2CValue::as_number(aLStack208);
      local_80 = CONCAT44(uVar17,uVar16);
      uStack120 = 0;
      pKVar14 = (KineticEnergyNormal *)lib::L2CValue::as_pointer(aLStack192);
      app::lua_bind::KineticEnergyNormal__set_limit_speed_impl(pKVar14,(Vector2f *)&local_80);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      pKVar13 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack192);
      app::lua_bind::KineticEnergy__enable_impl(pKVar13);
      iVar3 = app::lua_bind::StatusModule__situation_kind_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue((L2CValue *)&local_80,iVar3);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_90,_FIGHTER_MARTH_STATUS_FINAL_WORK_INT_SITUATION_PREV);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_80);
      iVar6 = lib::L2CValue::as_integer((L2CValue *)&local_90);
      app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar6);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      lib::L2CValue::_L2CValue(aLStack192);
      this_01 = auStack176;
      goto LAB_71000068d8;
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_80,_FIGHTER_MARTH_STATUS_KIND_FINAL_END);
    lib::L2CValue::operator__(aLStack160,(L2CValue *)&local_80);
  }
  else {
    if (0 < _FIGHTER_MARTH_FINAL_INFO_NUM_MAX) {
      iVar6 = 0;
      do {
        lib::L2CValue::L2CValue((L2CValue *)&local_80,0);
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_90,_FIGHTER_MARTH_STATUS_FINAL_WORK_INT_INFO_TASK_ID);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_80);
        iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_90);
        app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar4,iVar5);
        lib::L2CValue::_L2CValue((L2CValue *)&local_90);
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        lib::L2CValue::L2CValue((L2CValue *)&local_90,0xdf05c072b);
        lib::L2CValue::L2CValue((L2CValue *)auStack176,0xc6039cf82);
        uVar9 = lib::L2CValue::as_integer((L2CValue *)&local_90);
        uVar10 = lib::L2CValue::as_integer((L2CValue *)auStack176);
        iVar4 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar9,uVar10);
        lib::L2CValue::L2CValue((L2CValue *)&local_80,iVar4);
        lib::L2CValue::L2CValue
                  (aLStack192,iVar6 + _FIGHTER_MARTH_STATUS_FINAL_WORK_INT_INFO_DISP_COUNT);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_80);
        iVar5 = lib::L2CValue::as_integer(aLStack192);
        app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar4,iVar5);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        lib::L2CValue::_L2CValue((L2CValue *)auStack176);
        lib::L2CValue::_L2CValue((L2CValue *)&local_90);
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar3);
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_80,0);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,_FIGHTER_MARTH_STATUS_FINAL_WORK_INT_INFO_NUM);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_80);
    iVar6 = lib::L2CValue::as_integer((L2CValue *)&local_90);
    app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar6);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  }
  this_01 = &local_80;
LAB_71000068d8:
  lib::L2CValue::_L2CValue((L2CValue *)this_01);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

