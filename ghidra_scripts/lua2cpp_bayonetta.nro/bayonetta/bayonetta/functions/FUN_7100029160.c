
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100029160(void *param_1)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  L2CAgent *this;
  ulong uVar8;
  void *pvVar9;
  BattleObjectModuleAccessor *pBVar10;
  KineticEnergy *pKVar11;
  KineticEnergyNormal *pKVar12;
  FighterKineticEnergyGravity *pFVar13;
  ulong *puVar14;
  BattleObjectModuleAccessor **ppBVar15;
  float fVar16;
  uint uVar17;
  undefined8 uVar18;
  long lVar19;
  L2CValue aLStack400 [16];
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  ulong auStack272 [2];
  ulong auStack256 [2];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  ulong auStack208 [2];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  ulong auStack160 [2];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  ulong local_70;
  ulong uStack104;
  ulong local_60;
  undefined8 uStack88;
  
  ppBVar15 = (BattleObjectModuleAccessor **)((long)param_1 + 0x40);
  iVar4 = app::lua_bind::StatusModule__status_kind_impl(*ppBVar15);
  lib::L2CValue::L2CValue(aLStack128,iVar4);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,FIGHTER_STATUS_KIND_SPECIAL_S);
  uVar6 = lib::L2CValue::operator==(aLStack128,(L2CValue *)&local_60);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_BAYONETTA_STATUS_KIND_SPECIAL_S_HOLD_END)
    ;
    uVar6 = lib::L2CValue::operator==(aLStack128,(L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)auStack208,false);
      FUN_7100006580(param_1,auStack208);
      puVar14 = auStack208;
      goto LAB_710002a0e8;
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_BAYONETTA_STATUS_KIND_SPECIAL_AIR_S_U);
    uVar6 = lib::L2CValue::operator==(aLStack128,(L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    if ((uVar6 & 1) == 0) goto LAB_710002a0ec;
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_60,_FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_AIR_S_U_INT_STEP);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar15,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)auStack160,iVar4);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_BAYONETTA_SHOOTING_STEP_WAIT);
    uVar6 = lib::L2CValue::operator==((L2CValue *)auStack160,(L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    cVar1 = (char)&stack0xfffffffffffffff0;
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_60,_FIGHTER_BAYONETTA_INSTANCE_WORK_ID_INT_SHOOTING_STEP);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar15,iVar4);
      lib::L2CValue::L2CValue(aLStack176,iVar4);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_BAYONETTA_SHOOTING_STEP_WAIT);
      uVar6 = lib::L2CValue::operator==(aLStack176,(L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_BAYONETTA_SHOOTING_STEP_SHOOTING);
        uVar6 = lib::L2CValue::operator==(aLStack176,(L2CValue *)&local_60);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        if ((uVar6 & 1) == 0) goto LAB_710002a0dc;
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_60,
                   _FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_AIR_S_U_FLOAT_MOTION_SPEED_X);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_60);
        fVar16 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar15,iVar4);
        lib::L2CValue::L2CValue(aLStack192,fVar16);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_60,
                   _FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_AIR_S_U_FLOAT_MOTION_SPEED_Y);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_60);
        fVar16 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar15,iVar4);
        lib::L2CValue::L2CValue((L2CValue *)auStack256,fVar16);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        lib::L2CValue::L2CValue((L2CValue *)auStack272,0xfea97fe73);
        lib::L2CValue::L2CValue(aLStack288,0x19150ea98d);
        uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack272);
        uVar8 = lib::L2CValue::as_integer(aLStack288);
        fVar16 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar15,uVar6,uVar8);
        lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar16);
        lib::L2CValue::operator*(aLStack192,(L2CValue *)&local_70);
        lib::L2CValue::operator=(aLStack192,(L2CValue *)&local_60);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        lib::L2CValue::~L2CValue((L2CValue *)&local_70);
        lib::L2CValue::~L2CValue(aLStack288);
        lib::L2CValue::~L2CValue((L2CValue *)auStack272);
        lib::L2CValue::L2CValue((L2CValue *)auStack272,0xfea97fe73);
        lib::L2CValue::L2CValue(aLStack288,0x19286e803d);
        uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack272);
        uVar8 = lib::L2CValue::as_integer(aLStack288);
        fVar16 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar15,uVar6,uVar8);
        lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar16);
        lib::L2CValue::operator*((L2CValue *)auStack256,(L2CValue *)&local_70);
        lib::L2CValue::operator=((L2CValue *)auStack256,(L2CValue *)&local_60);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        lib::L2CValue::~L2CValue((L2CValue *)&local_70);
        lib::L2CValue::~L2CValue(aLStack288);
        lib::L2CValue::~L2CValue((L2CValue *)auStack272);
        lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_KINETIC_ENERGY_ID_STOP);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_60);
        pvVar9 = (void *)app::lua_bind::KineticModule__get_energy_impl(*ppBVar15,iVar4);
        lib::L2CValue::L2CValue((L2CValue *)auStack272,pvVar9);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        lib::L2CValue::L2CValue(aLStack288,ENERGY_STOP_RESET_TYPE_AIR);
        lib::L2CValue::L2CValue(aLStack304,0.0);
        lib::L2CValue::L2CValue(aLStack320,0);
        lib::L2CValue::L2CValue(aLStack336,0);
        lib::L2CValue::L2CValue(aLStack352,0);
        pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)((long)param_1 + 200),5);
        iVar4 = lib::L2CValue::as_integer(aLStack288);
        uVar6 = lib::L2CValue::as_number(aLStack192);
        uVar17 = lib::L2CValue::as_number(aLStack304);
        local_60 = uVar6 & 0xffffffff | (ulong)uVar17 << 0x20;
        uStack88 = 0;
        uVar6 = lib::L2CValue::as_number(aLStack320);
        lVar19 = lib::L2CValue::as_number(aLStack336);
        uVar17 = lib::L2CValue::as_number(aLStack352);
        local_70 = uVar6 & 0xffffffff | lVar19 << 0x20;
        uStack104 = (ulong)uVar17;
        pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar7);
        pKVar11 = (KineticEnergy *)lib::L2CValue::as_pointer((L2CValue *)auStack272);
        app::lua_bind::KineticEnergy__reset_energy_impl
                  (pKVar11,iVar4,(Vector2f *)&local_60,(Vector3f *)&local_70,pBVar10);
        lib::L2CValue::~L2CValue(aLStack352);
        lib::L2CValue::~L2CValue(aLStack336);
        lib::L2CValue::~L2CValue(aLStack320);
        lib::L2CValue::~L2CValue(aLStack304);
        lib::L2CValue::~L2CValue(aLStack288);
        lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
        lib::L2CValue::L2CValue(aLStack288,0.0);
        uVar6 = lib::L2CValue::as_number((L2CValue *)&local_70);
        uVar17 = lib::L2CValue::as_number(aLStack288);
        local_60 = uVar6 & 0xffffffff | (ulong)uVar17 << 0x20;
        uStack88 = 0;
        pKVar12 = (KineticEnergyNormal *)lib::L2CValue::as_pointer((L2CValue *)auStack272);
        app::lua_bind::KineticEnergyNormal__set_accel_impl(pKVar12,(Vector2f *)&local_60);
        lib::L2CValue::~L2CValue(aLStack288);
        lib::L2CValue::~L2CValue((L2CValue *)&local_70);
        lib::L2CValue::L2CValue(aLStack288,0xfea97fe73);
        lib::L2CValue::L2CValue(aLStack304,0x1ba5455a63);
        uVar6 = lib::L2CValue::as_integer(aLStack288);
        uVar8 = lib::L2CValue::as_integer(aLStack304);
        fVar16 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar15,uVar6,uVar8);
        lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar16);
        lib::L2CValue::L2CValue(aLStack320,0.0);
        uVar6 = lib::L2CValue::as_number((L2CValue *)&local_70);
        uVar17 = lib::L2CValue::as_number(aLStack320);
        local_60 = uVar6 & 0xffffffff | (ulong)uVar17 << 0x20;
        uStack88 = 0;
        pKVar12 = (KineticEnergyNormal *)lib::L2CValue::as_pointer((L2CValue *)auStack272);
        app::lua_bind::KineticEnergyNormal__set_brake_impl(pKVar12,(Vector2f *)&local_60);
        lib::L2CValue::~L2CValue(aLStack320);
        lib::L2CValue::~L2CValue((L2CValue *)&local_70);
        lib::L2CValue::~L2CValue(aLStack304);
        lib::L2CValue::~L2CValue(aLStack288);
        lib::L2CValue::L2CValue(aLStack288,0xfea97fe73);
        lib::L2CValue::L2CValue(aLStack304,0x1cb9b01f22);
        uVar6 = lib::L2CValue::as_integer(aLStack288);
        uVar8 = lib::L2CValue::as_integer(aLStack304);
        fVar16 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar15,uVar6,uVar8);
        lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar16);
        lib::L2CValue::L2CValue(aLStack320,0.0);
        uVar6 = lib::L2CValue::as_number((L2CValue *)&local_70);
        uVar17 = lib::L2CValue::as_number(aLStack320);
        local_60 = uVar6 & 0xffffffff | (ulong)uVar17 << 0x20;
        uStack88 = 0;
        pKVar12 = (KineticEnergyNormal *)lib::L2CValue::as_pointer((L2CValue *)auStack272);
        app::lua_bind::KineticEnergyNormal__set_stable_speed_impl(pKVar12,(Vector2f *)&local_60);
        lib::L2CValue::~L2CValue(aLStack320);
        lib::L2CValue::~L2CValue((L2CValue *)&local_70);
        lib::L2CValue::~L2CValue(aLStack304);
        lib::L2CValue::~L2CValue(aLStack288);
        lib::L2CValue::L2CValue((L2CValue *)&local_70,-1.0);
        lib::L2CValue::L2CValue(aLStack288,-1.0);
        uVar6 = lib::L2CValue::as_number((L2CValue *)&local_70);
        uVar17 = lib::L2CValue::as_number(aLStack288);
        local_60 = uVar6 & 0xffffffff | (ulong)uVar17 << 0x20;
        uStack88 = 0;
        pKVar12 = (KineticEnergyNormal *)lib::L2CValue::as_pointer((L2CValue *)auStack272);
        app::lua_bind::KineticEnergyNormal__set_limit_speed_impl(pKVar12,(Vector2f *)&local_60);
        lib::L2CValue::~L2CValue(aLStack288);
        lib::L2CValue::~L2CValue((L2CValue *)&local_70);
        pKVar11 = (KineticEnergy *)lib::L2CValue::as_pointer((L2CValue *)auStack272);
        app::lua_bind::KineticEnergy__enable_impl(pKVar11);
        lib::L2CValue::L2CValue((L2CValue *)&local_60,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_60);
        pvVar9 = (void *)app::lua_bind::KineticModule__get_energy_impl(*ppBVar15,iVar4);
        lib::L2CValue::L2CValue(aLStack288,pvVar9);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        lib::L2CValue::L2CValue(aLStack304,_ENERGY_GRAVITY_RESET_TYPE_GRAVITY);
        lib::L2CValue::L2CValue(aLStack320,0.0);
        lib::L2CValue::L2CValue(aLStack336,0);
        lib::L2CValue::L2CValue(aLStack352,0);
        lib::L2CValue::L2CValue(aLStack368,0);
        pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)((long)param_1 + 200),5);
        iVar4 = lib::L2CValue::as_integer(aLStack304);
        uVar6 = lib::L2CValue::as_number(aLStack320);
        uVar17 = lib::L2CValue::as_number((L2CValue *)auStack256);
        local_60 = uVar6 & 0xffffffff | (ulong)uVar17 << 0x20;
        uStack88 = 0;
        uVar6 = lib::L2CValue::as_number(aLStack336);
        lVar19 = lib::L2CValue::as_number(aLStack352);
        uVar17 = lib::L2CValue::as_number(aLStack368);
        local_70 = uVar6 & 0xffffffff | lVar19 << 0x20;
        uStack104 = (ulong)uVar17;
        pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar7);
        pKVar11 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack288);
        app::lua_bind::KineticEnergy__reset_energy_impl
                  (pKVar11,iVar4,(Vector2f *)&local_60,(Vector3f *)&local_70,pBVar10);
        lib::L2CValue::~L2CValue(aLStack368);
        lib::L2CValue::~L2CValue(aLStack352);
        lib::L2CValue::~L2CValue(aLStack336);
        lib::L2CValue::~L2CValue(aLStack320);
        lib::L2CValue::~L2CValue(aLStack304);
        lib::L2CValue::L2CValue(aLStack304,0xfea97fe73);
        lib::L2CValue::L2CValue(aLStack320,0x153f3fc835);
        uVar6 = lib::L2CValue::as_integer(aLStack304);
        uVar8 = lib::L2CValue::as_integer(aLStack320);
        fVar16 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar15,uVar6,uVar8);
        lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar16);
        lib::L2CValue::operator-((L2CValue *)&local_70);
        fVar16 = (float)lib::L2CValue::as_number((L2CValue *)&local_60);
        pFVar13 = (FighterKineticEnergyGravity *)lib::L2CValue::as_pointer(aLStack288);
        app::lua_bind::FighterKineticEnergyGravity__set_accel_impl(pFVar13,fVar16);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        lib::L2CValue::~L2CValue((L2CValue *)&local_70);
        lib::L2CValue::~L2CValue(aLStack320);
        lib::L2CValue::~L2CValue(aLStack304);
        lib::L2CValue::L2CValue((L2CValue *)&local_70,0xfea97fe73);
        lib::L2CValue::L2CValue(aLStack304,0x1936620b1c);
        uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_70);
        uVar8 = lib::L2CValue::as_integer(aLStack304);
        fVar16 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar15,uVar6,uVar8);
        lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar16);
        fVar16 = (float)lib::L2CValue::as_number((L2CValue *)&local_60);
        pFVar13 = (FighterKineticEnergyGravity *)lib::L2CValue::as_pointer(aLStack288);
        app::lua_bind::FighterKineticEnergyGravity__set_stable_speed_impl(pFVar13,fVar16);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        lib::L2CValue::~L2CValue(aLStack304);
        lib::L2CValue::~L2CValue((L2CValue *)&local_70);
        pKVar11 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack288);
        app::lua_bind::KineticEnergy__enable_impl(pKVar11);
        lib::L2CValue::L2CValue((L2CValue *)&local_70,FIGHTER_KINETIC_ENERGY_ID_MOTION);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
        pvVar9 = (void *)app::lua_bind::KineticModule__get_energy_impl(*ppBVar15,iVar4);
        lib::L2CValue::L2CValue((L2CValue *)&local_60,pvVar9);
        lib::L2CValue::~L2CValue((L2CValue *)&local_70);
        pKVar11 = (KineticEnergy *)lib::L2CValue::as_pointer((L2CValue *)&local_60);
        app::lua_bind::KineticEnergy__unable_impl(pKVar11);
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_70,
                   _FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_AIR_S_FLAG_WALL_CHECK);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
        app::lua_bind::WorkModule__off_flag_impl(*ppBVar15,iVar4);
        lib::L2CValue::~L2CValue((L2CValue *)&local_70);
        lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_BAYONETTA_SHOOTING_STEP_SHOOTING);
        lib::L2CValue::L2CValue
                  (aLStack304,_FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_AIR_S_U_INT_STEP);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
        iVar5 = lib::L2CValue::as_integer(aLStack304);
        app::lua_bind::WorkModule__set_int_impl(*ppBVar15,iVar4,iVar5);
        lib::L2CValue::~L2CValue(aLStack304);
        lib::L2CValue::~L2CValue((L2CValue *)&local_70);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        lib::L2CValue::~L2CValue(aLStack288);
        puVar14 = auStack272;
