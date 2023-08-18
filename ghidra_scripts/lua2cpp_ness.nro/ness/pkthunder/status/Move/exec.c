
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponNessPkthunder::status::Move_exec(L2CWeaponNessPkthunder *this,L2CValue *return_value)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  L2CValue *pLVar4;
  L2CValue *pLVar5;
  L2CValue *pLVar6;
  L2CValue *pLVar7;
  L2CValue *pLVar8;
  L2CAgent *pLVar9;
  L2CValue *pLVar10;
  ulong *puVar11;
  L2CValue *this_00;
  L2CValue *this_01;
  L2CValue *this_02;
  void *pvVar12;
  KineticEnergyNormal *pKVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  uint uVar20;
  undefined8 uVar21;
  float fVar22;
  L2CValue aLStack576 [16];
  L2CValue aLStack560 [16];
  undefined auStack544 [32];
  L2CValue aLStack512 [16];
  L2CValue aLStack496 [16];
  undefined auStack480 [32];
  ulong local_1c0;
  undefined8 uStack440;
  L2CValue aLStack432 [16];
  L2CValue aLStack416 [24];
  undefined auStack392 [16];
  undefined auStack376 [32];
  L2CValue aLStack344 [16];
  L2CValue aLStack328 [16];
  L2CValue aLStack312 [16];
  L2CValue aLStack296 [16];
  L2CValue aLStack280 [16];
  L2CValue aLStack264 [16];
  L2CValue aLStack248 [16];
  L2CValue aLStack232 [16];
  L2CValue aLStack216 [16];
  L2CValue aLStack200 [16];
  L2CValue aLStack184 [16];
  L2CValue aLStack168 [24];
  
  lib::L2CValue::L2CValue((L2CValue *)&local_1c0,0xff86b5df0);
  lib::L2CValue::L2CValue(aLStack184,0x9b4c59d7c);
  uVar2 = lib::L2CValue::as_integer((L2CValue *)&local_1c0);
  uVar3 = lib::L2CValue::as_integer(aLStack184);
  fVar14 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar2,uVar3);
  lib::L2CValue::L2CValue(aLStack168,fVar14);
  lib::L2CValue::_L2CValue(aLStack184);
  lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
  lib::L2CValue::L2CValue((L2CValue *)&local_1c0,_WEAPON_NESS_PK_THUNDER_STATUS_WORK_ID_FLOAT_ANGLE)
  ;
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_1c0);
  fVar14 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack184,fVar14);
  lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
  lib::L2CValue::L2CValue(aLStack216,0.0);
  lib::L2CValue::L2CValue(aLStack232,0.0);
  lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x28,(L2CValue)0x18);
  lib::L2CValue::_L2CValue(aLStack232);
  lib::L2CValue::_L2CValue(aLStack216);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack200,0x18cdc1683);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack200,0x1fbdb2615);
  lib::L2CValue::L2CValue(aLStack248,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
  iVar1 = lib::L2CValue::as_integer(aLStack248);
  uVar21 = app::lua_bind::KineticModule__get_sum_speed_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue((L2CValue *)&local_1c0,(float)uVar21);
  lib::L2CValue::L2CValue(aLStack432,(float)((ulong)uVar21 >> 0x20));
  lib::L2CValue::operator_(pLVar4,(L2CValue *)&local_1c0);
  lib::L2CValue::operator_(pLVar5,aLStack432);
  lib::L2CValue::_L2CValue(aLStack432);
  lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
  lib::L2CValue::_L2CValue(aLStack248);
  lib::L2CValue::L2CValue(aLStack264,0.0);
  lib::L2CValue::L2CValue(aLStack280,0.0);
  lib::L2CValue::L2CValue(aLStack296,0.0);
  lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0xf8,(L2CValue)0xe8,(L2CValue)0xd8);
  lib::L2CValue::_L2CValue(aLStack296);
  lib::L2CValue::_L2CValue(aLStack280);
  lib::L2CValue::_L2CValue(aLStack264);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack248,0x18cdc1683);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack248,0x1fbdb2615);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack248,0x162d277af);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack200,0x18cdc1683);
  pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack200,0x1fbdb2615);
  lib::L2CValue::L2CValue((L2CValue *)&local_1c0,0.0);
  lib::L2CValue::operator_(pLVar4,pLVar7);
  lib::L2CValue::operator_(pLVar5,pLVar8);
  lib::L2CValue::operator_(pLVar6,(L2CValue *)&local_1c0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
  lib::L2CValue::L2CValue(aLStack328,0.0);
  lib::L2CValue::L2CValue(aLStack344,0.0);
  lib::L2CValue::L2CValue((L2CValue *)(auStack376 + 0x10),0.0);
  lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0xb8,(L2CValue)0xa8,(L2CValue)0x98);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack376 + 0x10));
  lib::L2CValue::_L2CValue(aLStack344);
  lib::L2CValue::_L2CValue(aLStack328);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack312,0x18cdc1683);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack312,0x1fbdb2615);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack312,0x162d277af);
  fVar14 = (float)app::lua_bind::ControlModule__get_stick_x_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)&local_1c0,fVar14);
  fVar14 = (float)app::lua_bind::ControlModule__get_stick_y_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)auStack376,fVar14);
  fVar14 = 0.0;
  lib::L2CValue::L2CValue((L2CValue *)auStack392,0.0);
  lib::L2CValue::operator_(pLVar4,(L2CValue *)&local_1c0);
  lib::L2CValue::operator_(pLVar5,(L2CValue *)auStack376);
  lib::L2CValue::operator_(pLVar6,(L2CValue *)auStack392);
  lib::L2CValue::_L2CValue((L2CValue *)auStack392);
  lib::L2CValue::_L2CValue((L2CValue *)auStack376);
  lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
  pLVar4 = (L2CValue *)0x18cdc1683;
  pLVar9 = (L2CAgent *)lib::L2CValue::operator__(aLStack312,0x18cdc1683);
  lib::L2CAgent::math_abs(pLVar9,pLVar4);
  uVar2 = lib::L2CValue::operator_(aLStack168,(L2CValue *)&local_1c0);
  if ((uVar2 & 1) == 0) {
    pLVar4 = (L2CValue *)0x1fbdb2615;
    pLVar9 = (L2CAgent *)lib::L2CValue::operator__(aLStack312,0x1fbdb2615);
    lib::L2CAgent::math_abs(pLVar9,pLVar4);
    uVar2 = lib::L2CValue::operator_(aLStack168,(L2CValue *)auStack376);
    lib::L2CValue::_L2CValue((L2CValue *)auStack376);
    lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
    if ((uVar2 & 1) == 0) goto LAB_7100027860;
  }
  else {
    lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_1c0,0xff86b5df0);
  lib::L2CValue::L2CValue((L2CValue *)auStack392,0x9bd324fc8);
  uVar2 = lib::L2CValue::as_integer((L2CValue *)&local_1c0);
  uVar3 = lib::L2CValue::as_integer((L2CValue *)auStack392);
  fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar2,uVar3);
  lib::L2CValue::L2CValue((L2CValue *)auStack376,fVar15);
  lib::L2CValue::_L2CValue((L2CValue *)auStack392);
  lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack312,0x18cdc1683);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack312,0x1fbdb2615);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack312,0x162d277af);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack312,0x18cdc1683);
  pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack312,0x1fbdb2615);
  pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack312,0x162d277af);
  fVar15 = (float)lib::L2CValue::as_number(pLVar7);
  fVar16 = (float)lib::L2CValue::as_number(pLVar8);
  fVar17 = (float)lib::L2CValue::as_number(pLVar10);
  uVar21 = app::sv_math::vec3_normalize(fVar15,fVar16,fVar17);
  lib::L2CValue::L2CValue((L2CValue *)&local_1c0,(float)uVar21);
  lib::L2CValue::L2CValue(aLStack432,(float)((ulong)uVar21 >> 0x20));
  fVar17 = 0.0;
  lib::L2CValue::L2CValue(aLStack416,fVar14);
  lib::L2CValue::operator_(pLVar4,(L2CValue *)&local_1c0);
  lib::L2CValue::operator_(pLVar5,aLStack432);
  lib::L2CValue::operator_(pLVar6,aLStack416);
  lib::L2CValue::_L2CValue(aLStack416);
  lib::L2CValue::_L2CValue(aLStack432);
  lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack248,0x18cdc1683);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack248,0x1fbdb2615);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack248,0x162d277af);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack248,0x18cdc1683);
  pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack248,0x1fbdb2615);
  pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack248,0x162d277af);
  fVar14 = (float)lib::L2CValue::as_number(pLVar7);
  fVar15 = (float)lib::L2CValue::as_number(pLVar8);
  fVar16 = (float)lib::L2CValue::as_number(pLVar10);
  uVar21 = app::sv_math::vec3_normalize(fVar14,fVar15,fVar16);
  lib::L2CValue::L2CValue((L2CValue *)&local_1c0,(float)uVar21);
  lib::L2CValue::L2CValue(aLStack432,(float)((ulong)uVar21 >> 0x20));
  lib::L2CValue::L2CValue(aLStack416,fVar17);
  lib::L2CValue::operator_(pLVar4,(L2CValue *)&local_1c0);
  lib::L2CValue::operator_(pLVar5,aLStack432);
  lib::L2CValue::operator_(pLVar6,aLStack416);
  lib::L2CValue::_L2CValue(aLStack416);
  lib::L2CValue::_L2CValue(aLStack432);
  lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack248,0x18cdc1683);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack248,0x1fbdb2615);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack248,0x162d277af);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack312,0x18cdc1683);
  pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack312,0x1fbdb2615);
  pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack312,0x162d277af);
  fVar14 = (float)lib::L2CValue::as_number(pLVar4);
  fVar15 = (float)lib::L2CValue::as_number(pLVar5);
  fVar16 = (float)lib::L2CValue::as_number(pLVar6);
  fVar17 = (float)lib::L2CValue::as_number(pLVar7);
  fVar18 = (float)lib::L2CValue::as_number(pLVar8);
  fVar19 = (float)lib::L2CValue::as_number(pLVar10);
  fVar14 = (float)app::sv_math::vec3_dot(fVar14,fVar15,fVar16,fVar17,fVar18,fVar19);
  lib::L2CValue::L2CValue((L2CValue *)auStack392,fVar14);
  lib::L2CValue::L2CValue((L2CValue *)(auStack480 + 0x10));
  lib::L2CValue::L2CValue((L2CValue *)&local_1c0,1.0);
  uVar2 = lib::L2CValue::operator__((L2CValue *)&local_1c0,(L2CValue *)auStack392);
  lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_1c0,-1.0);
    puVar11 = &local_1c0;
    uVar2 = lib::L2CValue::operator__((L2CValue *)auStack392,(L2CValue *)puVar11);
    lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
    if ((uVar2 & 1) == 0) {
      lib::L2CAgent::math_acos((L2CAgent *)auStack392,(L2CValue *)puVar11);
      lib::L2CValue::operator_((L2CValue *)(auStack480 + 0x10),(L2CValue *)&local_1c0);
      goto LAB_710002740c;
    }
    lib::L2CValue::L2CValue((L2CValue *)auStack480,-1.0);
    lib::L2CAgent::math_acos((L2CAgent *)auStack480,(L2CValue *)puVar11);
    lib::L2CValue::operator_((L2CValue *)(auStack480 + 0x10),(L2CValue *)&local_1c0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
    puVar11 = (ulong *)auStack480;
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_1c0,0.0);
    lib::L2CValue::operator_((L2CValue *)(auStack480 + 0x10),(L2CValue *)&local_1c0);
