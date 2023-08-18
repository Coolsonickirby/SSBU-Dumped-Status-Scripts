
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponDiddyPeanuts::status::FlyWin1_exec(L2CWeaponDiddyPeanuts *this,L2CValue *return_value)

{
  int iVar1;
  L2CValue *pLVar2;
  L2CValue *pLVar3;
  L2CValue *this_00;
  L2CValue *pLVar4;
  L2CValue *this_01;
  L2CValue *this_02;
  Hash40 HVar5;
  ulong uVar6;
  float *pfVar7;
  uint uVar8;
  float fVar9;
  ulong uVar10;
  long lVar11;
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  undefined auStack304 [32];
  L2CValue aLStack272 [16];
  undefined local_100 [32];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  undefined8 local_90;
  ulong uStack136;
  
  lib::L2CValue::L2CValue(aLStack176,0.0);
  lib::L2CValue::L2CValue(aLStack192,0.0);
  lib::L2CValue::L2CValue(aLStack208,0.0);
  lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0x50,(L2CValue)0x40,(L2CValue)0x30);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  pLVar2 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
  this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x162d277af);
  lib::L2CValue::L2CValue(aLStack272,0x31ed91fca);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
  this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
  this_02 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x162d277af);
  HVar5 = lib::L2CValue::as_hash(aLStack272);
  uVar10 = lib::L2CValue::as_number(pLVar4);
  lVar11 = lib::L2CValue::as_number(this_01);
  uVar8 = lib::L2CValue::as_number(this_02);
  local_90 = uVar10 & 0xffffffff | lVar11 << 0x20;
  uStack136 = (ulong)uVar8;
  app::lua_bind::ModelModule__joint_rotate_impl(this->moduleAccessor,HVar5,(Vector3f *)&local_90);
  lib::L2CValue::L2CValue((L2CValue *)local_100,(float)local_90);
  pLVar4 = (L2CValue *)(local_100 + 0x10);
  lib::L2CValue::L2CValue(pLVar4,local_90._4_4_);
  lib::L2CValue::L2CValue(aLStack224,(float)uStack136);
  lib::L2CValue::operator_(pLVar2,(L2CValue *)local_100);
  lib::L2CValue::operator_(pLVar3,pLVar4);
  lib::L2CValue::operator_(this_00,aLStack224);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(pLVar4);
  lib::L2CValue::_L2CValue((L2CValue *)local_100);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::L2CValue((L2CValue *)local_100,_WEAPON_DIDDY_PEANUTS_STATUS_WORK_FLOAT_ANGLE);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)local_100);
  fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack272,fVar9);
  lib::L2CValue::_L2CValue((L2CValue *)local_100);
  lib::L2CValue::L2CValue((L2CValue *)(auStack304 + 0x10),0xda4a9bf44);
  lib::L2CValue::L2CValue((L2CValue *)auStack304,0x9a8bc63fd);
  uVar10 = lib::L2CValue::as_integer((L2CValue *)(auStack304 + 0x10));
  uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack304);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar10,uVar6);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,fVar9);
  lib::L2CValue::operator_(aLStack272,(L2CValue *)&local_90);
  lib::L2CValue::operator_(aLStack272,(L2CValue *)local_100);
  lib::L2CValue::_L2CValue((L2CValue *)local_100);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::_L2CValue((L2CValue *)auStack304);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack304 + 0x10));
  lib::L2CValue::L2CValue((L2CValue *)local_100,360.0);
  uVar10 = lib::L2CValue::operator_((L2CValue *)local_100,aLStack272);
  lib::L2CValue::_L2CValue((L2CValue *)local_100);
  if ((uVar10 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)local_100,360.0);
    lib::L2CValue::operator_(aLStack272,(L2CValue *)local_100);
    lib::L2CValue::_L2CValue((L2CValue *)local_100);
    lib::L2CValue::operator_(aLStack272,(L2CValue *)&local_90);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  }
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
  lib::L2CValue::operator_(pLVar4,aLStack272);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,_WEAPON_DIDDY_PEANUTS_INSTANCE_WORK_ID_FLOAT_ROT_Y);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_90);
  fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue((L2CValue *)local_100,fVar9);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
  lib::L2CValue::operator_(pLVar4,(L2CValue *)local_100);
  lib::L2CValue::_L2CValue((L2CValue *)local_100);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,0x31ed91fca);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
  pLVar2 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x162d277af);
  HVar5 = lib::L2CValue::as_hash((L2CValue *)&local_90);
  uVar10 = lib::L2CValue::as_number(pLVar4);
  lVar11 = lib::L2CValue::as_number(pLVar2);
  uVar8 = lib::L2CValue::as_number(pLVar3);
  local_100._0_8_ = (void **)(uVar10 & 0xffffffff | lVar11 << 0x20);
  local_100._8_8_ = (lua_State *)(ulong)uVar8;
  app::lua_bind::ModelModule__set_joint_rotate_impl
            (this->moduleAccessor,HVar5,(Vector3f *)local_100,0,0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::L2CValue((L2CValue *)local_100,_WEAPON_DIDDY_PEANUTS_STATUS_WORK_FLOAT_ANGLE);
  fVar9 = (float)lib::L2CValue::as_number(aLStack272);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)local_100);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar9,iVar1);
  lib::L2CValue::_L2CValue((L2CValue *)local_100);
  iVar1 = app::lua_bind::StatusModule__status_kind_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,iVar1);
  lib::L2CValue::L2CValue((L2CValue *)local_100,_WEAPON_DIDDY_PEANUTS_STATUS_KIND_FLY_WIN_1);
  uVar10 = lib::L2CValue::operator__((L2CValue *)&local_90,(L2CValue *)local_100);
  lib::L2CValue::_L2CValue((L2CValue *)local_100);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  if ((uVar10 & 1) != 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)local_100,_WEAPON_DIDDY_PEANUTS_INSTANCE_WORK_ID_FLOAT_SPEED);
    iVar1 = lib::L2CValue::as_integer((L2CValue *)local_100);
    fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue((L2CValue *)(auStack304 + 0x10),fVar9);
    lib::L2CValue::_L2CValue((L2CValue *)local_100);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_90,_WEAPON_DIDDY_PEANUTS_INSTANCE_WORK_ID_FLOAT_ROT_Y);
    pLVar4 = (L2CValue *)lib::L2CValue::as_integer((L2CValue *)&local_90);
    fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,(int)pLVar4);
    lib::L2CValue::L2CValue((L2CValue *)local_100,fVar9);
    lib::L2CAgent::math_rad((L2CAgent *)local_100,pLVar4);
    lib::L2CValue::_L2CValue((L2CValue *)local_100);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    lib::L2CAgent::math_sin((L2CAgent *)auStack304,pLVar4);
    pLVar4 = (L2CValue *)(auStack304 + 0x10);
    lib::L2CValue::operator_((L2CValue *)local_100,pLVar4);
    lib::L2CValue::L2CValue(aLStack352,0.0);
    lib::L2CAgent::math_cos((L2CAgent *)auStack304,pLVar4);
    lib::L2CValue::operator_((L2CValue *)&local_90,(L2CValue *)(auStack304 + 0x10));
    lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0xb0,(L2CValue)0xa0,(L2CValue)0x90);
    lib::L2CValue::_L2CValue(aLStack368);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    lib::L2CValue::_L2CValue(aLStack352);
    lib::L2CValue::_L2CValue(aLStack336);
    lib::L2CValue::_L2CValue((L2CValue *)local_100);
    pfVar7 = (float *)app::lua_bind::PostureModule__pos_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue((L2CValue *)local_100,*pfVar7);
    lib::L2CValue::L2CValue((L2CValue *)(local_100 + 0x10),pfVar7[1]);
    lib::L2CValue::L2CValue(aLStack224,pfVar7[2]);
    FUN_710001a810(aLStack384,this,local_100);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue((L2CValue *)(local_100 + 0x10));
    lib::L2CValue::_L2CValue((L2CValue *)local_100);
    lib::L2CValue::operator_(aLStack384,aLStack320);
    lib::L2CValue::operator_(aLStack384,(L2CValue *)&local_90);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack384,0x18cdc1683);
    pLVar2 = (L2CValue *)lib::L2CValue::operator__(aLStack384,0x1fbdb2615);
    pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack384,0x162d277af);
    uVar10 = lib::L2CValue::as_number(pLVar4);
    lVar11 = lib::L2CValue::as_number(pLVar2);
    uVar8 = lib::L2CValue::as_number(pLVar3);
    local_90 = uVar10 & 0xffffffff | lVar11 << 0x20;
    uStack136 = (ulong)uVar8;
    app::lua_bind::PostureModule__set_pos_impl(this->moduleAccessor,(Vector3f *)&local_90);
    lib::L2CValue::_L2CValue(aLStack384);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue((L2CValue *)auStack304);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack304 + 0x10));
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack160);
  return;
}

