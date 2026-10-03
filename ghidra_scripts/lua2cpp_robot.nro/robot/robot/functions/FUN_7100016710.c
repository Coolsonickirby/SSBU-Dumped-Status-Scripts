
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100016710(void *param_1,L2CValue *param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  ulong uVar6;
  ulong uVar7;
  L2CValue *pLVar8;
  L2CValue *this;
  KineticEnergy *pKVar9;
  FighterKineticEnergyGravity *pFVar10;
  Hash40 HVar11;
  FighterModuleAccessor *pFVar12;
  BattleObjectModuleAccessor **ppBVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
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
  
  lib::L2CValue::L2CValue(aLStack240,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
  iVar3 = lib::L2CValue::as_integer(aLStack240);
  ppBVar13 = (BattleObjectModuleAccessor **)((long)param_1 + 0x40);
  pvVar5 = (void *)app::lua_bind::KineticModule__get_energy_impl(*ppBVar13,iVar3);
  lib::L2CValue::L2CValue(aLStack112,pvVar5);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::L2CValue(aLStack240,_FIGHTER_ROBOT_INSTANCE_WORK_ID_FLOAT_BURNER_ENERGY_VALUE);
  iVar3 = lib::L2CValue::as_integer(aLStack240);
  fVar14 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar13,iVar3);
  lib::L2CValue::L2CValue(aLStack128,fVar14);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::L2CValue(aLStack144,0x4fb50df0c);
  lib::L2CValue::L2CValue(aLStack176,_FIGHTER_ROBOT_STATUS_BURNER_FLAG_PUSH_B_BUTTON);
  iVar3 = lib::L2CValue::as_integer(aLStack176);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar13,iVar3);
  lib::L2CValue::L2CValue(aLStack160,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack160);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack176);
