
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100006580(void *param_1,L2CValue *param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  float *pfVar4;
  L2CValue *pLVar5;
  L2CValue *pLVar6;
  L2CValue *pLVar7;
  L2CValue *pLVar8;
  L2CValue *this;
  L2CValue *this_00;
  L2CValue *this_01;
  L2CValue *this_02;
  L2CValue *this_03;
  L2CValue *this_04;
  L2CValue *this_05;
  L2CValue *this_06;
  BattleObjectModuleAccessor *pBVar9;
  Hash40MapEntry ***pppHVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  ulong uVar16;
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
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  undefined local_d0 [8];
  lua_State *plStack200;
  undefined8 local_c0;
  lua_State *plStack184;
  Hash40MapEntry **local_b0;
  lua_State *plStack168;
  Hash40MapEntry **local_a0;
  BattleObject *pBStack152;
  
  lib::L2CValue::L2CValue(aLStack240,0.0);
  lib::L2CValue::L2CValue(aLStack256,-1000.0);
  lua2cpp::L2CFighterBase::Vector2__create(param_1,(L2CValue)0x10,(L2CValue)0x0);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue(aLStack240);
  pfVar4 = (float *)app::lua_bind::PostureModule__pos_impl
                              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40));
  lib::L2CValue::L2CValue(aLStack320,*pfVar4);
  lib::L2CValue::L2CValue(aLStack304,pfVar4[1]);
  lib::L2CValue::L2CValue(aLStack288,pfVar4[2]);
  FUN_71000070f0(aLStack272,param_1,aLStack320);
  lib::L2CValue::~L2CValue(aLStack288);
  lib::L2CValue::~L2CValue(aLStack304);
  lib::L2CValue::~L2CValue(aLStack320);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack272,0x1fbdb2615);
  lib::L2CValue::L2CValue(aLStack512,0.1);
  lib::L2CValue::operator+(pLVar5,aLStack512);
  lib::L2CValue::~L2CValue(aLStack512);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack272,0x1fbdb2615);
  lib::L2CValue::operator=(pLVar5,(L2CValue *)&local_a0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
  lib::L2CValue::L2CValue(aLStack352,0.0);
  lib::L2CValue::L2CValue(aLStack368,0.0);
  lua2cpp::L2CFighterBase::Vector2__create(param_1,(L2CValue)0xa0,(L2CValue)0x90);
  lib::L2CValue::~L2CValue(aLStack368);
  lib::L2CValue::~L2CValue(aLStack352);
  lib::L2CValue::L2CValue(aLStack400,0.0);
  lib::L2CValue::L2CValue(aLStack416,0.0);
  lua2cpp::L2CFighterBase::Vector2__create(param_1,(L2CValue)0x70,(L2CValue)0x60);
  lib::L2CValue::~L2CValue(aLStack416);
  lib::L2CValue::~L2CValue(aLStack400);
  lib::L2CValue::L2CValue(aLStack432);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack336,0x18cdc1683);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack336,0x1fbdb2615);
  pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack384,0x18cdc1683);
  pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack384,0x1fbdb2615);
  this = (L2CValue *)lib::L2CValue::operator[](aLStack272,0x18cdc1683);
  this_00 = (L2CValue *)lib::L2CValue::operator[](aLStack272,0x1fbdb2615);
  this_01 = (L2CValue *)lib::L2CValue::operator[](aLStack224,0x18cdc1683);
  this_02 = (L2CValue *)lib::L2CValue::operator[](aLStack224,0x1fbdb2615);
  this_03 = (L2CValue *)lib::L2CValue::operator[](aLStack336,0x18cdc1683);
  this_04 = (L2CValue *)lib::L2CValue::operator[](aLStack336,0x1fbdb2615);
  this_05 = (L2CValue *)lib::L2CValue::operator[](aLStack384,0x18cdc1683);
  this_06 = (L2CValue *)lib::L2CValue::operator[](aLStack384,0x1fbdb2615);
  lib::L2CValue::L2CValue(aLStack528,true);
  uVar16 = lib::L2CValue::as_number(this);
  uVar11 = lib::L2CValue::as_number(this_00);
  local_a0 = (Hash40MapEntry **)(uVar16 & 0xffffffff | (ulong)uVar11 << 0x20);
  pBStack152 = (BattleObject *)0x0;
  uVar16 = lib::L2CValue::as_number(this_01);
  uVar11 = lib::L2CValue::as_number(this_02);
  local_b0 = (Hash40MapEntry **)(uVar16 & 0xffffffff | (ulong)uVar11 << 0x20);
  plStack168 = (lua_State *)0x0;
  uVar16 = lib::L2CValue::as_number(this_03);
  uVar11 = lib::L2CValue::as_number(this_04);
  local_c0 = (Hash40MapEntry **)(uVar16 & 0xffffffff | (ulong)uVar11 << 0x20);
  plStack184 = (lua_State *)0x0;
  uVar16 = lib::L2CValue::as_number(this_05);
  uVar11 = lib::L2CValue::as_number(this_06);
  local_d0 = (void **)(uVar16 & 0xffffffff | (ulong)uVar11 << 0x20);
  plStack200 = (lua_State *)0x0;
  bVar1 = lib::L2CValue::as_bool(aLStack528);
  pppHVar10 = &local_b0;
  bVar1 = app::lua_bind::GroundModule__ray_check_hit_pos_normal_impl
                    (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),(Vector2f *)&local_a0,
                     (Vector2f *)pppHVar10,(Vector2f *)&local_c0,(Vector2f *)local_d0,
                     (bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack512,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack496,(float)local_c0);
  lib::L2CValue::L2CValue(aLStack480,local_c0._4_4_);
  lib::L2CValue::L2CValue(aLStack464,local_d0._0_4_);
  lib::L2CValue::L2CValue(aLStack448,local_d0._4_4_);
  lib::L2CValue::operator=(aLStack432,aLStack512);
  lib::L2CValue::operator=(pLVar5,aLStack496);
  lib::L2CValue::operator=(pLVar6,aLStack480);
  lib::L2CValue::operator=(pLVar7,aLStack464);
  lib::L2CValue::operator=(pLVar8,aLStack448);
  lib::L2CValue::~L2CValue(aLStack448);
  lib::L2CValue::~L2CValue(aLStack464);
  lib::L2CValue::~L2CValue(aLStack480);
  lib::L2CValue::~L2CValue(aLStack496);
  lib::L2CValue::~L2CValue(aLStack512);
  lib::L2CValue::~L2CValue(aLStack528);
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack432);
  if ((bVar2 & 1U) != 0) {
    pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack272,0x18cdc1683);
    pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack272,0x1fbdb2615);
    pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack336,0x18cdc1683);
    pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack336,0x1fbdb2615);
    fVar12 = (float)lib::L2CValue::as_number(pLVar5);
    fVar13 = (float)lib::L2CValue::as_number(pLVar6);
    fVar14 = (float)lib::L2CValue::as_number(pLVar7);
    fVar15 = (float)lib::L2CValue::as_number(pLVar8);
    fVar12 = (float)app::sv_math::vec2_distance(fVar12,fVar13,fVar14,fVar15);
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,fVar12);
    lib::L2CValue::L2CValue(aLStack512,1.0);
    uVar16 = lib::L2CValue::operator<=((L2CValue *)&local_a0,aLStack512);
    lib::L2CValue::~L2CValue(aLStack512);
    lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
    if ((uVar16 & 1) != 0) {
      fVar12 = (float)app::lua_bind::PostureModule__lr_impl
                                (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40));
      lib::L2CValue::L2CValue(aLStack512,fVar12);
      pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack384,0x18cdc1683);
      lib::L2CValue::operator*(pLVar5,aLStack512);
      lib::L2CValue::operator-((L2CValue *)local_d0);
      pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack384,0x1fbdb2615);
      lib::L2CAgent::math_atan((L2CAgent *)&local_c0,pLVar5,(L2CValue *)pppHVar10);
      lib::L2CAgent::math_deg((L2CAgent *)&local_b0,pLVar5);
      lib::L2CValue::~L2CValue((L2CValue *)&local_b0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_c0);
      lib::L2CValue::~L2CValue((L2CValue *)local_d0);
      bVar1 = app::lua_bind::BattleObjectWorld__is_gravity_normal_impl(BATTLE_OBJECT_CATEGORY_ENEMY)
      ;
      lib::L2CValue::L2CValue((L2CValue *)&local_c0,(bool)(bVar1 & 1));
      lib::L2CValue::operator!((L2CValue *)&local_c0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_c0);
      bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_b0);
      if ((bVar2 & 1U) != 0) {
        pLVar6 = (L2CValue *)0x5;
        pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)((long)param_1 + 200),5);
        pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar5);
        fVar12 = (float)app::SlopeModuleSimple::gravity_angle(pBVar9);
        lib::L2CValue::L2CValue((L2CValue *)local_d0,fVar12);
        lib::L2CAgent::math_deg((L2CAgent *)local_d0,pLVar6);
        lib::L2CValue::~L2CValue((L2CValue *)local_d0);
        lib::L2CValue::operator*((L2CValue *)&local_c0,aLStack512);
        lib::L2CValue::operator+((L2CValue *)&local_a0,aLStack528);
        lib::L2CValue::operator=((L2CValue *)&local_a0,(L2CValue *)local_d0);
        lib::L2CValue::~L2CValue((L2CValue *)local_d0);
        lib::L2CValue::~L2CValue(aLStack528);
        lib::L2CValue::~L2CValue((L2CValue *)&local_c0);
      }
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_c0,
                 _FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_S_FLOAT_GROUND_ANGLE);
      fVar12 = (float)lib::L2CValue::as_number((L2CValue *)&local_a0);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_c0);
      app::lua_bind::WorkModule__set_float_impl
                (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),fVar12,iVar3);
      lib::L2CValue::~L2CValue((L2CValue *)&local_c0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_b0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
      lib::L2CValue::~L2CValue(aLStack512);
    }
  }
  bVar2 = lib::L2CValue::operator.cast.to.bool(param_2);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,10.0);
    fVar12 = (float)lib::L2CValue::as_number((L2CValue *)&local_a0);
    bVar1 = app::lua_bind::GroundModule__is_ottotto_impl
                      (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),fVar12);
    lib::L2CValue::L2CValue(aLStack512,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack512);
    lib::L2CValue::~L2CValue(aLStack512);
    lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue
                (aLStack512,_FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_S_FLAG_NEAR_CLIFF);
      iVar3 = lib::L2CValue::as_integer(aLStack512);
      app::lua_bind::WorkModule__off_flag_impl
                (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3);
    }
    else {
      lib::L2CValue::L2CValue
                (aLStack512,_FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_S_FLAG_NEAR_CLIFF);
      iVar3 = lib::L2CValue::as_integer(aLStack512);
      app::lua_bind::WorkModule__on_flag_impl
                (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3);
    }
    lib::L2CValue::~L2CValue(aLStack512);
  }
  lib::L2CValue::~L2CValue(aLStack432);
  lib::L2CValue::~L2CValue(aLStack384);
  lib::L2CValue::~L2CValue(aLStack336);
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_b0,_FIGHTER_BAYONETTA_INSTANCE_WORK_ID_INT_SHOOTING_STEP);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_b0);
  iVar3 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,iVar3);
  lib::L2CValue::L2CValue(aLStack512,_FIGHTER_BAYONETTA_SHOOTING_STEP_SHOOTING);
  uVar16 = lib::L2CValue::operator==((L2CValue *)&local_a0,aLStack512);
  lib::L2CValue::~L2CValue(aLStack512);
  lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_b0);
  if ((uVar16 & 1) != 0) {
    lib::L2CValue::L2CValue
              (aLStack512,_FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_S_FLAG_SHOOTING_SPEED_MUL);
    iVar3 = lib::L2CValue::as_integer(aLStack512);
    app::lua_bind::WorkModule__on_flag_impl
              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3);
    lib::L2CValue::~L2CValue(aLStack512);
  }
  return;
}

