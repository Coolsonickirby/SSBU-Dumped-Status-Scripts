
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000217c0(void *param_1)

{
  L2CValue LVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  GroundCorrectKind GVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  L2CValue *pLVar10;
  L2CValue *pLVar11;
  L2CValue *pLVar12;
  void *pvVar13;
  KineticEnergyNormal *pKVar14;
  L2CAgent *this;
  L2CValue *this_00;
  L2CValue *this_01;
  L2CValue *pLVar15;
  float *pfVar16;
  Hash40 HVar17;
  BattleObjectModuleAccessor **ppBVar18;
  float fVar19;
  undefined8 uVar20;
  long lVar21;
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
  undefined local_1d0 [32];
  L2CValue aLStack432 [16];
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
  L2CValue aLStack160 [16];
  undefined8 local_90;
  lua_State *plStack136;
  
  lib::L2CValue::L2CValue((L2CValue *)local_1d0,0xfea97fe73);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,0x128f9a3104);
  uVar8 = lib::L2CValue::as_integer((L2CValue *)local_1d0);
  uVar9 = lib::L2CValue::as_integer((L2CValue *)&local_90);
  ppBVar18 = (BattleObjectModuleAccessor **)((long)param_1 + 0x40);
  fVar19 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar18,uVar8,uVar9);
  lib::L2CValue::L2CValue(aLStack176,fVar19);
  lib::L2CValue::~L2CValue((L2CValue *)&local_90);
  lib::L2CValue::~L2CValue((L2CValue *)local_1d0);
  lib::L2CValue::L2CValue((L2CValue *)local_1d0,0xfea97fe73);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,0xe16af1eb2);
  uVar8 = lib::L2CValue::as_integer((L2CValue *)local_1d0);
  uVar9 = lib::L2CValue::as_integer((L2CValue *)&local_90);
  fVar19 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar18,uVar8,uVar9);
  lib::L2CValue::L2CValue(aLStack192,fVar19);
  lib::L2CValue::~L2CValue((L2CValue *)&local_90);
  lib::L2CValue::~L2CValue((L2CValue *)local_1d0);
  lib::L2CValue::L2CValue((L2CValue *)local_1d0,0xfea97fe73);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,0x11b6d6f0f3);
  uVar8 = lib::L2CValue::as_integer((L2CValue *)local_1d0);
  uVar9 = lib::L2CValue::as_integer((L2CValue *)&local_90);
  iVar4 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar18,uVar8,uVar9);
  lib::L2CValue::L2CValue(aLStack208,iVar4);
  lib::L2CValue::~L2CValue((L2CValue *)&local_90);
  lib::L2CValue::~L2CValue((L2CValue *)local_1d0);
  iVar4 = app::lua_bind::StatusModule__situation_kind_impl(*ppBVar18);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,iVar4);
  lib::L2CValue::L2CValue((L2CValue *)local_1d0,_SITUATION_KIND_GROUND);
  bVar2 = lib::L2CValue::operator==((L2CValue *)&local_90,(L2CValue *)local_1d0);
  lib::L2CValue::~L2CValue((L2CValue *)local_1d0);
  lib::L2CValue::L2CValue(aLStack224,(bool)(bVar2 & 1));
  lib::L2CValue::~L2CValue((L2CValue *)&local_90);
  lib::L2CValue::L2CValue(aLStack256,0.0);
  lib::L2CValue::L2CValue(aLStack272,0.0);
  LVar1 = SUB81(&stack0xfffffffffffffff0,0);
  lua2cpp::L2CFighterBase::Vector2__create(param_1,(L2CValue)((char)LVar1 + '\x10'),LVar1);
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::~L2CValue(aLStack256);
  pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack240,0x18cdc1683);
  pLVar11 = (L2CValue *)lib::L2CValue::operator[](aLStack240,0x1fbdb2615);
  uVar20 = app::lua_bind::KineticModule__get_sum_speed_impl(*ppBVar18,-1);
  lib::L2CValue::L2CValue((L2CValue *)local_1d0,(float)uVar20);
  pLVar12 = (L2CValue *)(local_1d0 + 0x10);
  lib::L2CValue::L2CValue(pLVar12,(float)((ulong)uVar20 >> 0x20));
  lib::L2CValue::operator=(pLVar10,(L2CValue *)local_1d0);
  lib::L2CValue::operator=(pLVar11,pLVar12);
  lib::L2CValue::~L2CValue(pLVar12);
  lib::L2CValue::~L2CValue((L2CValue *)local_1d0);
  lib::L2CValue::L2CValue(aLStack288,false);
  pLVar12 = (L2CValue *)lib::L2CValue::operator[](aLStack240,0x18cdc1683);
  lib::L2CValue::L2CValue((L2CValue *)local_1d0,0.0);
  uVar8 = lib::L2CValue::operator<((L2CValue *)local_1d0,pLVar12);
  lib::L2CValue::~L2CValue((L2CValue *)local_1d0);
  if ((uVar8 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_90,_GROUND_TOUCH_FLAG_LEFT);
    uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_90);
    bVar2 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar18,uVar5);
    lib::L2CValue::L2CValue((L2CValue *)local_1d0,(bool)(bVar2 & 1));
    lib::L2CValue::operator=(aLStack288,(L2CValue *)local_1d0);
    lib::L2CValue::~L2CValue((L2CValue *)local_1d0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_90);
    bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack288);
    if ((bVar3 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack320,_GROUND_TOUCH_FLAG_LEFT);
      FUN_7100020bc0(param_1,aLStack320);
      pLVar12 = aLStack320;
      goto LAB_7100021b68;
    }
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_90,GROUND_TOUCH_FLAG_RIGHT);
    uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_90);
    bVar2 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar18,uVar5);
    lib::L2CValue::L2CValue((L2CValue *)local_1d0,(bool)(bVar2 & 1));
    lib::L2CValue::operator=(aLStack288,(L2CValue *)local_1d0);
    lib::L2CValue::~L2CValue((L2CValue *)local_1d0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_90);
    bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack288);
    if ((bVar3 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack304,GROUND_TOUCH_FLAG_RIGHT);
      FUN_7100020bc0(param_1,aLStack304);
      pLVar12 = aLStack304;
LAB_7100021b68:
      lib::L2CValue::~L2CValue(pLVar12);
    }
  }
  bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack288);
  if ((bVar3 & 1U) == 0) {
    lib::L2CValue::operator!(aLStack224);
    bVar3 = lib::L2CValue::operator.cast.to.bool((L2CValue *)local_1d0);
    lib::L2CValue::~L2CValue((L2CValue *)local_1d0);
    if ((bVar3 & 1U) == 0) goto LAB_7100022210;
    lib::L2CValue::L2CValue(aLStack352,SITUATION_KIND_AIR);
    lua2cpp::L2CFighterBase::set_situation(param_1,(L2CValue)0xa0);
    lib::L2CValue::~L2CValue(aLStack352);
    lib::L2CValue::L2CValue((L2CValue *)local_1d0,GROUND_CORRECT_KIND_AIR);
    GVar6 = lib::L2CValue::as_integer((L2CValue *)local_1d0);
    app::lua_bind::GroundModule__set_correct_impl(*ppBVar18,GVar6);
    lib::L2CValue::~L2CValue((L2CValue *)local_1d0);
    lib::L2CValue::L2CValue((L2CValue *)local_1d0,_FIGHTER_YOSHI_STATUS_KIND_SPECIAL_S_LOOP);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_90,_FIGHTER_YOSHI_STATUS_SPECIAL_S_WORK_INT_NEXT_STATUS);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)local_1d0);
    iVar7 = lib::L2CValue::as_integer((L2CValue *)&local_90);
    app::lua_bind::WorkModule__set_int_impl(*ppBVar18,iVar4,iVar7);
    lib::L2CValue::~L2CValue((L2CValue *)&local_90);
    lib::L2CValue::~L2CValue((L2CValue *)local_1d0);
    lib::L2CValue::L2CValue
              ((L2CValue *)local_1d0,_FIGHTER_YOSHI_STATUS_SPECIAL_S_WORK_FLOAT_RESERVE_DIR);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)local_1d0);
    fVar19 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar18,iVar4);
    lib::L2CValue::L2CValue(aLStack160,fVar19);
    lib::L2CValue::~L2CValue((L2CValue *)local_1d0);
    lib::L2CValue::L2CValue((L2CValue *)local_1d0,0.0);
    uVar8 = lib::L2CValue::operator==(aLStack160,(L2CValue *)local_1d0);
    lib::L2CValue::~L2CValue((L2CValue *)local_1d0);
    if ((uVar8 & 1) == 0) {
      fVar19 = (float)lib::L2CValue::as_number(aLStack160);
      app::lua_bind::PostureModule__set_lr_impl(*ppBVar18,fVar19);
      pLVar12 = (L2CValue *)0x18cdc1683;
      this = (L2CAgent *)lib::L2CValue::operator[](aLStack240,0x18cdc1683);
      lib::L2CAgent::math_abs(this,pLVar12);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_90,_FIGHTER_YOSHI_STATUS_SPECIAL_S_WORK_FLOAT_SPEED);
      fVar19 = (float)lib::L2CValue::as_number((L2CValue *)local_1d0);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_90);
      app::lua_bind::WorkModule__set_float_impl(*ppBVar18,fVar19,iVar4);
      lib::L2CValue::~L2CValue((L2CValue *)&local_90);
      lib::L2CValue::~L2CValue((L2CValue *)local_1d0);
    }
    lib::L2CValue::L2CValue((L2CValue *)local_1d0,0.0);
    lib::L2CValue::operator=(aLStack160,(L2CValue *)local_1d0);
    lib::L2CValue::~L2CValue((L2CValue *)local_1d0);
    lib::L2CValue::L2CValue(aLStack384,0.0);
    lib::L2CValue::L2CValue(aLStack400,0.0);
    lib::L2CValue::L2CValue(aLStack416,0.0);
    lua2cpp::L2CFighterBase::Vector3__create(param_1,(L2CValue)0x80,(L2CValue)0x70,(L2CValue)0x60);
    lib::L2CValue::~L2CValue(aLStack416);
    lib::L2CValue::~L2CValue(aLStack400);
    lib::L2CValue::~L2CValue(aLStack384);
    pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack368,0x18cdc1683);
    pLVar11 = (L2CValue *)lib::L2CValue::operator[](aLStack368,0x1fbdb2615);
    pLVar15 = (L2CValue *)lib::L2CValue::operator[](aLStack368,0x162d277af);
    lib::L2CValue::L2CValue(aLStack480,0x31d39a761);
    pLVar12 = (L2CValue *)lib::L2CValue::operator[](aLStack368,0x18cdc1683);
    this_00 = (L2CValue *)lib::L2CValue::operator[](aLStack368,0x1fbdb2615);
    this_01 = (L2CValue *)lib::L2CValue::operator[](aLStack368,0x162d277af);
    HVar17 = lib::L2CValue::as_hash(aLStack480);
    uVar8 = lib::L2CValue::as_number(pLVar12);
    lVar21 = lib::L2CValue::as_number(this_00);
    uVar5 = lib::L2CValue::as_number(this_01);
    local_90 = (void **)(uVar8 & 0xffffffff | lVar21 << 0x20);
    plStack136 = (lua_State *)(ulong)uVar5;
    app::lua_bind::ModelModule__joint_rotate_impl(*ppBVar18,HVar17,(Vector3f *)&local_90);
    lib::L2CValue::L2CValue((L2CValue *)local_1d0,(float)local_90);
    pLVar12 = (L2CValue *)(local_1d0 + 0x10);
    lib::L2CValue::L2CValue(pLVar12,local_90._4_4_);
    lib::L2CValue::L2CValue(aLStack432,plStack136._0_4_);
    lib::L2CValue::operator=(pLVar10,(L2CValue *)local_1d0);
    lib::L2CValue::operator=(pLVar11,pLVar12);
    pLVar10 = aLStack432;
    lib::L2CValue::operator=(pLVar15,aLStack432);
    lib::L2CValue::~L2CValue(aLStack432);
    lib::L2CValue::~L2CValue(pLVar12);
    lib::L2CValue::~L2CValue((L2CValue *)local_1d0);
    lib::L2CValue::~L2CValue(aLStack480);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,0.0);
    lib::L2CAgent::math_deg((L2CAgent *)&local_90,pLVar10);
    pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack368,0x1fbdb2615);
    pLVar12 = (L2CValue *)local_1d0;
    lib::L2CValue::operator=(pLVar10,pLVar12);
    lib::L2CValue::~L2CValue((L2CValue *)local_1d0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_90);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,0.0);
    lib::L2CAgent::math_deg((L2CAgent *)&local_90,pLVar12);
    pLVar12 = (L2CValue *)lib::L2CValue::operator[](aLStack368,0x162d277af);
    lib::L2CValue::operator=(pLVar12,(L2CValue *)local_1d0);
    lib::L2CValue::~L2CValue((L2CValue *)local_1d0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_90);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,0x31d39a761);
    pLVar12 = (L2CValue *)lib::L2CValue::operator[](aLStack368,0x18cdc1683);
    pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack368,0x1fbdb2615);
    pLVar11 = (L2CValue *)lib::L2CValue::operator[](aLStack368,0x162d277af);
    HVar17 = lib::L2CValue::as_hash((L2CValue *)&local_90);
    uVar8 = lib::L2CValue::as_number(pLVar12);
    lVar21 = lib::L2CValue::as_number(pLVar10);
    uVar5 = lib::L2CValue::as_number(pLVar11);
    local_1d0._0_8_ = (void **)(uVar8 & 0xffffffff | lVar21 << 0x20);
    local_1d0._8_8_ = (lua_State *)(ulong)uVar5;
    app::lua_bind::ModelModule__set_joint_rotate_impl(*ppBVar18,HVar17,(Vector3f *)local_1d0,0,0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_90);
    lib::L2CValue::~L2CValue(aLStack368);
    lVar21 = -0x90;
  }
  else {
    pLVar12 = (L2CValue *)lib::L2CValue::operator[](aLStack240,0x18cdc1683);
    lib::L2CValue::operator-(aLStack176);
    lib::L2CValue::operator*(pLVar12,(L2CValue *)&local_90);
    pLVar12 = (L2CValue *)lib::L2CValue::operator[](aLStack240,0x18cdc1683);
    lib::L2CValue::operator=(pLVar12,(L2CValue *)local_1d0);
    lib::L2CValue::~L2CValue((L2CValue *)local_1d0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_90);
    pLVar12 = (L2CValue *)lib::L2CValue::operator[](aLStack240,0x1fbdb2615);
    lib::L2CValue::operator=(pLVar12,aLStack192);
    lib::L2CValue::L2CValue((L2CValue *)local_1d0,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)local_1d0);
    pvVar13 = (void *)app::lua_bind::KineticModule__get_energy_impl(*ppBVar18,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,pvVar13);
    lib::L2CValue::~L2CValue((L2CValue *)local_1d0);
    pLVar12 = (L2CValue *)lib::L2CValue::operator[](aLStack240,0x18cdc1683);
    lib::L2CValue::L2CValue(aLStack160,0.0);
    uVar8 = lib::L2CValue::as_number(pLVar12);
    uVar5 = lib::L2CValue::as_number(aLStack160);
    local_1d0._0_8_ = (void **)(uVar8 & 0xffffffff | (ulong)uVar5 << 0x20);
    local_1d0._8_8_ = (lua_State *)0x0;
    pKVar14 = (KineticEnergyNormal *)lib::L2CValue::as_pointer((L2CValue *)&local_90);
    app::lua_bind::KineticEnergyNormal__set_speed_impl(pKVar14,(Vector2f *)local_1d0);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::L2CValue(aLStack336,SITUATION_KIND_AIR);
    lua2cpp::L2CFighterBase::set_situation(param_1,(L2CValue)0xb0);
    lib::L2CValue::~L2CValue(aLStack336);
    lib::L2CValue::L2CValue((L2CValue *)local_1d0,GROUND_CORRECT_KIND_AIR);
    GVar6 = lib::L2CValue::as_integer((L2CValue *)local_1d0);
    app::lua_bind::GroundModule__set_correct_impl(*ppBVar18,GVar6);
    lib::L2CValue::~L2CValue((L2CValue *)local_1d0);
    lib::L2CValue::L2CValue((L2CValue *)local_1d0,_FIGHTER_YOSHI_STATUS_KIND_SPECIAL_S_END);
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_YOSHI_STATUS_SPECIAL_S_WORK_INT_NEXT_STATUS);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)local_1d0);
    iVar7 = lib::L2CValue::as_integer(aLStack160);
    app::lua_bind::WorkModule__set_int_impl(*ppBVar18,iVar4,iVar7);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue((L2CValue *)local_1d0);
    lib::L2CValue::L2CValue((L2CValue *)local_1d0,false);
    lib::L2CValue::operator=(aLStack224,(L2CValue *)local_1d0);
    lib::L2CValue::~L2CValue((L2CValue *)local_1d0);
    lVar21 = -0x80;
  }
  lib::L2CValue::~L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar21));
