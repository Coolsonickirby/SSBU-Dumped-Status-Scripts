
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponSnakeFlaregrenades::status::Fly_exec
          (L2CWeaponSnakeFlaregrenades *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  Hash40 HVar6;
  L2CValue *pLVar7;
  ulong *puVar8;
  float fVar9;
  long lVar10;
  undefined auStack176 [16];
  undefined auStack160 [32];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  ulong local_50;
  ulong uStack72;
  
  lib::L2CValue::L2CValue(aLStack112,_WEAPON_SNAKE_FLAREGRENADES_INSTANCE_WORK_ID_FLAG_STOP_ROT);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_50,false);
  uVar5 = lib::L2CValue::operator__(aLStack96,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_50,_WEAPON_SNAKE_FLAREGRENADES_INSTANCE_WORK_ID_FLOAT_ROT);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack96,fVar9);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue(aLStack112,0x31d39a761);
    lib::L2CValue::L2CValue(aLStack128,0.0);
    lib::L2CValue::L2CValue((L2CValue *)(auStack160 + 0x10),0.0);
    HVar6 = lib::L2CValue::as_hash(aLStack112);
    uVar5 = lib::L2CValue::as_number(aLStack96);
    lVar10 = lib::L2CValue::as_number(aLStack128);
    uVar4 = lib::L2CValue::as_number((L2CValue *)(auStack160 + 0x10));
    local_50 = uVar5 & 0xffffffff | lVar10 << 0x20;
    uStack72 = (ulong)uVar4;
    app::lua_bind::ModelModule__set_joint_rotate_impl
              (this->moduleAccessor,HVar6,(Vector3f *)&local_50,0,0);
    goto LAB_7100028d38;
  }
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_50,_WEAPON_SNAKE_FLAREGRENADES_INSTANCE_WORK_ID_FLOAT_ROT);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack96,fVar9);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_50,_WEAPON_SNAKE_FLAREGRENADES_INSTANCE_WORK_ID_FLOAT_ROT_SPEED);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack112,fVar9);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue(aLStack128,false);
  lib::L2CValue::L2CValue
            ((L2CValue *)(auStack160 + 0x10),_WEAPON_SNAKE_FLAREGRENADES_INSTANCE_WORK_ID_FLAG_STOP)
  ;
  iVar3 = lib::L2CValue::as_integer((L2CValue *)(auStack160 + 0x10));
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack160 + 0x10));
  if ((bVar2 & 1U) == 0) goto LAB_7100028a10;
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
  uVar5 = lib::L2CValue::operator_((L2CValue *)&local_50,aLStack112);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_50,270.0);
    uVar5 = lib::L2CValue::operator__((L2CValue *)&local_50,aLStack96);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_50,180.0);
      uVar5 = lib::L2CValue::operator_(aLStack96,(L2CValue *)&local_50);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_50,90.0);
        uVar5 = lib::L2CValue::operator__((L2CValue *)&local_50,aLStack96);
        lib::L2CValue::_L2CValue((L2CValue *)&local_50);
        if ((uVar5 & 1) != 0) goto LAB_71000289d8;
      }
      goto LAB_7100028a10;
    }
LAB_71000289d8:
    lib::L2CValue::L2CValue((L2CValue *)&local_50,-1.0);
    lib::L2CValue::operator_(aLStack112,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::operator_(aLStack112,(L2CValue *)(auStack160 + 0x10));
LAB_7100028a08:
    lib::L2CValue::_L2CValue((L2CValue *)(auStack160 + 0x10));
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_50,90.0);
    uVar5 = lib::L2CValue::operator__(aLStack96,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    if ((uVar5 & 1) != 0) {
LAB_71000288b8:
      lib::L2CValue::L2CValue((L2CValue *)&local_50,-1.0);
      lib::L2CValue::operator_(aLStack112,(L2CValue *)&local_50);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      lib::L2CValue::operator_(aLStack112,(L2CValue *)(auStack160 + 0x10));
      goto LAB_7100028a08;
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_50,180.0);
    uVar5 = lib::L2CValue::operator_((L2CValue *)&local_50,aLStack96);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_50,270.0);
      uVar5 = lib::L2CValue::operator__(aLStack96,(L2CValue *)&local_50);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      if ((uVar5 & 1) != 0) goto LAB_71000288b8;
    }
  }
