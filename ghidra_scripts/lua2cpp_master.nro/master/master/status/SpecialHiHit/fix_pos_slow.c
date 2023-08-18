
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterMaster::status::SpecialHiHit_fix_pos_slow(void *this)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  L2CValue *pLVar7;
  void *pvVar8;
  ulong *this_00;
  L2CValue *pLVar9;
  L2CValue *pLVar10;
  L2CValue *pLVar11;
  L2CValue *pLVar12;
  Hash40 HVar13;
  BattleObjectModuleAccessor *pBVar14;
  L2CValue *this_01;
  L2CValue *this_02;
  L2CValue *return_value;
  float fVar15;
  undefined8 uVar16;
  long lVar17;
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
  L2CValue aLStack464 [16];
  L2CValue aLStack448 [16];
  L2CValue aLStack432 [16];
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  ulong auStack352 [2];
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
  ulong uStack120;
  
  lib::L2CValue::L2CValue(aLStack176,false);
  lib::L2CValue::L2CValue(aLStack480,_FIGHTER_MASTER_STATUS_SPECIAL_HI_FLOAT_WALL_SPEED_X);
  iVar2 = lib::L2CValue::as_integer(aLStack480);
  fVar15 = (float)app::lua_bind::WorkModule__get_float_impl
                            (*(BattleObjectModuleAccessor **)((long)this + 0x40),iVar2);
  lib::L2CValue::L2CValue(aLStack208,fVar15);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_80,_FIGHTER_MASTER_STATUS_SPECIAL_HI_FLOAT_WALL_SPEED_Y);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_80);
  fVar15 = (float)app::lua_bind::WorkModule__get_float_impl
                            (*(BattleObjectModuleAccessor **)((long)this + 0x40),iVar2);
  lib::L2CValue::L2CValue(aLStack224,fVar15);
  lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x30,(L2CValue)0x20);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack480);
  lib::L2CValue::L2CValue(aLStack480,0x6e5ec7051);
  lib::L2CValue::L2CValue((L2CValue *)&local_80,0x1d07990eb9);
  uVar4 = lib::L2CValue::as_integer(aLStack480);
  uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_80);
  fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl
                            (*(BattleObjectModuleAccessor **)((long)this + 0x40),uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack240,fVar15);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  lib::L2CValue::_L2CValue(aLStack480);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,_GROUND_TOUCH_FLAG_UP);
  uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_90);
  bVar1 = app::lua_bind::GroundModule__is_touch_impl
                    (*(BattleObjectModuleAccessor **)((long)this + 0x40),uVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_80,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack480,true);
  uVar4 = lib::L2CValue::operator__((L2CValue *)&local_80,aLStack480);
  lib::L2CValue::_L2CValue(aLStack480);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,_GROUND_TOUCH_FLAG_UP);
    uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
    uVar16 = app::lua_bind::GroundModule__get_line_movement_speed_impl
                       (*(BattleObjectModuleAccessor **)((long)this + 0x40),uVar3);
    lib::L2CValue::L2CValue(aLStack272,(float)uVar16);
    lib::L2CValue::L2CValue(aLStack256,(float)((ulong)uVar16 >> 0x20));
    lib::L2CValue::L2CValue(aLStack480,aLStack272);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,aLStack256);
    lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x20,(L2CValue)0x80);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::_L2CValue(aLStack480);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&local_90,0x1fbdb2615);
    pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x1fbdb2615);
    lib::L2CValue::operator_(pLVar6,pLVar7);
    lib::L2CValue::operator_(aLStack240);
    uVar4 = lib::L2CValue::operator__(aLStack480,(L2CValue *)&local_80);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::_L2CValue(aLStack480);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack480,true);
      lib::L2CValue::operator_(aLStack176,aLStack480);
      lib::L2CValue::_L2CValue(aLStack480);
    }
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  }
  lib::L2CValue::L2CValue(aLStack480,false);
  uVar4 = lib::L2CValue::operator__(aLStack176,aLStack480);
  lib::L2CValue::_L2CValue(aLStack480);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_90,_GROUND_TOUCH_FLAG_LEFT);
    uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_90);
    bVar1 = app::lua_bind::GroundModule__is_touch_impl
                      (*(BattleObjectModuleAccessor **)((long)this + 0x40),uVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack480,true);
    uVar4 = lib::L2CValue::operator__((L2CValue *)&local_80,aLStack480);
    lib::L2CValue::_L2CValue(aLStack480);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_a0,_GROUND_TOUCH_FLAG_LEFT);
      uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
      uVar16 = app::lua_bind::GroundModule__get_line_movement_speed_impl
                         (*(BattleObjectModuleAccessor **)((long)this + 0x40),uVar3);
      lib::L2CValue::L2CValue(aLStack304,(float)uVar16);
      lib::L2CValue::L2CValue(aLStack288,(float)((ulong)uVar16 >> 0x20));
      lib::L2CValue::L2CValue(aLStack480,aLStack304);
      lib::L2CValue::L2CValue((L2CValue *)&local_80,aLStack288);
      lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x20,(L2CValue)0x80);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      lib::L2CValue::_L2CValue(aLStack480);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&local_90,0x18cdc1683);
      pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x18cdc1683);
      lib::L2CValue::operator_(pLVar6,pLVar7);
      uVar4 = lib::L2CValue::operator__(aLStack240,aLStack480);
      lib::L2CValue::_L2CValue(aLStack480);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack480,true);
        lib::L2CValue::operator_(aLStack176,aLStack480);
        lib::L2CValue::_L2CValue(aLStack480);
      }
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    }
  }
  lib::L2CValue::L2CValue(aLStack480,false);
  uVar4 = lib::L2CValue::operator__(aLStack176,aLStack480);
  lib::L2CValue::_L2CValue(aLStack480);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_90,GROUND_TOUCH_FLAG_RIGHT);
    uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_90);
    bVar1 = app::lua_bind::GroundModule__is_touch_impl
                      (*(BattleObjectModuleAccessor **)((long)this + 0x40),uVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack480,true);
    uVar4 = lib::L2CValue::operator__((L2CValue *)&local_80,aLStack480);
    lib::L2CValue::_L2CValue(aLStack480);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_a0,GROUND_TOUCH_FLAG_RIGHT);
      uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
      uVar16 = app::lua_bind::GroundModule__get_line_movement_speed_impl
                         (*(BattleObjectModuleAccessor **)((long)this + 0x40),uVar3);
      lib::L2CValue::L2CValue(aLStack336,(float)uVar16);
      lib::L2CValue::L2CValue(aLStack320,(float)((ulong)uVar16 >> 0x20));
      lib::L2CValue::L2CValue(aLStack480,aLStack336);
      lib::L2CValue::L2CValue((L2CValue *)&local_80,aLStack320);
      lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x20,(L2CValue)0x80);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      lib::L2CValue::_L2CValue(aLStack480);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::_L2CValue(aLStack336);
      lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&local_90,0x18cdc1683);
      pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x18cdc1683);
      lib::L2CValue::operator_(pLVar6,pLVar7);
      lib::L2CValue::operator_(aLStack240);
      uVar4 = lib::L2CValue::operator__(aLStack480,(L2CValue *)&local_80);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      lib::L2CValue::_L2CValue(aLStack480);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack480,true);
        lib::L2CValue::operator_(aLStack176,aLStack480);
        lib::L2CValue::_L2CValue(aLStack480);
      }
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_90,_FIGHTER_MASTER_STATUS_SPECIAL_HI_FLAG_HIT_WALL);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_90);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)((long)this + 0x40),iVar2);
  lib::L2CValue::L2CValue((L2CValue *)&local_80,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack480,false);
  uVar4 = lib::L2CValue::operator__((L2CValue *)&local_80,aLStack480);
  lib::L2CValue::_L2CValue(aLStack480);
  if ((uVar4 & 1) == 0) {
LAB_710000c568:
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    this_00 = &local_90;
  }
  else {
    bVar1 = app::lua_bind::StopModule__is_stop_impl
                      (*(BattleObjectModuleAccessor **)((long)this + 0x40));
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack480,false);
    uVar4 = lib::L2CValue::operator__((L2CValue *)&local_a0,aLStack480);
    lib::L2CValue::_L2CValue(aLStack480);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
      goto LAB_710000c568;
    }
    lib::L2CValue::L2CValue(aLStack368,_FIGHTER_MASTER_STATUS_SPECIAL_HI_INT_HIT_STOP_FRAME);
    iVar2 = lib::L2CValue::as_integer(aLStack368);
    iVar2 = app::lua_bind::WorkModule__get_int_impl
                      (*(BattleObjectModuleAccessor **)((long)this + 0x40),iVar2);
    lib::L2CValue::L2CValue((L2CValue *)auStack352,iVar2);
    lib::L2CValue::L2CValue(aLStack480,0);
    uVar4 = lib::L2CValue::operator__((L2CValue *)auStack352,aLStack480);
    lib::L2CValue::_L2CValue(aLStack480);
    lib::L2CValue::_L2CValue((L2CValue *)auStack352);
    lib::L2CValue::_L2CValue(aLStack368);
    lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    if ((uVar4 & 1) == 0) goto LAB_710000c578;
    lib::L2CValue::L2CValue(aLStack480,_FIGHTER_MASTER_STATUS_SPECIAL_HI_INT_TARGET_OBJECT_ID);
    iVar2 = lib::L2CValue::as_integer(aLStack480);
    iVar2 = app::lua_bind::WorkModule__get_int_impl
                      (*(BattleObjectModuleAccessor **)((long)this + 0x40),iVar2);
    lib::L2CValue::L2CValue((L2CValue *)auStack352,iVar2);
    lib::L2CValue::_L2CValue(aLStack480);
    uVar3 = lib::L2CValue::as_integer((L2CValue *)auStack352);
    pvVar8 = (void *)app::sv_battle_object::module_accessor(uVar3);
    if (pvVar8 == (void *)0x0) {
      lib::L2CValue::L2CValue(aLStack368,(L2CValue *)&FIGHTER_STATUS_WORK_KEEP_FLAG_ATTACK_INT);
    }
    else {
      lib::L2CValue::L2CValue(aLStack368,pvVar8);
    }
    lib::L2CValue::L2CValue(aLStack400,0.0);
    lib::L2CValue::L2CValue(aLStack416,0.0);
    lib::L2CValue::L2CValue(aLStack432,0.0);
    lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0x70,(L2CValue)0x60,(L2CValue)0x50);
    lib::L2CValue::_L2CValue(aLStack432);
    lib::L2CValue::_L2CValue(aLStack416);
    lib::L2CValue::_L2CValue(aLStack400);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack384,0x18cdc1683);
    pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack384,0x1fbdb2615);
    pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack384,0x162d277af);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,0x31d39a761);
    pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack384,0x18cdc1683);
    pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack384,0x1fbdb2615);
    pLVar12 = (L2CValue *)lib::L2CValue::operator__(aLStack384,0x162d277af);
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,true);
    HVar13 = lib::L2CValue::as_hash((L2CValue *)&local_90);
    uVar4 = lib::L2CValue::as_number(pLVar10);
    lVar17 = lib::L2CValue::as_number(pLVar11);
    uVar3 = lib::L2CValue::as_number(pLVar12);
    local_80 = uVar4 & 0xffffffff | lVar17 << 0x20;
    uStack120 = (ulong)uVar3;
    bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_a0);
    pBVar14 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack368);
    app::lua_bind::ModelModule__joint_global_position_impl
              (pBVar14,HVar13,(Vector3f *)&local_80,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack480,(float)local_80);
    lib::L2CValue::L2CValue(aLStack464,local_80._4_4_);
    lib::L2CValue::L2CValue(aLStack448,(float)uStack120);
    lib::L2CValue::operator_(pLVar6,aLStack480);
    lib::L2CValue::operator_(pLVar7,aLStack464);
    lib::L2CValue::operator_(pLVar9,aLStack448);
    lib::L2CValue::_L2CValue(aLStack448);
    lib::L2CValue::_L2CValue(aLStack464);
    lib::L2CValue::_L2CValue(aLStack480);
    lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    lib::L2CValue::L2CValue(aLStack512,0.0);
    lib::L2CValue::L2CValue(aLStack528,0.0);
    lib::L2CValue::L2CValue(aLStack544,0.0);
    lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0x0,(L2CValue)0xf0,(L2CValue)0xe0);
    lib::L2CValue::_L2CValue(aLStack544);
    lib::L2CValue::_L2CValue(aLStack528);
    lib::L2CValue::_L2CValue(aLStack512);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack496,0x18cdc1683);
    pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack496,0x1fbdb2615);
    pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack496,0x162d277af);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,0x68af0465b);
    pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack496,0x18cdc1683);
    pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack496,0x1fbdb2615);
    pLVar12 = (L2CValue *)lib::L2CValue::operator__(aLStack496,0x162d277af);
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,true);
    HVar13 = lib::L2CValue::as_hash((L2CValue *)&local_90);
    uVar4 = lib::L2CValue::as_number(pLVar10);
    lVar17 = lib::L2CValue::as_number(pLVar11);
    uVar3 = lib::L2CValue::as_number(pLVar12);
    local_80 = uVar4 & 0xffffffff | lVar17 << 0x20;
    uStack120 = (ulong)uVar3;
    bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_a0);
    app::lua_bind::ModelModule__joint_global_position_impl
              (*(BattleObjectModuleAccessor **)((long)this + 0x40),HVar13,(Vector3f *)&local_80,
               (bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack480,(float)local_80);
    lib::L2CValue::L2CValue(aLStack464,local_80._4_4_);
    lib::L2CValue::L2CValue(aLStack448,(float)uStack120);
    lib::L2CValue::operator_(pLVar6,aLStack480);
    lib::L2CValue::operator_(pLVar7,aLStack464);
    lib::L2CValue::operator_(pLVar9,aLStack448);
    lib::L2CValue::_L2CValue(aLStack448);
    lib::L2CValue::_L2CValue(aLStack464);
    lib::L2CValue::_L2CValue(aLStack480);
    lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack384,0x18cdc1683);
    pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack496,0x18cdc1683);
    lib::L2CValue::operator_(pLVar6,pLVar7);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack384,0x1fbdb2615);
    pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack496,0x1fbdb2615);
    lib::L2CValue::operator_(pLVar6,pLVar7);
    lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xc0,(L2CValue)0xb0);
    lib::L2CValue::_L2CValue(aLStack592);
    lib::L2CValue::_L2CValue(aLStack576);
    lib::L2CValue::L2CValue(aLStack624,0.0);
    lib::L2CValue::L2CValue(aLStack640,0.0);
    lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x90,(L2CValue)0x80);
    lib::L2CValue::_L2CValue(aLStack640);
    lib::L2CValue::_L2CValue(aLStack624);
    lib::L2CValue::L2CValue(aLStack656);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack608,0x18cdc1683);
    pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack608,0x1fbdb2615);
    pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack496,0x18cdc1683);
    pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack496,0x1fbdb2615);
    pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack560,0x18cdc1683);
    pLVar12 = (L2CValue *)lib::L2CValue::operator__(aLStack560,0x1fbdb2615);
    this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack608,0x18cdc1683);
    this_02 = (L2CValue *)lib::L2CValue::operator__(aLStack608,0x1fbdb2615);
    lib::L2CValue::L2CValue(aLStack672,_FLAG_UPPER);
    lib::L2CValue::L2CValue(aLStack688,false);
    uVar4 = lib::L2CValue::as_number(pLVar9);
    uVar3 = lib::L2CValue::as_number(pLVar10);
    local_80 = uVar4 & 0xffffffff | (ulong)uVar3 << 0x20;
    uStack120 = 0;
    uVar4 = lib::L2CValue::as_number(pLVar11);
    uVar3 = lib::L2CValue::as_number(pLVar12);
    local_90 = uVar4 & 0xffffffff | (ulong)uVar3 << 0x20;
    uStack136 = 0;
    uVar4 = lib::L2CValue::as_number(this_01);
    uVar3 = lib::L2CValue::as_number(this_02);
    local_a0 = uVar4 & 0xffffffff | (ulong)uVar3 << 0x20;
    uStack152 = 0;
    uVar3 = lib::L2CValue::as_integer(aLStack672);
    bVar1 = lib::L2CValue::as_bool(aLStack688);
    bVar1 = app::lua_bind::GroundModule__ray_check_hit_pos_target_impl
                      (*(BattleObjectModuleAccessor **)((long)this + 0x40),(Vector2f *)&local_80,
                       (Vector2f *)&local_90,(Vector2f *)&local_a0,uVar3,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack480,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack464,(float)local_a0);
    lib::L2CValue::L2CValue(aLStack448,local_a0._4_4_);
    lib::L2CValue::operator_(aLStack656,aLStack480);
    lib::L2CValue::operator_(pLVar6,aLStack464);
    lib::L2CValue::operator_(pLVar7,aLStack448);
    lib::L2CValue::_L2CValue(aLStack448);
    lib::L2CValue::_L2CValue(aLStack464);
    lib::L2CValue::_L2CValue(aLStack480);
    lib::L2CValue::_L2CValue(aLStack688);
    lib::L2CValue::_L2CValue(aLStack672);
    lib::L2CValue::L2CValue(aLStack480,true);
    uVar4 = lib::L2CValue::operator__(aLStack656,aLStack480);
    lib::L2CValue::_L2CValue(aLStack480);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack480,true);
      lib::L2CValue::operator_(aLStack176,aLStack480);
      lib::L2CValue::_L2CValue(aLStack480);
    }
    lib::L2CValue::_L2CValue(aLStack656);
    lib::L2CValue::_L2CValue(aLStack608);
    lib::L2CValue::_L2CValue(aLStack560);
    lib::L2CValue::_L2CValue(aLStack496);
    lib::L2CValue::_L2CValue(aLStack384);
    lib::L2CValue::_L2CValue(aLStack368);
    this_00 = auStack352;
  }
  lib::L2CValue::_L2CValue((L2CValue *)this_00);
LAB_710000c578:
  lib::L2CValue::L2CValue(aLStack480,_FIGHTER_MASTER_STATUS_SPECIAL_HI_FLAG_TOUCH);
  bVar1 = lib::L2CValue::as_bool(aLStack176);
  iVar2 = lib::L2CValue::as_integer(aLStack480);
  app::lua_bind::WorkModule__set_flag_impl
            (*(BattleObjectModuleAccessor **)((long)this + 0x40),(bool)(bVar1 & 1),iVar2);
  lib::L2CValue::_L2CValue(aLStack480);
  lib::L2CValue::L2CValue(return_value,0);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  return;
}

