
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponSnakeC4::status::EstablishGround_fix_cam(L2CWeaponSnakeC4 *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CValue *pLVar4;
  L2CValue *pLVar5;
  L2CValue *pLVar6;
  L2CValue *pLVar7;
  L2CValue *pLVar8;
  L2CValue *pLVar9;
  Hash40 HVar10;
  float *pfVar11;
  L2CValue *this_00;
  L2CValue *this_01;
  undefined8 *this_02;
  Weapon *pWVar12;
  uint uVar13;
  float fVar14;
  ulong uVar15;
  long lVar16;
  L2CValue aLStack608 [16];
  L2CValue aLStack592 [16];
  L2CValue aLStack576 [16];
  L2CValue aLStack560 [16];
  L2CValue aLStack544 [16];
  undefined8 auStack528 [2];
  L2CValue aLStack512 [16];
  L2CValue aLStack496 [16];
  L2CValue aLStack480 [16];
  L2CValue aLStack464 [16];
  L2CValue aLStack448 [16];
  L2CValue aLStack432 [16];
  L2CValue aLStack416 [16];
  undefined8 local_190;
  ulong uStack392;
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
  undefined8 local_b0;
  undefined8 uStack168;
  ulong local_a0;
  undefined8 uStack152;
  ulong local_90;
  undefined8 uStack136;
  
  bVar1 = app::lua_bind::BattleObjectSlow__is_adjust_impl(FIGHTER_PAD_CMD_CAT1_FLAG_ATTACK_N);
  lib::L2CValue::L2CValue((L2CValue *)&local_190,(bool)(bVar1 & 1));
  lib::L2CValue::operator_((L2CValue *)&local_190);
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack288);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue((L2CValue *)&local_190);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    return;
  }
  lib::L2CValue::L2CValue(aLStack208,0.0);
  lib::L2CValue::L2CValue(aLStack224,0.0);
  lib::L2CValue::L2CValue(aLStack240,0.0);
  lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0x30,(L2CValue)0x20,(L2CValue)0x10);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x18cdc1683);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x1fbdb2615);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x162d277af);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,0x31d39a761);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x18cdc1683);
  pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x1fbdb2615);
  pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x162d277af);
  HVar10 = lib::L2CValue::as_hash((L2CValue *)&local_90);
  uVar15 = lib::L2CValue::as_number(pLVar7);
  lVar16 = lib::L2CValue::as_number(pLVar8);
  uVar13 = lib::L2CValue::as_number(pLVar9);
  local_190 = uVar15 & 0xffffffff | lVar16 << 0x20;
  uStack392 = (ulong)uVar13;
  app::lua_bind::ModelModule__joint_global_position_impl
            (this->moduleAccessor,HVar10,(Vector3f *)&local_190,true);
  lib::L2CValue::L2CValue(aLStack288,(float)local_190);
  lib::L2CValue::L2CValue(aLStack272,local_190._4_4_);
  lib::L2CValue::L2CValue(aLStack256,(float)uStack392);
  lib::L2CValue::operator_(pLVar4,aLStack288);
  lib::L2CValue::operator_(pLVar5,aLStack272);
  lib::L2CValue::operator_(pLVar6,aLStack256);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  fVar14 = (float)app::lua_bind::GroundModule__get_z_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack288,fVar14);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x162d277af);
  lib::L2CValue::operator_(pLVar4,aLStack288);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_190,
             _WEAPON_SNAKE_C4_STATUS_ESTABLISH_GROUND_WORK_FLAG_START_CHECK_STICK);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_190);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack288,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack288);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue((L2CValue *)&local_190);
  if ((bVar2 & 1U) != 0) {
    pfVar11 = (float *)app::lua_bind::PostureModule__pos_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack288,*pfVar11);
    lib::L2CValue::L2CValue(aLStack272,pfVar11[1]);
    lib::L2CValue::L2CValue(aLStack256,pfVar11[2]);
    FUN_7100018740(aLStack304,this,aLStack288);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::L2CValue(aLStack320);
    lib::L2CValue::L2CValue(aLStack336);
    lib::L2CValue::L2CValue(aLStack352);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,_WEAPON_SNAKE_C4_LINK_NO_STICK);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_90);
    pfVar11 = (float *)app::lua_bind::LinkModule__get_parent_pos_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_190,*pfVar11);
    lib::L2CValue::L2CValue(aLStack384,pfVar11[1]);
    lib::L2CValue::L2CValue(aLStack368,pfVar11[2]);
    lib::L2CValue::operator_(aLStack320,(L2CValue *)&local_190);
    lib::L2CValue::operator_(aLStack336,aLStack384);
    lib::L2CValue::operator_(aLStack352,aLStack368);
    lib::L2CValue::_L2CValue(aLStack368);
    lib::L2CValue::_L2CValue(aLStack384);
    lib::L2CValue::_L2CValue((L2CValue *)&local_190);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    lib::L2CValue::L2CValue(aLStack416);
    lib::L2CValue::L2CValue(aLStack432);
    lib::L2CValue::L2CValue(aLStack448);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,_WEAPON_SNAKE_C4_LINK_NO_STICK);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_90);
    pfVar11 = (float *)app::lua_bind::LinkModule__get_parent_prev_pos_impl
                                 (this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_190,*pfVar11);
    lib::L2CValue::L2CValue(aLStack384,pfVar11[1]);
    lib::L2CValue::L2CValue(aLStack368,pfVar11[2]);
    lib::L2CValue::operator_(aLStack416,(L2CValue *)&local_190);
    lib::L2CValue::operator_(aLStack432,aLStack384);
    lib::L2CValue::operator_(aLStack448,aLStack368);
    lib::L2CValue::_L2CValue(aLStack368);
    lib::L2CValue::_L2CValue(aLStack384);
    lib::L2CValue::_L2CValue((L2CValue *)&local_190);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack304,0x18cdc1683);
    lib::L2CValue::operator_(aLStack320,aLStack416);
    lib::L2CValue::operator_(pLVar4,(L2CValue *)&local_90);
    pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack304,0x18cdc1683);
    lib::L2CValue::operator_(pLVar4,(L2CValue *)&local_190);
    lib::L2CValue::_L2CValue((L2CValue *)&local_190);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack304,0x1fbdb2615);
    lib::L2CValue::operator_(aLStack336,aLStack432);
    lib::L2CValue::operator_(pLVar4,(L2CValue *)&local_90);
    pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack304,0x1fbdb2615);
    lib::L2CValue::operator_(pLVar4,(L2CValue *)&local_190);
    lib::L2CValue::_L2CValue((L2CValue *)&local_190);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    lib::L2CValue::L2CValue(aLStack480,0.0);
    lib::L2CValue::L2CValue(aLStack496,0.0);
    lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x20,(L2CValue)0x10);
    lib::L2CValue::_L2CValue(aLStack496);
    lib::L2CValue::_L2CValue(aLStack480);
    lib::L2CValue::L2CValue(aLStack512,false);
    pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack464,0x18cdc1683);
    pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack464,0x1fbdb2615);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack304,0x18cdc1683);
    pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack304,0x1fbdb2615);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x18cdc1683);
    pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack304,0x18cdc1683);
    lib::L2CValue::operator_(pLVar8,pLVar9);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x1fbdb2615);
    pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack304,0x1fbdb2615);
    lib::L2CValue::operator_(pLVar8,pLVar9);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack464,0x18cdc1683);
    pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack464,0x1fbdb2615);
    lib::L2CValue::L2CValue(aLStack560,true);
    uVar15 = lib::L2CValue::as_number(pLVar6);
    uVar13 = lib::L2CValue::as_number(pLVar7);
    local_90 = uVar15 & 0xffffffff | (ulong)uVar13 << 0x20;
    uStack136 = 0;
    uVar15 = lib::L2CValue::as_number((L2CValue *)auStack528);
    uVar13 = lib::L2CValue::as_number(aLStack544);
    local_a0 = uVar15 & 0xffffffff | (ulong)uVar13 << 0x20;
    uStack152 = 0;
    uVar15 = lib::L2CValue::as_number(pLVar8);
    uVar13 = lib::L2CValue::as_number(pLVar9);
    local_b0 = uVar15 & 0xffffffff | (ulong)uVar13 << 0x20;
    uStack168 = 0;
    bVar1 = lib::L2CValue::as_bool(aLStack560);
    bVar1 = app::lua_bind::GroundModule__ray_check_hit_pos_impl
                      (this->moduleAccessor,(Vector2f *)&local_90,(Vector2f *)&local_a0,
                       (Vector2f *)&local_b0,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_190,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack384,(float)local_b0);
    lib::L2CValue::L2CValue(aLStack368,local_b0._4_4_);
    lib::L2CValue::operator_(aLStack512,(L2CValue *)&local_190);
    lib::L2CValue::operator_(pLVar4,aLStack384);
    lib::L2CValue::operator_(pLVar5,aLStack368);
    lib::L2CValue::_L2CValue(aLStack368);
    lib::L2CValue::_L2CValue(aLStack384);
    lib::L2CValue::_L2CValue((L2CValue *)&local_190);
    lib::L2CValue::_L2CValue(aLStack560);
    lib::L2CValue::_L2CValue(aLStack544);
    lib::L2CValue::_L2CValue((L2CValue *)auStack528);
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack512);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_190,
                 _WEAPON_SNAKE_C4_STATUS_ESTABLISH_GROUND_WORK_FLOAT_RAY_LENGTH);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_190);
      fVar14 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)auStack528,fVar14);
      lib::L2CValue::_L2CValue((L2CValue *)&local_190);
      lib::L2CValue::L2CValue(aLStack560,0.0);
      lib::L2CValue::operator_((L2CValue *)auStack528);
      lib::L2CValue::L2CValue(aLStack592,0.0);
      lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0xd0,(L2CValue)0xc0,(L2CValue)0xb0);
      lib::L2CValue::_L2CValue(aLStack592);
      lib::L2CValue::_L2CValue(aLStack576);
      lib::L2CValue::_L2CValue(aLStack560);
      pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack464,0x18cdc1683);
      pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack464,0x1fbdb2615);
      pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x18cdc1683);
      pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x1fbdb2615);
      pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack544,0x18cdc1683);
      pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack544,0x1fbdb2615);
      this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack464,0x18cdc1683);
      this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack464,0x1fbdb2615);
      lib::L2CValue::L2CValue(aLStack608,true);
      uVar15 = lib::L2CValue::as_number(pLVar6);
      uVar13 = lib::L2CValue::as_number(pLVar7);
      local_90 = uVar15 & 0xffffffff | (ulong)uVar13 << 0x20;
      uStack136 = 0;
      uVar15 = lib::L2CValue::as_number(pLVar8);
      uVar13 = lib::L2CValue::as_number(pLVar9);
      local_a0 = uVar15 & 0xffffffff | (ulong)uVar13 << 0x20;
      uStack152 = 0;
      uVar15 = lib::L2CValue::as_number(this_00);
      uVar13 = lib::L2CValue::as_number(this_01);
      local_b0 = uVar15 & 0xffffffff | (ulong)uVar13 << 0x20;
      uStack168 = 0;
      bVar1 = lib::L2CValue::as_bool(aLStack608);
      bVar1 = app::lua_bind::GroundModule__ray_check_hit_pos_impl
                        (this->moduleAccessor,(Vector2f *)&local_90,(Vector2f *)&local_a0,
                         (Vector2f *)&local_b0,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue((L2CValue *)&local_190,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack384,(float)local_b0);
      lib::L2CValue::L2CValue(aLStack368,local_b0._4_4_);
      lib::L2CValue::operator_(aLStack512,(L2CValue *)&local_190);
      lib::L2CValue::operator_(pLVar4,aLStack384);
      lib::L2CValue::operator_(pLVar5,aLStack368);
      lib::L2CValue::_L2CValue(aLStack368);
      lib::L2CValue::_L2CValue(aLStack384);
      lib::L2CValue::_L2CValue((L2CValue *)&local_190);
      lib::L2CValue::_L2CValue(aLStack608);
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack512);
      if ((bVar2 & 1U) != 0) {
        pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack464,0x18cdc1683);
        lib::L2CValue::L2CValue((L2CValue *)&local_90,pLVar4);
        pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack464,0x1fbdb2615);
        lib::L2CValue::L2CValue((L2CValue *)&local_a0,pLVar4);
        pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x162d277af);
        lib::L2CValue::L2CValue((L2CValue *)&local_b0,pLVar4);
        FUN_7100025a80(&local_190,this,&local_90,&local_a0,&local_b0);
        bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_190);
        lib::L2CValue::_L2CValue((L2CValue *)&local_190);
        lib::L2CValue::_L2CValue((L2CValue *)&local_b0);
        lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
        lib::L2CValue::_L2CValue((L2CValue *)&local_90);
        if ((bVar2 & 1U) != 0) {
          lib::L2CValue::L2CValue((L2CValue *)return_value,0);
          lib::L2CValue::_L2CValue(aLStack544);
          lib::L2CValue::_L2CValue((L2CValue *)auStack528);
          bVar2 = false;
          goto LAB_7100023c5c;
        }
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_190,_WEAPON_SNAKE_C4_STATUS_ESTABLISH_GROUND_WORK_FLAG_FALL);
        iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_190);
        app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::_L2CValue((L2CValue *)&local_190);
      }
      lib::L2CValue::_L2CValue(aLStack544);
      this_02 = auStack528;
