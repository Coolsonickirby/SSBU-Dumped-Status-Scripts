
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponSnakeC4::status::EstablishWall_fix_cam(L2CWeaponSnakeC4 *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CValue *pLVar4;
  L2CValue *pLVar5;
  L2CValue *pLVar6;
  L2CValue *pLVar7;
  L2CValue *this_00;
  L2CValue *this_01;
  Hash40 HVar8;
  float *pfVar9;
  ulong *puVar10;
  Weapon *pWVar11;
  uint uVar12;
  float fVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  L2CValue aLStack736 [16];
  L2CValue aLStack720 [16];
  L2CValue aLStack704 [16];
  L2CValue aLStack688 [16];
  L2CValue aLStack672 [16];
  L2CValue aLStack656 [16];
  L2CValue aLStack640 [16];
  L2CValue aLStack624 [16];
  L2CValue aLStack608 [16];
  L2CValue aLStack592 [16];
  L2CValue aLStack576 [16];
  L2CValue aLStack560 [16];
  L2CValue aLStack544 [16];
  L2CValue aLStack528 [16];
  L2CValue aLStack512 [16];
  L2CValue aLStack496 [16];
  L2CValue aLStack480 [16];
  ulong auStack464 [2];
  L2CValue aLStack448 [16];
  ulong auStack432 [2];
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  ulong local_100;
  ulong uStack248;
  L2CValue aLStack240 [16];
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
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x162d277af);
  lib::L2CValue::L2CValue(aLStack272,0x31d39a761);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
  this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
  this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x162d277af);
  HVar8 = lib::L2CValue::as_hash(aLStack272);
  uVar14 = lib::L2CValue::as_number(pLVar7);
  lVar15 = lib::L2CValue::as_number(this_00);
  uVar12 = lib::L2CValue::as_number(this_01);
  local_90 = uVar14 & 0xffffffff | lVar15 << 0x20;
  uStack136 = (ulong)uVar12;
  app::lua_bind::ModelModule__joint_global_position_impl
            (this->moduleAccessor,HVar8,(Vector3f *)&local_90,true);
  lib::L2CValue::L2CValue((L2CValue *)&local_100,(float)local_90);
  lib::L2CValue::L2CValue(aLStack240,local_90._4_4_);
  lib::L2CValue::L2CValue(aLStack224,(float)uStack136);
  lib::L2CValue::operator_(pLVar4,(L2CValue *)&local_100);
  lib::L2CValue::operator_(pLVar5,aLStack240);
  lib::L2CValue::operator_(pLVar6,aLStack224);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue((L2CValue *)&local_100);
  lib::L2CValue::_L2CValue(aLStack272);
  fVar13 = (float)app::lua_bind::GroundModule__get_z_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)&local_100,fVar13);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x162d277af);
  lib::L2CValue::operator_(pLVar4,(L2CValue *)&local_100);
  lib::L2CValue::_L2CValue((L2CValue *)&local_100);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_90,
             _WEAPON_SNAKE_C4_STATUS_ESTABLISH_WALL_WORK_FLAG_START_CHECK_STICK);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_90);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_100,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_100);
  lib::L2CValue::_L2CValue((L2CValue *)&local_100);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  if ((bVar2 & 1U) != 0) {
    pfVar9 = (float *)app::lua_bind::PostureModule__pos_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack320,*pfVar9);
    lib::L2CValue::L2CValue(aLStack304,pfVar9[1]);
    lib::L2CValue::L2CValue(aLStack288,pfVar9[2]);
    FUN_7100018740(aLStack272,this,aLStack320);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::L2CValue(aLStack336);
    lib::L2CValue::L2CValue(aLStack352);
    lib::L2CValue::L2CValue(aLStack368);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,_WEAPON_SNAKE_C4_LINK_NO_STICK);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_90);
    pfVar9 = (float *)app::lua_bind::LinkModule__get_parent_pos_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_100,*pfVar9);
    lib::L2CValue::L2CValue(aLStack240,pfVar9[1]);
    lib::L2CValue::L2CValue(aLStack224,pfVar9[2]);
    lib::L2CValue::operator_(aLStack336,(L2CValue *)&local_100);
    lib::L2CValue::operator_(aLStack352,aLStack240);
    lib::L2CValue::operator_(aLStack368,aLStack224);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue((L2CValue *)&local_100);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    lib::L2CValue::L2CValue(aLStack384);
    lib::L2CValue::L2CValue(aLStack400);
    lib::L2CValue::L2CValue(aLStack416);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,_WEAPON_SNAKE_C4_LINK_NO_STICK);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_90);
    pfVar9 = (float *)app::lua_bind::LinkModule__get_parent_prev_pos_impl
                                (this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_100,*pfVar9);
    lib::L2CValue::L2CValue(aLStack240,pfVar9[1]);
    lib::L2CValue::L2CValue(aLStack224,pfVar9[2]);
    lib::L2CValue::operator_(aLStack384,(L2CValue *)&local_100);
    lib::L2CValue::operator_(aLStack400,aLStack240);
    lib::L2CValue::operator_(aLStack416,aLStack224);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue((L2CValue *)&local_100);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack272,0x18cdc1683);
    lib::L2CValue::operator_(aLStack336,aLStack384);
    lib::L2CValue::operator_(pLVar4,(L2CValue *)&local_90);
    pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack272,0x18cdc1683);
    lib::L2CValue::operator_(pLVar4,(L2CValue *)&local_100);
    lib::L2CValue::_L2CValue((L2CValue *)&local_100);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack272,0x1fbdb2615);
    lib::L2CValue::operator_(aLStack352,aLStack400);
    lib::L2CValue::operator_(pLVar4,(L2CValue *)&local_90);
    pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack272,0x1fbdb2615);
    lib::L2CValue::operator_(pLVar4,(L2CValue *)&local_100);
    lib::L2CValue::_L2CValue((L2CValue *)&local_100);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack272,0x18cdc1683);
    pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack272,0x1fbdb2615);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
    pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack272,0x18cdc1683);
    lib::L2CValue::operator_(pLVar6,pLVar7);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
    pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack272,0x1fbdb2615);
    lib::L2CValue::operator_(pLVar6,pLVar7);
    lib::L2CValue::L2CValue(aLStack480,true);
    uVar14 = lib::L2CValue::as_number(pLVar4);
    uVar12 = lib::L2CValue::as_number(pLVar5);
    local_100 = uVar14 & 0xffffffff | (ulong)uVar12 << 0x20;
    uStack248 = 0;
    uVar14 = lib::L2CValue::as_number(aLStack448);
    uVar12 = lib::L2CValue::as_number((L2CValue *)auStack464);
    local_90 = uVar14 & 0xffffffff | (ulong)uVar12 << 0x20;
    uStack136 = 0;
    bVar1 = lib::L2CValue::as_bool(aLStack480);
    bVar1 = app::lua_bind::GroundModule__ray_check_impl
                      (this->moduleAccessor,(Vector2f *)&local_100,(Vector2f *)&local_90,
                       (bool)(bVar1 & 1));
    lib::L2CValue::L2CValue((L2CValue *)auStack432,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)auStack432);
    lib::L2CValue::_L2CValue((L2CValue *)auStack432);
    lib::L2CValue::_L2CValue(aLStack480);
    lib::L2CValue::_L2CValue((L2CValue *)auStack464);
    lib::L2CValue::_L2CValue(aLStack448);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_100,
                 _WEAPON_SNAKE_C4_STATUS_ESTABLISH_GROUND_WORK_FLOAT_RAY_LENGTH);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_100);
      fVar13 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)auStack432,fVar13);
      lib::L2CValue::_L2CValue((L2CValue *)&local_100);
      lib::L2CValue::L2CValue(aLStack544,(L2CValue *)auStack432);
      lib::L2CValue::L2CValue(aLStack560,0.0);
      lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xe0,(L2CValue)0xd0);
      lib::L2CValue::_L2CValue(aLStack560);
      lib::L2CValue::_L2CValue(aLStack544);
      fVar13 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,fVar13);
      lib::L2CValue::L2CValue((L2CValue *)&local_100,0.0);
      uVar14 = lib::L2CValue::operator_((L2CValue *)&local_90,(L2CValue *)&local_100);
      lib::L2CValue::_L2CValue((L2CValue *)&local_100);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      if ((uVar14 & 1) != 0) {
        pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack448,0x18cdc1683);
        lib::L2CValue::operator_(pLVar4);
        pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack448,0x18cdc1683);
        lib::L2CValue::operator_(pLVar4,(L2CValue *)&local_100);
        lib::L2CValue::_L2CValue((L2CValue *)&local_100);
      }
      pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
      pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
      pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack448,0x18cdc1683);
      pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack448,0x1fbdb2615);
      lib::L2CValue::L2CValue(aLStack480,true);
      uVar14 = lib::L2CValue::as_number(pLVar4);
      uVar12 = lib::L2CValue::as_number(pLVar5);
      local_100 = uVar14 & 0xffffffff | (ulong)uVar12 << 0x20;
      uStack248 = 0;
      uVar14 = lib::L2CValue::as_number(pLVar6);
      uVar12 = lib::L2CValue::as_number(pLVar7);
      local_90 = uVar14 & 0xffffffff | (ulong)uVar12 << 0x20;
      uStack136 = 0;
      bVar1 = lib::L2CValue::as_bool(aLStack480);
      bVar1 = app::lua_bind::GroundModule__ray_check_impl
                        (this->moduleAccessor,(Vector2f *)&local_100,(Vector2f *)&local_90,
                         (bool)(bVar1 & 1));
      lib::L2CValue::L2CValue((L2CValue *)auStack464,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)auStack464);
      lib::L2CValue::_L2CValue((L2CValue *)auStack464);
      lib::L2CValue::_L2CValue(aLStack480);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack480,_WEAPON_SNAKE_C4_LINK_NO_STICK);
        iVar3 = lib::L2CValue::as_integer(aLStack480);
        uVar16 = app::lua_bind::LinkModule__get_parent_shape_center_pos_impl
                           (this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack640,(float)uVar16);
        lib::L2CValue::L2CValue(aLStack624,(float)((ulong)uVar16 >> 0x20));
        lib::L2CValue::L2CValue((L2CValue *)&local_100,aLStack640);
        lib::L2CValue::L2CValue((L2CValue *)&local_90,aLStack624);
        lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x0,(L2CValue)0x70);
        lib::L2CValue::_L2CValue((L2CValue *)&local_90);
        lib::L2CValue::_L2CValue((L2CValue *)&local_100);
        lib::L2CValue::_L2CValue(aLStack624);
        lib::L2CValue::_L2CValue(aLStack640);
        lib::L2CValue::_L2CValue(aLStack480);
        pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack464,0x18cdc1683);
        pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
        pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack464,0x18cdc1683);
        lib::L2CValue::operator_(pLVar6,pLVar7);
        lib::L2CValue::L2CValue(aLStack672,0.0);
        lib::L2CValue::L2CValue(aLStack688,true);
        uVar14 = lib::L2CValue::as_number(pLVar4);
        uVar12 = lib::L2CValue::as_number(pLVar5);
        local_100 = uVar14 & 0xffffffff | (ulong)uVar12 << 0x20;
        uStack248 = 0;
        uVar14 = lib::L2CValue::as_number(aLStack656);
        uVar12 = lib::L2CValue::as_number(aLStack672);
        local_90 = uVar14 & 0xffffffff | (ulong)uVar12 << 0x20;
        uStack136 = 0;
        bVar1 = lib::L2CValue::as_bool(aLStack688);
        bVar1 = app::lua_bind::GroundModule__ray_check_impl
                          (this->moduleAccessor,(Vector2f *)&local_100,(Vector2f *)&local_90,
                           (bool)(bVar1 & 1));
        lib::L2CValue::L2CValue(aLStack480,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack480);
        lib::L2CValue::_L2CValue(aLStack480);
        lib::L2CValue::_L2CValue(aLStack688);
        lib::L2CValue::_L2CValue(aLStack672);
        lib::L2CValue::_L2CValue(aLStack656);
        if ((bVar2 & 1U) != 0) {
          pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
          lib::L2CValue::L2CValue(aLStack704,pLVar4);
          pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
          lib::L2CValue::L2CValue(aLStack720,pLVar4);
          pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x162d277af);
          lib::L2CValue::L2CValue(aLStack736,pLVar4);
          FUN_7100025690(&local_100,this,aLStack704,aLStack720,aLStack736);
          bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_100);
          lib::L2CValue::_L2CValue((L2CValue *)&local_100);
          lib::L2CValue::_L2CValue(aLStack736);
          lib::L2CValue::_L2CValue(aLStack720);
          lib::L2CValue::_L2CValue(aLStack704);
          if ((bVar2 & 1U) != 0) {
            lib::L2CValue::L2CValue((L2CValue *)return_value,0);
            lib::L2CValue::_L2CValue((L2CValue *)auStack464);
            goto LAB_7100024fc4;
          }
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_100,_WEAPON_SNAKE_C4_STATUS_ESTABLISH_WALL_WORK_FLAG_FALL);
          iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_100);
          app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
          lib::L2CValue::_L2CValue((L2CValue *)&local_100);
        }
        puVar10 = auStack464;
      }
      else {
        pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
        pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack448,0x18cdc1683);
        lib::L2CValue::operator_(pLVar4,pLVar5);
        pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
        pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack448,0x1fbdb2615);
        lib::L2CValue::operator_(pLVar4,pLVar5);
        pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x162d277af);
        lib::L2CValue::L2CValue(aLStack608,pLVar4);
        FUN_7100025690(&local_100,this,aLStack576,aLStack592,aLStack608);
        bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_100);
        lib::L2CValue::_L2CValue((L2CValue *)&local_100);
        lib::L2CValue::_L2CValue(aLStack608);
        lib::L2CValue::_L2CValue(aLStack592);
        lib::L2CValue::_L2CValue(aLStack576);
        if ((bVar2 & 1U) != 0) {
          lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_7100024fc4:
          lib::L2CValue::_L2CValue(aLStack448);
          lib::L2CValue::_L2CValue((L2CValue *)auStack432);
          bVar2 = false;
          goto LAB_7100025050;
        }
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_100,_WEAPON_SNAKE_C4_STATUS_ESTABLISH_WALL_WORK_FLAG_FALL);
        iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_100);
        app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
        puVar10 = &local_100;
      }
      lib::L2CValue::_L2CValue((L2CValue *)puVar10);
      lib::L2CValue::_L2CValue(aLStack448);
      puVar10 = auStack432;
