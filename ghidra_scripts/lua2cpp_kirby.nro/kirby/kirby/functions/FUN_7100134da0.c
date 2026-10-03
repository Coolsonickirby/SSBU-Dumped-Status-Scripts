
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100134da0(long param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  Hash40 HVar4;
  ulong uVar5;
  L2CValue *this;
  BattleObjectModuleAccessor *pBVar6;
  float fVar7;
  uint uVar8;
  long lVar9;
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
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  ulong local_60;
  ulong uStack88;
  ulong local_50;
  ulong uStack72;
  
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  HVar4 = app::lua_bind::MotionModule__motion_kind_partial_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,HVar4);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0x7fb997a80);
  uVar5 = lib::L2CValue::operator==((L2CValue *)&local_60,(L2CValue *)&local_50);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((uVar5 & 1) == 0) {
    return;
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0xa1b1b0ad5);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  HVar4 = lib::L2CValue::as_hash((L2CValue *)&local_60);
  app::lua_bind::FighterMotionModuleImpl__add_motion_partial_kirby_copy_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,HVar4,0.0,1.0,false,false,0.0,
             true,true,false);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue(aLStack128,false);
  this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),5);
  pBVar6 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(this);
  iVar3 = app::FighterSpecializer_Pickel::get_pickel_stage_dig_status(pBVar6);
  lib::L2CValue::L2CValue(aLStack144,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_PICKEL_DIG_RESULT_INVALID);
  uVar5 = lib::L2CValue::operator==(aLStack144,(L2CValue *)&local_50);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_PICKEL_DIG_RESULT_NONE);
    uVar5 = lib::L2CValue::operator==(aLStack144,(L2CValue *)&local_50);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    if ((uVar5 & 1) != 0) goto LAB_7100134f28;
  }
  else {
LAB_7100134f28:
    lib::L2CValue::L2CValue
              (aLStack176,_FIGHTER_PICKEL_STATUS_SPECIAL_N1_INT_MINING_GROUND_MATERIAL_KIND);
    iVar3 = lib::L2CValue::as_integer(aLStack176);
    iVar3 = app::lua_bind::WorkModule__get_int_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack160,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0x192c851b8e);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,0x1f182e289b);
    lib::L2CValue::operator=((L2CValue *)&local_60,(L2CValue *)&local_50);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_PICKEL_MATERIAL_KIND_GRADE_1);
    uVar5 = lib::L2CValue::operator==(aLStack160,(L2CValue *)&local_50);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_PICKEL_MATERIAL_KIND_WOOD);
      uVar5 = lib::L2CValue::operator==(aLStack160,(L2CValue *)&local_50);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_50,0x1f5b233159);
        lib::L2CValue::operator=((L2CValue *)&local_60,(L2CValue *)&local_50);
LAB_710013515c:
        lVar9 = -0x40;
        goto LAB_710013520c;
      }
      lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_PICKEL_MATERIAL_KIND_STONE);
      uVar5 = lib::L2CValue::operator==(aLStack160,(L2CValue *)&local_50);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_50,0x2075412eef);
        lib::L2CValue::operator=((L2CValue *)&local_60,(L2CValue *)&local_50);
        goto LAB_710013515c;
      }
      lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_PICKEL_MATERIAL_KIND_IRON);
      uVar5 = lib::L2CValue::operator==(aLStack160,(L2CValue *)&local_50);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_50,0x1f1fcec8c8);
        lib::L2CValue::operator=((L2CValue *)&local_60,(L2CValue *)&local_50);
        goto LAB_710013515c;
      }
    }
    else {
      iVar3 = app::FighterSpecializer_Pickel::get_mining_material_grade1_kind();
      lib::L2CValue::L2CValue(aLStack112,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_PICKEL_MATERIAL_GRADE_1_KIND_SAND);
      uVar5 = lib::L2CValue::operator==(aLStack112,(L2CValue *)&local_50);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_PICKEL_MATERIAL_GRADE_1_KIND_SOIL);
        uVar5 = lib::L2CValue::operator==(aLStack112,(L2CValue *)&local_50);
        lib::L2CValue::~L2CValue((L2CValue *)&local_50);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_50,0x1f8cc089ba);
          lib::L2CValue::operator=((L2CValue *)&local_60,(L2CValue *)&local_50);
          goto LAB_7100135200;
        }
        lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_PICKEL_MATERIAL_GRADE_1_KIND_ICE);
        uVar5 = lib::L2CValue::operator==(aLStack112,(L2CValue *)&local_50);
        lib::L2CValue::~L2CValue((L2CValue *)&local_50);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_50,0x1ea82d1c95);
          lib::L2CValue::operator=((L2CValue *)&local_60,(L2CValue *)&local_50);
          goto LAB_7100135200;
        }
        lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_PICKEL_MATERIAL_GRADE_1_KIND_WOOL);
        uVar5 = lib::L2CValue::operator==(aLStack112,(L2CValue *)&local_50);
        lib::L2CValue::~L2CValue((L2CValue *)&local_50);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_50,0x1f55f8b96b);
          lib::L2CValue::operator=((L2CValue *)&local_60,(L2CValue *)&local_50);
          goto LAB_7100135200;
        }
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)&local_50,0x1fc7c4ba45);
        lib::L2CValue::operator=((L2CValue *)&local_60,(L2CValue *)&local_50);
