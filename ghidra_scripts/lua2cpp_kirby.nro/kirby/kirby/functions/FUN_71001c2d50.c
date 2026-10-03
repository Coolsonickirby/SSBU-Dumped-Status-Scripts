
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71001c2d50(void *param_1)

{
  L2CValue LVar1;
  long lVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  L2CValue *pLVar8;
  BattleObjectModuleAccessor *pBVar9;
  L2CValue *pLVar10;
  void *pvVar11;
  KineticEnergyNormal *pKVar12;
  L2CAgent *this;
  L2CValue *pLVar13;
  Hash40 HVar14;
  ulong uVar15;
  ulong uVar16;
  BattleObjectModuleAccessor **ppBVar17;
  float fVar18;
  undefined8 uVar19;
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
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  ulong local_e0;
  undefined8 uStack216;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  
  ppBVar17 = (BattleObjectModuleAccessor **)((long)param_1 + 0x40);
  iVar5 = app::lua_bind::StatusModule__situation_kind_impl(*ppBVar17);
  lib::L2CValue::L2CValue(aLStack112,iVar5);
  pLVar13 = (L2CValue *)((long)param_1 + 200);
  pLVar8 = (L2CValue *)lib::L2CValue::operator[](pLVar13,3);
  uVar6 = lib::L2CValue::as_integer(pLVar8);
  uVar6 = app::sv_battle_object::kind(uVar6);
  lib::L2CValue::L2CValue(aLStack128,uVar6);
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_PURIN_STATUS_SPECIAL_N_FLAG_CROWN_EFFECT_ENABLE);
  iVar5 = lib::L2CValue::as_integer(aLStack144);
  bVar3 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar17,iVar5);
  lib::L2CValue::L2CValue((L2CValue *)&local_e0,(bool)(bVar3 & 1));
  bVar4 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_e0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_e0);
  lib::L2CValue::~L2CValue(aLStack144);
  if ((bVar4 & 1U) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_e0,1);
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_INT_EFFECT_COUNT5);
    iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_e0);
    iVar7 = lib::L2CValue::as_integer(aLStack144);
    app::lua_bind::WorkModule__add_int_impl(*ppBVar17,iVar5,iVar7);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue((L2CValue *)&local_e0);
  }
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_PURIN_STATUS_SPECIAL_N_FLAG_CHANGE_END);
  iVar5 = lib::L2CValue::as_integer(aLStack144);
  bVar3 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar17,iVar5);
  lib::L2CValue::L2CValue((L2CValue *)&local_e0,(bool)(bVar3 & 1));
  bVar4 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_e0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_e0);
  lib::L2CValue::~L2CValue(aLStack144);
  if ((bVar4 & 1U) != 0) {
    FUN_71001b9da0(param_1);
    goto LAB_71001c3fc0;
  }
  pLVar8 = (L2CValue *)lib::L2CValue::operator[](pLVar13,5);
  pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar8);
  app::FighterSpecializer_Kirby::purin_set_power(pBVar9);
  lib::L2CValue::L2CValue(aLStack144,false);
  lib::L2CValue::L2CValue(aLStack176,0.0);
  lib::L2CValue::L2CValue(aLStack192,0.0);
  LVar1 = SUB81(&stack0xfffffffffffffff0,0);
  lua2cpp::L2CFighterBase::Vector2__create
            (param_1,(L2CValue)((char)LVar1 + '`'),(L2CValue)((char)LVar1 + 'P'));
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x18cdc1683);
  pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x1fbdb2615);
  lib::L2CValue::L2CValue(aLStack240,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
  iVar5 = lib::L2CValue::as_integer(aLStack240);
  uVar19 = app::lua_bind::KineticModule__get_sum_speed_impl(*ppBVar17,iVar5);
  lib::L2CValue::L2CValue((L2CValue *)&local_e0,(float)uVar19);
  lib::L2CValue::L2CValue(aLStack208,(float)((ulong)uVar19 >> 0x20));
  lib::L2CValue::operator=(pLVar8,(L2CValue *)&local_e0);
  lib::L2CValue::operator=(pLVar10,aLStack208);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue((L2CValue *)&local_e0);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::L2CValue(aLStack256,_FIGHTER_PURIN_STATUS_SPECIAL_N_FLAG_CROWN_EFFECT_ENABLE);
  iVar5 = lib::L2CValue::as_integer(aLStack256);
  bVar3 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar17,iVar5);
  lib::L2CValue::L2CValue(aLStack240,(bool)(bVar3 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_e0,false);
  uVar15 = lib::L2CValue::operator==(aLStack240,(L2CValue *)&local_e0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_e0);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack256);
  if ((uVar15 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack240,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_INT_EFFECT_COUNT5);
    iVar5 = lib::L2CValue::as_integer(aLStack240);
    iVar5 = app::lua_bind::WorkModule__get_int_impl(*ppBVar17,iVar5);
    lib::L2CValue::L2CValue((L2CValue *)&local_e0,iVar5);
    lib::L2CValue::L2CValue(aLStack336,0xf899192aa);
    lib::L2CValue::L2CValue(aLStack576,0x1293485600);
    uVar15 = lib::L2CValue::as_integer(aLStack336);
    uVar16 = lib::L2CValue::as_integer(aLStack576);
    iVar5 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar17,uVar15,uVar16);
    lib::L2CValue::L2CValue(aLStack256,iVar5);
    uVar15 = lib::L2CValue::operator<(aLStack256,(L2CValue *)&local_e0);
    lib::L2CValue::~L2CValue(aLStack256);
    lib::L2CValue::~L2CValue(aLStack576);
    lib::L2CValue::~L2CValue(aLStack336);
    lib::L2CValue::~L2CValue((L2CValue *)&local_e0);
    lib::L2CValue::~L2CValue(aLStack240);
    if ((uVar15 & 1) == 0) goto LAB_71001c37f4;
    lib::L2CValue::L2CValue((L2CValue *)&local_e0,false);
    lib::L2CValue::L2CValue(aLStack240,_FIGHTER_PURIN_STATUS_SPECIAL_N_FLAG_CROWN_EFFECT_ENABLE);
    bVar3 = lib::L2CValue::as_bool((L2CValue *)&local_e0);
    iVar5 = lib::L2CValue::as_integer(aLStack240);
    app::lua_bind::WorkModule__set_flag_impl(*ppBVar17,(bool)(bVar3 & 1),iVar5);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue((L2CValue *)&local_e0);
    lib::L2CValue::L2CValue((L2CValue *)&local_e0,0);
    lib::L2CValue::L2CValue(aLStack240,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_INT_EFFECT_COUNT5);
    iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_e0);
    iVar7 = lib::L2CValue::as_integer(aLStack240);
    app::lua_bind::WorkModule__set_int_impl(*ppBVar17,iVar5,iVar7);
    lib::L2CValue::~L2CValue(aLStack240);
    lVar2 = -0xd0;
