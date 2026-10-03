
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100041120(void *param_1)

{
  byte bVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  float *pfVar7;
  L2CValue *pLVar8;
  void *pvVar9;
  L2CValue *pLVar10;
  KineticEnergy *pKVar11;
  BattleObjectModuleAccessor *pBVar12;
  float fVar13;
  undefined8 uVar14;
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
  L2CValue aLStack96 [16];
  
  iVar4 = app::lua_bind::StatusModule__status_kind_impl
                    (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40));
  lib::L2CValue::L2CValue(aLStack96,iVar4);
  lib::L2CValue::L2CValue(aLStack304,FIGHTER_STATUS_KIND_FINAL);
  uVar6 = lib::L2CValue::operator==(aLStack96,aLStack304);
  lib::L2CValue::~L2CValue(aLStack304);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack304,_FIGHTER_RYU_STATUS_KIND_FINAL_HIT);
    uVar6 = lib::L2CValue::operator==(aLStack96,aLStack304);
    lib::L2CValue::~L2CValue(aLStack304);
    if ((uVar6 & 1) == 0) goto LAB_7100041628;
  }
  pfVar7 = (float *)app::lua_bind::PostureModule__pos_impl
                              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40));
  lib::L2CValue::L2CValue(aLStack160,*pfVar7);
  lib::L2CValue::L2CValue(aLStack144,pfVar7[1]);
  lib::L2CValue::L2CValue(aLStack128,pfVar7[2]);
  FUN_7100009f90(aLStack112,param_1,aLStack160);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack192,0.0);
  lib::L2CValue::L2CValue(aLStack208,0.0);
  lua2cpp::L2CFighterBase::Vector2__create(param_1,(L2CValue)0x40,(L2CValue)0x30);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack192);
  pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x18cdc1683);
  lib::L2CValue::L2CValue(aLStack240,_FIGHTER_RYU_STATUS_WORK_ID_FINAL_FLOAT_PREV_POS_X);
  iVar4 = lib::L2CValue::as_integer(aLStack240);
  fVar13 = (float)app::lua_bind::WorkModule__get_float_impl
                            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar4);
  lib::L2CValue::L2CValue(aLStack224,fVar13);
  lib::L2CValue::operator-(pLVar8,aLStack224);
  pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x18cdc1683);
  lib::L2CValue::operator=(pLVar8,aLStack304);
  lib::L2CValue::~L2CValue(aLStack304);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack240);
  pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x1fbdb2615);
  lib::L2CValue::L2CValue(aLStack240,_FIGHTER_RYU_STATUS_WORK_ID_FINAL_FLOAT_PREV_POS_Y);
  iVar4 = lib::L2CValue::as_integer(aLStack240);
  fVar13 = (float)app::lua_bind::WorkModule__get_float_impl
                            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar4);
  lib::L2CValue::L2CValue(aLStack224,fVar13);
  lib::L2CValue::operator-(pLVar8,aLStack224);
  pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x1fbdb2615);
  lib::L2CValue::operator=(pLVar8,aLStack304);
  lib::L2CValue::~L2CValue(aLStack304);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack240);
  bVar1 = app::lua_bind::StopModule__is_stop_impl
                    (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40));
  lib::L2CValue::L2CValue(aLStack224,(bool)(bVar1 & 1));
  lib::L2CValue::operator!(aLStack224);
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack304);
  lib::L2CValue::~L2CValue(aLStack304);
  lib::L2CValue::~L2CValue(aLStack224);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack304,FIGHTER_KINETIC_ENERGY_ID_MOTION);
    iVar4 = lib::L2CValue::as_integer(aLStack304);
    pvVar9 = (void *)app::lua_bind::KineticModule__get_energy_impl
                               (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar4);
    lib::L2CValue::L2CValue(aLStack224,pvVar9);
    lib::L2CValue::~L2CValue(aLStack304);
    lib::L2CValue::L2CValue(aLStack256,0.0);
    lib::L2CValue::L2CValue(aLStack272,0.0);
    lua2cpp::L2CFighterBase::Vector2__create(param_1,(L2CValue)0x0,(L2CValue)0xf0);
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CValue::~L2CValue(aLStack256);
    pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack240,0x18cdc1683);
    pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack240,0x1fbdb2615);
    pKVar11 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack224);
    uVar14 = app::lua_bind::KineticEnergy__get_speed_impl(pKVar11);
    lib::L2CValue::L2CValue(aLStack304,(float)uVar14);
    lib::L2CValue::L2CValue(aLStack288,(float)((ulong)uVar14 >> 0x20));
    lib::L2CValue::operator=(pLVar8,aLStack304);
    lib::L2CValue::operator=(pLVar10,aLStack288);
    lib::L2CValue::~L2CValue(aLStack288);
    lib::L2CValue::~L2CValue(aLStack304);
    pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x18cdc1683);
    pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack240,0x18cdc1683);
    lib::L2CValue::operator-(pLVar8,pLVar10);
    pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x18cdc1683);
    lib::L2CValue::operator=(pLVar8,aLStack304);
    lib::L2CValue::~L2CValue(aLStack304);
    pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x1fbdb2615);
    pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack240,0x1fbdb2615);
    lib::L2CValue::operator-(pLVar8,pLVar10);
    pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x1fbdb2615);
    lib::L2CValue::operator=(pLVar8,aLStack304);
    lib::L2CValue::~L2CValue(aLStack304);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack224);
  }
  pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x18cdc1683);
  lib::L2CValue::L2CValue(aLStack304,_FIGHTER_RYU_STATUS_WORK_ID_FINAL_FLOAT_MOVE_X);
  fVar13 = (float)lib::L2CValue::as_number(pLVar8);
  iVar4 = lib::L2CValue::as_integer(aLStack304);
  app::lua_bind::WorkModule__set_float_impl
            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),fVar13,iVar4);
  lib::L2CValue::~L2CValue(aLStack304);
  pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x1fbdb2615);
  lib::L2CValue::L2CValue(aLStack304,_FIGHTER_RYU_STATUS_WORK_ID_FINAL_FLOAT_MOVE_Y);
  fVar13 = (float)lib::L2CValue::as_number(pLVar8);
  iVar4 = lib::L2CValue::as_integer(aLStack304);
  app::lua_bind::WorkModule__set_float_impl
            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),fVar13,iVar4);
  lib::L2CValue::~L2CValue(aLStack304);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack112);
LAB_7100041628:
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_RYU_STATUS_WORK_ID_FINAL_FLAG_INVISIBLE_STAGE);
  iVar4 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar4);
  lib::L2CValue::L2CValue(aLStack304,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack304);
  lib::L2CValue::~L2CValue(aLStack304);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_RYU_STATUS_WORK_ID_FINAL_INT_INVISIBLE_STAGE_TIME);
    lib::L2CValue::L2CValue(aLStack112,0);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    iVar5 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::WorkModule__count_down_int_impl
                      (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar4,iVar5);
    lib::L2CValue::L2CValue(aLStack304,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack304);
    lib::L2CValue::~L2CValue(aLStack304);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((bVar2 & 1U) != 0) {
      pLVar8 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)((long)param_1 + 200),5);
      lib::L2CValue::L2CValue(aLStack304,true);
      lib::L2CValue::L2CValue(aLStack96,false);
      pBVar12 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar8);
      bVar1 = lib::L2CValue::as_bool(aLStack304);
      bVar3 = lib::L2CValue::as_bool(aLStack96);
      app::FighterSpecializer_Ryu::set_final_stage_disp_status
                (pBVar12,(bool)(bVar1 & 1),(bool)(bVar3 & 1));
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack304);
    }
  }
  return;
}