LAB_7100028a10:
  lib::L2CValue::operator_(aLStack96,aLStack112);
  lib::L2CValue::operator_(aLStack96,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
  uVar5 = lib::L2CValue::operator_(aLStack96,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_50,360.0);
    uVar5 = lib::L2CValue::operator_((L2CValue *)&local_50,aLStack96);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_50,360.0);
      lib::L2CValue::operator_(aLStack96,(L2CValue *)&local_50);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      lib::L2CValue::operator_(aLStack96,(L2CValue *)(auStack160 + 0x10));
      goto LAB_7100028af4;
    }
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_50,360.0);
    lib::L2CValue::operator_(aLStack96,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::operator_(aLStack96,(L2CValue *)(auStack160 + 0x10));
LAB_7100028af4:
    lib::L2CValue::_L2CValue((L2CValue *)(auStack160 + 0x10));
  }
  lib::L2CValue::L2CValue
            ((L2CValue *)(auStack160 + 0x10),_WEAPON_SNAKE_FLAREGRENADES_INSTANCE_WORK_ID_FLAG_STOP)
  ;
  iVar3 = lib::L2CValue::as_integer((L2CValue *)(auStack160 + 0x10));
  uVar4 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  pLVar7 = (L2CValue *)(ulong)(uVar4 & 1);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,SUB41(uVar4 & 1,0));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack160 + 0x10));
  if ((bVar2 & 1U) != 0) {
    lib::L2CAgent::math_abs((L2CAgent *)aLStack112,pLVar7);
    uVar5 = lib::L2CValue::operator__(aLStack96,(L2CValue *)(auStack160 + 0x10));
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_50,360.0);
      puVar8 = &local_50;
      lib::L2CValue::operator_(aLStack96,(L2CValue *)puVar8);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      lib::L2CAgent::math_abs((L2CAgent *)auStack176,(L2CValue *)puVar8);
      lib::L2CAgent::math_abs((L2CAgent *)aLStack112,(L2CValue *)puVar8);
      uVar5 = lib::L2CValue::operator__((L2CValue *)auStack160,(L2CValue *)&local_50);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      lib::L2CValue::_L2CValue((L2CValue *)auStack160);
      lib::L2CValue::_L2CValue((L2CValue *)auStack176);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack160 + 0x10));
      if ((uVar5 & 1) != 0) goto LAB_7100028be8;
      lib::L2CValue::L2CValue((L2CValue *)&local_50,180.0);
      puVar8 = &local_50;
      lib::L2CValue::operator_(aLStack96,(L2CValue *)puVar8);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      lib::L2CAgent::math_abs((L2CAgent *)auStack160,(L2CValue *)puVar8);
      lib::L2CAgent::math_abs((L2CAgent *)aLStack112,(L2CValue *)puVar8);
      uVar5 = lib::L2CValue::operator__((L2CValue *)(auStack160 + 0x10),(L2CValue *)&local_50);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack160 + 0x10));
      lib::L2CValue::_L2CValue((L2CValue *)auStack160);
      if ((uVar5 & 1) == 0) goto LAB_7100028c34;
      lib::L2CValue::L2CValue((L2CValue *)&local_50,180.0);
      lib::L2CValue::operator_(aLStack96,(L2CValue *)&local_50);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_50,_WEAPON_SNAKE_FLAREGRENADES_INSTANCE_WORK_ID_FLAG_STOP_ROT);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
      app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
    }
    else {
      lib::L2CValue::_L2CValue((L2CValue *)(auStack160 + 0x10));
LAB_7100028be8:
      lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
      lib::L2CValue::operator_(aLStack96,(L2CValue *)&local_50);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_50,_WEAPON_SNAKE_FLAREGRENADES_INSTANCE_WORK_ID_FLAG_STOP_ROT);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
      app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
    }
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  }
LAB_7100028c34:
  lib::L2CValue::L2CValue((L2CValue *)(auStack160 + 0x10),0x31d39a761);
  lib::L2CValue::L2CValue((L2CValue *)auStack160,0.0);
  lib::L2CValue::L2CValue((L2CValue *)auStack176,0.0);
  HVar6 = lib::L2CValue::as_hash((L2CValue *)(auStack160 + 0x10));
  uVar5 = lib::L2CValue::as_number(aLStack96);
  lVar10 = lib::L2CValue::as_number((L2CValue *)auStack160);
  uVar4 = lib::L2CValue::as_number((L2CValue *)auStack176);
  local_50 = uVar5 & 0xffffffff | lVar10 << 0x20;
  uStack72 = (ulong)uVar4;
  app::lua_bind::ModelModule__set_joint_rotate_impl
            (this->moduleAccessor,HVar6,(Vector3f *)&local_50,0,0);
  lib::L2CValue::_L2CValue((L2CValue *)auStack176);
  lib::L2CValue::_L2CValue((L2CValue *)auStack160);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack160 + 0x10));
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
  lib::L2CValue::operator_(aLStack96,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_50,_WEAPON_SNAKE_FLAREGRENADES_INSTANCE_WORK_ID_FLOAT_ROT);
  fVar9 = (float)lib::L2CValue::as_number((L2CValue *)(auStack160 + 0x10));
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar9,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
LAB_7100028d38:
  lib::L2CValue::_L2CValue((L2CValue *)(auStack160 + 0x10));
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

