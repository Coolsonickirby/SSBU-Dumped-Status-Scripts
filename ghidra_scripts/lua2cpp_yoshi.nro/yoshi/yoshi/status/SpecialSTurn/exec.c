
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterYoshi::status::SpecialSTurn_exec(L2CFighterYoshi *this,L2CValue *return_value)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  L2CValue *pLVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  ulong uVar7;
  L2CValue *pLVar8;
  L2CAgent *pLVar9;
  undefined8 *puVar10;
  L2CValue *pLVar11;
  L2CValue *pLVar12;
  L2CValue *pLVar13;
  Hash40 HVar14;
  float fVar15;
  uint uVar16;
  undefined8 uVar17;
  long lVar18;
  L2CValue aLStack544 [16];
  L2CValue aLStack528 [16];
  undefined local_200 [32];
  L2CValue aLStack480 [16];
  L2CValue aLStack464 [16];
  L2CValue aLStack448 [16];
  L2CValue aLStack432 [16];
  undefined8 auStack416 [2];
  undefined auStack400 [32];
  undefined auStack368 [32];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  undefined auStack272 [32];
  undefined auStack240 [32];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  undefined8 local_a0;
  lua_State *plStack152;
  
  lib::L2CValue::L2CValue(aLStack192,0.0);
  lib::L2CValue::L2CValue(aLStack208,0.0);
  lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x40,(L2CValue)0x30);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x18cdc1683);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x1fbdb2615);
  uVar17 = app::lua_bind::KineticModule__get_sum_speed_impl(this->moduleAccessor,-1);
  lib::L2CValue::L2CValue((L2CValue *)local_200,(float)uVar17);
  pLVar8 = (L2CValue *)(local_200 + 0x10);
  lib::L2CValue::L2CValue(pLVar8,(float)((ulong)uVar17 >> 0x20));
  lib::L2CValue::operator_(pLVar4,(L2CValue *)local_200);
  lib::L2CValue::operator_(pLVar5,pLVar8);
  lib::L2CValue::_L2CValue(pLVar8);
  lib::L2CValue::_L2CValue((L2CValue *)local_200);
  lib::L2CValue::L2CValue((L2CValue *)local_200,_FIGHTER_YOSHI_STATUS_SPECIAL_S_WORK_FLOAT_ANGLE);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)local_200);
  fVar15 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue((L2CValue *)(auStack240 + 0x10),fVar15);
  lib::L2CValue::_L2CValue((L2CValue *)local_200);
  lib::L2CValue::L2CValue
            ((L2CValue *)local_200,_FIGHTER_YOSHI_STATUS_SPECIAL_S_WORK_FLOAT_SPEED_BACKUP);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)local_200);
  fVar15 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue((L2CValue *)auStack240,fVar15);
  lib::L2CValue::_L2CValue((L2CValue *)local_200);
  lib::L2CValue::L2CValue((L2CValue *)local_200,0xfea97fe73);
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,0xf2dec0a89);
  uVar6 = lib::L2CValue::as_integer((L2CValue *)local_200);
  uVar7 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
  fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar6,uVar7);
  lib::L2CValue::L2CValue((L2CValue *)(auStack272 + 0x10),fVar15);
  lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
  lib::L2CValue::_L2CValue((L2CValue *)local_200);
  lib::L2CValue::L2CValue((L2CValue *)local_200,0xfea97fe73);
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,0xe52fea532);
  uVar6 = lib::L2CValue::as_integer((L2CValue *)local_200);
  uVar7 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
  fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar6,uVar7);
  lib::L2CValue::L2CValue((L2CValue *)auStack272,fVar15);
  lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
  lib::L2CValue::_L2CValue((L2CValue *)local_200);
  FUN_710000a680(this);
  FUN_710000bb70(this);
  lib::L2CValue::operator_((L2CValue *)(auStack240 + 0x10),(L2CValue *)(auStack272 + 0x10));
  lib::L2CValue::operator_((L2CValue *)(auStack240 + 0x10),(L2CValue *)local_200);
  lib::L2CValue::_L2CValue((L2CValue *)local_200);
  lib::L2CValue::L2CValue((L2CValue *)local_200,_FIGHTER_YOSHI_STATUS_SPECIAL_S_WORK_FLOAT_ANGLE);
  fVar15 = (float)lib::L2CValue::as_number((L2CValue *)(auStack240 + 0x10));
  pLVar8 = (L2CValue *)lib::L2CValue::as_integer((L2CValue *)local_200);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar15,(int)pLVar8);
  lib::L2CValue::_L2CValue((L2CValue *)local_200);
  FUN_710000dc80(this);
  lib::L2CAgent::math_abs((L2CAgent *)auStack240,pLVar8);
  lib::L2CValue::L2CValue((L2CValue *)local_200,1e-05);
  pLVar8 = (L2CValue *)local_200;
  uVar6 = lib::L2CValue::operator_((L2CValue *)&local_a0,pLVar8);
  lib::L2CValue::_L2CValue((L2CValue *)local_200);
  lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)local_200,0.0);
    uVar6 = lib::L2CValue::operator__((L2CValue *)local_200,(L2CValue *)auStack240);
    lib::L2CValue::_L2CValue((L2CValue *)local_200);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)local_200,-1e-05);
      pLVar8 = (L2CValue *)local_200;
      lib::L2CValue::operator_((L2CValue *)auStack240,pLVar8);
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)local_200,1e-05);
      pLVar8 = (L2CValue *)local_200;
      lib::L2CValue::operator_((L2CValue *)auStack240,pLVar8);
    }
    lib::L2CValue::_L2CValue((L2CValue *)local_200);
  }
  lib::L2CAgent::math_abs((L2CAgent *)auStack240,pLVar8);
  pLVar8 = (L2CValue *)0x18cdc1683;
  pLVar9 = (L2CAgent *)lib::L2CValue::operator__(aLStack176,0x18cdc1683);
  lib::L2CAgent::math_abs(pLVar9,pLVar8);
  lib::L2CAgent::math_rad((L2CAgent *)auStack272,pLVar8);
  lib::L2CAgent::math_abs((L2CAgent *)local_200,pLVar8);
  lib::L2CValue::_L2CValue((L2CValue *)local_200);
  lib::L2CValue::L2CValue((L2CValue *)local_200,0.0);
  uVar6 = lib::L2CValue::operator_((L2CValue *)local_200,(L2CValue *)auStack240);
  lib::L2CValue::_L2CValue((L2CValue *)local_200);
  if ((uVar6 & 1) == 0) {
    puVar10 = (undefined8 *)lib::L2CValue::operator__(aLStack176,0x18cdc1683);
    lib::L2CValue::L2CValue((L2CValue *)local_200,0.0);
    uVar6 = lib::L2CValue::operator__((L2CValue *)local_200,(L2CValue *)puVar10);
    lib::L2CValue::_L2CValue((L2CValue *)local_200);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)local_200,0.7);
      lib::L2CValue::operator_(aLStack288,(L2CValue *)local_200);
      lib::L2CValue::_L2CValue((L2CValue *)local_200);
      puVar10 = &local_a0;
      lib::L2CValue::operator_(aLStack288,(L2CValue *)puVar10);
      goto LAB_710000c7d8;
    }
  }
  else {
    pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x18cdc1683);
    lib::L2CValue::L2CValue((L2CValue *)local_200,0.0);
    puVar10 = (undefined8 *)local_200;
    uVar6 = lib::L2CValue::operator__(pLVar8,(L2CValue *)puVar10);
    lib::L2CValue::_L2CValue((L2CValue *)local_200);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)local_200,0.7);
      lib::L2CValue::operator_(aLStack288,(L2CValue *)local_200);
      lib::L2CValue::_L2CValue((L2CValue *)local_200);
      puVar10 = &local_a0;
      lib::L2CValue::operator_(aLStack288,(L2CValue *)puVar10);
