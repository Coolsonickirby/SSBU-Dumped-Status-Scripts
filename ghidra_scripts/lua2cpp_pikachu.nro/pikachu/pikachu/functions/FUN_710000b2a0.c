
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710000b2a0(void *param_1,undefined8 param_2,L2CValue *param_3)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  EColorKind EVar4;
  int iVar5;
  ulong uVar6;
  ulong *this;
  L2CValue *pLVar7;
  L2CValue *this_00;
  L2CValue *this_01;
  L2CValue *this_02;
  L2CValue *this_03;
  L2CValue *this_04;
  Hash40 HVar8;
  BattleObjectModuleAccessor *pBVar9;
  BattleObjectModuleAccessor **ppBVar10;
  float fVar11;
  float fVar12;
  uint uVar13;
  uint uVar14;
  float fVar15;
  undefined8 uVar16;
  long lVar17;
  ulong uVar18;
  L2CValue aLStack560 [16];
  L2CValue aLStack544 [16];
  L2CValue aLStack528 [16];
  L2CValue aLStack512 [16];
  L2CValue aLStack496 [16];
  L2CValue aLStack480 [16];
  L2CValue aLStack464 [16];
  L2CValue aLStack448 [16];
  L2CValue aLStack432 [16];
  ulong local_1a0;
  ulong uStack408;
  L2CValue aLStack400 [16];
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  undefined auStack288 [16];
  undefined auStack272 [32];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  undefined8 local_90;
  ulong uStack136;
  
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_1a0,_FIGHTER_PIKACHU_STATUS_WORK_ID_INT_QUICK_ATTACK_PHASE);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_1a0);
  ppBVar10 = (BattleObjectModuleAccessor **)((long)param_1 + 0x40);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar3);
  lib::L2CValue::L2CValue(aLStack160,iVar3);
  lib::L2CValue::~L2CValue((L2CValue *)&local_1a0);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_1a0,_FIGHTER_PIKACHU_STATUS_WORK_ID_INT_QUICK_ATTACK_COUNT);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_1a0);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar3);
  lib::L2CValue::L2CValue(aLStack176,iVar3);
  lib::L2CValue::~L2CValue((L2CValue *)&local_1a0);
  lib::L2CValue::L2CValue(aLStack192,true);
  bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack192);
  if ((bVar1 & 1U) != 0) {
    FUN_710000c820(param_1);
  }
  FUN_710000ad30(aLStack208,param_1);
  lib::L2CValue::L2CValue(aLStack224,true);
  lib::L2CValue::L2CValue(aLStack240,false);
  iVar3 = app::lua_bind::StatusModule__status_kind_impl(*ppBVar10);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_1a0,_FIGHTER_STATUS_KIND_SPECIAL_HI);
  uVar6 = lib::L2CValue::operator==((L2CValue *)&local_90,(L2CValue *)&local_1a0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_1a0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_90);
  if ((uVar6 & 1) != 0) {
    fVar11 = (float)app::lua_bind::MotionModule__frame_impl(*ppBVar10);
    lib::L2CValue::L2CValue((L2CValue *)(auStack272 + 0x10),fVar11);
    lib::L2CValue::L2CValue((L2CValue *)&local_1a0,1.0);
    lib::L2CValue::operator+((L2CValue *)(auStack272 + 0x10),(L2CValue *)&local_1a0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_1a0);
    lib::L2CValue::L2CValue(aLStack304,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack320,0x1b0a953b9e);
    uVar6 = lib::L2CValue::as_integer(aLStack304);
    param_3 = (L2CValue *)lib::L2CValue::as_integer(aLStack320);
    iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar10,uVar6,(ulong)param_3);
    lib::L2CValue::L2CValue((L2CValue *)auStack288,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_1a0,0.0);
    lib::L2CValue::operator+((L2CValue *)auStack288,(L2CValue *)&local_1a0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_1a0);
    uVar6 = lib::L2CValue::operator<((L2CValue *)&local_90,(L2CValue *)auStack272);
    lib::L2CValue::~L2CValue((L2CValue *)auStack272);
    lib::L2CValue::~L2CValue((L2CValue *)auStack288);
    lib::L2CValue::~L2CValue(aLStack320);
    lib::L2CValue::~L2CValue(aLStack304);
    lib::L2CValue::~L2CValue((L2CValue *)&local_90);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack272 + 0x10));
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_1a0,false);
      lib::L2CValue::operator=(aLStack224,(L2CValue *)&local_1a0);
      goto LAB_710000b4d8;
    }
    goto LAB_710000b828;
  }
  iVar3 = app::lua_bind::StatusModule__status_kind_impl(*ppBVar10);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_1a0,_FIGHTER_PIKACHU_STATUS_KIND_SPECIAL_HI_WARP);
  uVar6 = lib::L2CValue::operator==((L2CValue *)&local_90,(L2CValue *)&local_1a0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_1a0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_90);
  if ((uVar6 & 1) == 0) {
    iVar3 = app::lua_bind::StatusModule__status_kind_impl(*ppBVar10);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_1a0,_FIGHTER_PIKACHU_STATUS_KIND_SPECIAL_HI_END);
    uVar6 = lib::L2CValue::operator==((L2CValue *)&local_90,(L2CValue *)&local_1a0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_1a0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_90);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_1a0,0);
      uVar6 = lib::L2CValue::operator==(aLStack160,(L2CValue *)&local_1a0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_1a0);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_1a0,2);
        uVar6 = lib::L2CValue::operator==(aLStack160,(L2CValue *)&local_1a0);
        lib::L2CValue::~L2CValue((L2CValue *)&local_1a0);
        if ((uVar6 & 1) == 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_1a0,1);
          uVar6 = lib::L2CValue::operator==(aLStack160,(L2CValue *)&local_1a0);
          lib::L2CValue::~L2CValue((L2CValue *)&local_1a0);
          if ((uVar6 & 1) == 0) goto LAB_710000b828;
          lib::L2CValue::L2CValue((L2CValue *)&local_1a0,false);
          lib::L2CValue::operator=(aLStack224,(L2CValue *)&local_1a0);
        }
        else {
          lib::L2CValue::L2CValue((L2CValue *)&local_1a0,false);
          lib::L2CValue::operator=(aLStack224,(L2CValue *)&local_1a0);
        }
