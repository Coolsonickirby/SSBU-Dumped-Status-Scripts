
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponRobotWidebeam::status::Beam_exec(L2CWeaponRobotWidebeam *this,L2CValue *return_value)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  L2CValue *pLVar4;
  void *pvVar5;
  ulong uVar6;
  ulong uVar7;
  BattleObjectModuleAccessor *pBVar8;
  L2CValue *pLVar9;
  L2CValue *pLVar10;
  float fVar11;
  long lVar12;
  L2CValue aLStack288 [16];
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
  ulong local_70;
  ulong uStack104;
  
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,3);
  uVar2 = lib::L2CValue::as_integer(pLVar4);
  uVar2 = app::sv_battle_object::get_founder_id(uVar2);
  lib::L2CValue::L2CValue(aLStack128,uVar2);
  uVar2 = lib::L2CValue::as_integer(aLStack128);
  pvVar5 = (void *)app::sv_battle_object::module_accessor(uVar2);
  if (pvVar5 == (void *)0x0) {
    lib::L2CValue::L2CValue
              (aLStack144,(L2CValue *)&FIGHTER_STATUS_WORK_KEEP_FLAG_AIR_LASSO_REACH_FLOAT);
  }
  else {
    lib::L2CValue::L2CValue(aLStack144,pvVar5);
  }
  lib::L2CValue::L2CValue(aLStack192,0xdf05c072b);
  lib::L2CValue::L2CValue(aLStack208,0x207ae26c34);
  uVar6 = lib::L2CValue::as_integer(aLStack192);
  uVar7 = lib::L2CValue::as_integer(aLStack208);
  pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack144);
  fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(pBVar8,uVar6,uVar7);
  lib::L2CValue::L2CValue(aLStack176,fVar11);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,10.0);
  lib::L2CValue::operator_((L2CValue *)&local_70,aLStack176);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,0xdf05c072b);
  lib::L2CValue::L2CValue(aLStack192,0x18092bb762);
  uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  uVar7 = lib::L2CValue::as_integer(aLStack192);
  pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack144);
  fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(pBVar8,uVar6,uVar7);
  lib::L2CValue::L2CValue(aLStack176,fVar11);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_70,_WEAPON_ROBOT_WIDEBEAM_INSTANCE_WORK_ID_FLOAT_BEAM_LENGTH);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack192,fVar11);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::operator_(aLStack192,aLStack176);
  lib::L2CValue::operator_(aLStack192,(L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  uVar6 = lib::L2CValue::operator_(aLStack160,aLStack192);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::operator_(aLStack192,aLStack160);
  }
  lib::L2CValue::L2CValue(aLStack224,0.0);
  lib::L2CValue::L2CValue(aLStack240,0.0);
  lib::L2CValue::L2CValue(aLStack256,0.0);
  lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0x20,(L2CValue)0x10,(L2CValue)0x0);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack208,0x18cdc1683);
  pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack208,0x1fbdb2615);
  pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack208,0x162d277af);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
  lib::L2CValue::L2CValue(aLStack272,0.0);
  lib::L2CValue::operator_(pLVar4,(L2CValue *)&local_70);
  lib::L2CValue::operator_(pLVar9,aLStack192);
  lib::L2CValue::operator_(pLVar10,aLStack272);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue(aLStack288,0);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack208,0x18cdc1683);
  pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack208,0x1fbdb2615);
  pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack208,0x162d277af);
  iVar3 = lib::L2CValue::as_integer(aLStack288);
  uVar6 = lib::L2CValue::as_number(pLVar4);
  lVar12 = lib::L2CValue::as_number(pLVar9);
  uVar2 = lib::L2CValue::as_number(pLVar10);
  local_70 = uVar6 & 0xffffffff | lVar12 << 0x20;
  uStack104 = (ulong)uVar2;
  bVar1 = app::lua_bind::AttackModule__set_offset_impl
                    (this->moduleAccessor,iVar3,(Vector3f *)&local_70);
  lib::L2CValue::L2CValue(aLStack272,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_70,_WEAPON_ROBOT_WIDEBEAM_INSTANCE_WORK_ID_FLOAT_BEAM_LENGTH);
  fVar11 = (float)lib::L2CValue::as_number(aLStack192);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar11,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  return;
}