LAB_71001c37f0:
    lib::L2CValue::~L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar2));
  }
  else {
    lib::L2CValue::L2CValue(aLStack256,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_MOVE_DIR);
    iVar5 = lib::L2CValue::as_integer(aLStack256);
    fVar18 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar17,iVar5);
    lib::L2CValue::L2CValue(aLStack240,fVar18);
    lib::L2CValue::L2CValue((L2CValue *)&local_e0,1.0);
    uVar15 = lib::L2CValue::operator==(aLStack240,(L2CValue *)&local_e0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_e0);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack256);
    if ((uVar15 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack240,_GROUND_TOUCH_FLAG_LEFT);
      uVar6 = lib::L2CValue::as_integer(aLStack240);
      bVar3 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar17,uVar6);
      lib::L2CValue::L2CValue((L2CValue *)&local_e0,(bool)(bVar3 & 1));
      bVar4 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_e0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_e0);
      lib::L2CValue::~L2CValue(aLStack240);
      if ((bVar4 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack432,0.0);
        lib::L2CValue::L2CValue(aLStack448,0.0);
        lua2cpp::L2CFighterBase::Vector2__create(param_1,(L2CValue)0x50,(L2CValue)0x40);
        lib::L2CValue::~L2CValue(aLStack448);
        lib::L2CValue::~L2CValue(aLStack432);
        pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack240,0x18cdc1683);
        pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack240,0x1fbdb2615);
        lib::L2CValue::L2CValue(aLStack256,_GROUND_TOUCH_FLAG_LEFT);
        uVar6 = lib::L2CValue::as_integer(aLStack256);
        uVar19 = app::lua_bind::GroundModule__get_touch_normal_impl(*ppBVar17,uVar6);
        lib::L2CValue::L2CValue((L2CValue *)&local_e0,(float)uVar19);
        lib::L2CValue::L2CValue(aLStack208,(float)((ulong)uVar19 >> 0x20));
        lib::L2CValue::operator=(pLVar8,(L2CValue *)&local_e0);
        lib::L2CValue::operator=(pLVar10,aLStack208);
        lib::L2CValue::~L2CValue(aLStack208);
        lib::L2CValue::~L2CValue((L2CValue *)&local_e0);
        lib::L2CValue::~L2CValue(aLStack256);
        lib::L2CValue::L2CValue(aLStack464,0.0);
        lib::L2CValue::L2CValue(aLStack480,0.0);
        lua2cpp::L2CFighterBase::Vector2__create(param_1,(L2CValue)0x30,(L2CValue)0x20);
        lib::L2CValue::~L2CValue(aLStack480);
        lib::L2CValue::~L2CValue(aLStack464);
        pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack256,0x18cdc1683);
        pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack256,0x1fbdb2615);
        lib::L2CValue::L2CValue(aLStack336,_GROUND_TOUCH_FLAG_LEFT);
        uVar6 = lib::L2CValue::as_integer(aLStack336);
        uVar19 = app::lua_bind::GroundModule__get_touch_normal_impl(*ppBVar17,uVar6);
        lib::L2CValue::L2CValue((L2CValue *)&local_e0,(float)uVar19);
        lib::L2CValue::L2CValue(aLStack208,(float)((ulong)uVar19 >> 0x20));
        lib::L2CValue::operator=(pLVar8,(L2CValue *)&local_e0);
        lib::L2CValue::operator=(pLVar10,aLStack208);
        lib::L2CValue::~L2CValue(aLStack208);
        lib::L2CValue::~L2CValue((L2CValue *)&local_e0);
        lib::L2CValue::~L2CValue(aLStack336);
        pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack240,0x18cdc1683);
        lib::L2CValue::L2CValue(aLStack496,pLVar8);
        pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack240,0x1fbdb2615);
        lib::L2CValue::L2CValue(aLStack512,pLVar8);
        pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack256,0x18cdc1683);
        lib::L2CValue::L2CValue(aLStack528,pLVar8);
        pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack256,0x1fbdb2615);
        lib::L2CValue::L2CValue(aLStack544,pLVar8);
        lib::L2CValue::L2CValue(aLStack560,-1.0);
        FUN_71001c4d20(param_1,aLStack496,aLStack512,aLStack528,aLStack544);
        lib::L2CValue::~L2CValue(aLStack560);
        lib::L2CValue::~L2CValue(aLStack544);
        lib::L2CValue::~L2CValue(aLStack528);
        lib::L2CValue::~L2CValue(aLStack512);
        lib::L2CValue::~L2CValue(aLStack496);
        lib::L2CValue::L2CValue((L2CValue *)&local_e0,true);
        lib::L2CValue::operator=(aLStack144,(L2CValue *)&local_e0);
        goto LAB_71001c37dc;
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack240,GROUND_TOUCH_FLAG_RIGHT);
      uVar6 = lib::L2CValue::as_integer(aLStack240);
      bVar3 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar17,uVar6);
      lib::L2CValue::L2CValue((L2CValue *)&local_e0,(bool)(bVar3 & 1));
      bVar4 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_e0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_e0);
      lib::L2CValue::~L2CValue(aLStack240);
      if ((bVar4 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack272,0.0);
        lib::L2CValue::L2CValue(aLStack288,0.0);
        lua2cpp::L2CFighterBase::Vector2__create(param_1,LVar1,(L2CValue)0xe0);
        lib::L2CValue::~L2CValue(aLStack288);
        lib::L2CValue::~L2CValue(aLStack272);
        pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack240,0x18cdc1683);
        pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack240,0x1fbdb2615);
        lib::L2CValue::L2CValue(aLStack256,GROUND_TOUCH_FLAG_RIGHT);
        uVar6 = lib::L2CValue::as_integer(aLStack256);
        uVar19 = app::lua_bind::GroundModule__get_touch_normal_impl(*ppBVar17,uVar6);
        lib::L2CValue::L2CValue((L2CValue *)&local_e0,(float)uVar19);
        lib::L2CValue::L2CValue(aLStack208,(float)((ulong)uVar19 >> 0x20));
        lib::L2CValue::operator=(pLVar8,(L2CValue *)&local_e0);
        lib::L2CValue::operator=(pLVar10,aLStack208);
        lib::L2CValue::~L2CValue(aLStack208);
        lib::L2CValue::~L2CValue((L2CValue *)&local_e0);
        lib::L2CValue::~L2CValue(aLStack256);
        lib::L2CValue::L2CValue(aLStack304,0.0);
        lib::L2CValue::L2CValue(aLStack320,0.0);
        lua2cpp::L2CFighterBase::Vector2__create(param_1,(L2CValue)0xd0,(L2CValue)0xc0);
        lib::L2CValue::~L2CValue(aLStack320);
        lib::L2CValue::~L2CValue(aLStack304);
        pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack256,0x18cdc1683);
        pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack256,0x1fbdb2615);
        lib::L2CValue::L2CValue(aLStack336,GROUND_TOUCH_FLAG_RIGHT);
        uVar6 = lib::L2CValue::as_integer(aLStack336);
        uVar19 = app::lua_bind::GroundModule__get_touch_normal_impl(*ppBVar17,uVar6);
        lib::L2CValue::L2CValue((L2CValue *)&local_e0,(float)uVar19);
        lib::L2CValue::L2CValue(aLStack208,(float)((ulong)uVar19 >> 0x20));
        lib::L2CValue::operator=(pLVar8,(L2CValue *)&local_e0);
        lib::L2CValue::operator=(pLVar10,aLStack208);
        lib::L2CValue::~L2CValue(aLStack208);
        lib::L2CValue::~L2CValue((L2CValue *)&local_e0);
        lib::L2CValue::~L2CValue(aLStack336);
        pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack240,0x18cdc1683);
        lib::L2CValue::L2CValue(aLStack352,pLVar8);
        pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack240,0x1fbdb2615);
        lib::L2CValue::L2CValue(aLStack368,pLVar8);
        pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack256,0x18cdc1683);
        lib::L2CValue::L2CValue(aLStack384,pLVar8);
        pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack256,0x1fbdb2615);
        lib::L2CValue::L2CValue(aLStack400,pLVar8);
        lib::L2CValue::L2CValue(aLStack416,1.0);
        FUN_71001c4d20(param_1,aLStack352,aLStack368,aLStack384,aLStack400);
        lib::L2CValue::~L2CValue(aLStack416);
        lib::L2CValue::~L2CValue(aLStack400);
        lib::L2CValue::~L2CValue(aLStack384);
        lib::L2CValue::~L2CValue(aLStack368);
        lib::L2CValue::~L2CValue(aLStack352);
        lib::L2CValue::L2CValue((L2CValue *)&local_e0,true);
        lib::L2CValue::operator=(aLStack144,(L2CValue *)&local_e0);