LAB_7100023c54:
      lib::L2CValue::_L2CValue((L2CValue *)this_02);
      bVar2 = true;
    }
    else {
      pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack464,0x18cdc1683);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,pLVar4);
      pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack464,0x1fbdb2615);
      lib::L2CValue::L2CValue((L2CValue *)&local_a0,pLVar4);
      fVar14 = (float)app::lua_bind::GroundModule__get_z_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue((L2CValue *)&local_b0,fVar14);
      FUN_7100025a80(&local_190,this,&local_90,&local_a0,&local_b0);
      bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_190);
      lib::L2CValue::_L2CValue((L2CValue *)&local_190);
      lib::L2CValue::_L2CValue((L2CValue *)&local_b0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_190,_WEAPON_SNAKE_C4_STATUS_ESTABLISH_GROUND_WORK_FLAG_FALL);
        iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_190);
        app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
        this_02 = &local_190;
        goto LAB_7100023c54;
      }
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      bVar2 = false;
    }
LAB_7100023c5c:
    lib::L2CValue::_L2CValue(aLStack512);
    lib::L2CValue::_L2CValue(aLStack464);
    lib::L2CValue::_L2CValue(aLStack448);
    lib::L2CValue::_L2CValue(aLStack432);
    lib::L2CValue::_L2CValue(aLStack416);
    lib::L2CValue::_L2CValue(aLStack352);
    lib::L2CValue::_L2CValue(aLStack336);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue(aLStack304);
    if (!bVar2) goto LAB_7100023da8;
  }
  lib::L2CValue::L2CValue(aLStack304,_WEAPON_SNAKE_C4_STATUS_ESTABLISH_GROUND_WORK_FLAG_FALL);
  iVar3 = lib::L2CValue::as_integer(aLStack304);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_190,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_190);
  lib::L2CValue::_L2CValue((L2CValue *)&local_190);
  lib::L2CValue::_L2CValue(aLStack304);
  if ((bVar2 & 1U) != 0) {
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,4);
    pWVar12 = (Weapon *)lib::L2CValue::as_pointer(pLVar4);
    app::WeaponSpecializer_SnakeC4::drop_fall(pWVar12);
  }
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x18cdc1683);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x1fbdb2615);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x162d277af);
  uVar15 = lib::L2CValue::as_number(pLVar4);
  lVar16 = lib::L2CValue::as_number(pLVar5);
  uVar13 = lib::L2CValue::as_number(pLVar6);
  local_190 = uVar15 & 0xffffffff | lVar16 << 0x20;
  uStack392 = (ulong)uVar13;
  app::lua_bind::PostureModule__set_pos_impl(this->moduleAccessor,(Vector3f *)&local_190);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_7100023da8:
  lib::L2CValue::_L2CValue(aLStack192);
  return;
}

