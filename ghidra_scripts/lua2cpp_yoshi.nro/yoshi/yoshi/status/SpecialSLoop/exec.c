
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterYoshi::status::SpecialSLoop_exec(L2CFighterYoshi *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  L2CValue *this_00;
  L2CAgent *this_01;
  Hash40 HVar8;
  L2CValue *pLVar9;
  float fVar10;
  undefined8 uVar11;
  L2CValue aLStack272 [16];
  undefined auStack256 [32];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack192,0xfea97fe73);
  lib::L2CValue::L2CValue(aLStack96,0x9f984e282);
  uVar6 = lib::L2CValue::as_integer(aLStack192);
  uVar7 = lib::L2CValue::as_integer(aLStack96);
  fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar6,uVar7);
  lib::L2CValue::L2CValue((L2CValue *)(auStack256 + 0x10),fVar10);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack192);
  iVar3 = app::lua_bind::StatusModule__situation_kind_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,iVar3);
  lib::L2CValue::L2CValue(aLStack192,SITUATION_KIND_AIR);
  uVar6 = lib::L2CValue::operator__(aLStack96,aLStack192);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack96,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack112,0xd9836d31b);
    uVar6 = lib::L2CValue::as_integer(aLStack96);
    uVar7 = lib::L2CValue::as_integer(aLStack112);
    fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl
                              (this->moduleAccessor,uVar6,uVar7);
    lib::L2CValue::L2CValue(aLStack192,fVar10);
    lib::L2CValue::operator_((L2CValue *)(auStack256 + 0x10),aLStack192);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue(aLStack192,_FIGHTER_YOSHI_STATUS_SPECIAL_S_WORK_FLOAT_SPEED);
  iVar3 = lib::L2CValue::as_integer(aLStack192);
  fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)auStack256,fVar10);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::L2CValue(aLStack192,_FIGHTER_YOSHI_STATUS_SPECIAL_S_WORK_FLOAT_ANGLE);
  iVar3 = lib::L2CValue::as_integer(aLStack192);
  fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack272,fVar10);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::L2CValue(aLStack192,0.0);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_YOSHI_STATUS_SPECIAL_S_WORK_FLOAT_RESERVE_DIR);
  fVar10 = (float)lib::L2CValue::as_number(aLStack192);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar10,iVar3);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack192);
  FUN_710000a680(this);
  FUN_710000bb70(this);
  lib::L2CValue::L2CValue(aLStack192,0xfea97fe73);
  lib::L2CValue::L2CValue(aLStack112,0xc67e58f83);
  uVar6 = lib::L2CValue::as_integer(aLStack192);
  uVar7 = lib::L2CValue::as_integer(aLStack112);
  fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar6,uVar7);
  lib::L2CValue::L2CValue(aLStack96,fVar10);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::L2CValue(aLStack192,0xfea97fe73);
  lib::L2CValue::L2CValue(aLStack128,0xcfeecde39);
  uVar6 = lib::L2CValue::as_integer(aLStack192);
  uVar7 = lib::L2CValue::as_integer(aLStack128);
  fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar6,uVar7);
  lib::L2CValue::L2CValue(aLStack112,fVar10);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::L2CValue(aLStack128,0);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  uVar4 = app::lua_bind::AttackModule__is_attack_impl(this->moduleAccessor,iVar3,false);
  pLVar9 = (L2CValue *)(ulong)(uVar4 & 1);
  lib::L2CValue::L2CValue(aLStack192,SUB41(uVar4 & 1,0));
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack192);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack144,0.0);
    lib::L2CValue::L2CValue(aLStack160,0.0);
    lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x70,(L2CValue)0x60);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x18cdc1683);
    this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x1fbdb2615);
    uVar11 = app::lua_bind::KineticModule__get_sum_speed_impl(this->moduleAccessor,-1);
    lib::L2CValue::L2CValue(aLStack192,(float)uVar11);
    lib::L2CValue::L2CValue(aLStack176,(float)((ulong)uVar11 >> 0x20));
    lib::L2CValue::operator_(pLVar9,aLStack192);
    lib::L2CValue::operator_(this_00,aLStack176);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack192);
    pLVar9 = (L2CValue *)0x18cdc1683;
    this_01 = (L2CAgent *)lib::L2CValue::operator__(aLStack128,0x18cdc1683);
    lib::L2CAgent::math_abs(this_01,pLVar9);
    lib::L2CValue::operator_(aLStack224,aLStack96);
    lib::L2CValue::operator_(aLStack192,aLStack112);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::L2CValue(aLStack192,1);
    uVar6 = lib::L2CValue::operator_(aLStack208,aLStack192);
    lib::L2CValue::_L2CValue(aLStack192);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack192,1);
      lib::L2CValue::operator_(aLStack208,aLStack192);
      lib::L2CValue::_L2CValue(aLStack192);
    }
    lib::L2CValue::L2CValue(aLStack192,0);
    lib::L2CValue::L2CValue(aLStack224,false);
    iVar3 = lib::L2CValue::as_integer(aLStack192);
    fVar10 = (float)lib::L2CValue::as_number(aLStack208);
    bVar2 = lib::L2CValue::as_bool(aLStack224);
    app::lua_bind::AttackModule__set_power_impl(this->moduleAccessor,iVar3,fVar10,(bool)(bVar2 & 1))
    ;
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::L2CValue(aLStack192,1);
    lib::L2CValue::L2CValue(aLStack224,false);
    uVar6 = lib::L2CValue::as_integer(aLStack192);
    fVar10 = (float)lib::L2CValue::as_number(aLStack208);
    bVar2 = lib::L2CValue::as_bool(aLStack224);
    pLVar9 = (L2CValue *)(uVar6 & 0xffffffff);
    app::lua_bind::AttackModule__set_power_impl
              (this->moduleAccessor,(int)pLVar9,fVar10,(bool)(bVar2 & 1));
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack128);
  }
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CAgent::math_abs((L2CAgent *)auStack256,pLVar9);
  lib::L2CValue::L2CValue(aLStack192,2.0);
  lib::L2CValue::operator_(aLStack192,(L2CValue *)&LUA_SCRIPT_LINE_STATUS_SYSTEM);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::L2CValue(aLStack192,6.0);
  lib::L2CValue::operator_(aLStack224,aLStack192);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::operator_(aLStack160,aLStack208);
  lib::L2CValue::L2CValue(aLStack192,360.0);
  lib::L2CValue::operator_(aLStack144,aLStack192);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::operator_(aLStack128,(L2CValue *)(auStack256 + 0x10));
  lib::L2CValue::operator_(aLStack272,aLStack112);
  lib::L2CValue::operator_(aLStack272,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack192,_FIGHTER_YOSHI_STATUS_SPECIAL_S_WORK_FLOAT_ANGLE);
  fVar10 = (float)lib::L2CValue::as_number(aLStack272);
  iVar3 = lib::L2CValue::as_integer(aLStack192);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar10,iVar3);
  lib::L2CValue::_L2CValue(aLStack192);
  FUN_710000dc80(this);
  FUN_710000e1f0(aLStack192,this);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack192);
  lib::L2CValue::_L2CValue(aLStack192);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack192,_FIGHTER_YOSHI_STATUS_KIND_SPECIAL_S_END);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_YOSHI_STATUS_SPECIAL_S_WORK_INT_NEXT_STATUS);
    iVar3 = lib::L2CValue::as_integer(aLStack192);
    iVar5 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar5);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack192);
  }
  FUN_710000e3c0(aLStack192,this);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack192);
  lib::L2CValue::_L2CValue(aLStack192);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack192,0.0);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_YOSHI_STATUS_SPECIAL_S_WORK_FLOAT_RESERVE_DIR);
    fVar10 = (float)lib::L2CValue::as_number(aLStack192);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar10,iVar3);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::L2CValue(aLStack192,_FIGHTER_YOSHI_STATUS_KIND_SPECIAL_S_END);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_YOSHI_STATUS_SPECIAL_S_WORK_INT_NEXT_STATUS);
    iVar3 = lib::L2CValue::as_integer(aLStack192);
    iVar5 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar5);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack192);
  }
  pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xe);
  lib::L2CValue::L2CValue(aLStack192,10);
  lib::L2CValue::operator_(pLVar9,aLStack192);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::L2CValue(aLStack192,0);
  uVar6 = lib::L2CValue::operator__(aLStack96,aLStack192);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack192,0x1209ad28ae);
    lib::L2CValue::L2CValue(aLStack96,0);
    lib::L2CValue::L2CValue(aLStack112,true);
    HVar8 = lib::L2CValue::as_hash(aLStack192);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    bVar2 = lib::L2CValue::as_bool(aLStack112);
    app::lua_bind::ControlModule__set_rumble_impl
              (this->moduleAccessor,HVar8,iVar3,(bool)(bVar2 & 1),0x50000000);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack192);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue((L2CValue *)auStack256);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack256 + 0x10));
  return;
}

