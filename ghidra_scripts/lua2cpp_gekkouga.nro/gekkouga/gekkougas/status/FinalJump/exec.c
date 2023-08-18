
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponGekkougaGekkougas::status::FinalJump_exec
          (L2CWeaponGekkougaGekkougas *this,L2CValue *return_value)

{
  int iVar1;
  float *pfVar2;
  L2CValue *pLVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  Hash40 HVar6;
  ulong *this_00;
  L2CValue *pLVar7;
  BattleObjectModuleAccessor *pBVar8;
  float fVar9;
  uint uVar10;
  long lVar11;
  L2CValue aLStack592 [16];
  L2CValue aLStack576 [16];
  L2CValue aLStack560 [16];
  L2CValue aLStack544 [16];
  L2CValue aLStack528 [16];
  ulong local_200;
  ulong uStack504;
  L2CValue aLStack496 [16];
  L2CValue aLStack480 [16];
  L2CValue aLStack464 [16];
  L2CValue aLStack448 [16];
  L2CValue aLStack432 [16];
  ulong auStack416 [2];
  L2CValue aLStack400 [16];
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  undefined8 local_90;
  ulong uStack136;
  
  pfVar2 = (float *)app::lua_bind::PostureModule__pos_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack208,*pfVar2);
  lib::L2CValue::L2CValue(aLStack192,pfVar2[1]);
  lib::L2CValue::L2CValue(aLStack176,pfVar2[2]);
  FUN_7100029660(aLStack160,this,aLStack208);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::L2CValue(aLStack240,0.0);
  lib::L2CValue::L2CValue(aLStack256,0.0);
  lib::L2CValue::L2CValue(aLStack272,0.0);
  lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0x10,(L2CValue)0x0,(L2CValue)0xf0);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_90,_WEAPON_GEKKOUGA_GEKKOUGAS_INSTANCE_WORK_ID_FLOAT_MOVE_TARGET_X);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_90);
  fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue((L2CValue *)&local_200,fVar9);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack224,0x18cdc1683);
  lib::L2CValue::operator_(pLVar3,(L2CValue *)&local_200);
  lib::L2CValue::_L2CValue((L2CValue *)&local_200);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_90,_WEAPON_GEKKOUGA_GEKKOUGAS_INSTANCE_WORK_ID_FLOAT_MOVE_TARGET_Y);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_90);
  fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue((L2CValue *)&local_200,fVar9);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack224,0x1fbdb2615);
  lib::L2CValue::operator_(pLVar3,(L2CValue *)&local_200);
  lib::L2CValue::_L2CValue((L2CValue *)&local_200);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x162d277af);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack224,0x162d277af);
  lib::L2CValue::operator_(pLVar4,pLVar3);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack224,0x18cdc1683);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
  lib::L2CValue::operator_(pLVar3,pLVar4);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack224,0x1fbdb2615);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
  lib::L2CValue::operator_(pLVar3,pLVar4);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack224,0x162d277af);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x162d277af);
  lib::L2CValue::operator_(pLVar3,pLVar4);
  lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0xd0,(L2CValue)0xc0,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::L2CValue(aLStack368,aLStack288);
  lua2cpp::L2CFighterBase::Vector3__length(this,(L2CValue)0x90);
  lib::L2CValue::_L2CValue(aLStack368);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_200,_WEAPON_GEKKOUGA_GEKKOUGAS_INSTANCE_WORK_ID_FLOAT_MOVE_SPEED);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_200);
  fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack384,fVar9);
  lib::L2CValue::_L2CValue((L2CValue *)&local_200);
  uVar5 = lib::L2CValue::operator__(aLStack352,aLStack384);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::operator_(aLStack160,aLStack224);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_200,_WEAPON_GEKKOUGA_GEKKOUGAS_INSTANCE_WORK_ID_FLAG_CHANGE_STATUS
              );
    iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_200);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar1);
    this_00 = &local_200;
    goto LAB_710002ed2c;
  }
  lib::L2CValue::L2CValue(aLStack400,aLStack288);
  lua2cpp::L2CFighterBase::Vector3__normalize(this,(L2CValue)0x70);
  lib::L2CValue::operator_(aLStack288,(L2CValue *)&local_200);
  lib::L2CValue::_L2CValue((L2CValue *)&local_200);
  lib::L2CValue::_L2CValue(aLStack400);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack288,0x18cdc1683);
  lib::L2CValue::operator_(pLVar4,aLStack384);
  lib::L2CValue::operator_(pLVar3,(L2CValue *)&local_90);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
  lib::L2CValue::operator_(pLVar3,(L2CValue *)&local_200);
  lib::L2CValue::_L2CValue((L2CValue *)&local_200);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack288,0x1fbdb2615);
  lib::L2CValue::operator_(pLVar4,aLStack384);
  lib::L2CValue::operator_(pLVar3,(L2CValue *)&local_90);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
  lib::L2CValue::operator_(pLVar3,(L2CValue *)&local_200);
  lib::L2CValue::_L2CValue((L2CValue *)&local_200);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x162d277af);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack288,0x162d277af);
  lib::L2CValue::operator_(pLVar4,aLStack384);
  lib::L2CValue::operator_(pLVar3,(L2CValue *)&local_90);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x162d277af);
  lib::L2CValue::operator_(pLVar3,(L2CValue *)&local_200);
  lib::L2CValue::_L2CValue((L2CValue *)&local_200);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::L2CValue(aLStack432,0.0);
  lib::L2CValue::L2CValue(aLStack448,0.0);
  lib::L2CValue::L2CValue(aLStack464,0.0);
  lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0x50,(L2CValue)0x40,(L2CValue)0x30);
  lib::L2CValue::_L2CValue(aLStack464);
  lib::L2CValue::_L2CValue(aLStack448);
  lib::L2CValue::_L2CValue(aLStack432);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack416,0x18cdc1683);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack416,0x1fbdb2615);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack416,0x162d277af);
  lib::L2CValue::L2CValue(aLStack528,0x31d39a761);
  lib::L2CValue::L2CValue(aLStack544,0);
  lib::L2CValue::L2CValue(aLStack560,0);
  lib::L2CValue::L2CValue(aLStack576,0);
  HVar6 = lib::L2CValue::as_hash(aLStack528);
  uVar5 = lib::L2CValue::as_number(aLStack544);
  lVar11 = lib::L2CValue::as_number(aLStack560);
  uVar10 = lib::L2CValue::as_number(aLStack576);
  local_90 = uVar5 & 0xffffffff | lVar11 << 0x20;
  uStack136 = (ulong)uVar10;
  app::lua_bind::ModelModule__joint_rotate_impl(this->moduleAccessor,HVar6,(Vector3f *)&local_90);
  lib::L2CValue::L2CValue((L2CValue *)&local_200,(float)local_90);
  lib::L2CValue::L2CValue(aLStack496,local_90._4_4_);
  lib::L2CValue::L2CValue(aLStack480,(float)uStack136);
  lib::L2CValue::operator_(pLVar3,(L2CValue *)&local_200);
  lib::L2CValue::operator_(pLVar4,aLStack496);
  lib::L2CValue::operator_(pLVar7,aLStack480);
  lib::L2CValue::_L2CValue(aLStack480);
  lib::L2CValue::_L2CValue(aLStack496);
  lib::L2CValue::_L2CValue((L2CValue *)&local_200);
  lib::L2CValue::_L2CValue(aLStack576);
  lib::L2CValue::_L2CValue(aLStack560);
  lib::L2CValue::_L2CValue(aLStack544);
  lib::L2CValue::_L2CValue(aLStack528);
  lib::L2CValue::L2CValue(aLStack576,_WEAPON_GEKKOUGA_GEKKOUGAS_INSTANCE_WORK_ID_FLOAT_MOVE_ANGLE);
  iVar1 = lib::L2CValue::as_integer(aLStack576);
  fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack560,fVar9);
  fVar9 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack592,fVar9);
  lib::L2CValue::operator_(aLStack560,aLStack592);
  lib::L2CValue::L2CValue((L2CValue *)&local_200,90.0);
  lib::L2CValue::operator_(aLStack544,(L2CValue *)&local_200);
  lib::L2CValue::_L2CValue((L2CValue *)&local_200);
  lib::L2CValue::L2CValue((L2CValue *)&local_200,45.0);
  lib::L2CValue::operator_(aLStack528,(L2CValue *)&local_200);
  lib::L2CValue::_L2CValue((L2CValue *)&local_200);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack416,0x18cdc1683);
  lib::L2CValue::operator_(pLVar3,(L2CValue *)&local_90);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::_L2CValue(aLStack528);
  lib::L2CValue::_L2CValue(aLStack544);
  lib::L2CValue::_L2CValue(aLStack592);
  lib::L2CValue::_L2CValue(aLStack560);
  lib::L2CValue::_L2CValue(aLStack576);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack416,0x18cdc1683);
  lib::L2CValue::L2CValue((L2CValue *)&local_200,0.0);
  uVar5 = lib::L2CValue::operator_(pLVar3,(L2CValue *)&local_200);
  lib::L2CValue::_L2CValue((L2CValue *)&local_200);
  if ((uVar5 & 1) == 0) {
    pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack416,0x18cdc1683);
    lib::L2CValue::L2CValue((L2CValue *)&local_200,360.0);
    uVar5 = lib::L2CValue::operator_((L2CValue *)&local_200,pLVar3);
    lib::L2CValue::_L2CValue((L2CValue *)&local_200);
    if ((uVar5 & 1) != 0) {
      pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack416,0x18cdc1683);
      lib::L2CValue::L2CValue((L2CValue *)&local_200,360.0);
      lib::L2CValue::operator_(pLVar3,(L2CValue *)&local_200);
      lib::L2CValue::_L2CValue((L2CValue *)&local_200);
      pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack416,0x18cdc1683);
      lib::L2CValue::operator_(pLVar3,(L2CValue *)&local_90);
      goto LAB_710002ec5c;
    }
  }
  else {
    pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack416,0x18cdc1683);
    lib::L2CValue::L2CValue((L2CValue *)&local_200,360.0);
    lib::L2CValue::operator_(pLVar3,(L2CValue *)&local_200);
    lib::L2CValue::_L2CValue((L2CValue *)&local_200);
    pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack416,0x18cdc1683);
    lib::L2CValue::operator_(pLVar3,(L2CValue *)&local_90);