LAB_71001c37dc:
        lib::L2CValue::~L2CValue((L2CValue *)&local_e0);
        lib::L2CValue::~L2CValue(aLStack256);
        lVar2 = -0xe0;
        goto LAB_71001c37f0;
      }
    }
  }
LAB_71001c37f4:
  bVar4 = lib::L2CValue::operator.cast.to.bool(aLStack144);
  if ((bVar4 & 1U) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_e0,0xf899192aa);
    lib::L2CValue::L2CValue(aLStack256,0x13d96cf2a4);
    uVar15 = lib::L2CValue::as_integer((L2CValue *)&local_e0);
    uVar16 = lib::L2CValue::as_integer(aLStack256);
    fVar18 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar17,uVar15,uVar16);
    lib::L2CValue::L2CValue(aLStack240,fVar18);
    lib::L2CValue::~L2CValue(aLStack256);
    lib::L2CValue::~L2CValue((L2CValue *)&local_e0);
    lib::L2CValue::L2CValue(aLStack336,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_SPEED);
    iVar5 = lib::L2CValue::as_integer(aLStack336);
    fVar18 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar17,iVar5);
    lib::L2CValue::L2CValue((L2CValue *)&local_e0,fVar18);
    lib::L2CValue::operator*((L2CValue *)&local_e0,aLStack240);
    lib::L2CValue::~L2CValue((L2CValue *)&local_e0);
    lib::L2CValue::~L2CValue(aLStack336);
    lib::L2CValue::L2CValue((L2CValue *)&local_e0,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_SPEED);
    fVar18 = (float)lib::L2CValue::as_number(aLStack256);
    iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_e0);
    app::lua_bind::WorkModule__set_float_impl(*ppBVar17,fVar18,iVar5);
    lib::L2CValue::~L2CValue((L2CValue *)&local_e0);
    lib::L2CValue::L2CValue((L2CValue *)&local_e0,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_e0);
    pvVar11 = (void *)app::lua_bind::KineticModule__get_energy_impl(*ppBVar17,iVar5);
    lib::L2CValue::L2CValue(aLStack336,pvVar11);
    lib::L2CValue::~L2CValue((L2CValue *)&local_e0);
    pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x18cdc1683);
    lib::L2CValue::operator-(pLVar8);
    lib::L2CValue::operator*((L2CValue *)&local_e0,aLStack240);
    lib::L2CValue::~L2CValue((L2CValue *)&local_e0);
    lib::L2CValue::L2CValue(aLStack592,0.0);
    uVar15 = lib::L2CValue::as_number(aLStack576);
    uVar6 = lib::L2CValue::as_number(aLStack592);
    local_e0 = uVar15 & 0xffffffff | (ulong)uVar6 << 0x20;
    uStack216 = 0;
    pKVar12 = (KineticEnergyNormal *)lib::L2CValue::as_pointer(aLStack336);
    app::lua_bind::KineticEnergyNormal__set_speed_impl(pKVar12,(Vector2f *)&local_e0);
    lib::L2CValue::~L2CValue(aLStack592);
    lib::L2CValue::L2CValue(aLStack608,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_MOVE_DIR);
    iVar5 = lib::L2CValue::as_integer(aLStack608);
    fVar18 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar17,iVar5);
    lib::L2CValue::L2CValue(aLStack592,fVar18);
    lib::L2CValue::operator-(aLStack592);
    lib::L2CValue::~L2CValue(aLStack592);
    lib::L2CValue::~L2CValue(aLStack608);
    lib::L2CValue::L2CValue(aLStack592,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_MOVE_DIR);
    fVar18 = (float)lib::L2CValue::as_number((L2CValue *)&local_e0);
    iVar5 = lib::L2CValue::as_integer(aLStack592);
    app::lua_bind::WorkModule__set_float_impl(*ppBVar17,fVar18,iVar5);
    lib::L2CValue::~L2CValue(aLStack592);
    fVar18 = (float)lib::L2CValue::as_number((L2CValue *)&local_e0);
    app::lua_bind::PostureModule__set_lr_impl(*ppBVar17,fVar18);
    app::lua_bind::PostureModule__update_rot_y_lr_impl(*ppBVar17);
    lib::L2CValue::~L2CValue((L2CValue *)&local_e0);
    lib::L2CValue::~L2CValue(aLStack576);
    lib::L2CValue::~L2CValue(aLStack336);
    lib::L2CValue::~L2CValue(aLStack256);
    lib::L2CValue::~L2CValue(aLStack240);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_e0,_SITUATION_KIND_GROUND);
  uVar15 = lib::L2CValue::operator==(aLStack112,(L2CValue *)&local_e0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_e0);
  if ((uVar15 & 1) != 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_e0,_FIGHTER_PURIN_STATUS_SPECIAL_N_FLAG_CHANGE_STATUS);
    iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_e0);
    app::lua_bind::WorkModule__on_flag_impl(*ppBVar17,iVar5);
    lib::L2CValue::~L2CValue((L2CValue *)&local_e0);
  }
  lib::L2CValue::L2CValue(aLStack240);
  lib::L2CValue::L2CValue(aLStack256);
  lib::L2CValue::L2CValue(aLStack336);
  lib::L2CValue::L2CValue(aLStack576);
  lib::L2CValue::L2CValue((L2CValue *)&local_e0,4);
  lib::L2CValue::operator=(aLStack240,(L2CValue *)&local_e0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_e0);
  lib::L2CValue::L2CValue((L2CValue *)&local_e0,8);
  lib::L2CValue::operator=(aLStack256,(L2CValue *)&local_e0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_e0);
  lib::L2CValue::L2CValue((L2CValue *)&local_e0,4);
  lib::L2CValue::operator=(aLStack336,(L2CValue *)&local_e0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_e0);
  lib::L2CValue::L2CValue((L2CValue *)&local_e0,4);
  lib::L2CValue::operator=(aLStack576,(L2CValue *)&local_e0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_e0);
  pLVar8 = (L2CValue *)0x18cdc1683;
  this = (L2CAgent *)lib::L2CValue::operator[](aLStack160,0x18cdc1683);
  lib::L2CAgent::math_abs(this,pLVar8);
  lib::L2CValue::L2CValue((L2CValue *)&local_e0,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack624,0xcd16a7bf2);
  uVar15 = lib::L2CValue::as_integer((L2CValue *)&local_e0);
  uVar16 = lib::L2CValue::as_integer(aLStack624);
  fVar18 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar17,uVar15,uVar16);
  lib::L2CValue::L2CValue(aLStack608,fVar18);
  lib::L2CValue::~L2CValue(aLStack624);
  lib::L2CValue::~L2CValue((L2CValue *)&local_e0);
  uVar15 = lib::L2CValue::operator<=(aLStack608,aLStack592);
  if ((uVar15 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_e0,0);
    lib::L2CValue::L2CValue(aLStack624,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_INT_EFFECT_COUNT1);
    iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_e0);
    iVar7 = lib::L2CValue::as_integer(aLStack624);
    app::lua_bind::WorkModule__set_int_impl(*ppBVar17,iVar5,iVar7);
    lib::L2CValue::~L2CValue(aLStack624);
    lib::L2CValue::~L2CValue((L2CValue *)&local_e0);
    lib::L2CValue::L2CValue((L2CValue *)&local_e0,0);
    lib::L2CValue::L2CValue(aLStack624,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_INT_EFFECT_COUNT2);
    iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_e0);
    iVar7 = lib::L2CValue::as_integer(aLStack624);
    app::lua_bind::WorkModule__set_int_impl(*ppBVar17,iVar5,iVar7);
    lib::L2CValue::~L2CValue(aLStack624);
    lib::L2CValue::~L2CValue((L2CValue *)&local_e0);
    lib::L2CValue::L2CValue((L2CValue *)&local_e0,0);
    lib::L2CValue::L2CValue(aLStack624,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_INT_EFFECT_COUNT3);
    iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_e0);
    iVar7 = lib::L2CValue::as_integer(aLStack624);
    app::lua_bind::WorkModule__set_int_impl(*ppBVar17,iVar5,iVar7);
    lib::L2CValue::~L2CValue(aLStack624);
    lib::L2CValue::~L2CValue((L2CValue *)&local_e0);
    lib::L2CValue::L2CValue((L2CValue *)&local_e0,0);
    lib::L2CValue::L2CValue(aLStack624,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_INT_EFFECT_COUNT4);
    iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_e0);
    iVar7 = lib::L2CValue::as_integer(aLStack624);
    app::lua_bind::WorkModule__set_int_impl(*ppBVar17,iVar5,iVar7);