LAB_710000b4d8:
        this = &local_1a0;
        goto LAB_710000b824;
      }
      lib::L2CValue::operator=(aLStack224,aLStack208);
    }
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)auStack272,0x1086bc4a93);
    lib::L2CValue::L2CValue((L2CValue *)auStack288,0x1c9b2f4207);
    uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack272);
    param_3 = (L2CValue *)lib::L2CValue::as_integer((L2CValue *)auStack288);
    iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar10,uVar6,(ulong)param_3);
    lib::L2CValue::L2CValue((L2CValue *)(auStack272 + 0x10),iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_1a0,0.0);
    lib::L2CValue::operator+((L2CValue *)(auStack272 + 0x10),(L2CValue *)&local_1a0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_1a0);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack272 + 0x10));
    lib::L2CValue::~L2CValue((L2CValue *)auStack288);
    lib::L2CValue::~L2CValue((L2CValue *)auStack272);
    lib::L2CValue::L2CValue((L2CValue *)&local_1a0,0);
    uVar6 = lib::L2CValue::operator==(aLStack176,(L2CValue *)&local_1a0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_1a0);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_1a0,1);
      uVar6 = lib::L2CValue::operator==(aLStack176,(L2CValue *)&local_1a0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_1a0);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_1a0,true);
        lib::L2CValue::operator=(aLStack240,(L2CValue *)&local_1a0);
        lib::L2CValue::~L2CValue((L2CValue *)&local_1a0);
        fVar11 = (float)app::lua_bind::MotionModule__frame_impl(*ppBVar10);
        lib::L2CValue::L2CValue((L2CValue *)&local_1a0,fVar11);
        uVar6 = lib::L2CValue::operator<((L2CValue *)&local_1a0,(L2CValue *)&local_90);
        lib::L2CValue::~L2CValue((L2CValue *)&local_1a0);
        if ((uVar6 & 1) == 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_1a0,false);
          lib::L2CValue::operator=(aLStack224,(L2CValue *)&local_1a0);
        }
        else {
          lib::L2CValue::L2CValue((L2CValue *)&local_1a0,true);
          lib::L2CValue::operator=(aLStack224,(L2CValue *)&local_1a0);
        }
        goto LAB_710000b818;
      }
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)&local_1a0,true);
      lib::L2CValue::operator=(aLStack240,(L2CValue *)&local_1a0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_1a0);
      fVar11 = (float)app::lua_bind::MotionModule__frame_impl(*ppBVar10);
      lib::L2CValue::L2CValue((L2CValue *)&local_1a0,fVar11);
      uVar6 = lib::L2CValue::operator<((L2CValue *)&local_1a0,(L2CValue *)&local_90);
      lib::L2CValue::~L2CValue((L2CValue *)&local_1a0);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_1a0,false);
        lib::L2CValue::operator=(aLStack224,(L2CValue *)&local_1a0);
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)&local_1a0,true);
        lib::L2CValue::operator=(aLStack224,(L2CValue *)&local_1a0);
      }