LAB_7100016e54:
    lib::L2CValue::L2CValue(aLStack176,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack256,0x100d104a01);
    uVar6 = lib::L2CValue::as_integer(aLStack176);
    uVar7 = lib::L2CValue::as_integer(aLStack256);
    fVar14 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar13,uVar6,uVar7);
    lib::L2CValue::L2CValue(aLStack160,fVar14);
    lib::L2CValue::operator-(aLStack160);
    fVar14 = (float)lib::L2CValue::as_number(aLStack240);
    pFVar10 = (FighterKineticEnergyGravity *)lib::L2CValue::as_pointer(aLStack112);
    app::lua_bind::FighterKineticEnergyGravity__set_accel_impl(pFVar10,fVar14);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack256);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::L2CValue(aLStack160,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack176,0x14f292be40);
    uVar6 = lib::L2CValue::as_integer(aLStack160);
    uVar7 = lib::L2CValue::as_integer(aLStack176);
    fVar14 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar13,uVar6,uVar7);
    lib::L2CValue::L2CValue(aLStack240,fVar14);
    fVar14 = (float)lib::L2CValue::as_number(aLStack240);
    pFVar10 = (FighterKineticEnergyGravity *)lib::L2CValue::as_pointer(aLStack112);
    app::lua_bind::FighterKineticEnergyGravity__set_stable_speed_impl(pFVar10,fVar14);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::L2CValue(aLStack240,_FIGHTER_ROBOT_STATUS_BURNER_FLAG_JET_ON);
    iVar3 = lib::L2CValue::as_integer(aLStack240);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar13,iVar3);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_ROBOT_STATUS_BURNER_FLAG_JET_SE_ON);
    iVar3 = lib::L2CValue::as_integer(aLStack160);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar13,iVar3);
    lib::L2CValue::L2CValue(aLStack240,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack240);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack160);
    if ((bVar2 & 1U) == 0) goto LAB_71000170d0;
    lib::L2CValue::L2CValue(aLStack240,_FIGHTER_ROBOT_STATUS_BURNER_WORK_INT_SE_HANDLE);
    iVar3 = lib::L2CValue::as_integer(aLStack240);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar13,iVar3);
    lib::L2CValue::L2CValue(aLStack160,iVar3);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::L2CValue(aLStack240,0);
    uVar6 = lib::L2CValue::operator<=(aLStack240,aLStack160);
    lib::L2CValue::~L2CValue(aLStack240);
    if ((uVar6 & 1) != 0) {
      iVar3 = lib::L2CValue::as_integer(aLStack160);
      app::lua_bind::SoundModule__stop_se_handle_impl(*ppBVar13,iVar3,0);
    }
    lib::L2CValue::L2CValue(aLStack240,_FIGHTER_ROBOT_STATUS_BURNER_FLAG_JET_SE_ON);
    iVar3 = lib::L2CValue::as_integer(aLStack240);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar13,iVar3);
    pLVar8 = aLStack240;
  }
  else {
    lib::L2CValue::L2CValue(aLStack240,0.0);
    uVar6 = lib::L2CValue::operator<(aLStack240,aLStack128);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack176);
    if ((uVar6 & 1) == 0) goto LAB_7100016e54;
    lib::L2CValue::L2CValue(aLStack240,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack176,0xcf9a6aac2);
    uVar6 = lib::L2CValue::as_integer(aLStack240);
    uVar7 = lib::L2CValue::as_integer(aLStack176);
    fVar14 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar13,uVar6,uVar7);
    lib::L2CValue::L2CValue(aLStack160,fVar14);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::L2CValue(aLStack192,0.0);
    lib::L2CValue::L2CValue(aLStack208,0.0);
    lua2cpp::L2CFighterBase::Vector2__create(param_1,(L2CValue)0x40,(L2CValue)0x30);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack192);
    pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x18cdc1683);
    this = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x1fbdb2615);
    pKVar9 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack112);
    uVar17 = app::lua_bind::KineticEnergy__get_speed_impl(pKVar9);
    lib::L2CValue::L2CValue(aLStack240,(float)uVar17);
    lib::L2CValue::L2CValue(aLStack224,(float)((ulong)uVar17 >> 0x20));
    lib::L2CValue::operator=(pLVar8,aLStack240);
    lib::L2CValue::operator=(this,aLStack224);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue(aLStack240);
    pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x1fbdb2615);
    lib::L2CValue::L2CValue(aLStack256,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack272,0xe6f8f0be1);
    uVar6 = lib::L2CValue::as_integer(aLStack256);
    uVar7 = lib::L2CValue::as_integer(aLStack272);
    fVar14 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar13,uVar6,uVar7);
    lib::L2CValue::L2CValue(aLStack240,fVar14);
    uVar6 = lib::L2CValue::operator<=(aLStack240,pLVar8);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CValue::~L2CValue(aLStack256);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack256,0x1086bc4a93);
      lib::L2CValue::L2CValue(aLStack272,0x14be9a6b83);
      uVar6 = lib::L2CValue::as_integer(aLStack256);
      uVar7 = lib::L2CValue::as_integer(aLStack272);
      fVar14 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar13,uVar6,uVar7);
      lib::L2CValue::L2CValue(aLStack240,fVar14);
      lib::L2CValue::operator=(aLStack160,aLStack240);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::~L2CValue(aLStack272);
      lib::L2CValue::~L2CValue(aLStack256);
    }
    lib::L2CValue::L2CValue(aLStack272,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack288,0x100d104a01);
    uVar6 = lib::L2CValue::as_integer(aLStack272);
    uVar7 = lib::L2CValue::as_integer(aLStack288);
    fVar14 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar13,uVar6,uVar7);
    lib::L2CValue::L2CValue(aLStack256,fVar14);
    lib::L2CValue::operator-(aLStack160,aLStack256);
    fVar14 = (float)lib::L2CValue::as_number(aLStack240);
    pFVar10 = (FighterKineticEnergyGravity *)lib::L2CValue::as_pointer(aLStack112);
    app::lua_bind::FighterKineticEnergyGravity__set_accel_impl(pFVar10,fVar14);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack256);
    lib::L2CValue::~L2CValue(aLStack288);
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CValue::L2CValue(aLStack240,1.0);
    pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x1fbdb2615);
    lib::L2CValue::L2CValue(aLStack272,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack288,0xb5af02a17);
    uVar6 = lib::L2CValue::as_integer(aLStack272);
    uVar7 = lib::L2CValue::as_integer(aLStack288);
    fVar14 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar13,uVar6,uVar7);
    lib::L2CValue::L2CValue(aLStack256,fVar14);
    uVar6 = lib::L2CValue::operator<=(aLStack256,pLVar8);
    lib::L2CValue::~L2CValue(aLStack256);
    lib::L2CValue::~L2CValue(aLStack288);
    lib::L2CValue::~L2CValue(aLStack272);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack288,0x1086bc4a93);
      lib::L2CValue::L2CValue(aLStack304,0x16327c3960);
      uVar6 = lib::L2CValue::as_integer(aLStack288);
      uVar7 = lib::L2CValue::as_integer(aLStack304);
      fVar14 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar13,uVar6,uVar7);
      lib::L2CValue::L2CValue(aLStack272,fVar14);
      lib::L2CValue::operator*(aLStack240,aLStack272);
      lib::L2CValue::operator=(aLStack240,aLStack256);
      lib::L2CValue::~L2CValue(aLStack256);
      lib::L2CValue::~L2CValue(aLStack272);
      lib::L2CValue::~L2CValue(aLStack304);
      lib::L2CValue::~L2CValue(aLStack288);
    }
    lib::L2CValue::operator-(aLStack128,aLStack240);
    lib::L2CValue::operator=(aLStack128,aLStack256);
    lib::L2CValue::~L2CValue(aLStack256);
    lib::L2CValue::L2CValue(aLStack256,_FIGHTER_ROBOT_INSTANCE_WORK_ID_FLOAT_BURNER_ENERGY_VALUE);
    fVar14 = (float)lib::L2CValue::as_number(aLStack128);
    iVar3 = lib::L2CValue::as_integer(aLStack256);
    app::lua_bind::WorkModule__set_float_impl(*ppBVar13,fVar14,iVar3);
    lib::L2CValue::~L2CValue(aLStack256);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::L2CValue(aLStack240,_FIGHTER_ROBOT_STATUS_BURNER_FLAG_JET_ON);
    iVar3 = lib::L2CValue::as_integer(aLStack240);
    app::lua_bind::WorkModule__on_flag_impl(*ppBVar13,iVar3);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::L2CValue(aLStack272,_FIGHTER_ROBOT_STATUS_BURNER_FLAG_JET_SE_ON);
    iVar3 = lib::L2CValue::as_integer(aLStack272);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar13,iVar3);
    lib::L2CValue::L2CValue(aLStack256,(bool)(bVar1 & 1));
    lib::L2CValue::operator!(aLStack256);
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack240);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack256);
    lib::L2CValue::~L2CValue(aLStack272);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack256,0x14c1ffc561);
      HVar11 = lib::L2CValue::as_hash(aLStack256);
      iVar3 = app::lua_bind::SoundModule__play_se_impl(*ppBVar13,HVar11,true,false,false,false,0);
      lib::L2CValue::L2CValue(aLStack240,iVar3);
      lib::L2CValue::~L2CValue(aLStack256);
      lib::L2CValue::L2CValue(aLStack256,_FIGHTER_ROBOT_STATUS_BURNER_WORK_INT_SE_HANDLE);
      iVar3 = lib::L2CValue::as_integer(aLStack240);
      iVar4 = lib::L2CValue::as_integer(aLStack256);
      app::lua_bind::WorkModule__set_int_impl(*ppBVar13,iVar3,iVar4);
      lib::L2CValue::~L2CValue(aLStack256);
      lib::L2CValue::L2CValue(aLStack256,_FIGHTER_ROBOT_STATUS_BURNER_FLAG_JET_SE_ON);
      iVar3 = lib::L2CValue::as_integer(aLStack256);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar13,iVar3);
      lib::L2CValue::~L2CValue(aLStack256);
      lib::L2CValue::~L2CValue(aLStack240);
    }
    lib::L2CValue::L2CValue(aLStack240,0.0);
    uVar6 = lib::L2CValue::operator<=(aLStack128,aLStack240);
    lib::L2CValue::~L2CValue(aLStack240);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack240,0xfd77ba0bb);
      lib::L2CValue::operator=(aLStack144,aLStack240);
      lib::L2CValue::~L2CValue(aLStack240);
    }
    else {
      pLVar8 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)((long)param_1 + 200),5);
      pFVar12 = (FighterModuleAccessor *)lib::L2CValue::as_pointer(pLVar8);
      app::FighterSpecializer_Robot::close_burner(pFVar12);
      FUN_7100017b50(param_1);
    }
    pLVar8 = aLStack176;
  }
  lib::L2CValue::~L2CValue(pLVar8);
  lib::L2CValue::~L2CValue(aLStack160);
