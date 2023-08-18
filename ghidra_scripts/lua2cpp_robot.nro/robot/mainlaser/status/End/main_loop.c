
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponRobotMainlaser::status::End_main_loop(L2CWeaponRobotMainlaser *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CValue *this_00;
  L2CValue *this_01;
  float fVar4;
  uint uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  float in_register_00005008;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  ulong local_50;
  ulong uStack72;
  
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  bVar1 = app::lua_bind::AttackModule__is_attack_impl(this->moduleAccessor,iVar3,false);
  lib::L2CValue::L2CValue(aLStack160,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack160);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack160,_WEAPON_ROBOT_MAINLASER_INSTANCE_WORK_ID_FLOAT_LENGTH);
    iVar3 = lib::L2CValue::as_integer(aLStack160);
    fVar4 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack96,fVar4);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,0);
    lib::L2CValue::L2CValue(aLStack176,false);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    bVar1 = lib::L2CValue::as_bool(aLStack176);
    uVar6 = app::lua_bind::AttackModule__get_offset2_impl
                      (this->moduleAccessor,iVar3,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack160,(float)uVar6);
    lib::L2CValue::L2CValue(aLStack144,(float)((ulong)uVar6 >> 0x20));
    lib::L2CValue::L2CValue(aLStack128,in_register_00005008);
    FUN_71000026e0(aLStack112,this,aLStack160);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue(aLStack192,0);
    this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x18cdc1683);
    this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x162d277af);
    iVar3 = lib::L2CValue::as_integer(aLStack192);
    uVar7 = lib::L2CValue::as_number(this_00);
    lVar8 = lib::L2CValue::as_number(aLStack96);
    uVar5 = lib::L2CValue::as_number(this_01);
    local_50 = uVar7 & 0xffffffff | lVar8 << 0x20;
    uStack72 = (ulong)uVar5;
    bVar1 = app::lua_bind::AttackModule__set_offset2_impl
                      (this->moduleAccessor,iVar3,(Vector3f *)&local_50);
    lib::L2CValue::L2CValue(aLStack176,(bool)(bVar1 & 1));
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