LAB_710000b818:
      lib::L2CValue::~L2CValue((L2CValue *)&local_1a0);
    }
    this = &local_90;
LAB_710000b824:
    lib::L2CValue::~L2CValue((L2CValue *)this);
  }
LAB_710000b828:
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_1a0,_FIGHTER_PIKACHU_STATUS_WORK_ID_FLOAT_QUICK_ATTACK_WARP_SPEED_X)
  ;
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_1a0);
  fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar10,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)(auStack272 + 0x10),fVar11);
  lib::L2CValue::~L2CValue((L2CValue *)&local_1a0);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_1a0,_FIGHTER_PIKACHU_STATUS_WORK_ID_FLOAT_QUICK_ATTACK_WARP_SPEED_Y)
  ;
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_1a0);
  fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar10,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)auStack272,fVar11);
  lib::L2CValue::~L2CValue((L2CValue *)&local_1a0);
  fVar11 = (float)lib::L2CValue::as_number((L2CValue *)(auStack272 + 0x10));
  fVar12 = (float)lib::L2CValue::as_number((L2CValue *)auStack272);
  uVar16 = app::sv_math::vec2_normalize(fVar11,fVar12);
  lib::L2CValue::L2CValue((L2CValue *)&local_1a0,(float)uVar16);
  lib::L2CValue::L2CValue(aLStack400,(float)((ulong)uVar16 >> 0x20));
  lib::L2CValue::operator=((L2CValue *)(auStack272 + 0x10),(L2CValue *)&local_1a0);
  lib::L2CValue::operator=((L2CValue *)auStack272,aLStack400);
  lib::L2CValue::~L2CValue(aLStack400);
  lib::L2CValue::~L2CValue((L2CValue *)&local_1a0);
  lib::L2CAgent::math_atan((L2CAgent *)auStack272,(L2CValue *)(auStack272 + 0x10),param_3);
  lib::L2CValue::L2CValue(aLStack336,0.0);
  lib::L2CValue::L2CValue(aLStack352,0.0);
  lib::L2CValue::L2CValue(aLStack368,0.0);
  lua2cpp::L2CFighterBase::Vector3__create(param_1,(L2CValue)0xb0,(L2CValue)0xa0,(L2CValue)0x90);
  lib::L2CValue::~L2CValue(aLStack368);
  lib::L2CValue::~L2CValue(aLStack352);
  lib::L2CValue::~L2CValue(aLStack336);
  pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack304,0x18cdc1683);
  this_00 = (L2CValue *)lib::L2CValue::operator[](aLStack304,0x1fbdb2615);
  this_01 = (L2CValue *)lib::L2CValue::operator[](aLStack304,0x162d277af);
  lib::L2CValue::L2CValue(aLStack320,0x31ed91fca);
  this_02 = (L2CValue *)lib::L2CValue::operator[](aLStack304,0x18cdc1683);
  this_03 = (L2CValue *)lib::L2CValue::operator[](aLStack304,0x1fbdb2615);
  this_04 = (L2CValue *)lib::L2CValue::operator[](aLStack304,0x162d277af);
  HVar8 = lib::L2CValue::as_hash(aLStack320);
  uVar6 = lib::L2CValue::as_number(this_02);
  lVar17 = lib::L2CValue::as_number(this_03);
  uVar13 = lib::L2CValue::as_number(this_04);
  local_90 = uVar6 & 0xffffffff | lVar17 << 0x20;
  uStack136 = (ulong)uVar13;
  app::lua_bind::ModelModule__joint_global_position_impl(*ppBVar10,HVar8,(Vector3f *)&local_90,true)
  ;
  lib::L2CValue::L2CValue((L2CValue *)&local_1a0,(float)local_90);
  lib::L2CValue::L2CValue(aLStack400,local_90._4_4_);
  lib::L2CValue::L2CValue(aLStack384,(float)uStack136);
  lib::L2CValue::operator=(pLVar7,(L2CValue *)&local_1a0);
  lib::L2CValue::operator=(this_00,aLStack400);
  lib::L2CValue::operator=(this_01,aLStack384);
  lib::L2CValue::~L2CValue(aLStack384);
  lib::L2CValue::~L2CValue(aLStack400);
  lib::L2CValue::~L2CValue((L2CValue *)&local_1a0);
  lib::L2CValue::~L2CValue(aLStack320);
  pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack304,0x1fbdb2615);
  lib::L2CValue::L2CValue((L2CValue *)&local_1a0,5.0);
  lib::L2CValue::operator+(pLVar7,(L2CValue *)&local_1a0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_1a0);
  pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack304,0x1fbdb2615);
  lib::L2CValue::operator=(pLVar7,(L2CValue *)&local_90);
  lib::L2CValue::~L2CValue((L2CValue *)&local_90);
  pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack304,0x18cdc1683);
  lib::L2CValue::L2CValue((L2CValue *)&local_1a0,10.0);
  lib::L2CValue::operator*((L2CValue *)&local_1a0,(L2CValue *)(auStack272 + 0x10));
  lib::L2CValue::~L2CValue((L2CValue *)&local_1a0);
  fVar11 = (float)app::lua_bind::PostureModule__scale_impl(*ppBVar10);
  lib::L2CValue::L2CValue((L2CValue *)&local_1a0,fVar11);
  lib::L2CValue::operator*(aLStack432,(L2CValue *)&local_1a0);
  lib::L2CValue::operator+(pLVar7,(L2CValue *)&local_90);
  lib::L2CValue::~L2CValue((L2CValue *)&local_90);
  lib::L2CValue::~L2CValue((L2CValue *)&local_1a0);
  lib::L2CValue::~L2CValue(aLStack432);
  pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack304,0x1fbdb2615);
  lib::L2CValue::L2CValue((L2CValue *)&local_1a0,10.0);
  lib::L2CValue::operator*((L2CValue *)&local_1a0,(L2CValue *)auStack272);
  lib::L2CValue::~L2CValue((L2CValue *)&local_1a0);
  fVar11 = (float)app::lua_bind::PostureModule__scale_impl(*ppBVar10);
  lib::L2CValue::L2CValue((L2CValue *)&local_1a0,fVar11);
  lib::L2CValue::operator*(aLStack448,(L2CValue *)&local_1a0);
  lib::L2CValue::operator+(pLVar7,(L2CValue *)&local_90);
  lib::L2CValue::~L2CValue((L2CValue *)&local_90);
  lib::L2CValue::~L2CValue((L2CValue *)&local_1a0);
  lib::L2CValue::~L2CValue(aLStack448);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_1a0,
             _FIGHTER_PIKACHU_STATUS_WORK_ID_INT_QUICK_ATTACK_GUIDE_EFFECT_HANDLE);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_1a0);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar3);
  lib::L2CValue::L2CValue(aLStack448,iVar3);
  lib::L2CValue::~L2CValue((L2CValue *)&local_1a0);
  lib::L2CValue::L2CValue((L2CValue *)&local_1a0,0);
  uVar6 = lib::L2CValue::operator==(aLStack448,(L2CValue *)&local_1a0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_1a0);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_1a0,false);
    uVar6 = lib::L2CValue::operator==(aLStack240,(L2CValue *)&local_1a0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_1a0);
    if ((uVar6 & 1) == 0) goto LAB_710000c190;
    lib::L2CValue::L2CValue((L2CValue *)&local_90,0.0);
    uVar6 = lib::L2CValue::as_integer(aLStack448);
    uVar18 = lib::L2CValue::as_number(aLStack320);
    lVar17 = lib::L2CValue::as_number(aLStack432);
    uVar13 = lib::L2CValue::as_number((L2CValue *)&local_90);
    local_1a0 = uVar18 & 0xffffffff | lVar17 << 0x20;
    uStack408 = (ulong)uVar13;
    pLVar7 = (L2CValue *)(uVar6 & 0xffffffff);
    app::lua_bind::EffectModule__set_pos_impl(*ppBVar10,(uint)pLVar7,(Vector3f *)&local_1a0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_90);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,0.0);
    lib::L2CValue::L2CValue(aLStack464,0.0);
    lib::L2CAgent::math_deg((L2CAgent *)auStack288,pLVar7);
    lib::L2CValue::L2CValue((L2CValue *)&local_1a0,90.0);
    lib::L2CValue::operator-(aLStack496,(L2CValue *)&local_1a0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_1a0);
    uVar13 = lib::L2CValue::as_integer(aLStack448);
    uVar6 = lib::L2CValue::as_number((L2CValue *)&local_90);
    lVar17 = lib::L2CValue::as_number(aLStack464);
    uVar14 = lib::L2CValue::as_number(aLStack480);
    local_1a0 = uVar6 & 0xffffffff | lVar17 << 0x20;
    uStack408 = (ulong)uVar14;
    app::lua_bind::EffectModule__set_rot_impl(*ppBVar10,uVar13,(Vector3f *)&local_1a0);
    lib::L2CValue::~L2CValue(aLStack480);
    pLVar7 = aLStack496;
  }
  else {
    lib::L2CValue::L2CValue(aLStack480,0xe694f9d4f);
    lib::L2CValue::L2CValue(aLStack496,0.0);
    lib::L2CValue::L2CValue(aLStack512,0.0);
    lib::L2CValue::L2CValue(aLStack528,0.0);
    lib::L2CValue::L2CValue(aLStack544,0.0);
    lib::L2CValue::L2CValue(aLStack560,1.0);
    HVar8 = lib::L2CValue::as_hash(aLStack480);
    uVar6 = lib::L2CValue::as_number(aLStack320);
    lVar17 = lib::L2CValue::as_number(aLStack432);
    uVar13 = lib::L2CValue::as_number(aLStack496);
    local_1a0 = uVar6 & 0xffffffff | lVar17 << 0x20;
    uStack408 = (ulong)uVar13;
    uVar6 = lib::L2CValue::as_number(aLStack512);
    lVar17 = lib::L2CValue::as_number(aLStack528);
    uVar13 = lib::L2CValue::as_number(aLStack544);
    local_90 = uVar6 & 0xffffffff | lVar17 << 0x20;
    uStack136 = (ulong)uVar13;
    fVar11 = (float)lib::L2CValue::as_number(aLStack560);
    uVar13 = app::lua_bind::EffectModule__req_impl
                       (*ppBVar10,HVar8,(Vector3f *)&local_1a0,(Vector3f *)&local_90,fVar11,0,-1,
                        false,0);
    lib::L2CValue::L2CValue(aLStack464,uVar13);
    pLVar7 = aLStack464;
    lib::L2CValue::operator=(aLStack448,pLVar7);
    lib::L2CValue::~L2CValue(aLStack464);
    lib::L2CValue::~L2CValue(aLStack560);
    lib::L2CValue::~L2CValue(aLStack544);
    lib::L2CValue::~L2CValue(aLStack528);
    lib::L2CValue::~L2CValue(aLStack512);
    lib::L2CValue::~L2CValue(aLStack496);
    lib::L2CValue::~L2CValue(aLStack480);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,0.0);
    lib::L2CValue::L2CValue(aLStack464,0.0);
    lib::L2CAgent::math_deg((L2CAgent *)auStack288,pLVar7);
    fVar11 = 0.0;
    lib::L2CValue::L2CValue((L2CValue *)&local_1a0,90.0);
    lib::L2CValue::operator-(aLStack496,(L2CValue *)&local_1a0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_1a0);
    uVar13 = lib::L2CValue::as_integer(aLStack448);
    uVar6 = lib::L2CValue::as_number((L2CValue *)&local_90);
    lVar17 = lib::L2CValue::as_number(aLStack464);
    uVar14 = lib::L2CValue::as_number(aLStack480);
    local_1a0 = uVar6 & 0xffffffff | lVar17 << 0x20;
    uStack408 = (ulong)uVar14;
    app::lua_bind::EffectModule__set_rot_impl(*ppBVar10,uVar13,(Vector3f *)&local_1a0);
    lib::L2CValue::~L2CValue(aLStack480);
    lib::L2CValue::~L2CValue(aLStack496);
    lib::L2CValue::~L2CValue(aLStack464);
    lib::L2CValue::~L2CValue((L2CValue *)&local_90);
    lib::L2CValue::L2CValue((L2CValue *)&local_90);
    lib::L2CValue::L2CValue(aLStack464);
    lib::L2CValue::L2CValue(aLStack480);
    pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)((long)param_1 + 200),5);
    pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar7);
    iVar3 = app::FighterUtil::get_team_color(pBVar9);
    lib::L2CValue::L2CValue(aLStack496,iVar3);
    lib::L2CValue::L2CValue(aLStack512,0x1667e12b5a);
    EVar4 = lib::L2CValue::as_integer(aLStack496);
    HVar8 = lib::L2CValue::as_hash(aLStack512);
    uVar16 = app::FighterUtil::get_effect_team_color(EVar4,HVar8);
    lib::L2CValue::L2CValue((L2CValue *)&local_1a0,(float)uVar16);
    lib::L2CValue::L2CValue(aLStack400,(float)((ulong)uVar16 >> 0x20));
    lib::L2CValue::L2CValue(aLStack384,fVar11);
    lib::L2CValue::operator=((L2CValue *)&local_90,(L2CValue *)&local_1a0);
    lib::L2CValue::operator=(aLStack464,aLStack400);
    lib::L2CValue::operator=(aLStack480,aLStack384);
    lib::L2CValue::~L2CValue(aLStack384);
    lib::L2CValue::~L2CValue(aLStack400);
    lib::L2CValue::~L2CValue((L2CValue *)&local_1a0);
    lib::L2CValue::~L2CValue(aLStack512);
    lib::L2CValue::~L2CValue(aLStack496);
    fVar11 = (float)lib::L2CValue::as_number((L2CValue *)&local_90);
    fVar12 = (float)lib::L2CValue::as_number(aLStack464);
    fVar15 = (float)lib::L2CValue::as_number(aLStack480);
    app::lua_bind::EffectModule__set_rgb_partial_last_impl(*ppBVar10,fVar11,fVar12,fVar15);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_1a0,
               _FIGHTER_PIKACHU_STATUS_WORK_ID_INT_QUICK_ATTACK_GUIDE_EFFECT_HANDLE);
    iVar3 = lib::L2CValue::as_integer(aLStack448);
    iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_1a0);
    app::lua_bind::WorkModule__set_int_impl(*ppBVar10,iVar3,iVar5);
    lib::L2CValue::~L2CValue((L2CValue *)&local_1a0);
    pLVar7 = aLStack480;
  }
  lib::L2CValue::~L2CValue(pLVar7);
  lib::L2CValue::~L2CValue(aLStack464);
  lib::L2CValue::~L2CValue((L2CValue *)&local_90);