LAB_7100025048:
      lib::L2CValue::_L2CValue((L2CValue *)puVar10);
      bVar2 = true;
    }
    else {
      pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
      lib::L2CValue::L2CValue(aLStack496,pLVar4);
      pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
      lib::L2CValue::L2CValue(aLStack512,pLVar4);
      pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x162d277af);
      lib::L2CValue::L2CValue(aLStack528,pLVar4);
      FUN_7100025690(&local_100,this,aLStack496,aLStack512,aLStack528);
      bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_100);
      lib::L2CValue::_L2CValue((L2CValue *)&local_100);
      lib::L2CValue::_L2CValue(aLStack528);
      lib::L2CValue::_L2CValue(aLStack512);
      lib::L2CValue::_L2CValue(aLStack496);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_100,_WEAPON_SNAKE_C4_STATUS_ESTABLISH_WALL_WORK_FLAG_FALL);
        iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_100);
        app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
        puVar10 = &local_100;
        goto LAB_7100025048;
      }
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      bVar2 = false;
    }
LAB_7100025050:
    lib::L2CValue::_L2CValue(aLStack416);
    lib::L2CValue::_L2CValue(aLStack400);
    lib::L2CValue::_L2CValue(aLStack384);
    lib::L2CValue::_L2CValue(aLStack368);
    lib::L2CValue::_L2CValue(aLStack352);
    lib::L2CValue::_L2CValue(aLStack336);
    lib::L2CValue::_L2CValue(aLStack272);
    if (!bVar2) goto LAB_710002518c;
  }
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_90,_WEAPON_SNAKE_C4_STATUS_ESTABLISH_WALL_WORK_FLAG_FALL);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_90);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_100,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_100);
  lib::L2CValue::_L2CValue((L2CValue *)&local_100);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  if ((bVar2 & 1U) != 0) {
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,4);
    pWVar11 = (Weapon *)lib::L2CValue::as_pointer(pLVar4);
    app::WeaponSpecializer_SnakeC4::drop_fall(pWVar11);
  }
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x162d277af);
  uVar14 = lib::L2CValue::as_number(pLVar4);
  lVar15 = lib::L2CValue::as_number(pLVar5);
  uVar12 = lib::L2CValue::as_number(pLVar6);
  local_100 = uVar14 & 0xffffffff | lVar15 << 0x20;
  uStack248 = (ulong)uVar12;
  app::lua_bind::PostureModule__set_pos_impl(this->moduleAccessor,(Vector3f *)&local_100);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_710002518c:
  lib::L2CValue::_L2CValue(aLStack160);
  return;
}

