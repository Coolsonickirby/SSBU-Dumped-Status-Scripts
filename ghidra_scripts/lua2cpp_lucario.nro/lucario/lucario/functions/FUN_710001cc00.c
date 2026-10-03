
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001cc00(L2CValue *param_1,void *param_2,L2CValue *param_3,L2CValue *param_4,
                   L2CValue *param_5)

{
  L2CValue LVar1;
  long lVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  L2CValue *pLVar7;
  L2CValue *pLVar8;
  L2CValue *pLVar9;
  L2CValue *pLVar10;
  ulong uVar11;
  ulong uVar12;
  void *pvVar13;
  KineticEnergy *pKVar14;
  KineticEnergyNormal *pKVar15;
  BattleObjectModuleAccessor **ppBVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  L2CValue aLStack656 [16];
  L2CValue aLStack640 [16];
  L2CValue aLStack624 [16];
  undefined auStack608 [32];
  undefined auStack576 [32];
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
  undefined auStack336 [16];
  undefined auStack320 [32];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  BattleObjectModuleAccessor *local_100;
  undefined8 uStack248;
  L2CValue aLStack240 [24];
  L2CValue aLStack216 [16];
  L2CValue aLStack200 [16];
  L2CValue aLStack184 [16];
  L2CValue aLStack168 [16];
  L2CValue aLStack152 [24];
  
  uVar5 = lib::L2CValue::as_integer(param_3);
  bVar3 = app::lua_bind::GroundModule__is_touch_impl
                    (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),uVar5);
  lib::L2CValue::L2CValue((L2CValue *)&local_100,(bool)(bVar3 & 1));
  bVar4 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_100);
  lib::L2CValue::~L2CValue((L2CValue *)&local_100);
  if ((bVar4 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack368,param_3);
    lib::L2CValue::L2CValue(aLStack168,0.0);
    lib::L2CValue::L2CValue(aLStack184,0.0);
    LVar1 = SUB81(&stack0xfffffffffffffff0,0);
    lua2cpp::L2CFighterBase::Vector2__create
              (param_2,(L2CValue)((char)LVar1 + 'h'),(L2CValue)((char)LVar1 + 'X'));
    lib::L2CValue::~L2CValue(aLStack184);
    lib::L2CValue::~L2CValue(aLStack168);
    pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack152,0x18cdc1683);
    pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack152,0x1fbdb2615);
    uVar5 = lib::L2CValue::as_integer(aLStack368);
    uVar21 = app::lua_bind::GroundModule__get_touch_normal_consider_gravity_impl
                       (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),uVar5);
    lib::L2CValue::L2CValue((L2CValue *)&local_100,(float)uVar21);
    lib::L2CValue::L2CValue(aLStack240,(float)((ulong)uVar21 >> 0x20));
    lib::L2CValue::operator=(pLVar7,(L2CValue *)&local_100);
    lib::L2CValue::operator=(pLVar8,aLStack240);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue((L2CValue *)&local_100);
    lib::L2CValue::L2CValue(aLStack216,0.0);
    lib::L2CValue::L2CValue(aLStack272,0.0);
    lua2cpp::L2CFighterBase::Vector2__create(param_2,(L2CValue)((char)LVar1 + '8'),LVar1);
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CValue::~L2CValue(aLStack216);
    pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack200,0x18cdc1683);
    pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack200,0x1fbdb2615);
    lib::L2CValue::L2CValue(aLStack288,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
    iVar6 = lib::L2CValue::as_integer(aLStack288);
    uVar21 = app::lua_bind::KineticModule__get_sum_speed_impl
                       (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar6);
    lib::L2CValue::L2CValue((L2CValue *)&local_100,(float)uVar21);
    lib::L2CValue::L2CValue(aLStack240,(float)((ulong)uVar21 >> 0x20));
    lib::L2CValue::operator=(pLVar7,(L2CValue *)&local_100);
    lib::L2CValue::operator=(pLVar8,aLStack240);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue((L2CValue *)&local_100);
    lib::L2CValue::~L2CValue(aLStack288);
    pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack152,0x18cdc1683);
    pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack152,0x1fbdb2615);
    pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack200,0x18cdc1683);
    pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack200,0x1fbdb2615);
    fVar17 = (float)lib::L2CValue::as_number(pLVar7);
    fVar18 = (float)lib::L2CValue::as_number(pLVar8);
    fVar19 = (float)lib::L2CValue::as_number(pLVar9);
    fVar20 = (float)lib::L2CValue::as_number(pLVar10);
    fVar17 = (float)app::sv_math::vec2_angle(fVar17,fVar18,fVar19,fVar20);
    lib::L2CValue::L2CValue(aLStack288,fVar17);
    lib::L2CValue::L2CValue((L2CValue *)&local_100,0x1086bc4a93);
    lib::L2CValue::L2CValue((L2CValue *)auStack320,0xb4bc40e2d);
    uVar11 = lib::L2CValue::as_integer((L2CValue *)&local_100);
    uVar12 = lib::L2CValue::as_integer((L2CValue *)auStack320);
    fVar17 = (float)app::lua_bind::WorkModule__get_param_float_impl
                              (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),uVar11,uVar12)
    ;
    lib::L2CValue::L2CValue((L2CValue *)(auStack320 + 0x10),fVar17);
    lib::L2CValue::~L2CValue((L2CValue *)auStack320);
    lib::L2CValue::~L2CValue((L2CValue *)&local_100);
    lib::L2CValue::L2CValue((L2CValue *)&local_100,90.0);
    ppBVar16 = &local_100;
    lib::L2CValue::operator+((L2CValue *)(auStack320 + 0x10),(L2CValue *)ppBVar16);
    lib::L2CValue::~L2CValue((L2CValue *)&local_100);
    lib::L2CAgent::math_rad((L2CAgent *)auStack336,(L2CValue *)ppBVar16);
    bVar3 = lib::L2CValue::operator<=((L2CValue *)auStack320,aLStack288);
    lib::L2CValue::L2CValue(aLStack352,(bool)(bVar3 & 1));
    lib::L2CValue::~L2CValue((L2CValue *)auStack320);
    lib::L2CValue::~L2CValue((L2CValue *)auStack336);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack320 + 0x10));
    lib::L2CValue::~L2CValue(aLStack288);
    lib::L2CValue::~L2CValue(aLStack200);
    lib::L2CValue::~L2CValue(aLStack152);
    bVar4 = lib::L2CValue::operator.cast.to.bool(aLStack352);
    lib::L2CValue::~L2CValue(aLStack352);
    lib::L2CValue::~L2CValue(aLStack368);
    if ((bVar4 & 1U) != 0) {
      bVar4 = lib::L2CValue::operator.cast.to.bool(param_4);
      if ((bVar4 & 1U) == 0) {
LAB_710001d59c:
        lib::L2CValue::L2CValue(aLStack416,_FIGHTER_LUCARIO_STATUS_KIND_SPECIAL_HI_BOUND);
        FUN_710001cb40(param_2,aLStack416);
        pLVar7 = aLStack416;
      }
      else {
        lib::L2CValue::L2CValue(aLStack384,param_5);
        FUN_710001b120(&local_100,param_2,aLStack384);
        bVar4 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_100);
        lib::L2CValue::~L2CValue((L2CValue *)&local_100);
        lib::L2CValue::~L2CValue(aLStack384);
        if ((bVar4 & 1U) == 0) goto LAB_710001d59c;
        lib::L2CValue::L2CValue(aLStack400,_FIGHTER_STATUS_KIND_ATTACH_WALL);
        FUN_710001cb40(param_2,aLStack400);
        pLVar7 = aLStack400;
      }
      lib::L2CValue::~L2CValue(pLVar7);
      bVar4 = true;
      goto LAB_710001d980;
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_100,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    iVar6 = lib::L2CValue::as_integer((L2CValue *)&local_100);
    pvVar13 = (void *)app::lua_bind::KineticModule__get_energy_impl
                                (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar6);
    lib::L2CValue::L2CValue(aLStack272,pvVar13);
    lib::L2CValue::~L2CValue((L2CValue *)&local_100);
    lib::L2CValue::L2CValue(aLStack432,0.0);
    lib::L2CValue::L2CValue(aLStack448,0.0);
    lua2cpp::L2CFighterBase::Vector2__create(param_2,(L2CValue)0x50,(L2CValue)0x40);
    lib::L2CValue::~L2CValue(aLStack448);
    lib::L2CValue::~L2CValue(aLStack432);
    pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack288,0x18cdc1683);
    pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack288,0x1fbdb2615);
    pKVar14 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack272);
    uVar21 = app::lua_bind::KineticEnergy__get_speed_impl(pKVar14);
    lib::L2CValue::L2CValue((L2CValue *)&local_100,(float)uVar21);
    lib::L2CValue::L2CValue(aLStack240,(float)((ulong)uVar21 >> 0x20));
    lib::L2CValue::operator=(pLVar7,(L2CValue *)&local_100);
    lib::L2CValue::operator=(pLVar8,aLStack240);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue((L2CValue *)&local_100);
    pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack288,0x18cdc1683);
    pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack288,0x1fbdb2615);
    fVar17 = (float)lib::L2CValue::as_number(pLVar7);
    fVar18 = (float)lib::L2CValue::as_number(pLVar8);
    fVar17 = (float)app::sv_math::vec2_length(fVar17,fVar18);
    lib::L2CValue::L2CValue(aLStack152,fVar17);
    lib::L2CValue::L2CValue((L2CValue *)&local_100,1e-05);
    uVar11 = lib::L2CValue::operator<((L2CValue *)&local_100,aLStack152);
    lib::L2CValue::~L2CValue((L2CValue *)&local_100);
    lib::L2CValue::~L2CValue(aLStack152);
    if ((uVar11 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack464,0.0);
      lib::L2CValue::L2CValue(aLStack480,0.0);
      lua2cpp::L2CFighterBase::Vector2__create(param_2,(L2CValue)0x30,(L2CValue)0x20);
      lib::L2CValue::~L2CValue(aLStack480);
      lib::L2CValue::~L2CValue(aLStack464);
      pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(auStack320 + 0x10),0x18cdc1683);
      pLVar8 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(auStack320 + 0x10),0x1fbdb2615);
      uVar5 = lib::L2CValue::as_integer(param_3);
      uVar21 = app::lua_bind::GroundModule__get_touch_normal_consider_gravity_impl
                         (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),uVar5);
      lib::L2CValue::L2CValue((L2CValue *)&local_100,(float)uVar21);
      lib::L2CValue::L2CValue(aLStack240,(float)((ulong)uVar21 >> 0x20));
      lib::L2CValue::operator=(pLVar7,(L2CValue *)&local_100);
      lib::L2CValue::operator=(pLVar8,aLStack240);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::~L2CValue((L2CValue *)&local_100);
      pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack288,0x18cdc1683);
      pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack288,0x1fbdb2615);
      pLVar9 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(auStack320 + 0x10),0x18cdc1683);
      pLVar10 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(auStack320 + 0x10),0x1fbdb2615);
      fVar17 = (float)lib::L2CValue::as_number(pLVar7);
      fVar18 = (float)lib::L2CValue::as_number(pLVar8);
      fVar19 = (float)lib::L2CValue::as_number(pLVar9);
      fVar20 = (float)lib::L2CValue::as_number(pLVar10);
      fVar17 = (float)app::sv_math::vec2_dot(fVar17,fVar18,fVar19,fVar20);
      lib::L2CValue::L2CValue(aLStack152,fVar17);
      lib::L2CValue::L2CValue((L2CValue *)&local_100,0.0);
      uVar11 = lib::L2CValue::operator<(aLStack152,(L2CValue *)&local_100);
      lib::L2CValue::~L2CValue((L2CValue *)&local_100);
      lib::L2CValue::~L2CValue(aLStack152);
      if ((uVar11 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)auStack320);
        lib::L2CValue::L2CValue((L2CValue *)auStack336);
        lib::L2CValue::L2CValue(aLStack352);
        lib::L2CValue::L2CValue(aLStack512,0.0);
        lib::L2CValue::L2CValue(aLStack528,0.0);
        lua2cpp::L2CFighterBase::Vector2__create(param_2,(L2CValue)0x0,(L2CValue)0xf0);
        lib::L2CValue::~L2CValue(aLStack528);
        lib::L2CValue::~L2CValue(aLStack512);
        lib::L2CValue::L2CValue(aLStack152,0x1086bc4a93);
        lib::L2CValue::L2CValue(aLStack168,0xb67e745c5);
        uVar11 = lib::L2CValue::as_integer(aLStack152);
        pLVar7 = (L2CValue *)lib::L2CValue::as_integer(aLStack168);
        fVar17 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                  (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),uVar11,
                                   (ulong)pLVar7);
        lib::L2CValue::L2CValue((L2CValue *)&local_100,fVar17);
        lib::L2CValue::operator=((L2CValue *)auStack320,(L2CValue *)&local_100);
        lib::L2CValue::~L2CValue((L2CValue *)&local_100);
        lib::L2CValue::~L2CValue(aLStack168);
        lib::L2CValue::~L2CValue(aLStack152);
        pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack288,0x18cdc1683);
        lib::L2CValue::L2CValue((L2CValue *)(auStack576 + 0x10),pLVar8);
        pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack288,0x1fbdb2615);
        lib::L2CValue::L2CValue((L2CValue *)auStack576,pLVar8);
        pLVar8 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(auStack320 + 0x10),0x18cdc1683);
        lib::L2CValue::L2CValue((L2CValue *)(auStack608 + 0x10),pLVar8);
        pLVar8 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(auStack320 + 0x10),0x1fbdb2615);
        lib::L2CValue::L2CValue((L2CValue *)auStack608,pLVar8);
        lib::L2CAgent::math_rad((L2CAgent *)auStack320,pLVar8);
        lib::L2CAgent::math_atan((L2CAgent *)auStack576,(L2CValue *)(auStack576 + 0x10),pLVar7);
        lib::L2CAgent::math_atan((L2CAgent *)auStack608,(L2CValue *)(auStack608 + 0x10),pLVar7);
        lib::L2CValue::L2CValue((L2CValue *)&local_100,0.5);
        lib::L2CValue::operator*((L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST,(L2CValue *)&local_100);
        lib::L2CValue::~L2CValue((L2CValue *)&local_100);
        uVar11 = lib::L2CValue::operator<=(aLStack184,aLStack152);
        if ((uVar11 & 1) == 0) {
LAB_710001d5cc:
          lib::L2CValue::operator-(aLStack184);
          uVar11 = lib::L2CValue::operator<=(aLStack152,(L2CValue *)&local_100);
          if ((uVar11 & 1) == 0) {
            lVar2 = -0xf0;
            goto LAB_710001d65c;
          }
          uVar11 = lib::L2CValue::operator<=(aLStack184,aLStack168);
          lib::L2CValue::~L2CValue((L2CValue *)&local_100);
          if ((uVar11 & 1) != 0) {
            lib::L2CValue::L2CValue((L2CValue *)&local_100,2.0);
            lib::L2CValue::operator*
                      ((L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST,(L2CValue *)&local_100);
            lib::L2CValue::~L2CValue((L2CValue *)&local_100);
            lib::L2CValue::operator+(aLStack152,aLStack216);
            lib::L2CValue::operator=(aLStack152,aLStack200);
            goto LAB_710001d648;
          }
        }
        else {
          lib::L2CValue::operator-(aLStack184);
          uVar11 = lib::L2CValue::operator<=(aLStack168,(L2CValue *)&local_100);
          lib::L2CValue::~L2CValue((L2CValue *)&local_100);
          if ((uVar11 & 1) == 0) goto LAB_710001d5cc;
          lib::L2CValue::L2CValue((L2CValue *)&local_100,2.0);
          lib::L2CValue::operator*((L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST,(L2CValue *)&local_100);
          lib::L2CValue::~L2CValue((L2CValue *)&local_100);
          lib::L2CValue::operator+(aLStack168,aLStack216);
          lib::L2CValue::operator=(aLStack168,aLStack200);
LAB_710001d648:
          lib::L2CValue::~L2CValue(aLStack200);
          lVar2 = -200;
LAB_710001d65c:
          lib::L2CValue::~L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar2));
        }
        lib::L2CValue::operator-(aLStack152,aLStack168);
        uVar11 = lib::L2CValue::operator<=(aLStack624,aLStack544);
        if ((uVar11 & 1) == 0) {
          lib::L2CValue::operator-(aLStack624);
          uVar11 = lib::L2CValue::operator<=(aLStack544,(L2CValue *)&local_100);
          lib::L2CValue::~L2CValue((L2CValue *)&local_100);
          if ((uVar11 & 1) == 0) {
            lib::L2CValue::operator-(aLStack544);
            lib::L2CValue::operator=(aLStack544,(L2CValue *)&local_100);
            goto LAB_710001d6ec;
          }
          lib::L2CValue::operator=(aLStack544,aLStack624);
        }
        else {
          lib::L2CValue::operator-(aLStack624);
          lib::L2CValue::operator=(aLStack544,(L2CValue *)&local_100);
LAB_710001d6ec:
          lib::L2CValue::~L2CValue((L2CValue *)&local_100);
        }
        lib::L2CValue::~L2CValue(aLStack184);
        lib::L2CValue::~L2CValue(aLStack168);
        lib::L2CValue::~L2CValue(aLStack152);
        lib::L2CValue::operator=((L2CValue *)auStack336,aLStack544);
        lib::L2CValue::~L2CValue(aLStack544);
        lib::L2CValue::~L2CValue(aLStack624);
        lib::L2CValue::~L2CValue((L2CValue *)auStack608);
        lib::L2CValue::~L2CValue((L2CValue *)(auStack608 + 0x10));
        lib::L2CValue::~L2CValue((L2CValue *)auStack576);
        lib::L2CValue::~L2CValue((L2CValue *)(auStack576 + 0x10));
        lib::L2CValue::L2CValue(aLStack152,_FIGHTER_LUCARIO_MACH_STATUS_WORK_ID_FLOAT_RUSH_DIR);
        iVar6 = lib::L2CValue::as_integer(aLStack152);
        fVar17 = (float)app::lua_bind::WorkModule__get_float_impl
                                  (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar6);
        lib::L2CValue::L2CValue((L2CValue *)&local_100,fVar17);
        lib::L2CValue::operator=(aLStack352,(L2CValue *)&local_100);
        lib::L2CValue::~L2CValue((L2CValue *)&local_100);
        lib::L2CValue::~L2CValue(aLStack152);
        lib::L2CValue::operator+(aLStack352,(L2CValue *)auStack336);
        lib::L2CValue::operator=(aLStack352,(L2CValue *)&local_100);
        lib::L2CValue::~L2CValue((L2CValue *)&local_100);
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_100,_FIGHTER_LUCARIO_MACH_STATUS_WORK_ID_FLOAT_RUSH_DIR);
        fVar17 = (float)lib::L2CValue::as_number(aLStack352);
        iVar6 = lib::L2CValue::as_integer((L2CValue *)&local_100);
        app::lua_bind::WorkModule__set_float_impl
                  (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),fVar17,iVar6);
        lib::L2CValue::~L2CValue((L2CValue *)&local_100);
        pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack496,0x18cdc1683);
        pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack496,0x1fbdb2615);
        lib::L2CValue::L2CValue(aLStack640,aLStack352);
        pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack288,0x18cdc1683);
        pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack288,0x1fbdb2615);
        fVar17 = (float)lib::L2CValue::as_number(pLVar9);
        fVar18 = (float)lib::L2CValue::as_number(pLVar10);
        fVar17 = (float)app::sv_math::vec2_length(fVar17,fVar18);
        lib::L2CValue::L2CValue(aLStack656,fVar17);
        FUN_7100008500(&local_100,param_2,aLStack640,aLStack656);
        lib::L2CValue::operator=(pLVar7,(L2CValue *)&local_100);
        lib::L2CValue::operator=(pLVar8,aLStack240);
        lib::L2CValue::~L2CValue(aLStack240);
        lib::L2CValue::~L2CValue((L2CValue *)&local_100);
        lib::L2CValue::~L2CValue(aLStack656);
        lib::L2CValue::~L2CValue(aLStack640);
        pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack496,0x18cdc1683);
        pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack496,0x1fbdb2615);
        uVar11 = lib::L2CValue::as_number(pLVar7);
        uVar5 = lib::L2CValue::as_number(pLVar8);
        local_100 = (BattleObjectModuleAccessor *)(uVar11 & 0xffffffff | (ulong)uVar5 << 0x20);
        uStack248 = 0;
        pKVar15 = (KineticEnergyNormal *)lib::L2CValue::as_pointer(aLStack272);
        app::lua_bind::KineticEnergyNormal__set_speed_impl(pKVar15,(Vector2f *)&local_100);
        lib::L2CValue::~L2CValue(aLStack496);
        lib::L2CValue::~L2CValue(aLStack352);
        lib::L2CValue::~L2CValue((L2CValue *)auStack336);
        lib::L2CValue::~L2CValue((L2CValue *)auStack320);
      }
      lib::L2CValue::~L2CValue((L2CValue *)(auStack320 + 0x10));
    }
    lib::L2CValue::~L2CValue(aLStack288);
    lib::L2CValue::~L2CValue(aLStack272);
  }
  bVar4 = false;
LAB_710001d980:
  lib::L2CValue::L2CValue(param_1,bVar4);
  return;
}

