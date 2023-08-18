
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponTantanPunch1::status::DragonBeamStart_main_loop
          (L2CWeaponTantanPunch1 *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CValue *pLVar4;
  BattleObjectModuleAccessor *pBVar5;
  ulong uVar6;
  ulong uVar7;
  L2CValue *pLVar8;
  L2CValue *pLVar9;
  L2CValue *this_01;
  L2CValue *this_02;
  L2CValue *this_03;
  Hash40 HVar10;
  float fVar11;
  uint uVar12;
  long lVar13;
  undefined8 uVar14;
  L2CValue aLStack480 [16];
  L2CValue aLStack464 [16];
  L2CValue aLStack448 [16];
  L2CValue aLStack432 [16];
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
  undefined auStack384 [32];
  undefined auStack352 [32];
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
  lua_State *plStack136;
  
  this_00 = &this->globalTable;
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
  pBVar5 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar4);
  bVar1 = app::WeaponSpecializer_TantanPunch1::is_check_floor_ground_for_beam(pBVar5);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack320,false);
  uVar6 = lib::L2CValue::operator__((L2CValue *)&local_90,aLStack320);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack320,_WEAPON_TANTAN_PUNCH1_STATUS_KIND_DRAGON_BEAM_END);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0x70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    return;
  }
  lib::L2CValue::L2CValue(aLStack320,0xb94eed765);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,0xca3dc30e5);
  uVar6 = lib::L2CValue::as_integer(aLStack320);
  uVar7 = lib::L2CValue::as_integer((L2CValue *)&local_90);
  iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar6,uVar7);
  lib::L2CValue::L2CValue(aLStack160,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::_L2CValue(aLStack320);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xe);
  uVar6 = lib::L2CValue::operator__(aLStack160,pLVar4);
  if ((uVar6 & 1) != 0) {
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
    pBVar5 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar4);
    bVar1 = app::WeaponSpecializer_TantanPunch1::is_check_ground_for_shoot_beam(pBVar5);
    lib::L2CValue::L2CValue(aLStack320,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack320);
    lib::L2CValue::_L2CValue(aLStack320);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack320,_WEAPON_TANTAN_PUNCH1_STATUS_KIND_DRAGON_BEAM_END);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0x70);
    }
    else {
      lib::L2CValue::L2CValue(aLStack320,_WEAPON_TANTAN_PUNCH1_STATUS_KIND_DRAGON_BEAM_SHOOT_LOOP);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0x70);
    }
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    goto LAB_7100078f84;
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_90,_WEAPON_TANTAN_PUNCH1_STATUS_WORK_FLAG_TARGET_EXIST)
  ;
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_90);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack320,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack320);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack320,_WEAPON_TANTAN_PUNCH1_STATUS_WORK_ID_FLOAT_DRAGON_DEGREE);
    iVar3 = lib::L2CValue::as_integer(aLStack320);
    fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack176,fVar11);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::L2CValue(aLStack320,_WEAPON_TANTAN_PUNCH1_STATUS_WORK_ID_FLOAT_TARGET_POS_X);
    iVar3 = lib::L2CValue::as_integer(aLStack320);
    fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack192,fVar11);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::L2CValue(aLStack320,_WEAPON_TANTAN_PUNCH1_STATUS_WORK_ID_FLOAT_TARGET_POS_Y);
    iVar3 = lib::L2CValue::as_integer(aLStack320);
    fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack208,fVar11);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::L2CValue(aLStack240,0.0);
    lib::L2CValue::L2CValue(aLStack256,0.0);
    lib::L2CValue::L2CValue(aLStack272,0.0);
    lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0x10,(L2CValue)0x0,(L2CValue)0xf0);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack240);
    pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack224,0x18cdc1683);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack224,0x1fbdb2615);
    pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack224,0x162d277af);
    lib::L2CValue::L2CValue((L2CValue *)(auStack352 + 0x10),0x4d27eea40);
    this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack224,0x18cdc1683);
    this_02 = (L2CValue *)lib::L2CValue::operator__(aLStack224,0x1fbdb2615);
    this_03 = (L2CValue *)lib::L2CValue::operator__(aLStack224,0x162d277af);
    HVar10 = lib::L2CValue::as_hash((L2CValue *)(auStack352 + 0x10));
    uVar6 = lib::L2CValue::as_number(this_01);
    lVar13 = lib::L2CValue::as_number(this_02);
    uVar12 = lib::L2CValue::as_number(this_03);
    local_90 = (void **)(uVar6 & 0xffffffff | lVar13 << 0x20);
    plStack136 = (lua_State *)(ulong)uVar12;
    app::lua_bind::ModelModule__joint_global_position_impl
              (this->moduleAccessor,HVar10,(Vector3f *)&local_90,true);
    lib::L2CValue::L2CValue(aLStack320,(float)local_90);
    lib::L2CValue::L2CValue(aLStack304,local_90._4_4_);
    fVar11 = 0.0;
    lib::L2CValue::L2CValue(aLStack288,plStack136._0_4_);
    lib::L2CValue::operator_(pLVar4,aLStack320);
    lib::L2CValue::operator_(pLVar8,aLStack304);
    lib::L2CValue::operator_(pLVar9,aLStack288);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack352 + 0x10));
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
    pBVar5 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar4);
    uVar14 = app::WeaponSpecializer_TantanPunch1::get_beam_start_pos(pBVar5);
    lib::L2CValue::L2CValue(aLStack320,(float)uVar14);
    lib::L2CValue::L2CValue(aLStack304,(float)((ulong)uVar14 >> 0x20));
    lib::L2CValue::L2CValue(aLStack288,fVar11);
    pLVar4 = aLStack320;
    FUN_710000eb70(auStack352 + 0x10,this);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue(aLStack320);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack224,0x1fbdb2615);
    lib::L2CValue::operator_(aLStack208,pLVar8);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack224,0x18cdc1683);
    lib::L2CValue::operator_(aLStack192,pLVar8);
    fVar11 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack400,fVar11);
    lib::L2CValue::operator_((L2CValue *)auStack384,aLStack400);
    pLVar8 = (L2CValue *)(auStack384 + 0x10);
    lib::L2CAgent::math_atan((L2CAgent *)&local_90,pLVar8,pLVar4);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack384 + 0x10));
    lib::L2CValue::_L2CValue(aLStack400);
    lib::L2CValue::_L2CValue((L2CValue *)auStack384);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    lib::L2CAgent::math_deg((L2CAgent *)auStack352,pLVar8);
    lib::L2CValue::operator_((L2CValue *)&local_90);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)(auStack352 + 0x10),0x1fbdb2615);
    pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack224,0x1fbdb2615);
    lib::L2CValue::operator_(pLVar8,pLVar9);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)(auStack352 + 0x10),0x18cdc1683);
    pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack224,0x18cdc1683);
    lib::L2CValue::operator_(pLVar8,pLVar9);
    fVar11 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack432,fVar11);
    lib::L2CValue::operator_(aLStack416,aLStack432);
    pLVar8 = aLStack400;
    lib::L2CAgent::math_atan((L2CAgent *)&local_90,pLVar8,pLVar4);
    lib::L2CValue::_L2CValue(aLStack400);
    lib::L2CValue::_L2CValue(aLStack432);
    lib::L2CValue::_L2CValue(aLStack416);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    lib::L2CAgent::math_deg((L2CAgent *)auStack384,pLVar8);
    lib::L2CValue::operator_((L2CValue *)&local_90);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    lib::L2CValue::operator_((L2CValue *)(auStack384 + 0x10),aLStack400);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,0xb94eed765);
    lib::L2CValue::L2CValue(aLStack448,0x13fcdd6b6b);
    uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_90);
    uVar7 = lib::L2CValue::as_integer(aLStack448);
    fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl
                              (this->moduleAccessor,uVar6,uVar7);
    lib::L2CValue::L2CValue(aLStack432,fVar11);
    lib::L2CValue::_L2CValue(aLStack448);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,0xb94eed765);
    lib::L2CValue::L2CValue(aLStack464,0x13607ccfd4);
    uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_90);
    uVar7 = lib::L2CValue::as_integer(aLStack464);
    fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl
                              (this->moduleAccessor,uVar6,uVar7);
    lib::L2CValue::L2CValue(aLStack448,fVar11);
    lib::L2CValue::_L2CValue(aLStack464);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    lib::L2CValue::L2CValue(aLStack464,false);
    uVar6 = lib::L2CValue::operator_(aLStack448,aLStack416);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::operator_(aLStack448);
      uVar6 = lib::L2CValue::operator_(aLStack416,(L2CValue *)&local_90);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      if ((uVar6 & 1) != 0) goto LAB_7100078cc8;
      lib::L2CValue::L2CValue((L2CValue *)&local_90,true);
      lib::L2CValue::operator_(aLStack464,(L2CValue *)&local_90);
