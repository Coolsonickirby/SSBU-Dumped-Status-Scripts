
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001bd90(void *param_1,L2CValue *param_2)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  L2CValue *pLVar4;
  L2CValue *pLVar5;
  L2CValue *pLVar6;
  float *pfVar7;
  L2CValue *this;
  L2CValue *this_00;
  L2CValue *this_01;
  Hash40 HVar8;
  undefined8 *puVar9;
  uint uVar10;
  float fVar11;
  ulong uVar12;
  BattleObjectModuleAccessor *pBVar13;
  undefined4 in_s3;
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
  undefined local_160 [8];
  uint local_158;
  undefined4 local_154;
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  undefined auStack208 [32];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  undefined8 local_90;
  ulong uStack136;
  
  lib::L2CValue::L2CValue(aLStack224,0.0);
  lib::L2CValue::L2CValue(aLStack240,0.0);
  lib::L2CValue::L2CValue(aLStack272,0.0);
  lib::L2CValue::L2CValue(aLStack288,0.0);
  lib::L2CValue::L2CValue(aLStack304,0.0);
  lua2cpp::L2CFighterBase::Vector3__create
            (param_1,SUB81(&stack0xfffffffffffffff0,0),(L2CValue)0xe0,(L2CValue)0xd0);
  lib::L2CValue::~L2CValue(aLStack304);
  lib::L2CValue::~L2CValue(aLStack288);
  lib::L2CValue::~L2CValue(aLStack272);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack256,0x18cdc1683);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack256,0x1fbdb2615);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack256,0x162d277af);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,_WEAPON_SZEROSUIT_SAMUSP_LINK_NO_RETICLE);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_90);
  pfVar7 = (float *)app::lua_bind::LinkModule__get_parent_pos_impl
                              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue((L2CValue *)local_160,*pfVar7);
  lib::L2CValue::L2CValue(aLStack336,pfVar7[1]);
  lib::L2CValue::L2CValue(aLStack320,pfVar7[2]);
  lib::L2CValue::operator=(pLVar4,(L2CValue *)local_160);
  lib::L2CValue::operator=(pLVar5,aLStack336);
  lib::L2CValue::operator=(pLVar6,aLStack320);
  lib::L2CValue::~L2CValue(aLStack320);
  lib::L2CValue::~L2CValue(aLStack336);
  lib::L2CValue::~L2CValue((L2CValue *)local_160);
  lib::L2CValue::~L2CValue((L2CValue *)&local_90);
  lib::L2CValue::L2CValue(aLStack384,0.0);
  lib::L2CValue::L2CValue(aLStack400,0.0);
  lib::L2CValue::L2CValue(aLStack416,0.0);
  lua2cpp::L2CFighterBase::Vector3__create(param_1,(L2CValue)0x80,(L2CValue)0x70,(L2CValue)0x60);
  lib::L2CValue::~L2CValue(aLStack416);
  lib::L2CValue::~L2CValue(aLStack400);
  lib::L2CValue::~L2CValue(aLStack384);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack368,0x18cdc1683);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack368,0x1fbdb2615);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack368,0x162d277af);
  lib::L2CValue::L2CValue(aLStack160,0x51a07c0e7);
  this = (L2CValue *)lib::L2CValue::operator[](aLStack368,0x18cdc1683);
  this_00 = (L2CValue *)lib::L2CValue::operator[](aLStack368,0x1fbdb2615);
  this_01 = (L2CValue *)lib::L2CValue::operator[](aLStack368,0x162d277af);
  HVar8 = lib::L2CValue::as_hash(aLStack160);
  uVar12 = lib::L2CValue::as_number(this);
  local_158 = lib::L2CValue::as_number(this_00);
  uVar10 = lib::L2CValue::as_number(this_01);
  pBVar13 = (BattleObjectModuleAccessor *)(uVar12 & 0xffffffff | (ulong)local_158 << 0x20);
  uStack136 = (ulong)uVar10;
  puVar9 = &local_90;
  local_90 = pBVar13;
  app::lua_bind::ModelModule__joint_global_position_impl
            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),HVar8,(Vector3f *)puVar9,true);
  local_160._4_4_ = SUB84(pBVar13,0);
  lib::L2CValue::L2CValue((L2CValue *)local_160,(float)local_90);
  lib::L2CValue::L2CValue(aLStack336,local_90._4_4_);
  lib::L2CValue::L2CValue(aLStack320,(float)uStack136);
  lib::L2CValue::operator=(pLVar4,(L2CValue *)local_160);
  lib::L2CValue::operator=(pLVar5,aLStack336);
  lib::L2CValue::operator=(pLVar6,aLStack320);
  lib::L2CValue::~L2CValue(aLStack320);
  lib::L2CValue::~L2CValue(aLStack336);
  lib::L2CValue::~L2CValue((L2CValue *)local_160);
  lib::L2CValue::~L2CValue(aLStack160);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack256,0x18cdc1683);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack368,0x18cdc1683);
  lib::L2CValue::operator-(pLVar4,pLVar5);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack256,0x1fbdb2615);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack368,0x1fbdb2615);
  lib::L2CValue::operator-(pLVar4,pLVar5);
  local_160._0_4_ = app::sv_camera_manager::camera_range();
  local_154 = in_s3;
  app::lua_bind::lib__Rect__store_l2c_table_impl((Rect *)local_160);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack368,0x1fbdb2615);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack464,0x31ed91fca);
  lib::L2CValue::operator-(pLVar4,pLVar5);
  lib::L2CAgent::math_abs((L2CAgent *)local_160,pLVar5);
  lib::L2CValue::~L2CValue((L2CValue *)local_160);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack368,0x1fbdb2615);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack464,0x6895f72a4);
  lib::L2CValue::operator-(pLVar4,pLVar5);
  lib::L2CAgent::math_abs((L2CAgent *)local_160,pLVar5);
  lib::L2CValue::~L2CValue((L2CValue *)local_160);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack368,0x18cdc1683);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack464,0x5b4ca7514);
  lib::L2CValue::operator-(pLVar4,pLVar5);
  lib::L2CAgent::math_abs((L2CAgent *)local_160,pLVar5);
  lib::L2CValue::~L2CValue((L2CValue *)local_160);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack368,0x18cdc1683);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack464,0x47a67e768);
  lib::L2CValue::operator-(pLVar4,pLVar5);
  lib::L2CAgent::math_abs((L2CAgent *)local_160,pLVar5);
  lib::L2CValue::~L2CValue((L2CValue *)local_160);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack256,0x18cdc1683);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack368,0x18cdc1683);
  uVar12 = lib::L2CValue::operator<(pLVar5,pLVar4);
  if ((uVar12 & 1) == 0) {
    lib::L2CValue::operator/(aLStack432,aLStack512);
    lib::L2CValue::operator=(aLStack224,(L2CValue *)local_160);
  }
  else {
    lib::L2CValue::operator/(aLStack432,aLStack528);
    lib::L2CValue::operator=(aLStack224,(L2CValue *)local_160);
  }
  lib::L2CValue::~L2CValue((L2CValue *)local_160);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack256,0x1fbdb2615);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack368,0x1fbdb2615);
  uVar12 = lib::L2CValue::operator<(pLVar5,pLVar4);
  if ((uVar12 & 1) == 0) {
    lib::L2CValue::operator/(aLStack448,aLStack496);
    lib::L2CValue::operator=(aLStack240,(L2CValue *)local_160);
  }
  else {
    lib::L2CValue::operator/(aLStack448,aLStack480);
    lib::L2CValue::operator=(aLStack240,(L2CValue *)local_160);
  }
  lib::L2CValue::~L2CValue((L2CValue *)local_160);
  lib::L2CValue::L2CValue(aLStack544);
  lib::L2CValue::L2CValue(aLStack560);
  bVar2 = lib::L2CValue::operator.cast.to.bool(param_2);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_90,_WEAPON_SZEROSUIT_SAMUSP_STATUS_WORK_FLOAT_REACH_PREV_X);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_90);
    fVar11 = (float)app::lua_bind::WorkModule__get_float_impl
                              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3);
    lib::L2CValue::L2CValue((L2CValue *)local_160,fVar11);
    lib::L2CValue::~L2CValue((L2CValue *)&local_90);
    lib::L2CValue::L2CValue(aLStack160,_WEAPON_SZEROSUIT_SAMUSP_STATUS_WORK_FLOAT_REACH_PREV_Y);
    iVar3 = lib::L2CValue::as_integer(aLStack160);
    fVar11 = (float)app::lua_bind::WorkModule__get_float_impl
                              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,fVar11);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::operator-(aLStack224,(L2CValue *)local_160);
    lib::L2CValue::operator+((L2CValue *)local_160,aLStack176);
    lib::L2CValue::operator=(aLStack544,aLStack160);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::operator-(aLStack240,(L2CValue *)&local_90);
    lib::L2CValue::operator+((L2CValue *)&local_90,aLStack176);
    lib::L2CValue::operator=(aLStack560,aLStack160);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue((L2CValue *)&local_90);
    lib::L2CValue::~L2CValue((L2CValue *)local_160);
  }
  else {
    lib::L2CValue::operator=(aLStack544,aLStack224);
    lib::L2CValue::operator=(aLStack560,aLStack240);
  }
  lib::L2CValue::L2CValue((L2CValue *)local_160,false);
  uVar12 = lib::L2CValue::operator==(param_2,(L2CValue *)local_160);
  lib::L2CValue::~L2CValue((L2CValue *)local_160);
  if ((uVar12 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_90,_WEAPON_SZEROSUIT_SAMUSP_STATUS_WORK_FLOAT_PREV_X)
    ;
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_90);
    fVar11 = (float)app::lua_bind::WorkModule__get_float_impl
                              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3);
    lib::L2CValue::L2CValue((L2CValue *)local_160,fVar11);
    lib::L2CValue::~L2CValue((L2CValue *)&local_90);
    lib::L2CValue::L2CValue(aLStack160,_WEAPON_SZEROSUIT_SAMUSP_STATUS_WORK_FLOAT_PREV_Y);
    iVar3 = lib::L2CValue::as_integer(aLStack160);
    fVar11 = (float)app::lua_bind::WorkModule__get_float_impl
                              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,fVar11);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::operator-(aLStack224,(L2CValue *)local_160);
    lib::L2CValue::operator+((L2CValue *)local_160,aLStack176);
    lib::L2CValue::operator=(aLStack224,aLStack160);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::operator-(aLStack240,(L2CValue *)&local_90);
    lib::L2CValue::operator+((L2CValue *)&local_90,aLStack176);
    lib::L2CValue::operator=(aLStack240,aLStack160);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue((L2CValue *)&local_90);
    lib::L2CValue::~L2CValue((L2CValue *)local_160);
  }
  lib::L2CValue::L2CValue(aLStack576,aLStack224);
  lib::L2CValue::L2CValue(aLStack592,aLStack240);
  lib::L2CValue::L2CValue(aLStack608,aLStack544);
  lib::L2CValue::L2CValue(aLStack624,aLStack560);
  lib::L2CValue::L2CValue(aLStack640,param_2);
  lib::L2CValue::operator*(aLStack608,aLStack608);
  lib::L2CValue::operator*(aLStack624,aLStack624);
  pLVar4 = aLStack160;
  lib::L2CValue::operator+((L2CValue *)&local_90,pLVar4);
  lib::L2CAgent::math_sqrt((L2CAgent *)local_160,pLVar4);
  lib::L2CValue::~L2CValue((L2CValue *)local_160);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue((L2CValue *)&local_90);
  lib::L2CValue::L2CValue((L2CValue *)local_160,1.0);
  uVar12 = lib::L2CValue::operator<((L2CValue *)local_160,aLStack176);
  lib::L2CValue::~L2CValue((L2CValue *)local_160);
  if ((uVar12 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)local_160,1.0);
    lib::L2CValue::operator=(aLStack176,(L2CValue *)local_160);
    lib::L2CValue::~L2CValue((L2CValue *)local_160);
  }
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack640);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)local_160,1.0);
    lib::L2CValue::operator-((L2CValue *)local_160,aLStack176);
    lib::L2CValue::~L2CValue((L2CValue *)local_160);
    fVar11 = (float)app::lua_bind::MotionModule__prev_weight_impl
                              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40));
    lib::L2CValue::L2CValue((L2CValue *)local_160,fVar11);
    lib::L2CValue::operator-(aLStack160,(L2CValue *)local_160);
    fVar11 = (float)lib::L2CValue::as_number((L2CValue *)&local_90);
    app::lua_bind::MotionModule__set_weight_rate_impl
              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),fVar11);
    lib::L2CValue::~L2CValue((L2CValue *)&local_90);
    lib::L2CValue::~L2CValue((L2CValue *)local_160);
    lVar1 = -0x90;
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)local_160,1.0);
    lib::L2CValue::operator-((L2CValue *)local_160,aLStack176);
    lib::L2CValue::~L2CValue((L2CValue *)local_160);
    fVar11 = (float)lib::L2CValue::as_number((L2CValue *)&local_90);
    app::lua_bind::MotionModule__set_weight_impl
              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),fVar11,true);
    lVar1 = -0x80;
  }
  lib::L2CValue::~L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar1));
  lib::L2CValue::L2CValue((L2CValue *)(auStack208 + 0x10),aLStack576);
  lib::L2CValue::L2CValue((L2CValue *)auStack208,aLStack592);
  pLVar4 = (L2CValue *)(auStack208 + 0x10);
  lib::L2CAgent::math_atan((L2CAgent *)auStack208,pLVar4,(L2CValue *)puVar9);
  lib::L2CAgent::math_deg((L2CAgent *)local_160,pLVar4);
  lib::L2CValue::~L2CValue((L2CValue *)local_160);
  lib::L2CValue::L2CValue((L2CValue *)local_160,360.0);
  uVar12 = lib::L2CValue::operator<((L2CValue *)local_160,(L2CValue *)&local_90);
  lib::L2CValue::~L2CValue((L2CValue *)local_160);
  if ((uVar12 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)local_160,0);
    uVar12 = lib::L2CValue::operator<((L2CValue *)&local_90,(L2CValue *)local_160);
    lib::L2CValue::~L2CValue((L2CValue *)local_160);
    if ((uVar12 & 1) == 0) goto LAB_710001c898;
    lib::L2CValue::L2CValue((L2CValue *)local_160,360.0);
    lib::L2CValue::operator+((L2CValue *)&local_90,(L2CValue *)local_160);
    lib::L2CValue::~L2CValue((L2CValue *)local_160);
    lib::L2CValue::operator=((L2CValue *)&local_90,aLStack160);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)local_160,360.0);
    lib::L2CValue::operator-((L2CValue *)&local_90,(L2CValue *)local_160);
    lib::L2CValue::~L2CValue((L2CValue *)local_160);
    lib::L2CValue::operator=((L2CValue *)&local_90,aLStack160);
  }
  lib::L2CValue::~L2CValue(aLStack160);
