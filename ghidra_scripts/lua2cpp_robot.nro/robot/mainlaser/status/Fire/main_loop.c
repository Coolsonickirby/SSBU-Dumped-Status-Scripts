
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponRobotMainlaser::status::Fire_main_loop
          (L2CWeaponRobotMainlaser *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  L2CAgent *this_00;
  L2CValue *pLVar3;
  L2CValue *this_01;
  L2CValue *in_x2;
  float fVar4;
  uint uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  float in_register_00005008;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  ulong local_60;
  ulong uStack88;
  
  lib::L2CValue::L2CValue(aLStack176,_WEAPON_ROBOT_MAINLASER_INSTANCE_WORK_ID_FLOAT_LENGTH);
  iVar2 = lib::L2CValue::as_integer(aLStack176);
  fVar4 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack112,fVar4);
  lib::L2CValue::_L2CValue(aLStack176);
  this_00 = (L2CAgent *)lib::L2CValue::operator__((L2CValue *)(this + 1),0xce4f5ce41);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)(this + 1),0x50f26fef6);
  lib::L2CValue::operator_(aLStack112,pLVar3);
  lib::L2CAgent::math_min(this_00,(L2CValue *)&local_60,in_x2);
  lib::L2CValue::operator_(aLStack112,aLStack176);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0);
  lib::L2CValue::L2CValue(aLStack192,false);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  bVar1 = lib::L2CValue::as_bool(aLStack192);
  uVar6 = app::lua_bind::AttackModule__get_offset2_impl
                    (this->moduleAccessor,iVar2,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack176,(float)uVar6);
  lib::L2CValue::L2CValue(aLStack160,(float)((ulong)uVar6 >> 0x20));
  lib::L2CValue::L2CValue(aLStack144,in_register_00005008);
  FUN_71000026e0(aLStack128,this,aLStack176);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue(aLStack208,0);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x18cdc1683);
  this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x162d277af);
  iVar2 = lib::L2CValue::as_integer(aLStack208);
  uVar7 = lib::L2CValue::as_number(pLVar3);
  lVar8 = lib::L2CValue::as_number(aLStack112);
  uVar5 = lib::L2CValue::as_number(this_01);
  local_60 = uVar7 & 0xffffffff | lVar8 << 0x20;
  uStack88 = (ulong)uVar5;
  bVar1 = app::lua_bind::AttackModule__set_offset2_impl
                    (this->moduleAccessor,iVar2,(Vector3f *)&local_60);
  lib::L2CValue::L2CValue(aLStack192,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
  lib::L2CValue::operator_(aLStack112,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_60,_WEAPON_ROBOT_MAINLASER_INSTANCE_WORK_ID_FLOAT_LENGTH);
  fVar4 = (float)lib::L2CValue::as_number(aLStack208);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar4,iVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