LAB_71000170d0:
  lib::L2CValue::operator!(param_2);
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack240);
  lib::L2CValue::~L2CValue(aLStack240);
  if ((bVar2 & 1U) != 0) {
    HVar11 = app::lua_bind::MotionModule__motion_kind_impl(*ppBVar13);
    lib::L2CValue::L2CValue(aLStack240,HVar11);
    uVar6 = lib::L2CValue::operator==(aLStack240,aLStack144);
    lib::L2CValue::~L2CValue(aLStack240);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack240,0.0);
      lib::L2CValue::L2CValue(aLStack160,1.0);
      lib::L2CValue::L2CValue(aLStack176,true);
      lib::L2CValue::L2CValue(aLStack256,4.0);
      HVar11 = lib::L2CValue::as_hash(aLStack144);
      fVar14 = (float)lib::L2CValue::as_number(aLStack240);
      fVar15 = (float)lib::L2CValue::as_number(aLStack160);
      bVar1 = lib::L2CValue::as_bool(aLStack176);
      fVar16 = (float)lib::L2CValue::as_number(aLStack256);
      app::lua_bind::MotionModule__change_motion_impl
                (*ppBVar13,HVar11,fVar14,fVar15,(bool)(bVar1 & 1),fVar16,false,false);
      lib::L2CValue::~L2CValue(aLStack256);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack240);
    }
  }
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  return;
}

