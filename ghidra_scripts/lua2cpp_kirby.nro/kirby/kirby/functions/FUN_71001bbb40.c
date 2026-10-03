
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71001bbb40(void *param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  L2CValue *pLVar6;
  L2CValue *pLVar7;
  float *pfVar8;
  L2CValue *pLVar9;
  L2CValue *pLVar10;
  ulong uVar11;
  ulong uVar12;
  KineticEnergyNormal *pKVar13;
  BattleObjectModuleAccessor **ppBVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  L2CValue aLStack512 [16];
  L2CValue aLStack496 [16];
  L2CValue aLStack480 [16];
  L2CValue aLStack464 [16];
  L2CValue aLStack448 [16];
  L2CValue aLStack432 [16];
  undefined auStack416 [16];
  undefined auStack400 [32];
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  BattleObjectModuleAccessor *local_150;
  undefined8 uStack328;
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
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  
  lib::L2CValue::L2CValue((L2CValue *)&local_150,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_150);
  pvVar5 = (void *)app::lua_bind::KineticModule__get_energy_impl
                             (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack112,pvVar5);
  lib::L2CValue::~L2CValue((L2CValue *)&local_150);
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_SPEED);
  iVar3 = lib::L2CValue::as_integer(aLStack144);
  fVar15 = (float)app::lua_bind::WorkModule__get_float_impl
                            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_150,fVar15);
  lib::L2CValue::L2CValue(aLStack176,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_MOVE_DIR);
  iVar3 = lib::L2CValue::as_integer(aLStack176);
  fVar15 = (float)app::lua_bind::WorkModule__get_float_impl
                            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack160,fVar15);
  lib::L2CValue::operator*((L2CValue *)&local_150,aLStack160);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue((L2CValue *)&local_150);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack192,0.0);
  lib::L2CValue::L2CValue(aLStack208,0.0);
  lua2cpp::L2CFighterBase::Vector2__create(param_1,(L2CValue)0x40,(L2CValue)0x30);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack192);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack144,0x18cdc1683);
  pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack144,0x1fbdb2615);
  lib::L2CValue::L2CValue(aLStack160,GROUND_TOUCH_FLAG_DOWN);
  uVar4 = lib::L2CValue::as_integer(aLStack160);
  uVar17 = app::lua_bind::GroundModule__get_touch_normal_impl
                     (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar4);
  lib::L2CValue::L2CValue((L2CValue *)&local_150,(float)uVar17);
  lib::L2CValue::L2CValue(aLStack320,(float)((ulong)uVar17 >> 0x20));
  lib::L2CValue::operator=(pLVar6,(L2CValue *)&local_150);
  lib::L2CValue::operator=(pLVar7,aLStack320);
  lib::L2CValue::~L2CValue(aLStack320);
  lib::L2CValue::~L2CValue((L2CValue *)&local_150);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack224,0.0);
  lib::L2CValue::L2CValue(aLStack240,0.0);
  lua2cpp::L2CFighterBase::Vector2__create(param_1,(L2CValue)0x20,(L2CValue)0x10);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack224);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x18cdc1683);
  pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x1fbdb2615);
  pfVar8 = (float *)app::lua_bind::BattleObjectWorld__gravity_pos_impl
                              (LUA_SCRIPT_STATUS_FUNC_EXEC_STATUS_POST);
  lib::L2CValue::L2CValue((L2CValue *)&local_150,*pfVar8);
  lib::L2CValue::L2CValue(aLStack320,pfVar8[1]);
  lib::L2CValue::operator=(pLVar6,(L2CValue *)&local_150);
  lib::L2CValue::operator=(pLVar7,aLStack320);
  lib::L2CValue::~L2CValue(aLStack320);
  lib::L2CValue::~L2CValue((L2CValue *)&local_150);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x18cdc1683);
  pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x1fbdb2615);
  fVar15 = (float)lib::L2CValue::as_number(pLVar6);
  fVar16 = (float)lib::L2CValue::as_number(pLVar7);
  bVar1 = app::sv_math::vec2_is_zero(fVar15,fVar16);
  lib::L2CValue::L2CValue(aLStack176,(bool)(bVar1 & 1));
  lib::L2CValue::operator!(aLStack176);
  bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_150);
  lib::L2CValue::~L2CValue((L2CValue *)&local_150);
  lib::L2CValue::~L2CValue(aLStack176);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack256,0.0);
    lib::L2CValue::L2CValue(aLStack272,0.0);
    lib::L2CValue::L2CValue(aLStack288,0.0);
    lua2cpp::L2CFighterBase::Vector3__create(param_1,(L2CValue)0x0,(L2CValue)0xf0,(L2CValue)0xe0);
    lib::L2CValue::~L2CValue(aLStack288);
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CValue::~L2CValue(aLStack256);
    pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x18cdc1683);
    pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x1fbdb2615);
    pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x162d277af);
    pfVar8 = (float *)app::lua_bind::PostureModule__pos_impl
                                (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40));
    lib::L2CValue::L2CValue((L2CValue *)&local_150,*pfVar8);
    lib::L2CValue::L2CValue(aLStack320,pfVar8[1]);
    lib::L2CValue::L2CValue(aLStack304,pfVar8[2]);
    lib::L2CValue::operator=(pLVar6,(L2CValue *)&local_150);
    lib::L2CValue::operator=(pLVar7,aLStack320);
    lib::L2CValue::operator=(pLVar9,aLStack304);
    lib::L2CValue::~L2CValue(aLStack304);
    lib::L2CValue::~L2CValue(aLStack320);
    lib::L2CValue::~L2CValue((L2CValue *)&local_150);
    lib::L2CValue::L2CValue(aLStack368,0.0);
    lib::L2CValue::L2CValue((L2CValue *)(auStack400 + 0x10),0.0);
    lua2cpp::L2CFighterBase::Vector2__create(param_1,(L2CValue)0x90,(L2CValue)0x80);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack400 + 0x10));
    lib::L2CValue::~L2CValue(aLStack368);
    pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack352,0x18cdc1683);
    pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack352,0x1fbdb2615);
    pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x18cdc1683);
    pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x18cdc1683);
    lib::L2CValue::operator-(pLVar9,pLVar10);
    pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x1fbdb2615);
    pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x1fbdb2615);
    lib::L2CValue::operator-(pLVar9,pLVar10);
    lib::L2CValue::operator=(pLVar6,(L2CValue *)&local_150);
    lib::L2CValue::operator=(pLVar7,(L2CValue *)auStack400);
    lib::L2CValue::~L2CValue((L2CValue *)auStack400);
    lib::L2CValue::~L2CValue((L2CValue *)&local_150);
    pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack352,0x18cdc1683);
    pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack352,0x1fbdb2615);
    pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack352,0x18cdc1683);
    pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack352,0x1fbdb2615);
    fVar15 = (float)lib::L2CValue::as_number(pLVar9);
    fVar16 = (float)lib::L2CValue::as_number(pLVar10);
    uVar17 = app::sv_math::vec2_normalize(fVar15,fVar16);
    lib::L2CValue::L2CValue((L2CValue *)&local_150,(float)uVar17);
    lib::L2CValue::L2CValue(aLStack320,(float)((ulong)uVar17 >> 0x20));
    lib::L2CValue::operator=(pLVar6,(L2CValue *)&local_150);
    lib::L2CValue::operator=(pLVar7,aLStack320);
    lib::L2CValue::~L2CValue(aLStack320);
    lib::L2CValue::~L2CValue((L2CValue *)&local_150);
    pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack144,0x18cdc1683);
    pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack352,0x18cdc1683);
    lib::L2CValue::operator-(pLVar6,pLVar7);
    pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack144,0x18cdc1683);
    lib::L2CValue::operator=(pLVar6,(L2CValue *)&local_150);
    lib::L2CValue::~L2CValue((L2CValue *)&local_150);
    pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack144,0x1fbdb2615);
    pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack352,0x1fbdb2615);
    lib::L2CValue::operator-(pLVar6,pLVar7);
    pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack144,0x1fbdb2615);
    lib::L2CValue::operator=(pLVar6,(L2CValue *)&local_150);
    lib::L2CValue::~L2CValue((L2CValue *)&local_150);
    lib::L2CValue::~L2CValue(aLStack352);
    lib::L2CValue::~L2CValue(aLStack176);
  }
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_150,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_MOVE_DIR);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_150);
  fVar15 = (float)app::lua_bind::WorkModule__get_float_impl
                            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack176,fVar15);
  lib::L2CValue::~L2CValue((L2CValue *)&local_150);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack144,0x18cdc1683);
  pLVar7 = aLStack128;
  lib::L2CValue::operator*(pLVar6,pLVar7);
  lib::L2CAgent::math_abs((L2CAgent *)auStack400,pLVar7);
  lib::L2CValue::L2CValue(aLStack432,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack448,0xcdd48dbee);
  uVar11 = lib::L2CValue::as_integer(aLStack432);
  uVar12 = lib::L2CValue::as_integer(aLStack448);
  fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl
                            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar11,uVar12);
  lib::L2CValue::L2CValue((L2CValue *)auStack416,fVar15);
  lib::L2CValue::operator*((L2CValue *)&local_150,(L2CValue *)auStack416);
  lib::L2CValue::~L2CValue((L2CValue *)auStack416);
  lib::L2CValue::~L2CValue(aLStack448);
  lib::L2CValue::~L2CValue(aLStack432);
  lib::L2CValue::~L2CValue((L2CValue *)&local_150);
  lib::L2CValue::~L2CValue((L2CValue *)auStack400);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack144,0x18cdc1683);
  pLVar7 = aLStack128;
  lib::L2CValue::operator*(pLVar6,pLVar7);
  lib::L2CAgent::math_abs((L2CAgent *)auStack416,pLVar7);
  lib::L2CValue::L2CValue(aLStack448,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack464,0xedb6f1a4d);
  uVar11 = lib::L2CValue::as_integer(aLStack448);
  uVar12 = lib::L2CValue::as_integer(aLStack464);
  fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl
                            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar11,uVar12);
  lib::L2CValue::L2CValue(aLStack432,fVar15);
  lib::L2CValue::operator*((L2CValue *)&local_150,aLStack432);
  lib::L2CValue::~L2CValue(aLStack432);
  lib::L2CValue::~L2CValue(aLStack464);
  lib::L2CValue::~L2CValue(aLStack448);
  lib::L2CValue::~L2CValue((L2CValue *)&local_150);
  lib::L2CValue::~L2CValue((L2CValue *)auStack416);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack144,0x18cdc1683);
  lib::L2CValue::L2CValue((L2CValue *)&local_150,0.0);
  uVar11 = lib::L2CValue::operator<((L2CValue *)&local_150,pLVar6);
  lib::L2CValue::~L2CValue((L2CValue *)&local_150);
  if ((uVar11 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_150,0);
    uVar11 = lib::L2CValue::operator<=((L2CValue *)&local_150,aLStack176);
    lib::L2CValue::~L2CValue((L2CValue *)&local_150);
    if ((uVar11 & 1) == 0) {
      lib::L2CValue::operator-(aLStack128,(L2CValue *)auStack400);
      ppBVar14 = &local_150;
      lib::L2CValue::operator=(aLStack128,(L2CValue *)ppBVar14);
    }
    else {
      lib::L2CValue::operator-(aLStack128,aLStack352);
      ppBVar14 = &local_150;
      lib::L2CValue::operator=(aLStack128,(L2CValue *)ppBVar14);
    }
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_150,0);
    uVar11 = lib::L2CValue::operator<=((L2CValue *)&local_150,aLStack176);
    lib::L2CValue::~L2CValue((L2CValue *)&local_150);
    if ((uVar11 & 1) == 0) {
      lib::L2CValue::operator+(aLStack128,aLStack352);
      ppBVar14 = &local_150;
      lib::L2CValue::operator=(aLStack128,(L2CValue *)ppBVar14);
    }
    else {
      lib::L2CValue::operator+(aLStack128,(L2CValue *)auStack400);
      ppBVar14 = &local_150;
      lib::L2CValue::operator=(aLStack128,(L2CValue *)ppBVar14);
    }
  }
  lib::L2CValue::~L2CValue((L2CValue *)&local_150);
  lib::L2CAgent::math_abs((L2CAgent *)aLStack128,(L2CValue *)ppBVar14);
  lib::L2CValue::L2CValue(aLStack432,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack448,0x9563059c5);
  uVar11 = lib::L2CValue::as_integer(aLStack432);
  uVar12 = lib::L2CValue::as_integer(aLStack448);
  fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl
                            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar11,uVar12);
  lib::L2CValue::L2CValue((L2CValue *)auStack416,fVar15);
  pLVar6 = (L2CValue *)auStack416;
  uVar11 = lib::L2CValue::operator<((L2CValue *)&local_150,pLVar6);
  lib::L2CValue::~L2CValue((L2CValue *)auStack416);
  lib::L2CValue::~L2CValue(aLStack448);
  lib::L2CValue::~L2CValue(aLStack432);
  lib::L2CValue::~L2CValue((L2CValue *)&local_150);
  if ((uVar11 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_150,0.0);
    uVar11 = lib::L2CValue::operator<(aLStack128,(L2CValue *)&local_150);
    lib::L2CValue::~L2CValue((L2CValue *)&local_150);
    bVar2 = (uVar11 & 1) == 0;
    if (bVar2) {
      lib::L2CValue::L2CValue(aLStack432,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack448,0x9563059c5);
      uVar11 = lib::L2CValue::as_integer(aLStack432);
      uVar12 = lib::L2CValue::as_integer(aLStack448);
      fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar11,
                                 uVar12);
      lib::L2CValue::L2CValue((L2CValue *)auStack416,fVar15);
    }
    else {
      lib::L2CValue::L2CValue(aLStack448,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack464,0x9563059c5);
      uVar11 = lib::L2CValue::as_integer(aLStack448);
      uVar12 = lib::L2CValue::as_integer(aLStack464);
      fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar11,
                                 uVar12);
      lib::L2CValue::L2CValue(aLStack432,fVar15);
      lib::L2CValue::operator-(aLStack432);
    }
    pLVar6 = (L2CValue *)auStack416;
    lib::L2CValue::operator=(aLStack128,pLVar6);
    lib::L2CValue::~L2CValue((L2CValue *)auStack416);
    if (bVar2) {
      lib::L2CValue::~L2CValue(aLStack448);
      lib::L2CValue::~L2CValue(aLStack432);
    }
    else {
      lib::L2CValue::~L2CValue(aLStack432);
      lib::L2CValue::~L2CValue(aLStack464);
      lib::L2CValue::~L2CValue(aLStack448);
    }
  }
  lib::L2CAgent::math_abs((L2CAgent *)aLStack128,pLVar6);
  lib::L2CValue::L2CValue(aLStack480,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack496,0xfe9239346);
  uVar11 = lib::L2CValue::as_integer(aLStack480);
  uVar12 = lib::L2CValue::as_integer(aLStack496);
  fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl
                            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar11,uVar12);
  lib::L2CValue::L2CValue((L2CValue *)auStack416,fVar15);
  ppBVar14 = &local_150;
  uVar11 = lib::L2CValue::operator<((L2CValue *)auStack416,(L2CValue *)ppBVar14);
  lib::L2CValue::~L2CValue((L2CValue *)auStack416);
  lib::L2CValue::~L2CValue(aLStack496);
  lib::L2CValue::~L2CValue(aLStack480);
  lib::L2CValue::~L2CValue((L2CValue *)&local_150);
  if ((uVar11 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_150,0.0);
    uVar11 = lib::L2CValue::operator<(aLStack128,(L2CValue *)&local_150);
    lib::L2CValue::~L2CValue((L2CValue *)&local_150);
    bVar2 = (uVar11 & 1) == 0;
    if (bVar2) {
      lib::L2CValue::L2CValue(aLStack480,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack496,0xfe9239346);
      uVar11 = lib::L2CValue::as_integer(aLStack480);
      uVar12 = lib::L2CValue::as_integer(aLStack496);
      fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar11,
                                 uVar12);
      lib::L2CValue::L2CValue((L2CValue *)auStack416,fVar15);
    }
    else {
      lib::L2CValue::L2CValue(aLStack496,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack512,0xfe9239346);
      uVar11 = lib::L2CValue::as_integer(aLStack496);
      uVar12 = lib::L2CValue::as_integer(aLStack512);
      fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar11,
                                 uVar12);
      lib::L2CValue::L2CValue(aLStack480,fVar15);
      lib::L2CValue::operator-(aLStack480);
    }
    ppBVar14 = (BattleObjectModuleAccessor **)auStack416;
    lib::L2CValue::operator=(aLStack128,(L2CValue *)ppBVar14);
    lib::L2CValue::~L2CValue((L2CValue *)auStack416);
    if (bVar2) {
      lib::L2CValue::~L2CValue(aLStack496);
      lib::L2CValue::~L2CValue(aLStack480);
    }
    else {
      lib::L2CValue::~L2CValue(aLStack480);
      lib::L2CValue::~L2CValue(aLStack512);
      lib::L2CValue::~L2CValue(aLStack496);
    }
  }
  lib::L2CAgent::math_abs((L2CAgent *)aLStack128,(L2CValue *)ppBVar14);
  lib::L2CValue::L2CValue((L2CValue *)auStack416,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_SPEED);
  fVar15 = (float)lib::L2CValue::as_number((L2CValue *)&local_150);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack416);
  app::lua_bind::WorkModule__set_float_impl
            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),fVar15,iVar3);
  lib::L2CValue::~L2CValue((L2CValue *)auStack416);
  lib::L2CValue::~L2CValue((L2CValue *)&local_150);
  FUN_71001bb240(param_1);
  lib::L2CValue::L2CValue((L2CValue *)auStack416,0.0);
  uVar11 = lib::L2CValue::as_number(aLStack128);
  uVar4 = lib::L2CValue::as_number((L2CValue *)auStack416);
  local_150 = (BattleObjectModuleAccessor *)(uVar11 & 0xffffffff | (ulong)uVar4 << 0x20);
  uStack328 = 0;
  pKVar13 = (KineticEnergyNormal *)lib::L2CValue::as_pointer(aLStack112);
  app::lua_bind::KineticEnergyNormal__set_speed_impl(pKVar13,(Vector2f *)&local_150);
  lib::L2CValue::~L2CValue((L2CValue *)auStack416);
  lib::L2CValue::~L2CValue((L2CValue *)auStack400);
  lib::L2CValue::~L2CValue(aLStack352);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  return;
}

