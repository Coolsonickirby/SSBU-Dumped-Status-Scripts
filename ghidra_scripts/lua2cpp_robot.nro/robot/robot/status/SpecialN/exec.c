
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterRobot::status::SpecialN_exec(L2CFighterRobot *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  L2CValue *pLVar8;
  L2CValue *pLVar9;
  L2CValue *this_00;
  L2CValue *this_01;
  L2CValue *this_02;
  Hash40 HVar10;
  L2CValue *pLVar11;
  float fVar12;
  long lVar13;
  ulong local_150;
  ulong uStack328;
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  undefined auStack224 [32];
  undefined auStack192 [32];
  L2CValue aLStack160 [16];
  undefined8 local_90;
  BattleObject *pBStack136;
  
  fVar12 = (float)app::lua_bind::ControlModule__get_stick_y_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)&local_150,fVar12);
  lib::L2CValue::operator_((L2CValue *)&local_150);
  lib::L2CValue::_L2CValue((L2CValue *)&local_150);
  lib::L2CValue::L2CValue((L2CValue *)(auStack192 + 0x10),0.0);
  lib::L2CValue::L2CValue((L2CValue *)&local_150,_FIGHTER_ROBOT_STATUS_BEAM_WORK_FLOAT_NECK_ANG);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_150);
  fVar12 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)auStack192,fVar12);
  lib::L2CValue::_L2CValue((L2CValue *)&local_150);
  lib::L2CValue::L2CValue((L2CValue *)(auStack224 + 0x10),false);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,_FIGHTER_ROBOT_STATUS_BEAM_FLAG_NECK_CONTROL);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_90);
  uVar4 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  pLVar11 = (L2CValue *)(ulong)(uVar4 & 1);
  lib::L2CValue::L2CValue((L2CValue *)&local_150,SUB41(uVar4 & 1,0));
  bVar1 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_150);
  lib::L2CValue::_L2CValue((L2CValue *)&local_150);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  if ((bVar1 & 1U) != 0) {
    lib::L2CAgent::math_abs((L2CAgent *)aLStack160,pLVar11);
    uVar5 = lib::L2CValue::operator_((L2CValue *)(auStack192 + 0x10),(L2CValue *)&local_150);
    lib::L2CValue::_L2CValue((L2CValue *)&local_150);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_150,true);
      lib::L2CValue::operator_((L2CValue *)(auStack224 + 0x10),(L2CValue *)&local_150);
      puVar7 = &local_150;
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)auStack224,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack240,0x195b6af0e2);
      uVar5 = lib::L2CValue::as_integer((L2CValue *)auStack224);
      uVar6 = lib::L2CValue::as_integer(aLStack240);
      fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                (this->moduleAccessor,uVar5,uVar6);
      lib::L2CValue::L2CValue((L2CValue *)&local_150,fVar12);
      lib::L2CValue::operator_((L2CValue *)&local_150,aLStack160);
      lib::L2CValue::_L2CValue((L2CValue *)&local_150);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue((L2CValue *)auStack224);
      lib::L2CValue::L2CValue((L2CValue *)auStack224);
      lib::L2CValue::L2CValue((L2CValue *)&local_150,0.0);
      uVar5 = lib::L2CValue::operator_((L2CValue *)&local_150,aLStack160);
      lib::L2CValue::_L2CValue((L2CValue *)&local_150);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack256,0xf899192aa);
        lib::L2CValue::L2CValue(aLStack272,0x1519714630);
        uVar5 = lib::L2CValue::as_integer(aLStack256);
        uVar6 = lib::L2CValue::as_integer(aLStack272);
        fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                  (this->moduleAccessor,uVar5,uVar6);
        lib::L2CValue::L2CValue(aLStack240,fVar12);
        lib::L2CValue::operator_(aLStack240);
        lib::L2CValue::operator_((L2CValue *)auStack224,(L2CValue *)&local_150);
        lib::L2CValue::_L2CValue((L2CValue *)&local_150);
        lib::L2CValue::_L2CValue(aLStack240);
        lib::L2CValue::_L2CValue(aLStack272);
        pLVar11 = aLStack256;
      }
      else {
        lib::L2CValue::L2CValue(aLStack240,0xf899192aa);
        lib::L2CValue::L2CValue(aLStack256,0x13593be703);
        uVar5 = lib::L2CValue::as_integer(aLStack240);
        uVar6 = lib::L2CValue::as_integer(aLStack256);
        fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                  (this->moduleAccessor,uVar5,uVar6);
        lib::L2CValue::L2CValue((L2CValue *)&local_150,fVar12);
        lib::L2CValue::operator_((L2CValue *)auStack224,(L2CValue *)&local_150);
        lib::L2CValue::_L2CValue((L2CValue *)&local_150);
        lib::L2CValue::_L2CValue(aLStack256);
        pLVar11 = aLStack240;
      }
      lib::L2CValue::_L2CValue(pLVar11);
      lib::L2CValue::operator_((L2CValue *)auStack192,(L2CValue *)&local_90);
      puVar7 = &local_150;
      lib::L2CValue::operator_((L2CValue *)auStack192,(L2CValue *)puVar7);
      lib::L2CValue::_L2CValue((L2CValue *)&local_150);
      lib::L2CAgent::math_abs((L2CAgent *)auStack192,(L2CValue *)puVar7);
      lib::L2CAgent::math_abs((L2CAgent *)auStack224,(L2CValue *)puVar7);
      uVar5 = lib::L2CValue::operator_(aLStack240,(L2CValue *)&local_150);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue((L2CValue *)&local_150);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::operator_((L2CValue *)auStack192,(L2CValue *)auStack224);
      }
      lib::L2CValue::_L2CValue((L2CValue *)auStack224);
      puVar7 = &local_90;
    }
    lib::L2CValue::_L2CValue((L2CValue *)puVar7);
  }
  bVar1 = lib::L2CValue::operator_cast_to_bool((L2CValue *)(auStack224 + 0x10));
  if ((bVar1 & 1U) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_90,_FIGHTER_ROBOT_STATUS_BEAM_FLAG_NECK_RETURN);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_90);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_150,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_150);
    lib::L2CValue::_L2CValue((L2CValue *)&local_150);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    if ((bVar1 & 1U) == 0) goto LAB_7100005c74;
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_150,0xf899192aa);
  lib::L2CValue::L2CValue((L2CValue *)auStack224,0x1a2cc728a1);
  uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_150);
  uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack224);
  fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,fVar12);
  lib::L2CValue::_L2CValue((L2CValue *)auStack224);
  lib::L2CValue::_L2CValue((L2CValue *)&local_150);
  lib::L2CValue::L2CValue((L2CValue *)&local_150,0.0);
  uVar5 = lib::L2CValue::operator_((L2CValue *)auStack192,(L2CValue *)&local_150);
  lib::L2CValue::_L2CValue((L2CValue *)&local_150);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_150,0.0);
    uVar5 = lib::L2CValue::operator_((L2CValue *)&local_150,(L2CValue *)auStack192);
    lib::L2CValue::_L2CValue((L2CValue *)&local_150);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::operator_((L2CValue *)auStack192,(L2CValue *)&local_90);
      lib::L2CValue::operator_((L2CValue *)auStack192,(L2CValue *)&local_150);
      lib::L2CValue::_L2CValue((L2CValue *)&local_150);
      lib::L2CValue::L2CValue((L2CValue *)&local_150,0.0);
      uVar5 = lib::L2CValue::operator_((L2CValue *)auStack192,(L2CValue *)&local_150);
      lib::L2CValue::_L2CValue((L2CValue *)&local_150);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_150,0.0);
        lib::L2CValue::operator_((L2CValue *)auStack192,(L2CValue *)&local_150);
        goto LAB_7100005c64;
      }
    }
  }
  else {
    lib::L2CValue::operator_((L2CValue *)auStack192,(L2CValue *)&local_90);
    lib::L2CValue::operator_((L2CValue *)auStack192,(L2CValue *)&local_150);
    lib::L2CValue::_L2CValue((L2CValue *)&local_150);
    lib::L2CValue::L2CValue((L2CValue *)&local_150,0.0);
    uVar5 = lib::L2CValue::operator_((L2CValue *)&local_150,(L2CValue *)auStack192);
    lib::L2CValue::_L2CValue((L2CValue *)&local_150);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_150,0.0);
      lib::L2CValue::operator_((L2CValue *)auStack192,(L2CValue *)&local_150);