LAB_710000c190:
  lib::L2CValue::L2CValue((L2CValue *)&local_1a0,0xe694f9d4f);
  HVar8 = lib::L2CValue::as_hash((L2CValue *)&local_1a0);
  bVar2 = lib::L2CValue::as_bool(aLStack224);
  app::lua_bind::EffectModule__set_visible_kind_impl(*ppBVar10,HVar8,(bool)(bVar2 & 1));
  lib::L2CValue::~L2CValue((L2CValue *)&local_1a0);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_1a0,
             _FIGHTER_PIKACHU_STATUS_WORK_ID_FLAG_QUICK_ATTACK_GUIDE_EFFECT_LAST_VISIBLE);
  bVar2 = lib::L2CValue::as_bool(aLStack224);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_1a0);
  app::lua_bind::WorkModule__set_flag_impl(*ppBVar10,(bool)(bVar2 & 1),iVar3);
  lib::L2CValue::~L2CValue((L2CValue *)&local_1a0);
  lib::L2CValue::~L2CValue(aLStack448);
  lib::L2CValue::~L2CValue(aLStack432);
  lib::L2CValue::~L2CValue(aLStack320);
  lib::L2CValue::~L2CValue(aLStack304);
  lib::L2CValue::~L2CValue((L2CValue *)auStack288);
  lib::L2CValue::~L2CValue((L2CValue *)auStack272);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack272 + 0x10));
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  return;
}