LAB_71001c3f70:
    lib::L2CValue::~L2CValue(aLStack624);
    lib::L2CValue::~L2CValue((L2CValue *)&local_e0);
  }
  else {
    pLVar8 = (L2CValue *)lib::L2CValue::operator[](pLVar13,8);
    lib::L2CValue::L2CValue((L2CValue *)&local_e0,false);
    uVar15 = lib::L2CValue::operator==(pLVar8,(L2CValue *)&local_e0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_e0);
    if ((uVar15 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_e0,1);
      lib::L2CValue::L2CValue(aLStack624,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_INT_EFFECT_COUNT1);
      iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_e0);
      iVar7 = lib::L2CValue::as_integer(aLStack624);
      app::lua_bind::WorkModule__add_int_impl(*ppBVar17,iVar5,iVar7);
      lib::L2CValue::~L2CValue(aLStack624);
      lib::L2CValue::~L2CValue((L2CValue *)&local_e0);
      lib::L2CValue::L2CValue(aLStack624,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_INT_EFFECT_COUNT1);
      iVar5 = lib::L2CValue::as_integer(aLStack624);
      iVar5 = app::lua_bind::WorkModule__get_int_impl(*ppBVar17,iVar5);
      lib::L2CValue::L2CValue((L2CValue *)&local_e0,iVar5);
      uVar15 = lib::L2CValue::operator<=(aLStack240,(L2CValue *)&local_e0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_e0);
      lib::L2CValue::~L2CValue(aLStack624);
      if ((uVar15 & 1) != 0) {
        pLVar13 = (L2CValue *)lib::L2CValue::operator[](pLVar13,5);
        pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar13);
        app::FighterSpecializer_Kirby::purin_req_effect_dash_smoke(pBVar9);
        lib::L2CValue::L2CValue((L2CValue *)&local_e0,0);
        lib::L2CValue::L2CValue(aLStack624,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_INT_EFFECT_COUNT1);
        iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_e0);
        iVar7 = lib::L2CValue::as_integer(aLStack624);
        app::lua_bind::WorkModule__set_int_impl(*ppBVar17,iVar5,iVar7);
        lib::L2CValue::~L2CValue(aLStack624);
        lib::L2CValue::~L2CValue((L2CValue *)&local_e0);
      }
      lib::L2CValue::L2CValue((L2CValue *)&local_e0,1);
      lib::L2CValue::L2CValue(aLStack624,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_INT_EFFECT_COUNT2);
      iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_e0);
      iVar7 = lib::L2CValue::as_integer(aLStack624);
      app::lua_bind::WorkModule__add_int_impl(*ppBVar17,iVar5,iVar7);
      lib::L2CValue::~L2CValue(aLStack624);
      lib::L2CValue::~L2CValue((L2CValue *)&local_e0);
      lib::L2CValue::L2CValue(aLStack624,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_INT_EFFECT_COUNT2);
      iVar5 = lib::L2CValue::as_integer(aLStack624);
      iVar5 = app::lua_bind::WorkModule__get_int_impl(*ppBVar17,iVar5);
      lib::L2CValue::L2CValue((L2CValue *)&local_e0,iVar5);
      uVar15 = lib::L2CValue::operator<=(aLStack256,(L2CValue *)&local_e0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_e0);
      lib::L2CValue::~L2CValue(aLStack624);
      if ((uVar15 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_e0,FIGHTER_KIND_KIRBY);
        uVar15 = lib::L2CValue::operator==(aLStack128,(L2CValue *)&local_e0);
        lib::L2CValue::~L2CValue((L2CValue *)&local_e0);
        if ((uVar15 & 1) == 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_e0,_FIGHTER_ANIMCMD_EFFECT);
          lib::L2CValue::L2CValue(aLStack624,0x17868e5ba2);
          iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_e0);
          HVar14 = lib::L2CValue::as_hash(aLStack624);
          app::lua_bind::MotionAnimcmdModule__call_script_single_impl(*ppBVar17,iVar5,HVar14,-1);
        }
        else {
          lib::L2CValue::L2CValue((L2CValue *)&local_e0,_FIGHTER_ANIMCMD_EFFECT);
          lib::L2CValue::L2CValue(aLStack624,0x1cc4feef5a);
          iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_e0);
          HVar14 = lib::L2CValue::as_hash(aLStack624);
          app::lua_bind::MotionAnimcmdModule__call_script_single_impl(*ppBVar17,iVar5,HVar14,-1);
        }
        lib::L2CValue::~L2CValue(aLStack624);
        lib::L2CValue::~L2CValue((L2CValue *)&local_e0);
        lib::L2CValue::L2CValue((L2CValue *)&local_e0,0);
        lib::L2CValue::L2CValue(aLStack624,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_INT_EFFECT_COUNT2);
        iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_e0);
        iVar7 = lib::L2CValue::as_integer(aLStack624);
        app::lua_bind::WorkModule__set_int_impl(*ppBVar17,iVar5,iVar7);
        lib::L2CValue::~L2CValue(aLStack624);
        lib::L2CValue::~L2CValue((L2CValue *)&local_e0);
      }
      HVar14 = app::lua_bind::MotionModule__motion_kind_impl(*ppBVar17);
      lib::L2CValue::L2CValue(aLStack624,HVar14);
      lib::L2CValue::L2CValue((L2CValue *)&local_e0,_FIGHTER_KIND_PURIN);
      uVar15 = lib::L2CValue::operator==(aLStack128,(L2CValue *)&local_e0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_e0);
      if ((uVar15 & 1) == 0) {
LAB_71001c4220:
        lib::L2CValue::L2CValue((L2CValue *)&local_e0,FIGHTER_KIND_KIRBY);
        uVar15 = lib::L2CValue::operator==(aLStack128,(L2CValue *)&local_e0);
        lib::L2CValue::~L2CValue((L2CValue *)&local_e0);
        if ((uVar15 & 1) != 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_e0,0x13427c2ab6);
          uVar15 = lib::L2CValue::operator==(aLStack624,(L2CValue *)&local_e0);
          lib::L2CValue::~L2CValue((L2CValue *)&local_e0);
          if ((uVar15 & 1) != 0) goto LAB_71001c4278;
        }
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)&local_e0,0xd483c0ed2);
        uVar15 = lib::L2CValue::operator==(aLStack624,(L2CValue *)&local_e0);
        lib::L2CValue::~L2CValue((L2CValue *)&local_e0);
        if ((uVar15 & 1) == 0) goto LAB_71001c4220;
