
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponDemonBlasterhead::status::FinalShoot_main_loop
          (L2CWeaponDemonBlasterhead *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  L2CValue *pLVar6;
  L2CValue *pLVar7;
  L2CValue *pLVar8;
  L2CValue *pLVar9;
  L2CValue *pLVar10;
  Hash40 HVar11;
  L2CAgent *this_00;
  float fVar12;
  uint uVar13;
  undefined8 uVar14;
  long lVar15;
  float fVar16;
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
  L2CValue aLStack464 [16];
  L2CValue aLStack448 [16];
  ulong local_1b0;
  ulong uStack424;
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
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  undefined8 local_a0;
  undefined8 uStack152;
  ulong local_90;
  undefined8 uStack136;
  undefined8 local_80;
  lua_State *plStack120;
  
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_90,_WEAPON_DEMON_BLASTERHEAD_INSTANCE_WORK_ID_FLAG_EFFECT);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_90);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue((L2CValue *)&local_80,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_1b0,true);
  uVar3 = lib::L2CValue::operator__((L2CValue *)&local_80,(L2CValue *)&local_1b0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_1b0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_1b0,_WEAPON_DEMON_BLASTERHEAD_INSTANCE_WORK_ID_INT_EFFECT_COUNT);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_1b0);
    iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack176,iVar2);
    lib::L2CValue::_L2CValue((L2CValue *)&local_1b0);
    lib::L2CValue::L2CValue((L2CValue *)&local_1b0,0x116d55618a);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,0xf2b094955);
    uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_1b0);
    uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_80);
    iVar2 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar3,uVar4);
    lib::L2CValue::L2CValue(aLStack192,iVar2);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::_L2CValue((L2CValue *)&local_1b0);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,0x116d55618a);
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,0xd4ea2a547);
    uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_90);
    uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
    fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl
                              (this->moduleAccessor,uVar3,uVar4);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,fVar12);
    lib::L2CValue::L2CValue((L2CValue *)&local_1b0,10.0);
    lib::L2CValue::operator_((L2CValue *)&local_80,(L2CValue *)&local_1b0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_1b0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,0x116d55618a);
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,0x1326d54e98);
    uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_90);
    uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
    fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl
                              (this->moduleAccessor,uVar3,uVar4);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,fVar12);
    lib::L2CValue::L2CValue((L2CValue *)&local_1b0,10.0);
    lib::L2CValue::operator_((L2CValue *)&local_80,(L2CValue *)&local_1b0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_1b0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    lib::L2CValue::operator_(aLStack224,aLStack208);
    lib::L2CValue::operator_((L2CValue *)&local_80,aLStack192);
    uVar3 = lib::L2CValue::operator_(aLStack176,(L2CValue *)&local_1b0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_1b0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::operator_(aLStack176,aLStack192);
      lib::L2CValue::L2CValue((L2CValue *)&local_1b0,0);
      uVar3 = lib::L2CValue::operator__((L2CValue *)&local_80,(L2CValue *)&local_1b0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_1b0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      if ((uVar3 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack256,0.0);
        lib::L2CValue::L2CValue(aLStack272,0.0);
        fVar16 = 0.0;
        lib::L2CValue::L2CValue(aLStack288,0.0);
        lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0x0,(L2CValue)0xf0,(L2CValue)0xe0);
        lib::L2CValue::_L2CValue(aLStack288);
        lib::L2CValue::_L2CValue(aLStack272);
        lib::L2CValue::_L2CValue(aLStack256);
        fVar12 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack304,fVar12);
        lib::L2CValue::L2CValue((L2CValue *)&local_1b0,_WEAPON_LINK_NO_CONSTRAINT);
        iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_1b0);
        uVar14 = app::lua_bind::LinkModule__get_parent_rot_impl(this->moduleAccessor,iVar2);
        lib::L2CValue::L2CValue(aLStack368,(float)uVar14);
        lib::L2CValue::L2CValue(aLStack352,(float)((ulong)uVar14 >> 0x20));
        lib::L2CValue::L2CValue(aLStack336,fVar16);
        FUN_7100002430(aLStack320,this,aLStack368);
        lib::L2CValue::_L2CValue(aLStack336);
        lib::L2CValue::_L2CValue(aLStack352);
        lib::L2CValue::_L2CValue(aLStack368);
        lib::L2CValue::_L2CValue((L2CValue *)&local_1b0);
        fVar12 = (float)app::lua_bind::PostureModule__scale_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack384,fVar12);
        pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x18cdc1683);
        pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x1fbdb2615);
        pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x162d277af);
        lib::L2CValue::L2CValue((L2CValue *)&local_90,0xb84988981);
        pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x18cdc1683);
        pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x1fbdb2615);
        pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x162d277af);
        HVar11 = lib::L2CValue::as_hash((L2CValue *)&local_90);
        uVar3 = lib::L2CValue::as_number(pLVar8);
        lVar15 = lib::L2CValue::as_number(pLVar9);
        uVar13 = lib::L2CValue::as_number(pLVar10);
        local_80 = (void **)(uVar3 & 0xffffffff | lVar15 << 0x20);
        plStack120 = (lua_State *)(ulong)uVar13;
        app::lua_bind::ModelModule__joint_global_position_impl
                  (this->moduleAccessor,HVar11,(Vector3f *)&local_80,true);
        lib::L2CValue::L2CValue((L2CValue *)&local_1b0,(float)local_80);
        lib::L2CValue::L2CValue(aLStack416,local_80._4_4_);
        lib::L2CValue::L2CValue(aLStack400,plStack120._0_4_);
        lib::L2CValue::operator_(pLVar5,(L2CValue *)&local_1b0);
        lib::L2CValue::operator_(pLVar6,aLStack416);
        lib::L2CValue::operator_(pLVar7,aLStack400);
        lib::L2CValue::_L2CValue(aLStack400);
        lib::L2CValue::_L2CValue(aLStack416);
        lib::L2CValue::_L2CValue((L2CValue *)&local_1b0);
        lib::L2CValue::_L2CValue((L2CValue *)&local_90);
        pLVar5 = (L2CValue *)0x162d277af;
        this_00 = (L2CAgent *)lib::L2CValue::operator__(aLStack320,0x162d277af);
        lib::L2CAgent::math_rad(this_00,pLVar5);
        lib::L2CValue::operator_((L2CValue *)&local_80,aLStack304);
        pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack320,0x162d277af);
        lib::L2CValue::operator_(pLVar5,(L2CValue *)&local_1b0);
        lib::L2CValue::_L2CValue((L2CValue *)&local_1b0);
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        lib::L2CValue::operator_(aLStack176,aLStack192);
        lib::L2CValue::operator_((L2CValue *)&local_1b0,aLStack208);
        lib::L2CValue::L2CValue(aLStack480,0.0);
        lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x30,(L2CValue)0x20);
        lib::L2CValue::_L2CValue(aLStack480);
        lib::L2CValue::_L2CValue(aLStack464);
        lib::L2CValue::_L2CValue((L2CValue *)&local_1b0);
        pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack448,0x18cdc1683);
        pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack448,0x1fbdb2615);
        pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack448,0x18cdc1683);
        pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack448,0x1fbdb2615);
        pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack320,0x162d277af);
        uVar3 = lib::L2CValue::as_number(pLVar7);
        uVar13 = lib::L2CValue::as_number(pLVar8);
        local_80 = (void **)(uVar3 & 0xffffffff | (ulong)uVar13 << 0x20);
        plStack120 = (lua_State *)0x0;
        fVar12 = (float)lib::L2CValue::as_number(pLVar9);
        uVar14 = app::math2::rotate((Vector2f *)&local_80,fVar12);
        lib::L2CValue::L2CValue((L2CValue *)&local_1b0,(float)uVar14);
        lib::L2CValue::L2CValue(aLStack416,(float)((ulong)uVar14 >> 0x20));
        lib::L2CValue::operator_(pLVar5,(L2CValue *)&local_1b0);
        lib::L2CValue::operator_(pLVar6,aLStack416);
        lib::L2CValue::_L2CValue(aLStack416);
        lib::L2CValue::_L2CValue((L2CValue *)&local_1b0);
        pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack448,0x18cdc1683);
        lib::L2CValue::operator_(pLVar5,aLStack304);
        pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack448,0x18cdc1683);
        lib::L2CValue::operator_(pLVar5,(L2CValue *)&local_1b0);
        lib::L2CValue::_L2CValue((L2CValue *)&local_1b0);
        pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x18cdc1683);
        pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack448,0x18cdc1683);
        lib::L2CValue::operator_(pLVar6,aLStack384);
        lib::L2CValue::operator_(pLVar5,(L2CValue *)&local_80);
        pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x18cdc1683);
        lib::L2CValue::operator_(pLVar5,(L2CValue *)&local_1b0);
        lib::L2CValue::_L2CValue((L2CValue *)&local_1b0);
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x1fbdb2615);
        pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack448,0x1fbdb2615);
        lib::L2CValue::operator_(pLVar6,aLStack384);
        lib::L2CValue::operator_(pLVar5,(L2CValue *)&local_80);
        pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x1fbdb2615);
        lib::L2CValue::operator_(pLVar5,(L2CValue *)&local_1b0);
        lib::L2CValue::_L2CValue((L2CValue *)&local_1b0);
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        lib::L2CValue::L2CValue(aLStack512,0.0);
        lib::L2CValue::L2CValue((L2CValue *)&local_a0,0x116d55618a);
        lib::L2CValue::L2CValue(aLStack544,0xefc66750f);
        uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
        uVar4 = lib::L2CValue::as_integer(aLStack544);
        fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                  (this->moduleAccessor,uVar3,uVar4);
        lib::L2CValue::L2CValue((L2CValue *)&local_90,fVar12);
        lib::L2CValue::operator_((L2CValue *)&local_90);
        lib::L2CValue::L2CValue((L2CValue *)&local_1b0,10.0);
        lib::L2CValue::operator_((L2CValue *)&local_80,(L2CValue *)&local_1b0);
        lib::L2CValue::_L2CValue((L2CValue *)&local_1b0);
        lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x0,(L2CValue)0xf0);
        lib::L2CValue::_L2CValue(aLStack528);
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        lib::L2CValue::_L2CValue((L2CValue *)&local_90);
        lib::L2CValue::_L2CValue(aLStack544);
        lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
        lib::L2CValue::_L2CValue(aLStack512);
        pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack496,0x18cdc1683);
        pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack496,0x1fbdb2615);
        pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack496,0x18cdc1683);
        pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack496,0x1fbdb2615);
        pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack320,0x162d277af);
        uVar3 = lib::L2CValue::as_number(pLVar7);
        uVar13 = lib::L2CValue::as_number(pLVar8);
        local_80 = (void **)(uVar3 & 0xffffffff | (ulong)uVar13 << 0x20);
        plStack120 = (lua_State *)0x0;
        fVar12 = (float)lib::L2CValue::as_number(pLVar9);
        uVar14 = app::math2::rotate((Vector2f *)&local_80,fVar12);
        lib::L2CValue::L2CValue((L2CValue *)&local_1b0,(float)uVar14);
        lib::L2CValue::L2CValue(aLStack416,(float)((ulong)uVar14 >> 0x20));
        lib::L2CValue::operator_(pLVar5,(L2CValue *)&local_1b0);
        lib::L2CValue::operator_(pLVar6,aLStack416);
        lib::L2CValue::_L2CValue(aLStack416);
        lib::L2CValue::_L2CValue((L2CValue *)&local_1b0);
        pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack496,0x18cdc1683);
        lib::L2CValue::operator_(pLVar5,aLStack304);
        pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack496,0x18cdc1683);
        lib::L2CValue::operator_(pLVar5,(L2CValue *)&local_1b0);
        lib::L2CValue::_L2CValue((L2CValue *)&local_1b0);
        lib::L2CValue::L2CValue(aLStack544,false);
        lib::L2CValue::L2CValue(aLStack576,0.0);
        lib::L2CValue::L2CValue(aLStack592,0.0);
        lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xc0,(L2CValue)0xb0);
        lib::L2CValue::_L2CValue(aLStack592);
        lib::L2CValue::_L2CValue(aLStack576);
        pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack560,0x18cdc1683);
        pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack560,0x1fbdb2615);
        pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x18cdc1683);
        pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x1fbdb2615);
        pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack496,0x18cdc1683);
        lib::L2CValue::operator_(pLVar9,aLStack384);
        pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack496,0x1fbdb2615);
        lib::L2CValue::operator_(pLVar9,aLStack384);
        pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack560,0x18cdc1683);
        pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack560,0x1fbdb2615);
        lib::L2CValue::L2CValue(aLStack640,true);
        uVar3 = lib::L2CValue::as_number(pLVar7);
        uVar13 = lib::L2CValue::as_number(pLVar8);
        local_80 = (void **)(uVar3 & 0xffffffff | (ulong)uVar13 << 0x20);
        plStack120 = (lua_State *)0x0;
        uVar3 = lib::L2CValue::as_number(aLStack608);
        uVar13 = lib::L2CValue::as_number(aLStack624);
        local_90 = uVar3 & 0xffffffff | (ulong)uVar13 << 0x20;
        uStack136 = 0;
        uVar3 = lib::L2CValue::as_number(pLVar9);
        uVar13 = lib::L2CValue::as_number(pLVar10);
        local_a0 = uVar3 & 0xffffffff | (ulong)uVar13 << 0x20;
        uStack152 = 0;
        bVar1 = lib::L2CValue::as_bool(aLStack640);
        bVar1 = app::lua_bind::GroundModule__ray_check_hit_pos_impl
                          (this->moduleAccessor,(Vector2f *)&local_80,(Vector2f *)&local_90,
                           (Vector2f *)&local_a0,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue((L2CValue *)&local_1b0,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue(aLStack416,(float)local_a0);
        lib::L2CValue::L2CValue(aLStack400,local_a0._4_4_);
        lib::L2CValue::operator_(aLStack544,(L2CValue *)&local_1b0);
        lib::L2CValue::operator_(pLVar5,aLStack416);
        lib::L2CValue::operator_(pLVar6,aLStack400);
        lib::L2CValue::_L2CValue(aLStack400);
        lib::L2CValue::_L2CValue(aLStack416);
        lib::L2CValue::_L2CValue((L2CValue *)&local_1b0);
        lib::L2CValue::_L2CValue(aLStack640);
        lib::L2CValue::_L2CValue(aLStack624);
        lib::L2CValue::_L2CValue(aLStack608);
        lib::L2CValue::L2CValue((L2CValue *)&local_1b0,true);
        uVar3 = lib::L2CValue::operator__(aLStack544,(L2CValue *)&local_1b0);
        lib::L2CValue::_L2CValue((L2CValue *)&local_1b0);
        if ((uVar3 & 1) != 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_90,0.0);
          lib::L2CValue::L2CValue((L2CValue *)&local_1b0,1.0);
          uVar3 = lib::L2CValue::operator__(aLStack304,(L2CValue *)&local_1b0);
          lib::L2CValue::_L2CValue((L2CValue *)&local_1b0);
          if ((uVar3 & 1) != 0) {
            pLVar5 = (L2CValue *)0xb4;
            lib::L2CValue::L2CValue((L2CValue *)&local_80,0xb4);
            lib::L2CAgent::math_rad((L2CAgent *)&local_80,pLVar5);
            lib::L2CValue::operator_((L2CValue *)&local_90,(L2CValue *)&local_1b0);
            lib::L2CValue::_L2CValue((L2CValue *)&local_1b0);
            lib::L2CValue::_L2CValue((L2CValue *)&local_80);
          }
          lib::L2CValue::L2CValue((L2CValue *)&local_a0,0x1d5d12d159);
          pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack560,0x18cdc1683);
          pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack560,0x1fbdb2615);
          lib::L2CValue::L2CValue(aLStack608,0);
          lib::L2CValue::L2CValue(aLStack624,0);
          lib::L2CValue::L2CValue(aLStack640,0);
          lib::L2CValue::L2CValue(aLStack672,1.0);
          HVar11 = lib::L2CValue::as_hash((L2CValue *)&local_a0);
          uVar3 = lib::L2CValue::as_number(pLVar5);
          lVar15 = lib::L2CValue::as_number(pLVar6);
          uVar13 = lib::L2CValue::as_number(aLStack608);
          local_1b0 = uVar3 & 0xffffffff | lVar15 << 0x20;
          uStack424 = (ulong)uVar13;
          uVar3 = lib::L2CValue::as_number(aLStack624);
          lVar15 = lib::L2CValue::as_number((L2CValue *)&local_90);
          uVar13 = lib::L2CValue::as_number(aLStack640);
          local_80 = (void **)(uVar3 & 0xffffffff | lVar15 << 0x20);
          plStack120 = (lua_State *)(ulong)uVar13;
          fVar12 = (float)lib::L2CValue::as_number(aLStack672);
          uVar13 = app::lua_bind::EffectModule__req_impl
                             (this->moduleAccessor,HVar11,(Vector3f *)&local_1b0,
                              (Vector3f *)&local_80,fVar12,0,-1,false,0);
          lib::L2CValue::L2CValue(aLStack656,uVar13);
          lib::L2CValue::_L2CValue(aLStack656);
          lib::L2CValue::_L2CValue(aLStack672);
          lib::L2CValue::_L2CValue(aLStack640);
          lib::L2CValue::_L2CValue(aLStack624);
          lib::L2CValue::_L2CValue(aLStack608);
          lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
          lib::L2CValue::_L2CValue((L2CValue *)&local_90);
        }
        lib::L2CValue::_L2CValue(aLStack560);
        lib::L2CValue::_L2CValue(aLStack544);
        lib::L2CValue::_L2CValue(aLStack496);
        lib::L2CValue::_L2CValue(aLStack448);
        lib::L2CValue::_L2CValue(aLStack384);
        lib::L2CValue::_L2CValue(aLStack320);
        lib::L2CValue::_L2CValue(aLStack304);
        lib::L2CValue::_L2CValue(aLStack240);
      }
    }
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

