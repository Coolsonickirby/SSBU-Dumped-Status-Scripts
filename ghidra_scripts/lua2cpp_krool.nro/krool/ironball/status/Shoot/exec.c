
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponKroolIronball::status::Shoot_exec(L2CWeaponKroolIronball *this,L2CValue *return_value)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  L2CValue *pLVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  undefined auStack144 [32];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  undefined8 local_40;
  BattleObject *pBStack56;
  
  lib::L2CValue::L2CValue((L2CValue *)&local_40,0xe06ed07db);
  lib::L2CValue::L2CValue(aLStack96,0xcffcb57f6);
  uVar2 = lib::L2CValue::as_integer((L2CValue *)&local_40);
  uVar3 = lib::L2CValue::as_integer(aLStack96);
  fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar2,uVar3);
  lib::L2CValue::L2CValue(aLStack80,fVar6);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,0xe06ed07db);
  lib::L2CValue::L2CValue(aLStack112,0xb638b2834);
  uVar2 = lib::L2CValue::as_integer((L2CValue *)&local_40);
  uVar3 = lib::L2CValue::as_integer(aLStack112);
  iVar1 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar2,uVar3);
  lib::L2CValue::L2CValue(aLStack96,iVar1);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,0);
  uVar2 = lib::L2CValue::operator_((L2CValue *)&local_40,aLStack96);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  if ((uVar2 & 1) == 0) goto LAB_710002ed98;
  lib::L2CValue::L2CValue(aLStack112,0x5a);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,0x168);
  lib::L2CValue::operator_((L2CValue *)&local_40,aLStack96);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::operator_(aLStack160);
  lib::L2CValue::L2CValue(aLStack176,_WEAPON_KROOL_IRONBALL_INSTANCE_WORK_ID_INT_COUNT);
  iVar1 = lib::L2CValue::as_integer(aLStack176);
  iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,iVar1);
  lib::L2CValue::operator_((L2CValue *)auStack144,(L2CValue *)&local_40);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue((L2CValue *)auStack144);
  lib::L2CValue::_L2CValue(aLStack160);
  fVar6 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)auStack144,fVar6);
  lib::L2CValue::operator_((L2CValue *)(auStack144 + 0x10),(L2CValue *)auStack144);
  lib::L2CValue::operator_((L2CValue *)(auStack144 + 0x10),(L2CValue *)&local_40);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::_L2CValue((L2CValue *)auStack144);
  lib::L2CValue::operator_(aLStack112,(L2CValue *)(auStack144 + 0x10));
  puVar4 = &local_40;
  lib::L2CValue::operator_(aLStack112,(L2CValue *)puVar4);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CAgent::math_rad((L2CAgent *)aLStack112,(L2CValue *)puVar4);
  lib::L2CAgent::math_cos((L2CAgent *)auStack144,(L2CValue *)puVar4);
  lib::L2CValue::operator_(aLStack176,aLStack80);
  fVar6 = (float)app::lua_bind::PostureModule__scale_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack192,fVar6);
  pLVar5 = aLStack192;
  lib::L2CValue::operator_((L2CValue *)&local_40,pLVar5);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CAgent::math_sin((L2CAgent *)auStack144,pLVar5);
  lib::L2CValue::operator_(aLStack192,aLStack80);
  fVar6 = (float)app::lua_bind::PostureModule__scale_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack208,fVar6);
  lib::L2CValue::operator_((L2CValue *)&local_40,aLStack208);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,0);
  uVar2 = lib::L2CValue::operator__(aLStack112,(L2CValue *)&local_40);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_40,0xb4);
    lib::L2CValue::operator_(aLStack112,(L2CValue *)&local_40);
    lib::L2CValue::_L2CValue((L2CValue *)&local_40);
    lib::L2CValue::L2CValue((L2CValue *)&local_40,0);
    uVar2 = lib::L2CValue::operator__(aLStack192,(L2CValue *)&local_40);
    lib::L2CValue::_L2CValue((L2CValue *)&local_40);
    lib::L2CValue::_L2CValue(aLStack192);
    if ((uVar2 & 1) != 0) goto LAB_710002ecf4;
    lib::L2CValue::L2CValue((L2CValue *)&local_40,0x5a);
    lib::L2CValue::operator_(aLStack112,(L2CValue *)&local_40);
    lib::L2CValue::_L2CValue((L2CValue *)&local_40);
    lib::L2CValue::L2CValue((L2CValue *)&local_40,0);
    uVar2 = lib::L2CValue::operator__(aLStack192,(L2CValue *)&local_40);
    lib::L2CValue::_L2CValue((L2CValue *)&local_40);
    lib::L2CValue::_L2CValue(aLStack192);
    if ((uVar2 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_40,0.0);
      lib::L2CValue::operator_(aLStack160,(L2CValue *)&local_40);
      goto LAB_710002ed0c;
    }
  }
  else {
LAB_710002ecf4:
    lib::L2CValue::L2CValue((L2CValue *)&local_40,0.0);
    lib::L2CValue::operator_(aLStack176,(L2CValue *)&local_40);
LAB_710002ed0c:
    lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  }
  lib::L2CValue::L2CValue(aLStack192,0.0);
  uVar7 = lib::L2CValue::as_number(aLStack160);
  uVar8 = lib::L2CValue::as_number(aLStack176);
  uVar9 = lib::L2CValue::as_number(aLStack192);
  local_40 = CONCAT44(uVar8,uVar7);
  pBStack56 = (BattleObject *)(ulong)uVar9;
  app::lua_bind::ModelModule__set_render_offset_position_impl
            (this->moduleAccessor,(Vector3f *)&local_40);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue((L2CValue *)auStack144);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack144 + 0x10));
  lib::L2CValue::_L2CValue(aLStack112);
LAB_710002ed98:
  lib::L2CValue::L2CValue((L2CValue *)&local_40,_WEAPON_KROOL_IRONBALL_INSTANCE_WORK_ID_INT_COUNT);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_40);
  app::lua_bind::WorkModule__inc_int_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