LAB_71001c4278:
        lib::L2CValue::L2CValue((L2CValue *)&local_e0,1);
        lib::L2CValue::L2CValue(aLStack640,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_INT_EFFECT_COUNT3);
        iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_e0);
        iVar7 = lib::L2CValue::as_integer(aLStack640);
        app::lua_bind::WorkModule__add_int_impl(*ppBVar17,iVar5,iVar7);
        lib::L2CValue::~L2CValue(aLStack640);
        lib::L2CValue::~L2CValue((L2CValue *)&local_e0);
        lib::L2CValue::L2CValue(aLStack640,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_INT_EFFECT_COUNT3);
        iVar5 = lib::L2CValue::as_integer(aLStack640);
        iVar5 = app::lua_bind::WorkModule__get_int_impl(*ppBVar17,iVar5);
        lib::L2CValue::L2CValue((L2CValue *)&local_e0,iVar5);
        uVar15 = lib::L2CValue::operator<=(aLStack336,(L2CValue *)&local_e0);
        lib::L2CValue::~L2CValue((L2CValue *)&local_e0);
        lib::L2CValue::~L2CValue(aLStack640);
        if ((uVar15 & 1) != 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_e0,FIGHTER_KIND_KIRBY);
          uVar15 = lib::L2CValue::operator==(aLStack128,(L2CValue *)&local_e0);
          lib::L2CValue::~L2CValue((L2CValue *)&local_e0);
          if ((uVar15 & 1) == 0) {
            lib::L2CValue::L2CValue((L2CValue *)&local_e0,_FIGHTER_ANIMCMD_EFFECT);
            lib::L2CValue::L2CValue(aLStack640,0x14bd637fee);
            iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_e0);
            HVar14 = lib::L2CValue::as_hash(aLStack640);
            app::lua_bind::MotionAnimcmdModule__call_script_single_impl(*ppBVar17,iVar5,HVar14,-1);
          }
          else {
            lib::L2CValue::L2CValue((L2CValue *)&local_e0,_FIGHTER_ANIMCMD_EFFECT);
            lib::L2CValue::L2CValue(aLStack640,0x1902a1a6b1);
            iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_e0);
            HVar14 = lib::L2CValue::as_hash(aLStack640);
            app::lua_bind::MotionAnimcmdModule__call_script_single_impl(*ppBVar17,iVar5,HVar14,-1);
          }
          lib::L2CValue::~L2CValue(aLStack640);
          lib::L2CValue::~L2CValue((L2CValue *)&local_e0);
          lib::L2CValue::L2CValue((L2CValue *)&local_e0,0);
          lib::L2CValue::L2CValue(aLStack640,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_INT_EFFECT_COUNT3)
          ;
          iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_e0);
          iVar7 = lib::L2CValue::as_integer(aLStack640);
          app::lua_bind::WorkModule__set_int_impl(*ppBVar17,iVar5,iVar7);
          lib::L2CValue::~L2CValue(aLStack640);
          lib::L2CValue::~L2CValue((L2CValue *)&local_e0);
        }
      }
      lib::L2CValue::~L2CValue(aLStack624);
      lib::L2CValue::L2CValue((L2CValue *)&local_e0,1);
      lib::L2CValue::L2CValue(aLStack624,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_INT_EFFECT_COUNT4);
      iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_e0);
      iVar7 = lib::L2CValue::as_integer(aLStack624);
      app::lua_bind::WorkModule__add_int_impl(*ppBVar17,iVar5,iVar7);
      lib::L2CValue::~L2CValue(aLStack624);
      lib::L2CValue::~L2CValue((L2CValue *)&local_e0);
      lib::L2CValue::L2CValue(aLStack624,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_INT_EFFECT_COUNT4);
      iVar5 = lib::L2CValue::as_integer(aLStack624);
      iVar5 = app::lua_bind::WorkModule__get_int_impl(*ppBVar17,iVar5);
      lib::L2CValue::L2CValue((L2CValue *)&local_e0,iVar5);
      uVar15 = lib::L2CValue::operator<=(aLStack576,(L2CValue *)&local_e0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_e0);
      lib::L2CValue::~L2CValue(aLStack624);
      if ((uVar15 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_e0,FIGHTER_KIND_KIRBY);
        uVar15 = lib::L2CValue::operator==(aLStack128,(L2CValue *)&local_e0);
        lib::L2CValue::~L2CValue((L2CValue *)&local_e0);
        if ((uVar15 & 1) == 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_e0,_FIGHTER_ANIMCMD_EFFECT);
          lib::L2CValue::L2CValue(aLStack624,0x1b075bd7f1);
          iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_e0);
          HVar14 = lib::L2CValue::as_hash(aLStack624);
          app::lua_bind::MotionAnimcmdModule__call_script_single_impl(*ppBVar17,iVar5,HVar14,-1);
        }
        else {
          lib::L2CValue::L2CValue((L2CValue *)&local_e0,_FIGHTER_ANIMCMD_EFFECT);
          lib::L2CValue::L2CValue(aLStack624,0x203133e63f);
          iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_e0);
          HVar14 = lib::L2CValue::as_hash(aLStack624);
          app::lua_bind::MotionAnimcmdModule__call_script_single_impl(*ppBVar17,iVar5,HVar14,-1);
        }
        lib::L2CValue::~L2CValue(aLStack624);
        lib::L2CValue::~L2CValue((L2CValue *)&local_e0);
        lib::L2CValue::L2CValue((L2CValue *)&local_e0,0);
        lib::L2CValue::L2CValue(aLStack624,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_INT_EFFECT_COUNT4);
        iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_e0);
        iVar7 = lib::L2CValue::as_integer(aLStack624);
        app::lua_bind::WorkModule__set_int_impl(*ppBVar17,iVar5,iVar7);
        goto LAB_71001c3f70;
      }
    }
  }
  lib::L2CValue::~L2CValue(aLStack608);
  lib::L2CValue::~L2CValue(aLStack592);
  lib::L2CValue::~L2CValue(aLStack576);
  lib::L2CValue::~L2CValue(aLStack336);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
