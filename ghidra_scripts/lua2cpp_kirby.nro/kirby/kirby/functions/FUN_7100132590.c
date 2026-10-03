
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100132590(L2CValue *param_1,void *param_2,L2CValue *param_3)

{
  long lVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  Hash40 HVar5;
  ulong uVar6;
  ulong uVar7;
  float *pfVar8;
  L2CValue *pLVar9;
  L2CValue *pLVar10;
  float fVar11;
  float fVar12;
  float fVar13;
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
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  
  lib::L2CValue::L2CValue(aLStack128,false);
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
  iVar4 = lib::L2CValue::as_integer(aLStack160);
  HVar5 = app::lua_bind::MotionModule__motion_kind_partial_impl
                    (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar4);
  lib::L2CValue::L2CValue(aLStack144,HVar5);
  lib::L2CValue::L2CValue(aLStack112,0x7fb997a80);
  uVar6 = lib::L2CValue::operator==(aLStack144,aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack192,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
    iVar4 = lib::L2CValue::as_integer(aLStack192);
    bVar2 = app::lua_bind::MotionModule__is_end_partial_impl
                      (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar4);
    lib::L2CValue::L2CValue(aLStack176,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue(aLStack112,true);
    uVar6 = lib::L2CValue::operator==(aLStack176,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack160);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack112,true);
      lib::L2CValue::operator=(aLStack128,aLStack112);
      lVar1 = -0x60;
      goto LAB_71001326cc;
    }
  }
  else {
    lib::L2CValue::~L2CValue(aLStack144);
    lVar1 = -0x90;
LAB_71001326cc:
    lib::L2CValue::~L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar1));
  }
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
  iVar4 = lib::L2CValue::as_integer(aLStack160);
  HVar5 = app::lua_bind::MotionModule__motion_kind_partial_impl
                    (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar4);
  lib::L2CValue::L2CValue(aLStack144,HVar5);
  lib::L2CValue::L2CValue(aLStack112,0x7fb997a80);
  uVar6 = lib::L2CValue::operator==(aLStack144,aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack176,_FIGHTER_PICKEL_STATUS_SPECIAL_N1_FLAG_MINING);
    iVar4 = lib::L2CValue::as_integer(aLStack176);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar4);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
    bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack160);
    if ((bVar3 & 1U) == 0) goto LAB_7100132b3c;
    lib::L2CValue::L2CValue(aLStack160,0xf899192aa);
    lib::L2CValue::L2CValue(aLStack176,0x11613c8362);
    uVar6 = lib::L2CValue::as_integer(aLStack160);
    uVar7 = lib::L2CValue::as_integer(aLStack176);
    fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl
                              (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),uVar6,uVar7);
    lib::L2CValue::L2CValue(aLStack112,fVar11);
    fVar11 = (float)app::lua_bind::PostureModule__scale_impl
                              (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40));
    lib::L2CValue::L2CValue(aLStack192,fVar11);
    lib::L2CValue::operator*(aLStack112,aLStack192);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PICKEL_STATUS_SPECIAL_N1_FLOAT_MINING_POS_X);
    iVar4 = lib::L2CValue::as_integer(aLStack112);
    fVar11 = (float)app::lua_bind::WorkModule__get_float_impl
                              (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar4);
    lib::L2CValue::L2CValue(aLStack208,fVar11);
    lib::L2CValue::L2CValue(aLStack176,_FIGHTER_PICKEL_STATUS_SPECIAL_N1_FLOAT_MINING_POS_Y);
    iVar4 = lib::L2CValue::as_integer(aLStack176);
    fVar11 = (float)app::lua_bind::WorkModule__get_float_impl
                              (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar4);
    lib::L2CValue::L2CValue(aLStack224,fVar11);
    lib::L2CValue::L2CValue(aLStack192,_FIGHTER_PICKEL_STATUS_SPECIAL_N1_FLOAT_MINING_POS_Z);
    iVar4 = lib::L2CValue::as_integer(aLStack192);
    fVar11 = (float)app::lua_bind::WorkModule__get_float_impl
                              (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar4);
    lib::L2CValue::L2CValue(aLStack240,fVar11);
    lua2cpp::L2CFighterBase::Vector3__create(param_2,(L2CValue)0x30,(L2CValue)0x20,(L2CValue)0x10);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack112);
    pfVar8 = (float *)app::lua_bind::PostureModule__pos_impl
                                (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40));
    lib::L2CValue::L2CValue(aLStack288,*pfVar8);
    lib::L2CValue::L2CValue(aLStack272,pfVar8[1]);
    lib::L2CValue::L2CValue(aLStack256,pfVar8[2]);
    FUN_7100009380(aLStack176,param_2,aLStack288);
    lib::L2CValue::~L2CValue(aLStack256);
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CValue::~L2CValue(aLStack288);
    pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x18cdc1683);
    pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x18cdc1683);
    lib::L2CValue::operator-(pLVar9,pLVar10);
    pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x1fbdb2615);
    pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x1fbdb2615);
    lib::L2CValue::operator-(pLVar9,pLVar10);
    pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x162d277af);
    pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x162d277af);
    lib::L2CValue::operator-(pLVar9,pLVar10);
    fVar11 = (float)lib::L2CValue::as_number(aLStack112);
    fVar12 = (float)lib::L2CValue::as_number(aLStack304);
    fVar13 = (float)lib::L2CValue::as_number(aLStack320);
    fVar11 = (float)app::sv_math::vec3_length(fVar11,fVar12,fVar13);
    lib::L2CValue::L2CValue(aLStack192,fVar11);
    lib::L2CValue::~L2CValue(aLStack320);
    lib::L2CValue::~L2CValue(aLStack304);
    lib::L2CValue::~L2CValue(aLStack112);
    uVar6 = lib::L2CValue::operator<=(aLStack144,aLStack192);
    if ((uVar6 & 1) != 0) {
      FUN_7100133590(aLStack336,param_2);
      lib::L2CValue::~L2CValue(aLStack336);
      lib::L2CValue::L2CValue(aLStack320,_FIGHTER_PICKEL_STATUS_SPECIAL_N1_FLAG_MINING);
      iVar4 = lib::L2CValue::as_integer(aLStack320);
      bVar2 = app::lua_bind::WorkModule__is_flag_impl
                        (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar4);
      lib::L2CValue::L2CValue(aLStack304,(bool)(bVar2 & 1));
      lib::L2CValue::L2CValue(aLStack112,false);
      uVar6 = lib::L2CValue::operator==(aLStack304,aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack304);
      lib::L2CValue::~L2CValue(aLStack320);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack112,true);
        lib::L2CValue::operator=(aLStack128,aLStack112);
        lib::L2CValue::~L2CValue(aLStack112);
      }
    }
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack160);
    lVar1 = -0x80;
  }
  else {
    lib::L2CValue::~L2CValue(aLStack144);
    lVar1 = -0x90;
  }
  lib::L2CValue::~L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar1));
LAB_7100132b3c:
  bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack128);
  if ((bVar3 & 1U) == 0) {
    lib::L2CValue::L2CValue(param_1,false);
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,_FS_SUCCEEDS_KEEP_TRANSITION);
    iVar4 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::StatusModule__set_succeeds_bit_impl
              (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar4);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack352,param_3);
    lib::L2CValue::L2CValue(aLStack368,false);
    lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0xa0,(L2CValue)0x90);
    lib::L2CValue::~L2CValue(aLStack368);
    lib::L2CValue::~L2CValue(aLStack352);
    lib::L2CValue::L2CValue(param_1,true);
  }
  lib::L2CValue::~L2CValue(aLStack128);
  return;
}