LAB_7100078e60:
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    }
    else {
LAB_7100078cc8:
      lib::L2CValue::L2CValue((L2CValue *)&local_90,0.0);
      uVar6 = lib::L2CValue::operator_((L2CValue *)&local_90,aLStack416);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_90,0.0);
        uVar6 = lib::L2CValue::operator_(aLStack416,(L2CValue *)&local_90);
        lib::L2CValue::_L2CValue((L2CValue *)&local_90);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::operator_(aLStack176,aLStack448);
          lib::L2CValue::operator_(aLStack176,(L2CValue *)&local_90);
          lib::L2CValue::_L2CValue((L2CValue *)&local_90);
          lib::L2CValue::operator_(aLStack432);
          uVar6 = lib::L2CValue::operator__(aLStack176,(L2CValue *)&local_90);
          lib::L2CValue::_L2CValue((L2CValue *)&local_90);
          if ((uVar6 & 1) != 0) {
            lib::L2CValue::operator_(aLStack432);
            lib::L2CValue::operator_(aLStack176,(L2CValue *)&local_90);
            lib::L2CValue::_L2CValue((L2CValue *)&local_90);
            lib::L2CValue::L2CValue((L2CValue *)&local_90,true);
            lib::L2CValue::operator_(aLStack464,(L2CValue *)&local_90);
            goto LAB_7100078e60;
          }
        }
      }
      else {
        lib::L2CValue::operator_(aLStack176,aLStack448);
        lib::L2CValue::operator_(aLStack176,(L2CValue *)&local_90);
        lib::L2CValue::_L2CValue((L2CValue *)&local_90);
        uVar6 = lib::L2CValue::operator__(aLStack432,aLStack176);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::operator_(aLStack176,aLStack432);
          lib::L2CValue::L2CValue((L2CValue *)&local_90,true);
          lib::L2CValue::operator_(aLStack464,(L2CValue *)&local_90);
          goto LAB_7100078e60;
        }
      }
    }
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack464);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_90,_WEAPON_TANTAN_PUNCH1_STATUS_WORK_FLAG_TARGET_EXIST);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_90);
      app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_90,0.0);
    lib::L2CValue::operator_(aLStack176,(L2CValue *)&local_90);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_90,_WEAPON_TANTAN_PUNCH1_STATUS_WORK_ID_FLOAT_DRAGON_DEGREE);
    fVar11 = (float)lib::L2CValue::as_number(aLStack480);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_90);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar11,iVar3);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    lib::L2CValue::_L2CValue(aLStack480);
    lib::L2CValue::_L2CValue(aLStack464);
    lib::L2CValue::_L2CValue(aLStack448);
    lib::L2CValue::_L2CValue(aLStack432);
    lib::L2CValue::_L2CValue(aLStack416);
    lib::L2CValue::_L2CValue(aLStack400);
    lib::L2CValue::_L2CValue((L2CValue *)auStack384);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack384 + 0x10));
    lib::L2CValue::_L2CValue((L2CValue *)auStack352);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack352 + 0x10));
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
  }
  FUN_7100077180(this);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_7100078f84:
  lib::L2CValue::_L2CValue(aLStack160);
  return;
}