LAB_710002a0c8:
        lib::L2CValue::~L2CValue((L2CValue *)puVar14);
LAB_710002a0cc:
        puVar14 = auStack256;
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)auStack256,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack256);
        uVar18 = app::lua_bind::KineticModule__get_sum_speed_impl(*ppBVar15,iVar4);
        lib::L2CValue::L2CValue(aLStack240,(float)uVar18);
        lib::L2CValue::L2CValue(aLStack224,(float)((ulong)uVar18 >> 0x20));
        lib::L2CValue::L2CValue((L2CValue *)&local_60,aLStack240);
        lib::L2CValue::L2CValue((L2CValue *)&local_70,aLStack224);
        lua2cpp::L2CFighterBase::Vector2__create
                  (param_1,(L2CValue)(cVar1 + -0x50),(L2CValue)(cVar1 + -0x60));
        lib::L2CValue::~L2CValue((L2CValue *)&local_70);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        lib::L2CValue::~L2CValue(aLStack224);
        lib::L2CValue::~L2CValue(aLStack240);
        lib::L2CValue::~L2CValue((L2CValue *)auStack256);
        pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x18cdc1683);
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_60,
                   _FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_AIR_S_U_FLOAT_MOTION_SPEED_X);
        fVar16 = (float)lib::L2CValue::as_number(pLVar7);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_60);
        app::lua_bind::WorkModule__set_float_impl(*ppBVar15,fVar16,iVar4);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x1fbdb2615);
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_60,
                   _FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_AIR_S_U_FLOAT_MOTION_SPEED_Y);
        fVar16 = (float)lib::L2CValue::as_number(pLVar7);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_60);
        app::lua_bind::WorkModule__set_float_impl(*ppBVar15,fVar16,iVar4);
        puVar14 = &local_60;
      }
      lib::L2CValue::~L2CValue((L2CValue *)puVar14);
      lib::L2CValue::~L2CValue(aLStack192);