LAB_7100022210:
  bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack224);
  if ((bVar3 & 1U) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)local_1d0,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
    GVar6 = lib::L2CValue::as_integer((L2CValue *)local_1d0);
    app::lua_bind::GroundModule__set_correct_impl(*ppBVar18,GVar6);
    lib::L2CValue::~L2CValue((L2CValue *)local_1d0);
    lib::L2CValue::L2CValue
              ((L2CValue *)local_1d0,_FIGHTER_YOSHI_STATUS_SPECIAL_S_WORK_INT_EFFECT_FRAME);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)local_1d0);
    iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar18,iVar4);
    lib::L2CValue::L2CValue(aLStack368,iVar4);
    lib::L2CValue::~L2CValue((L2CValue *)local_1d0);
    lib::L2CValue::operator%(aLStack368,aLStack208);
    lib::L2CValue::L2CValue((L2CValue *)local_1d0,0);
    uVar8 = lib::L2CValue::operator==((L2CValue *)&local_90,(L2CValue *)local_1d0);
    lib::L2CValue::~L2CValue((L2CValue *)local_1d0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_90);
    if ((uVar8 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack496,0.0);
      lib::L2CValue::L2CValue(aLStack512,0.0);
      pLVar12 = aLStack512;
      lua2cpp::L2CFighterBase::Vector2__create(param_1,(L2CValue)0x10,(L2CValue)0x0);
      lib::L2CValue::~L2CValue(aLStack512);
      lib::L2CValue::~L2CValue(aLStack496);
      pLVar11 = (L2CValue *)lib::L2CValue::operator[](aLStack480,0x18cdc1683);
      pLVar15 = (L2CValue *)lib::L2CValue::operator[](aLStack480,0x1fbdb2615);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,GROUND_TOUCH_FLAG_DOWN);
      uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_90);
      uVar20 = app::lua_bind::GroundModule__get_touch_normal_impl(*ppBVar18,uVar5);
      lib::L2CValue::L2CValue((L2CValue *)local_1d0,(float)uVar20);
      pLVar10 = (L2CValue *)(local_1d0 + 0x10);
      lib::L2CValue::L2CValue(pLVar10,(float)((ulong)uVar20 >> 0x20));
      lib::L2CValue::operator=(pLVar11,(L2CValue *)local_1d0);
      lib::L2CValue::operator=(pLVar15,pLVar10);
      lib::L2CValue::~L2CValue(pLVar10);
      lib::L2CValue::~L2CValue((L2CValue *)local_1d0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_90);
      pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack240,0x18cdc1683);
      lib::L2CValue::L2CValue((L2CValue *)local_1d0,0.0);
      uVar8 = lib::L2CValue::operator<(pLVar10,(L2CValue *)local_1d0);
      lib::L2CValue::~L2CValue((L2CValue *)local_1d0);
      if ((uVar8 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)local_1d0,0.5);
        lib::L2CValue::operator*((L2CValue *)&LUA_SCRIPT_LINE_STATUS_SYSTEM,(L2CValue *)local_1d0);
      }
      else {
        lib::L2CValue::operator-((L2CValue *)&LUA_SCRIPT_LINE_STATUS_SYSTEM);
        lib::L2CValue::L2CValue((L2CValue *)&local_90,0.5);
        lib::L2CValue::operator*((L2CValue *)local_1d0,(L2CValue *)&local_90);
        lib::L2CValue::~L2CValue((L2CValue *)&local_90);
      }
      lib::L2CValue::~L2CValue((L2CValue *)local_1d0);
      pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack480,0x18cdc1683);
      lib::L2CValue::operator-(pLVar10);
      pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack480,0x1fbdb2615);
      lib::L2CAgent::math_atan((L2CAgent *)local_1d0,pLVar10,pLVar12);
      lib::L2CValue::~L2CValue((L2CValue *)local_1d0);
      pfVar16 = (float *)app::lua_bind::PostureModule__pos_impl(*ppBVar18);
      lib::L2CValue::L2CValue(aLStack608,*pfVar16);
      lib::L2CValue::L2CValue(aLStack592,pfVar16[1]);
      lib::L2CValue::L2CValue(aLStack576,pfVar16[2]);
      lib::L2CValue::L2CValue((L2CValue *)local_1d0,aLStack608);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,aLStack592);
      lib::L2CValue::L2CValue(aLStack160,aLStack576);
      lua2cpp::L2CFighterBase::Vector3__create
                (param_1,(L2CValue)0x30,(L2CValue)((char)LVar1 + -0x80),
                 (L2CValue)((char)LVar1 + 'p'));
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue((L2CValue *)&local_90);
      lib::L2CValue::~L2CValue((L2CValue *)local_1d0);
      lib::L2CValue::~L2CValue(aLStack576);
      lib::L2CValue::~L2CValue(aLStack592);
      lib::L2CValue::~L2CValue(aLStack608);
      lib::L2CValue::L2CValue(aLStack160,0xeb968e28a);
      pLVar12 = (L2CValue *)lib::L2CValue::operator[](aLStack560,0x18cdc1683);
      pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack560,0x1fbdb2615);
      pLVar11 = (L2CValue *)lib::L2CValue::operator[](aLStack560,0x162d277af);
      lib::L2CValue::L2CValue(aLStack640,0.0);
      HVar17 = lib::L2CValue::as_hash(aLStack160);
      uVar8 = lib::L2CValue::as_number(pLVar12);
      lVar21 = lib::L2CValue::as_number(pLVar10);
      uVar5 = lib::L2CValue::as_number(pLVar11);
      local_1d0._0_8_ = (void **)(uVar8 & 0xffffffff | lVar21 << 0x20);
      local_1d0._8_8_ = (lua_State *)(ulong)uVar5;
      uVar8 = lib::L2CValue::as_number(aLStack640);
      lVar21 = lib::L2CValue::as_number(aLStack528);
      uVar5 = lib::L2CValue::as_number(aLStack544);
      local_90 = (void **)(uVar8 & 0xffffffff | lVar21 << 0x20);
      plStack136 = (lua_State *)(ulong)uVar5;
      uVar5 = app::lua_bind::EffectModule__req_impl
                        (*ppBVar18,HVar17,(Vector3f *)local_1d0,(Vector3f *)&local_90,1.0,0,-1,false
                         ,0);
      lib::L2CValue::L2CValue(aLStack624,uVar5);
      lib::L2CValue::~L2CValue(aLStack624);
      lib::L2CValue::~L2CValue(aLStack640);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack560);
      lib::L2CValue::~L2CValue(aLStack544);
      lib::L2CValue::~L2CValue(aLStack528);
      lib::L2CValue::~L2CValue(aLStack480);
    }
    lib::L2CValue::L2CValue((L2CValue *)local_1d0,1);
    lib::L2CValue::operator+(aLStack368,(L2CValue *)local_1d0);
    lib::L2CValue::~L2CValue((L2CValue *)local_1d0);
    lib::L2CValue::operator=(aLStack368,(L2CValue *)&local_90);
    lib::L2CValue::~L2CValue((L2CValue *)&local_90);
    lib::L2CValue::L2CValue
              ((L2CValue *)local_1d0,_FIGHTER_YOSHI_STATUS_SPECIAL_S_WORK_INT_EFFECT_FRAME);
    iVar4 = lib::L2CValue::as_integer(aLStack368);
    iVar7 = lib::L2CValue::as_integer((L2CValue *)local_1d0);
    app::lua_bind::WorkModule__set_int_impl(*ppBVar18,iVar4,iVar7);
    lib::L2CValue::~L2CValue((L2CValue *)local_1d0);
    lib::L2CValue::~L2CValue(aLStack368);
  }
  lib::L2CValue::~L2CValue(aLStack288);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  return;
}

