
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterGekkouga::status::SpecialHiLoop_exec(L2CFighterGekkouga *this,L2CValue *return_value)

{
  int iVar1;
  Hash40 HVar2;
  L2CValue *pLVar3;
  undefined8 *puVar4;
  L2CValue *pLVar5;
  uint uVar6;
  float fVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  L2CValue aLStack368 [16];
  undefined auStack352 [32];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  undefined auStack208 [32];
  undefined auStack176 [32];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  undefined8 local_60;
  lua_State *plStack88;
  
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack144,0);
  lib::L2CValue::L2CValue((L2CValue *)(auStack176 + 0x10),0);
  lib::L2CValue::L2CValue((L2CValue *)auStack176,0);
  lib::L2CValue::L2CValue((L2CValue *)(auStack208 + 0x10),0);
  lib::L2CValue::L2CValue((L2CValue *)auStack208,0);
  lib::L2CValue::L2CValue(aLStack224,0);
  lib::L2CValue::L2CValue(aLStack240,0);
  lib::L2CValue::L2CValue(aLStack256,0);
  lib::L2CValue::L2CValue(aLStack272,0);
  lib::L2CValue::L2CValue(aLStack112,0x31d39a761);
  lib::L2CValue::L2CValue((L2CValue *)(auStack352 + 0x10),0.0);
  lib::L2CValue::L2CValue((L2CValue *)auStack352,0.0);
  lib::L2CValue::L2CValue(aLStack368,0.0);
  HVar2 = lib::L2CValue::as_hash(aLStack112);
  uVar8 = lib::L2CValue::as_number((L2CValue *)(auStack352 + 0x10));
  lVar9 = lib::L2CValue::as_number((L2CValue *)auStack352);
  uVar6 = lib::L2CValue::as_number(aLStack368);
  local_60 = (Hash40MapEntry **)(uVar8 & 0xffffffff | lVar9 << 0x20);
  plStack88 = (lua_State *)(ulong)uVar6;
  puVar4 = &local_60;
  app::lua_bind::ModelModule__joint_rotate_impl(this->moduleAccessor,HVar2,(Vector3f *)puVar4);
  lib::L2CValue::L2CValue(aLStack320,(float)local_60);
  lib::L2CValue::L2CValue(aLStack304,local_60._4_4_);
  lib::L2CValue::L2CValue(aLStack288,plStack88._0_4_);
  lib::L2CValue::operator_(aLStack128,aLStack320);
  lib::L2CValue::operator_((L2CValue *)(auStack208 + 0x10),aLStack304);
  lib::L2CValue::operator_(aLStack272,aLStack288);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::_L2CValue(aLStack368);
  lib::L2CValue::_L2CValue((L2CValue *)auStack352);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack352 + 0x10));
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack320,1.0);
  lib::L2CValue::operator_(aLStack144,aLStack320);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::L2CValue(aLStack320,1.0);
  lib::L2CValue::operator_((L2CValue *)(auStack176 + 0x10),aLStack320);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::L2CValue(aLStack320,1.0);
  lib::L2CValue::operator_(aLStack224,aLStack320);
  lib::L2CValue::_L2CValue(aLStack320);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack320,_SITUATION_KIND_GROUND);
  uVar8 = lib::L2CValue::operator__(pLVar3,aLStack320);
  lib::L2CValue::_L2CValue(aLStack320);
  if ((uVar8 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_60,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
    iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    fVar7 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue(aLStack320,fVar7);
    lib::L2CValue::operator_((L2CValue *)auStack176,aLStack320);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
    iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    fVar7 = (float)app::lua_bind::KineticModule__get_sum_speed_y_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue(aLStack320,fVar7);
    pLVar3 = aLStack320;
    lib::L2CValue::operator_(aLStack240,pLVar3);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CAgent::math_abs((L2CAgent *)auStack176,pLVar3);
    lib::L2CValue::operator_((L2CValue *)(auStack352 + 0x10));
    pLVar3 = aLStack240;
    lib::L2CAgent::math_atan((L2CAgent *)aLStack112,pLVar3,(L2CValue *)puVar4);
    lib::L2CAgent::math_deg((L2CAgent *)&local_60,pLVar3);
    lib::L2CValue::operator_(aLStack128,aLStack320);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    pLVar3 = aLStack112;
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)auStack352,_GROUND_TOUCH_FLAG_ALL);
    uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack352);
    uVar10 = app::lua_bind::GroundModule__get_touch_normal_impl(this->moduleAccessor,uVar6);
    lib::L2CValue::L2CValue(aLStack320,(float)uVar10);
    lib::L2CValue::L2CValue(aLStack304,(float)((ulong)uVar10 >> 0x20));
    lib::L2CValue::L2CValue((L2CValue *)&local_60,aLStack320);
    lib::L2CValue::L2CValue(aLStack112,aLStack304);
    pLVar5 = aLStack112;
    lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xa0,SUB81(pLVar5,0));
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue((L2CValue *)auStack352);
    pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)(auStack352 + 0x10),0x18cdc1683);
    lib::L2CValue::operator_(aLStack256,pLVar3);
    pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)(auStack352 + 0x10),0x1fbdb2615);
    lib::L2CValue::operator_((L2CValue *)auStack208,pLVar3);
    lib::L2CAgent::math_abs((L2CAgent *)auStack208,pLVar3);
    lib::L2CValue::operator_(aLStack368);
    pLVar3 = aLStack256;
    lib::L2CAgent::math_atan((L2CAgent *)auStack352,pLVar3,pLVar5);
    lib::L2CAgent::math_deg((L2CAgent *)aLStack112,pLVar3);
    lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue((L2CValue *)auStack352);
    pLVar3 = aLStack368;
  }
  lib::L2CValue::_L2CValue(pLVar3);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack352 + 0x10));
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
  lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_60,_FIGHTER_GEKKOUGA_STATUS_WORK_ID_FLOAT_QUICK_ATTACK_PREV_ROT_X);
  fVar7 = (float)lib::L2CValue::as_number(aLStack112);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar7,iVar1);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
  lib::L2CValue::operator_((L2CValue *)(auStack208 + 0x10),(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_60,_FIGHTER_GEKKOUGA_STATUS_WORK_ID_FLOAT_QUICK_ATTACK_PREV_ROT_Y);
  fVar7 = (float)lib::L2CValue::as_number(aLStack112);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar7,iVar1);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
  lib::L2CValue::operator_(aLStack272,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_60,_FIGHTER_GEKKOUGA_STATUS_WORK_ID_FLOAT_QUICK_ATTACK_PREV_ROT_Z);
  fVar7 = (float)lib::L2CValue::as_number(aLStack112);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar7,iVar1);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,0x31d39a761);
  HVar2 = lib::L2CValue::as_hash(aLStack112);
  uVar8 = lib::L2CValue::as_number(aLStack128);
  lVar9 = lib::L2CValue::as_number((L2CValue *)(auStack208 + 0x10));
  uVar6 = lib::L2CValue::as_number(aLStack272);
  local_60 = (Hash40MapEntry **)(uVar8 & 0xffffffff | lVar9 << 0x20);
  plStack88 = (lua_State *)(ulong)uVar6;
  app::lua_bind::ModelModule__set_joint_rotate_impl
            (this->moduleAccessor,HVar2,(Vector3f *)&local_60,0,0);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue((L2CValue *)auStack208);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack208 + 0x10));
  lib::L2CValue::_L2CValue((L2CValue *)auStack176);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack176 + 0x10));
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue
            (aLStack320,_FIGHTER_GEKKOUGA_STATUS_WORK_ID_INT_QUICK_ATTACK_DIRECTION_EFFECT_COUNT);
  iVar1 = lib::L2CValue::as_integer(aLStack320);
  app::lua_bind::WorkModule__inc_int_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