LAB_7100005c64:
      lib::L2CValue::_L2CValue((L2CValue *)&local_150);
    }
  }
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
LAB_7100005c74:
  lib::L2CValue::L2CValue((L2CValue *)auStack224);
  lib::L2CValue::L2CValue((L2CValue *)&local_150,0x42011d653);
  lib::L2CValue::operator_((L2CValue *)auStack224,(L2CValue *)&local_150);
  lib::L2CValue::_L2CValue((L2CValue *)&local_150);
  lib::L2CValue::L2CValue(aLStack256,0.0);
  lib::L2CValue::L2CValue(aLStack272,0.0);
  lib::L2CValue::L2CValue(aLStack288,0.0);
  lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0x0,(L2CValue)0xf0,(L2CValue)0xe0);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack256);
  pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x18cdc1683);
  pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x1fbdb2615);
  pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x162d277af);
  this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x18cdc1683);
  this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x1fbdb2615);
  this_02 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x162d277af);
  HVar10 = lib::L2CValue::as_hash((L2CValue *)auStack224);
  uVar5 = lib::L2CValue::as_number(this_00);
  lVar13 = lib::L2CValue::as_number(this_01);
  uVar4 = lib::L2CValue::as_number(this_02);
  local_90 = (Hash40MapEntry **)(uVar5 & 0xffffffff | lVar13 << 0x20);
  pBStack136 = (BattleObject *)(ulong)uVar4;
  app::lua_bind::ModelModule__joint_rotate_impl(this->moduleAccessor,HVar10,(Vector3f *)&local_90);
  lib::L2CValue::L2CValue((L2CValue *)&local_150,(float)local_90);
  lib::L2CValue::L2CValue(aLStack320,local_90._4_4_);
  lib::L2CValue::L2CValue(aLStack304,pBStack136._0_4_);
  lib::L2CValue::operator_(pLVar11,(L2CValue *)&local_150);
  lib::L2CValue::operator_(pLVar8,aLStack320);
  lib::L2CValue::operator_(pLVar9,aLStack304);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::_L2CValue((L2CValue *)&local_150);
  pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x162d277af);
  lib::L2CValue::operator_(pLVar11,(L2CValue *)auStack192);
  pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x18cdc1683);
  pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x1fbdb2615);
  pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x162d277af);
  HVar10 = lib::L2CValue::as_hash((L2CValue *)auStack224);
  uVar5 = lib::L2CValue::as_number(pLVar11);
  lVar13 = lib::L2CValue::as_number(pLVar8);
  uVar4 = lib::L2CValue::as_number(pLVar9);
  local_150 = uVar5 & 0xffffffff | lVar13 << 0x20;
  uStack328 = (ulong)uVar4;
  app::lua_bind::ModelModule__set_joint_rotate_impl
            (this->moduleAccessor,HVar10,(Vector3f *)&local_150,0,0);
  lib::L2CValue::L2CValue((L2CValue *)&local_150,_FIGHTER_ROBOT_STATUS_BEAM_WORK_FLOAT_NECK_ANG);
  fVar12 = (float)lib::L2CValue::as_number((L2CValue *)auStack192);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_150);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar12,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_150);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue((L2CValue *)auStack224);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack224 + 0x10));
  lib::L2CValue::_L2CValue((L2CValue *)auStack192);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack192 + 0x10));
  lib::L2CValue::_L2CValue(aLStack160);
  return;
}