LAB_71001c3fc0:
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_SPEED);
  iVar5 = lib::L2CValue::as_integer(aLStack144);
  fVar18 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar17,iVar5);
  lib::L2CValue::L2CValue((L2CValue *)&local_e0,fVar18);
  lib::L2CValue::L2CValue(aLStack240,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack256,0xcd16a7bf2);
  uVar15 = lib::L2CValue::as_integer(aLStack240);
  uVar16 = lib::L2CValue::as_integer(aLStack256);
  fVar18 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar17,uVar15,uVar16);
  lib::L2CValue::L2CValue(aLStack160,fVar18);
  uVar15 = lib::L2CValue::operator<((L2CValue *)&local_e0,aLStack160);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue((L2CValue *)&local_e0);
  lib::L2CValue::~L2CValue(aLStack144);
  if ((uVar15 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_e0,true);
    bVar3 = lib::L2CValue::as_bool((L2CValue *)&local_e0);
    app::lua_bind::ControlModule__stop_rumble_impl(*ppBVar17,(bool)(bVar3 & 1));
    lib::L2CValue::~L2CValue((L2CValue *)&local_e0);
    lib::L2CValue::L2CValue((L2CValue *)&local_e0,false);
    bVar3 = lib::L2CValue::as_bool((L2CValue *)&local_e0);
    app::lua_bind::ControlModule__stop_rumble_impl(*ppBVar17,(bool)(bVar3 & 1));
    lib::L2CValue::~L2CValue((L2CValue *)&local_e0);
  }
  FUN_71001c5e90(param_1);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  return;
}