LAB_710002ec5c:
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_90,0x31d39a761);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack416,0x18cdc1683);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack416,0x1fbdb2615);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack416,0x162d277af);
  HVar6 = lib::L2CValue::as_hash((L2CValue *)&local_90);
  uVar5 = lib::L2CValue::as_number(pLVar3);
  lVar11 = lib::L2CValue::as_number(pLVar4);
  uVar10 = lib::L2CValue::as_number(pLVar7);
  local_200 = uVar5 & 0xffffffff | lVar11 << 0x20;
  uStack504 = (ulong)uVar10;
  app::lua_bind::ModelModule__set_joint_rotate_impl
            (this->moduleAccessor,HVar6,(Vector3f *)&local_200,0,0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  this_00 = auStack416;
LAB_710002ed2c:
  lib::L2CValue::_L2CValue((L2CValue *)this_00);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x162d277af);
  uVar5 = lib::L2CValue::as_number(pLVar3);
  lVar11 = lib::L2CValue::as_number(pLVar4);
  uVar10 = lib::L2CValue::as_number(pLVar7);
  local_200 = uVar5 & 0xffffffff | lVar11 << 0x20;
  uStack504 = (ulong)uVar10;
  app::lua_bind::PostureModule__set_pos_impl(this->moduleAccessor,(Vector3f *)&local_200);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
  pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar3);
  app::WeaponSpecializer_GekkougaGekkougaS::update_moon_position(pBVar8);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_200,_WEAPON_GEKKOUGA_GEKKOUGAS_INSTANCE_WORK_ID_INT_BLACKOUT_FRAME);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_200);
  app::lua_bind::WorkModule__inc_int_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue((L2CValue *)&local_200);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack384);
  lib::L2CValue::_L2CValue(aLStack352);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack160);
  return;
}