LAB_710002740c:
    puVar11 = &local_1c0;
  }
  lib::L2CValue::_L2CValue((L2CValue *)puVar11);
  lib::L2CValue::L2CValue(aLStack496,0.0);
  lib::L2CValue::L2CValue(aLStack512,0.0);
  fVar22 = 0.0;
  lib::L2CValue::L2CValue((L2CValue *)(auStack544 + 0x10),0.0);
  lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0x10,(L2CValue)0x0,(L2CValue)0xf0);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack544 + 0x10));
  lib::L2CValue::_L2CValue(aLStack512);
  lib::L2CValue::_L2CValue(aLStack496);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack480,0x18cdc1683);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack480,0x1fbdb2615);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack480,0x162d277af);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack248,0x18cdc1683);
  pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack248,0x1fbdb2615);
  pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack248,0x162d277af);
  this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack312,0x18cdc1683);
  this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack312,0x1fbdb2615);
  this_02 = (L2CValue *)lib::L2CValue::operator__(aLStack312,0x162d277af);
  fVar14 = (float)lib::L2CValue::as_number(pLVar7);
  fVar15 = (float)lib::L2CValue::as_number(pLVar8);
  fVar16 = (float)lib::L2CValue::as_number(pLVar10);
  fVar17 = (float)lib::L2CValue::as_number(this_00);
  fVar18 = (float)lib::L2CValue::as_number(this_01);
  fVar19 = (float)lib::L2CValue::as_number(this_02);
  uVar21 = app::sv_math::vec3_cross(fVar14,fVar15,fVar16,fVar17,fVar18,fVar19);
  lib::L2CValue::L2CValue((L2CValue *)&local_1c0,(float)uVar21);
  lib::L2CValue::L2CValue(aLStack432,(float)((ulong)uVar21 >> 0x20));
  lib::L2CValue::L2CValue(aLStack416,fVar22);
  lib::L2CValue::operator_(pLVar4,(L2CValue *)&local_1c0);
  lib::L2CValue::operator_(pLVar5,aLStack432);
  pLVar4 = aLStack416;
  lib::L2CValue::operator_(pLVar6,aLStack416);
  lib::L2CValue::_L2CValue(aLStack416);
  lib::L2CValue::_L2CValue(aLStack432);
  lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
  lib::L2CValue::L2CValue((L2CValue *)auStack544,45.0);
  lib::L2CAgent::math_rad((L2CAgent *)auStack544,pLVar4);
  uVar2 = lib::L2CValue::operator__((L2CValue *)&local_1c0,(L2CValue *)(auStack480 + 0x10));
  lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
  lib::L2CValue::_L2CValue((L2CValue *)auStack544);
  if ((uVar2 & 1) == 0) {
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack480,0x162d277af);
    lib::L2CValue::L2CValue((L2CValue *)&local_1c0,0.0);
    uVar2 = lib::L2CValue::operator_((L2CValue *)&local_1c0,pLVar4);
    lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
    if ((uVar2 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_1c0,45.0);
      lib::L2CValue::operator_((L2CValue *)&local_1c0,(L2CValue *)auStack376);
      lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
      lib::L2CValue::operator_((L2CValue *)(auStack480 + 0x10),aLStack576);
      lib::L2CValue::operator_(aLStack184,aLStack560);
      lib::L2CValue::operator_(aLStack184,(L2CValue *)auStack544);
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)&local_1c0,45.0);
      lib::L2CValue::operator_((L2CValue *)&local_1c0,(L2CValue *)auStack376);
      lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
      lib::L2CValue::operator_((L2CValue *)(auStack480 + 0x10),aLStack576);
      lib::L2CValue::operator_(aLStack184,aLStack560);
      lib::L2CValue::operator_(aLStack184,(L2CValue *)auStack544);
    }
    lib::L2CValue::_L2CValue((L2CValue *)auStack544);
    lib::L2CValue::_L2CValue(aLStack560);
    pLVar4 = aLStack576;
  }
  else {
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack480,0x162d277af);
    lib::L2CValue::L2CValue((L2CValue *)&local_1c0,0.0);
    uVar2 = lib::L2CValue::operator_((L2CValue *)&local_1c0,pLVar4);
    lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
    if ((uVar2 & 1) == 0) {
      lib::L2CAgent::math_rad((L2CAgent *)auStack376,pLVar4);
      lib::L2CValue::operator_(aLStack184,(L2CValue *)auStack544);
      lib::L2CValue::operator_(aLStack184,(L2CValue *)&local_1c0);
    }
    else {
      lib::L2CAgent::math_rad((L2CAgent *)auStack376,pLVar4);
      lib::L2CValue::operator_(aLStack184,(L2CValue *)auStack544);
      lib::L2CValue::operator_(aLStack184,(L2CValue *)&local_1c0);
    }
    lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
    pLVar4 = (L2CValue *)auStack544;
  }
  lib::L2CValue::_L2CValue(pLVar4);
  lib::L2CValue::_L2CValue((L2CValue *)auStack480);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack480 + 0x10));
  lib::L2CValue::_L2CValue((L2CValue *)auStack392);
  lib::L2CValue::_L2CValue((L2CValue *)auStack376);