LAB_710002a0dc:
      lVar19 = -0xa0;
      goto LAB_710002a0e0;
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_BAYONETTA_SHOOTING_STEP_SHOOTING);
    uVar6 = lib::L2CValue::operator==((L2CValue *)auStack160,(L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_60,_FIGHTER_BAYONETTA_INSTANCE_WORK_ID_INT_SHOOTING_STEP);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar15,iVar4);
      lib::L2CValue::L2CValue(aLStack176,iVar4);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_BAYONETTA_SHOOTING_STEP_SHOOTING);
      uVar6 = lib::L2CValue::operator==(aLStack176,(L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_KINETIC_ENERGY_ID_STOP);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_60);
        pvVar9 = (void *)app::lua_bind::KineticModule__get_energy_impl(*ppBVar15,iVar4);
        lib::L2CValue::L2CValue(aLStack192,pvVar9);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        pKVar11 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack192);
        uVar18 = app::lua_bind::KineticEnergy__get_speed_impl(pKVar11);
        lib::L2CValue::L2CValue(aLStack400,(float)uVar18);
        lib::L2CValue::L2CValue(aLStack384,(float)((ulong)uVar18 >> 0x20));
        lib::L2CValue::L2CValue((L2CValue *)&local_60,aLStack400);
        lib::L2CValue::L2CValue((L2CValue *)&local_70,aLStack384);
        lua2cpp::L2CFighterBase::Vector2__create
                  (param_1,(L2CValue)(cVar1 + -0x50),(L2CValue)(cVar1 + -0x60));
        lib::L2CValue::~L2CValue((L2CValue *)&local_70);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        lib::L2CValue::~L2CValue(aLStack384);
        lib::L2CValue::~L2CValue(aLStack400);
        pLVar7 = (L2CValue *)0x18cdc1683;
        this = (L2CAgent *)lib::L2CValue::operator[]((L2CValue *)auStack256,0x18cdc1683);
        lib::L2CAgent::math_abs(this,pLVar7);
        lib::L2CValue::L2CValue((L2CValue *)auStack272,0xfea97fe73);
        lib::L2CValue::L2CValue(aLStack288,0x1cb9b01f22);
        uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack272);
        uVar8 = lib::L2CValue::as_integer(aLStack288);
        fVar16 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar15,uVar6,uVar8);
        lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar16);
        uVar6 = lib::L2CValue::operator<=((L2CValue *)&local_60,(L2CValue *)&local_70);
        lib::L2CValue::~L2CValue((L2CValue *)&local_70);
        lib::L2CValue::~L2CValue(aLStack288);
        lib::L2CValue::~L2CValue((L2CValue *)auStack272);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_KINETIC_TYPE_AIR_STOP);
          iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_60);
          app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar15,iVar4);
          lib::L2CValue::~L2CValue((L2CValue *)&local_60);
          lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_BAYONETTA_SHOOTING_STEP_WAIT_END);
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_70,
                     _FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_AIR_S_U_INT_STEP);
          iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_60);
          iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_70);
          app::lua_bind::WorkModule__set_int_impl(*ppBVar15,iVar4,iVar5);
          lib::L2CValue::~L2CValue((L2CValue *)&local_70);
          puVar14 = &local_60;
          goto LAB_710002a0c8;
        }
        goto LAB_710002a0cc;
      }
      goto LAB_710002a0dc;
    }