LAB_7100135200:
        lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      }
      lVar9 = -0x60;
LAB_710013520c:
      lib::L2CValue::~L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar9));
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_ANIMCMD_SOUND);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    HVar4 = lib::L2CValue::as_hash((L2CValue *)&local_60);
    app::lua_bind::MotionAnimcmdModule__call_script_single_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,HVar4,-1);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack176);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_PICKEL_STATUS_SPECIAL_N1_FLAG_MINING);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_50);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  if ((bVar2 & 1U) == 0) goto LAB_7100135634;
  lib::L2CValue::L2CValue
            (aLStack176,_FIGHTER_PICKEL_STATUS_SPECIAL_N1_INT_MINING_GROUND_MATERIAL_KIND);
  iVar3 = lib::L2CValue::as_integer(aLStack176);
  iVar3 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack192,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_PICKEL_MATERIAL_KIND_GRADE_1);
  uVar5 = lib::L2CValue::operator==(aLStack192,(L2CValue *)&local_50);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_PICKEL_MATERIAL_KIND_WOOD);
    uVar5 = lib::L2CValue::operator==(aLStack192,(L2CValue *)&local_50);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_PICKEL_MATERIAL_KIND_STONE);
      uVar5 = lib::L2CValue::operator==(aLStack192,(L2CValue *)&local_50);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_PICKEL_MATERIAL_KIND_IRON);
        uVar5 = lib::L2CValue::operator==(aLStack192,(L2CValue *)&local_50);
        lib::L2CValue::~L2CValue((L2CValue *)&local_50);
        if ((uVar5 & 1) == 0) goto LAB_71001353fc;
        lib::L2CValue::L2CValue(aLStack112,0x19e76deecd);
      }
      else {
        lib::L2CValue::L2CValue(aLStack112,0x1a05d37946);
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack112,0x19a380175c);
    }
  }
  else {
    iVar3 = app::FighterSpecializer_Pickel::get_mining_material_grade1_kind();
    lib::L2CValue::L2CValue((L2CValue *)&local_60,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_PICKEL_MATERIAL_GRADE_1_KIND_SOIL);
    uVar5 = lib::L2CValue::operator==((L2CValue *)&local_60,(L2CValue *)&local_50);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
LAB_71001353fc:
      lib::L2CValue::L2CValue(aLStack112,0x14ba0e80d7);
    }
    else {
      lib::L2CValue::L2CValue(aLStack112,0x197463afbf);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    }
  }
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::L2CValue(aLStack224,_FIGHTER_PICKEL_STATUS_SPECIAL_N1_FLOAT_MINING_POS_X);
  iVar3 = lib::L2CValue::as_integer(aLStack224);
  fVar7 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack176,fVar7);
  lib::L2CValue::L2CValue(aLStack256,_FIGHTER_PICKEL_STATUS_SPECIAL_N1_FLOAT_MINING_POS_Y);
  iVar3 = lib::L2CValue::as_integer(aLStack256);
  fVar7 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack240,fVar7);
  lib::L2CValue::L2CValue(aLStack288,_FIGHTER_PICKEL_STATUS_SPECIAL_N1_FLOAT_MINING_POS_Z);
  iVar3 = lib::L2CValue::as_integer(aLStack288);
  fVar7 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack272,fVar7);
  lib::L2CValue::L2CValue(aLStack304,0.0);
  lib::L2CValue::L2CValue(aLStack320,0.0);
  lib::L2CValue::L2CValue(aLStack336,0.0);
  lib::L2CValue::L2CValue(aLStack352,1.0);
  lib::L2CValue::L2CValue(aLStack368,0);
  lib::L2CValue::L2CValue(aLStack384,-1);
  HVar4 = lib::L2CValue::as_hash(aLStack112);
  uVar5 = lib::L2CValue::as_number(aLStack176);
  lVar9 = lib::L2CValue::as_number(aLStack240);
  uVar8 = lib::L2CValue::as_number(aLStack272);
  local_50 = uVar5 & 0xffffffff | lVar9 << 0x20;
  uStack72 = (ulong)uVar8;
  uVar5 = lib::L2CValue::as_number(aLStack304);
  lVar9 = lib::L2CValue::as_number(aLStack320);
  uVar8 = lib::L2CValue::as_number(aLStack336);
  local_60 = uVar5 & 0xffffffff | lVar9 << 0x20;
  uStack88 = (ulong)uVar8;
  fVar7 = (float)lib::L2CValue::as_number(aLStack352);
  uVar8 = lib::L2CValue::as_integer(aLStack368);
  iVar3 = lib::L2CValue::as_integer(aLStack384);
  uVar8 = app::lua_bind::EffectModule__req_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar4,(Vector3f *)&local_50,
                     (Vector3f *)&local_60,fVar7,uVar8,iVar3,false,0);
  lib::L2CValue::L2CValue(aLStack208,uVar8);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack384);
  lib::L2CValue::~L2CValue(aLStack368);
  lib::L2CValue::~L2CValue(aLStack352);
  lib::L2CValue::~L2CValue(aLStack336);
  lib::L2CValue::~L2CValue(aLStack320);
  lib::L2CValue::~L2CValue(aLStack304);
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::~L2CValue(aLStack288);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack112);
LAB_7100135634:
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  return;
}