LAB_7100027860:
  while( true ) {
    lib::L2CValue::operator_((L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
    lib::L2CValue::L2CValue((L2CValue *)&local_1c0,2.0);
    lib::L2CValue::operator_((L2CValue *)auStack392,(L2CValue *)&local_1c0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
    uVar2 = lib::L2CValue::operator_(aLStack184,(L2CValue *)auStack376);
    lib::L2CValue::_L2CValue((L2CValue *)auStack376);
    lib::L2CValue::_L2CValue((L2CValue *)auStack392);
    if ((uVar2 & 1) == 0) break;
    lib::L2CValue::L2CValue((L2CValue *)&local_1c0,2.0);
    lib::L2CValue::operator_((L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST,(L2CValue *)&local_1c0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
    lib::L2CValue::operator_(aLStack184,(L2CValue *)auStack392);
    lib::L2CValue::operator_(aLStack184,(L2CValue *)auStack376);
    lib::L2CValue::_L2CValue((L2CValue *)auStack376);
    lib::L2CValue::_L2CValue((L2CValue *)auStack392);
  }
  while( true ) {
    lib::L2CValue::L2CValue((L2CValue *)&local_1c0,2.0);
    lib::L2CValue::operator_((L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST,(L2CValue *)&local_1c0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
    uVar2 = lib::L2CValue::operator_((L2CValue *)auStack376,aLStack184);
    lib::L2CValue::_L2CValue((L2CValue *)auStack376);
    if ((uVar2 & 1) == 0) break;
    lib::L2CValue::L2CValue((L2CValue *)&local_1c0,2.0);
    lib::L2CValue::operator_((L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST,(L2CValue *)&local_1c0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
    lib::L2CValue::operator_(aLStack184,(L2CValue *)auStack392);
    lib::L2CValue::operator_(aLStack184,(L2CValue *)auStack376);
    lib::L2CValue::_L2CValue((L2CValue *)auStack376);
    lib::L2CValue::_L2CValue((L2CValue *)auStack392);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_1c0,0xff86b5df0);
  lib::L2CValue::L2CValue((L2CValue *)auStack392,0x50f26fef6);
  pLVar4 = (L2CValue *)lib::L2CValue::as_integer((L2CValue *)&local_1c0);
  uVar2 = lib::L2CValue::as_integer((L2CValue *)auStack392);
  fVar14 = (float)app::lua_bind::WorkModule__get_param_float_impl
                            (this->moduleAccessor,(ulong)pLVar4,uVar2);
  lib::L2CValue::L2CValue((L2CValue *)auStack376,fVar14);
  lib::L2CValue::_L2CValue((L2CValue *)auStack392);
  lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
  lib::L2CAgent::math_cos((L2CAgent *)aLStack184,pLVar4);
  lib::L2CValue::operator_((L2CValue *)auStack376,(L2CValue *)auStack392);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack248,0x18cdc1683);
  puVar11 = &local_1c0;
  lib::L2CValue::operator_(pLVar4,(L2CValue *)puVar11);
  lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
  lib::L2CValue::_L2CValue((L2CValue *)auStack392);
  lib::L2CAgent::math_sin((L2CAgent *)aLStack184,(L2CValue *)puVar11);
  lib::L2CValue::operator_((L2CValue *)auStack376,(L2CValue *)auStack392);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack248,0x1fbdb2615);
  lib::L2CValue::operator_(pLVar4,(L2CValue *)&local_1c0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
  lib::L2CValue::_L2CValue((L2CValue *)auStack392);
  lib::L2CValue::L2CValue((L2CValue *)&local_1c0,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_1c0);
  pvVar12 = (void *)app::lua_bind::KineticModule__get_energy_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue((L2CValue *)auStack392,pvVar12);
  lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack248,0x18cdc1683);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack248,0x1fbdb2615);
  uVar2 = lib::L2CValue::as_number(pLVar4);
  uVar20 = lib::L2CValue::as_number(pLVar5);
  local_1c0 = uVar2 & 0xffffffff | (ulong)uVar20 << 0x20;
  uStack440 = 0;
  pKVar13 = (KineticEnergyNormal *)lib::L2CValue::as_pointer((L2CValue *)auStack392);
  app::lua_bind::KineticEnergyNormal__set_speed_impl(pKVar13,(Vector2f *)&local_1c0);
  lib::L2CValue::L2CValue((L2CValue *)&local_1c0,_WEAPON_NESS_PK_THUNDER_STATUS_WORK_ID_FLOAT_ANGLE)
  ;
  fVar14 = (float)lib::L2CValue::as_number(aLStack184);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_1c0);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar14,iVar1);
  lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue((L2CValue *)auStack392);
  lib::L2CValue::_L2CValue((L2CValue *)auStack376);
  lib::L2CValue::_L2CValue(aLStack312);
  lib::L2CValue::_L2CValue(aLStack248);
  lib::L2CValue::_L2CValue(aLStack200);
  lib::L2CValue::_L2CValue(aLStack184);
  lib::L2CValue::_L2CValue(aLStack168);
  return;
}