LAB_710002a0e4:
    puVar14 = auStack160;
  }
  else {
    lib::L2CValue::L2CValue(aLStack144,true);
    FUN_7100006580(param_1,aLStack144);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::L2CValue
              ((L2CValue *)auStack160,_FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_S_FLAG_HIT);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack160);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar15,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,(bool)(bVar2 & 1));
    bVar3 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_70);
    if ((bVar3 & 1U) == 0) {
      lVar19 = -0x60;
LAB_710002a0e0:
      lib::L2CValue::~L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar19));
      goto LAB_710002a0e4;
    }
    lib::L2CValue::L2CValue
              (aLStack192,_FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_S_FLAG_HIT_CANCEL_OK);
    iVar4 = lib::L2CValue::as_integer(aLStack192);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar15,iVar4);
    lib::L2CValue::L2CValue(aLStack176,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_60,false);
    uVar6 = lib::L2CValue::operator==(aLStack176,(L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    lib::L2CValue::~L2CValue((L2CValue *)auStack160);
    if ((uVar6 & 1) == 0) goto LAB_710002a0ec;
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_70,_FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_S_INT_FRAME);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar15,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,iVar4);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    lib::L2CValue::L2CValue
              ((L2CValue *)auStack160,
               _FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_S_INT_ENABLE_HIT_CANCEL_FRAME);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack160);
    iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar15,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,iVar4);
    lib::L2CValue::~L2CValue((L2CValue *)auStack160);
    uVar6 = lib::L2CValue::operator<=((L2CValue *)&local_70,(L2CValue *)&local_60);
    if ((uVar6 & 1) != 0) {
      app::lua_bind::CancelModule__enable_cancel_impl(*ppBVar15);
      lib::L2CValue::L2CValue
                ((L2CValue *)auStack160,
                 _FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_S_FLAG_HIT_CANCEL_OK);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack160);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar15,iVar4);
      lib::L2CValue::~L2CValue((L2CValue *)auStack160);
    }
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    puVar14 = &local_60;
  }
LAB_710002a0e8:
  lib::L2CValue::~L2CValue((L2CValue *)puVar14);
LAB_710002a0ec:
  lib::L2CValue::~L2CValue(aLStack128);
  return;
}