LAB_710001c898:
  fVar11 = (float)lib::L2CValue::as_number((L2CValue *)&local_90);
  app::lua_bind::MotionModule__set_frame_2nd_impl
            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),fVar11,true);
  lib::L2CValue::~L2CValue((L2CValue *)&local_90);
  lib::L2CValue::~L2CValue((L2CValue *)auStack208);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack208 + 0x10));
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack640);
  lib::L2CValue::~L2CValue(aLStack624);
  lib::L2CValue::~L2CValue(aLStack608);
  lib::L2CValue::~L2CValue(aLStack592);
  lib::L2CValue::~L2CValue(aLStack576);
  lib::L2CValue::L2CValue((L2CValue *)local_160,0.0);
  lib::L2CValue::operator+(aLStack224,(L2CValue *)local_160);
  lib::L2CValue::~L2CValue((L2CValue *)local_160);
  lib::L2CValue::L2CValue((L2CValue *)local_160,_WEAPON_SZEROSUIT_SAMUSP_STATUS_WORK_FLOAT_PREV_X);
  fVar11 = (float)lib::L2CValue::as_number((L2CValue *)&local_90);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)local_160);
  app::lua_bind::WorkModule__set_float_impl
            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),fVar11,iVar3);
  lib::L2CValue::~L2CValue((L2CValue *)local_160);
  lib::L2CValue::~L2CValue((L2CValue *)&local_90);
  lib::L2CValue::L2CValue((L2CValue *)local_160,0.0);
  lib::L2CValue::operator+(aLStack240,(L2CValue *)local_160);
  lib::L2CValue::~L2CValue((L2CValue *)local_160);
  lib::L2CValue::L2CValue((L2CValue *)local_160,_WEAPON_SZEROSUIT_SAMUSP_STATUS_WORK_FLOAT_PREV_Y);
  fVar11 = (float)lib::L2CValue::as_number((L2CValue *)&local_90);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)local_160);
  app::lua_bind::WorkModule__set_float_impl
            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),fVar11,iVar3);
  lib::L2CValue::~L2CValue((L2CValue *)local_160);
  lib::L2CValue::~L2CValue((L2CValue *)&local_90);
  lib::L2CValue::L2CValue((L2CValue *)local_160,0.0);
  lib::L2CValue::operator+(aLStack544,(L2CValue *)local_160);
  lib::L2CValue::~L2CValue((L2CValue *)local_160);
  lib::L2CValue::L2CValue
            ((L2CValue *)local_160,_WEAPON_SZEROSUIT_SAMUSP_STATUS_WORK_FLOAT_REACH_PREV_X);
  fVar11 = (float)lib::L2CValue::as_number((L2CValue *)&local_90);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)local_160);
  app::lua_bind::WorkModule__set_float_impl
            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),fVar11,iVar3);
  lib::L2CValue::~L2CValue((L2CValue *)local_160);
  lib::L2CValue::~L2CValue((L2CValue *)&local_90);
  lib::L2CValue::L2CValue((L2CValue *)local_160,0.0);
  lib::L2CValue::operator+(aLStack560,(L2CValue *)local_160);
  lib::L2CValue::~L2CValue((L2CValue *)local_160);
  lib::L2CValue::L2CValue
            ((L2CValue *)local_160,_WEAPON_SZEROSUIT_SAMUSP_STATUS_WORK_FLOAT_REACH_PREV_Y);
  fVar11 = (float)lib::L2CValue::as_number((L2CValue *)&local_90);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)local_160);
  app::lua_bind::WorkModule__set_float_impl
            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),fVar11,iVar3);
  lib::L2CValue::~L2CValue((L2CValue *)local_160);
  lib::L2CValue::~L2CValue((L2CValue *)&local_90);
  lib::L2CValue::~L2CValue(aLStack560);
  lib::L2CValue::~L2CValue(aLStack544);
  lib::L2CValue::~L2CValue(aLStack528);
  lib::L2CValue::~L2CValue(aLStack512);
  lib::L2CValue::~L2CValue(aLStack496);
  lib::L2CValue::~L2CValue(aLStack480);
  lib::L2CValue::~L2CValue(aLStack464);
  lib::L2CValue::~L2CValue(aLStack448);
  lib::L2CValue::~L2CValue(aLStack432);
  lib::L2CValue::~L2CValue(aLStack368);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack224);
  return;
}