LAB_710000c7d8:
      lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
    }
  }
  lib::L2CAgent::math_abs((L2CAgent *)auStack240,(L2CValue *)puVar10);
  lib::L2CAgent::math_abs((L2CAgent *)auStack240,(L2CValue *)puVar10);
  lib::L2CValue::L2CValue((L2CValue *)local_200,0.7);
  lib::L2CValue::operator_((L2CValue *)auStack368,(L2CValue *)local_200);
  lib::L2CValue::_L2CValue((L2CValue *)local_200);
  lib::L2CValue::operator_((L2CValue *)&local_a0,(L2CValue *)(auStack368 + 0x10));
  lib::L2CValue::_L2CValue((L2CValue *)(auStack368 + 0x10));
  lib::L2CValue::_L2CValue((L2CValue *)auStack368);
  lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
  lib::L2CValue::L2CValue((L2CValue *)(auStack368 + 0x10));
  lib::L2CValue::L2CValue((L2CValue *)auStack368);
  lib::L2CValue::L2CValue((L2CValue *)local_200,0.0);
  uVar6 = lib::L2CValue::operator_((L2CValue *)local_200,(L2CValue *)auStack240);
  lib::L2CValue::_L2CValue((L2CValue *)local_200);
  if ((uVar6 & 1) == 0) {
    pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x18cdc1683);
    lib::L2CValue::L2CValue((L2CValue *)local_200,0.0);
    pLVar8 = (L2CValue *)local_200;
    uVar6 = lib::L2CValue::operator_(pLVar4,pLVar8);
    lib::L2CValue::_L2CValue((L2CValue *)local_200);
    if ((uVar6 & 1) == 0) {
      lib::L2CAgent::math_abs((L2CAgent *)auStack240,pLVar8);
      pLVar8 = (L2CValue *)0x18cdc1683;
      pLVar9 = (L2CAgent *)lib::L2CValue::operator__(aLStack176,0x18cdc1683);
      lib::L2CAgent::math_abs(pLVar9,pLVar8);
      lib::L2CValue::operator_((L2CValue *)&local_a0,(L2CValue *)(auStack400 + 0x10));
      lib::L2CValue::operator_((L2CValue *)(auStack368 + 0x10),(L2CValue *)local_200);
    }
    else {
      lib::L2CAgent::math_abs((L2CAgent *)auStack240,pLVar8);
      pLVar8 = (L2CValue *)0x18cdc1683;
      pLVar9 = (L2CAgent *)lib::L2CValue::operator__(aLStack176,0x18cdc1683);
      lib::L2CAgent::math_abs(pLVar9,pLVar8);
      lib::L2CValue::operator_((L2CValue *)&local_a0,(L2CValue *)(auStack400 + 0x10));
      lib::L2CValue::operator_((L2CValue *)(auStack368 + 0x10),(L2CValue *)local_200);
    }
    lib::L2CValue::_L2CValue((L2CValue *)local_200);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
    lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
    lib::L2CValue::L2CValue((L2CValue *)local_200,0.5);
    lib::L2CValue::operator_((L2CValue *)&LUA_SCRIPT_LINE_STATUS_SYSTEM,(L2CValue *)local_200);
    lib::L2CValue::_L2CValue((L2CValue *)local_200);
    lib::L2CValue::operator_((L2CValue *)&LUA_SCRIPT_LINE_STATUS_SYSTEM,(L2CValue *)auStack400);
    lib::L2CValue::operator_((L2CValue *)(auStack368 + 0x10),aLStack336);
    lib::L2CValue::operator_((L2CValue *)&LUA_SCRIPT_LINE_STATUS_SYSTEM,(L2CValue *)auStack416);
    lib::L2CValue::operator_((L2CValue *)(auStack400 + 0x10),(L2CValue *)local_200);
    lib::L2CValue::operator_((L2CValue *)auStack368,(L2CValue *)&local_a0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
    lib::L2CValue::_L2CValue((L2CValue *)local_200);
    lib::L2CValue::_L2CValue((L2CValue *)auStack416);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
    pLVar8 = (L2CValue *)auStack400;
  }
  else {
    pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x18cdc1683);
    lib::L2CValue::L2CValue((L2CValue *)local_200,0.0);
    uVar6 = lib::L2CValue::operator_((L2CValue *)local_200,pLVar8);
    lib::L2CValue::_L2CValue((L2CValue *)local_200);
    if ((uVar6 & 1) == 0) {
      lib::L2CAgent::math_abs((L2CAgent *)auStack240,pLVar8);
      pLVar8 = (L2CValue *)0x18cdc1683;
      pLVar9 = (L2CAgent *)lib::L2CValue::operator__(aLStack176,0x18cdc1683);
      lib::L2CAgent::math_abs(pLVar9,pLVar8);
      lib::L2CValue::operator_((L2CValue *)&local_a0,(L2CValue *)(auStack400 + 0x10));
      lib::L2CValue::operator_((L2CValue *)(auStack368 + 0x10),(L2CValue *)local_200);
    }
    else {
      lib::L2CAgent::math_abs((L2CAgent *)auStack240,pLVar8);
      pLVar8 = (L2CValue *)0x18cdc1683;
      pLVar9 = (L2CAgent *)lib::L2CValue::operator__(aLStack176,0x18cdc1683);
      lib::L2CAgent::math_abs(pLVar9,pLVar8);
      lib::L2CValue::operator_((L2CValue *)&local_a0,(L2CValue *)(auStack400 + 0x10));
      lib::L2CValue::operator_((L2CValue *)(auStack368 + 0x10),(L2CValue *)local_200);
    }
    lib::L2CValue::_L2CValue((L2CValue *)local_200);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
    lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
    lib::L2CValue::L2CValue((L2CValue *)local_200,0.5);
    lib::L2CValue::operator_((L2CValue *)&LUA_SCRIPT_LINE_STATUS_SYSTEM,(L2CValue *)local_200);
    lib::L2CValue::_L2CValue((L2CValue *)local_200);
    lib::L2CValue::operator_((L2CValue *)(auStack368 + 0x10),aLStack336);
    lib::L2CValue::operator_((L2CValue *)&LUA_SCRIPT_LINE_STATUS_SYSTEM,(L2CValue *)auStack400);
    lib::L2CValue::operator_((L2CValue *)(auStack400 + 0x10),(L2CValue *)local_200);
    lib::L2CValue::operator_((L2CValue *)auStack368,(L2CValue *)&local_a0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
    lib::L2CValue::_L2CValue((L2CValue *)local_200);
    lib::L2CValue::_L2CValue((L2CValue *)auStack400);
    pLVar8 = (L2CValue *)(auStack400 + 0x10);
  }
  lib::L2CValue::_L2CValue(pLVar8);
  while( true ) {
    lib::L2CValue::L2CValue((L2CValue *)local_200,0.0);
    uVar6 = lib::L2CValue::operator_((L2CValue *)auStack368,(L2CValue *)local_200);
    lib::L2CValue::_L2CValue((L2CValue *)local_200);
    if ((uVar6 & 1) == 0) break;
    lib::L2CValue::L2CValue((L2CValue *)local_200,2.0);
    lib::L2CValue::operator_((L2CValue *)&LUA_SCRIPT_LINE_STATUS_SYSTEM,(L2CValue *)local_200);
    lib::L2CValue::_L2CValue((L2CValue *)local_200);
    lib::L2CValue::operator_((L2CValue *)auStack368,(L2CValue *)(auStack400 + 0x10));
    lib::L2CValue::operator_((L2CValue *)auStack368,(L2CValue *)&local_a0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
  }
  while( true ) {
    lib::L2CValue::L2CValue((L2CValue *)local_200,2.0);
    lib::L2CValue::operator_((L2CValue *)&LUA_SCRIPT_LINE_STATUS_SYSTEM,(L2CValue *)local_200);
    lib::L2CValue::_L2CValue((L2CValue *)local_200);
    uVar6 = lib::L2CValue::operator_((L2CValue *)&local_a0,(L2CValue *)auStack368);
    lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
    if ((uVar6 & 1) == 0) break;
    lib::L2CValue::L2CValue((L2CValue *)local_200,2.0);
    lib::L2CValue::operator_((L2CValue *)&LUA_SCRIPT_LINE_STATUS_SYSTEM,(L2CValue *)local_200);
    lib::L2CValue::_L2CValue((L2CValue *)local_200);
    lib::L2CValue::operator_((L2CValue *)auStack368,(L2CValue *)(auStack400 + 0x10));
    lib::L2CValue::operator_((L2CValue *)auStack368,(L2CValue *)&local_a0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
  }
  lib::L2CValue::L2CValue(aLStack432,0.0);
  lib::L2CValue::L2CValue(aLStack448,0.0);
  lib::L2CValue::L2CValue(aLStack464,0.0);
  lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0x50,(L2CValue)0x40,(L2CValue)0x30);
  lib::L2CValue::_L2CValue(aLStack464);
  lib::L2CValue::_L2CValue(aLStack448);
  lib::L2CValue::_L2CValue(aLStack432);
  lib::L2CValue::operator_((L2CValue *)auStack272);
  lib::L2CValue::operator_(aLStack304,aLStack288);
  lib::L2CValue::operator_(aLStack320,(L2CValue *)auStack416);
  lib::L2CValue::operator_((L2CValue *)local_200,(L2CValue *)&local_a0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
  lib::L2CValue::_L2CValue((L2CValue *)auStack416);
  lib::L2CValue::_L2CValue((L2CValue *)local_200);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)(auStack400 + 0x10),0x18cdc1683);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)(auStack400 + 0x10),0x1fbdb2615);
  pLVar11 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)(auStack400 + 0x10),0x162d277af);
  lib::L2CValue::L2CValue((L2CValue *)auStack416,0x31d39a761);
  pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)(auStack400 + 0x10),0x18cdc1683);
  pLVar12 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)(auStack400 + 0x10),0x1fbdb2615);
  pLVar13 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)(auStack400 + 0x10),0x162d277af);
  HVar14 = lib::L2CValue::as_hash((L2CValue *)auStack416);
  uVar6 = lib::L2CValue::as_number(pLVar8);
  lVar18 = lib::L2CValue::as_number(pLVar12);
  uVar16 = lib::L2CValue::as_number(pLVar13);
  local_a0 = (void **)(uVar6 & 0xffffffff | lVar18 << 0x20);
  plStack152 = (lua_State *)(ulong)uVar16;
  app::lua_bind::ModelModule__joint_rotate_impl(this->moduleAccessor,HVar14,(Vector3f *)&local_a0);
  lib::L2CValue::L2CValue((L2CValue *)local_200,(float)local_a0);
  pLVar8 = (L2CValue *)(local_200 + 0x10);
  lib::L2CValue::L2CValue(pLVar8,local_a0._4_4_);
  lib::L2CValue::L2CValue(aLStack480,plStack152._0_4_);
  lib::L2CValue::operator_(pLVar4,(L2CValue *)local_200);
  lib::L2CValue::operator_(pLVar5,pLVar8);
  pLVar4 = aLStack480;
  lib::L2CValue::operator_(pLVar11,aLStack480);
  lib::L2CValue::_L2CValue(aLStack480);
  lib::L2CValue::_L2CValue(pLVar8);
  lib::L2CValue::_L2CValue((L2CValue *)local_200);
  lib::L2CValue::_L2CValue((L2CValue *)auStack416);
  lib::L2CAgent::math_deg((L2CAgent *)auStack368,pLVar4);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)(auStack400 + 0x10),0x1fbdb2615);
  pLVar8 = (L2CValue *)local_200;
  lib::L2CValue::operator_(pLVar4,pLVar8);
  lib::L2CValue::_L2CValue((L2CValue *)local_200);
  lib::L2CAgent::math_deg((L2CAgent *)auStack400,pLVar8);
  pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)(auStack400 + 0x10),0x162d277af);
  lib::L2CValue::operator_(pLVar8,(L2CValue *)local_200);
  lib::L2CValue::_L2CValue((L2CValue *)local_200);
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,0x31d39a761);
  pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)(auStack400 + 0x10),0x18cdc1683);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)(auStack400 + 0x10),0x1fbdb2615);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)(auStack400 + 0x10),0x162d277af);
  HVar14 = lib::L2CValue::as_hash((L2CValue *)&local_a0);
  uVar6 = lib::L2CValue::as_number(pLVar8);
  lVar18 = lib::L2CValue::as_number(pLVar4);
  uVar16 = lib::L2CValue::as_number(pLVar5);
  local_200._0_8_ = (void **)(uVar6 & 0xffffffff | lVar18 << 0x20);
  local_200._8_8_ = (lua_State *)(ulong)uVar16;
  app::lua_bind::ModelModule__set_joint_rotate_impl
            (this->moduleAccessor,HVar14,(Vector3f *)local_200,0,0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
  FUN_710000e1f0(local_200,this);
  bVar1 = lib::L2CValue::operator_cast_to_bool((L2CValue *)local_200);
  if ((bVar1 & 1U) == 0) {
    FUN_710000e3c0(&local_a0,this);
    bVar1 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_a0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
    lib::L2CValue::_L2CValue((L2CValue *)local_200);
    if ((bVar1 & 1U) != 0) goto LAB_710000d044;
    lib::L2CValue::L2CValue((L2CValue *)local_200,0.0);
    uVar6 = lib::L2CValue::operator_((L2CValue *)local_200,(L2CValue *)auStack240);
    lib::L2CValue::_L2CValue((L2CValue *)local_200);
    if ((uVar6 & 1) == 0) {
LAB_710000d194:
      lib::L2CValue::L2CValue((L2CValue *)local_200,0.0);
      uVar6 = lib::L2CValue::operator__((L2CValue *)auStack240,(L2CValue *)local_200);
      lib::L2CValue::_L2CValue((L2CValue *)local_200);
      if ((uVar6 & 1) == 0) goto LAB_710000d090;
      pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x18cdc1683);
      lib::L2CValue::L2CValue((L2CValue *)local_200,0.0);
      uVar6 = lib::L2CValue::operator_((L2CValue *)local_200,pLVar8);
      lib::L2CValue::_L2CValue((L2CValue *)local_200);
      if ((uVar6 & 1) == 0) goto LAB_710000d090;
    }
    else {
      pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x18cdc1683);
      lib::L2CValue::L2CValue((L2CValue *)local_200,0.0);
      uVar6 = lib::L2CValue::operator_(pLVar8,(L2CValue *)local_200);
      lib::L2CValue::_L2CValue((L2CValue *)local_200);
      if ((uVar6 & 1) == 0) goto LAB_710000d194;
    }
    pLVar8 = (L2CValue *)0x18cdc1683;
    pLVar9 = (L2CAgent *)lib::L2CValue::operator__(aLStack176,0x18cdc1683);
    lib::L2CAgent::math_abs(pLVar9,pLVar8);
    lib::L2CAgent::math_abs((L2CAgent *)auStack240,pLVar8);
    lib::L2CValue::L2CValue((L2CValue *)local_200,0.7);
    lib::L2CValue::operator_(aLStack528,(L2CValue *)local_200);
    lib::L2CValue::_L2CValue((L2CValue *)local_200);
    uVar6 = lib::L2CValue::operator_((L2CValue *)auStack416,(L2CValue *)&local_a0);
    lib::L2CValue::_L2CValue((L2CValue *)auStack416);
    lib::L2CValue::_L2CValue(aLStack528);
    lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
    if ((uVar6 & 1) == 0) goto LAB_710000d090;
    lib::L2CValue::L2CValue((L2CValue *)local_200,_FIGHTER_YOSHI_STATUS_KIND_SPECIAL_S_LOOP);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_a0,_FIGHTER_YOSHI_STATUS_SPECIAL_S_WORK_INT_NEXT_STATUS);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)local_200);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
    app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
    lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
    lib::L2CValue::_L2CValue((L2CValue *)local_200);
    lib::L2CValue::L2CValue
              ((L2CValue *)local_200,_FIGHTER_YOSHI_STATUS_SPECIAL_S_WORK_FLOAT_RESERVE_DIR);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)local_200);
    fVar15 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue((L2CValue *)auStack416,fVar15);
    lib::L2CValue::_L2CValue((L2CValue *)local_200);
    lib::L2CValue::L2CValue
              ((L2CValue *)local_200,_FIGHTER_YOSHI_STATUS_SPECIAL_S_WORK_INT_ATTACK_COUNT);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)local_200);
    iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack528,iVar2);
    lib::L2CValue::_L2CValue((L2CValue *)local_200);
    lib::L2CValue::L2CValue((L2CValue *)local_200,0.0);
    uVar6 = lib::L2CValue::operator__((L2CValue *)auStack416,(L2CValue *)local_200);
    lib::L2CValue::_L2CValue((L2CValue *)local_200);
    if ((uVar6 & 1) == 0) {
      fVar15 = (float)lib::L2CValue::as_number((L2CValue *)auStack416);
      app::lua_bind::PostureModule__set_lr_impl(this->moduleAccessor,fVar15);
    }
    lib::L2CValue::L2CValue((L2CValue *)local_200,0.0);
    lib::L2CValue::operator_((L2CValue *)auStack416,(L2CValue *)local_200);
    lib::L2CValue::_L2CValue((L2CValue *)local_200);
    lib::L2CValue::L2CValue((L2CValue *)local_200,0);
    lib::L2CValue::operator_(aLStack528,(L2CValue *)local_200);
    lib::L2CValue::_L2CValue((L2CValue *)local_200);
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)(auStack400 + 0x10),0x18cdc1683);
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)(auStack400 + 0x10),0x1fbdb2615);
    pLVar11 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)(auStack400 + 0x10),0x162d277af);
    lib::L2CValue::L2CValue(aLStack544,0x31d39a761);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)(auStack400 + 0x10),0x18cdc1683);
    pLVar12 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)(auStack400 + 0x10),0x1fbdb2615);
    pLVar13 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)(auStack400 + 0x10),0x162d277af);
    HVar14 = lib::L2CValue::as_hash(aLStack544);
    uVar6 = lib::L2CValue::as_number(pLVar8);
    lVar18 = lib::L2CValue::as_number(pLVar12);
    uVar16 = lib::L2CValue::as_number(pLVar13);
    local_a0 = (void **)(uVar6 & 0xffffffff | lVar18 << 0x20);
    plStack152 = (lua_State *)(ulong)uVar16;
    app::lua_bind::ModelModule__joint_rotate_impl(this->moduleAccessor,HVar14,(Vector3f *)&local_a0)
    ;
    lib::L2CValue::L2CValue((L2CValue *)local_200,(float)local_a0);
    pLVar8 = (L2CValue *)(local_200 + 0x10);
    lib::L2CValue::L2CValue(pLVar8,local_a0._4_4_);
    lib::L2CValue::L2CValue(aLStack480,plStack152._0_4_);
    lib::L2CValue::operator_(pLVar4,(L2CValue *)local_200);
    lib::L2CValue::operator_(pLVar5,pLVar8);
    pLVar4 = aLStack480;
    lib::L2CValue::operator_(pLVar11,aLStack480);
    lib::L2CValue::_L2CValue(aLStack480);
    lib::L2CValue::_L2CValue(pLVar8);
    lib::L2CValue::_L2CValue((L2CValue *)local_200);
    lib::L2CValue::_L2CValue(aLStack544);
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,0.0);
    lib::L2CAgent::math_deg((L2CAgent *)&local_a0,pLVar4);
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)(auStack400 + 0x10),0x1fbdb2615);
    pLVar8 = (L2CValue *)local_200;
    lib::L2CValue::operator_(pLVar4,pLVar8);
    lib::L2CValue::_L2CValue((L2CValue *)local_200);
    lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,0.0);
    lib::L2CAgent::math_deg((L2CAgent *)&local_a0,pLVar8);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)(auStack400 + 0x10),0x162d277af);
    lib::L2CValue::operator_(pLVar8,(L2CValue *)local_200);
    lib::L2CValue::_L2CValue((L2CValue *)local_200);
    lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,0x31d39a761);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)(auStack400 + 0x10),0x18cdc1683);
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)(auStack400 + 0x10),0x1fbdb2615);
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)(auStack400 + 0x10),0x162d277af);
    HVar14 = lib::L2CValue::as_hash((L2CValue *)&local_a0);
    uVar6 = lib::L2CValue::as_number(pLVar8);
    lVar18 = lib::L2CValue::as_number(pLVar4);
    uVar16 = lib::L2CValue::as_number(pLVar5);
    local_200._0_8_ = (void **)(uVar6 & 0xffffffff | lVar18 << 0x20);
    local_200._8_8_ = (lua_State *)(ulong)uVar16;
    app::lua_bind::ModelModule__set_joint_rotate_impl
              (this->moduleAccessor,HVar14,(Vector3f *)local_200,0,0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
    FUN_710000dc80(this);
    lib::L2CValue::_L2CValue(aLStack528);
    puVar10 = auStack416;
  }
  else {
    lib::L2CValue::_L2CValue((L2CValue *)local_200);
LAB_710000d044:
    lib::L2CValue::L2CValue((L2CValue *)local_200,_FIGHTER_YOSHI_STATUS_KIND_SPECIAL_S_END);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_a0,_FIGHTER_YOSHI_STATUS_SPECIAL_S_WORK_INT_NEXT_STATUS);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)local_200);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
    app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
    lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
    puVar10 = (undefined8 *)local_200;
  }
  lib::L2CValue::_L2CValue((L2CValue *)puVar10);
LAB_710000d090:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue((L2CValue *)auStack400);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
  lib::L2CValue::_L2CValue((L2CValue *)auStack368);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack368 + 0x10));
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue((L2CValue *)auStack272);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack272 + 0x10));
  lib::L2CValue::_L2CValue((L2CValue *)auStack240);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack240 + 0x10));
  lib::L2CValue::_L2CValue(aLStack176);
  return;
}

