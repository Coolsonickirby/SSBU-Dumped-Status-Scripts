
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710003b450(long param_1,L2CValue *param_2,L2CValue *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  void *pvVar8;
  ulong uVar9;
  Article *pAVar10;
  BattleObjectModuleAccessor *pBVar11;
  Hash40 HVar12;
  float fVar13;
  float fVar14;
  float fVar15;
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
  
  iVar6 = lib::L2CValue::as_integer(param_2);
  pvVar8 = (void *)app::lua_bind::ArticleModule__get_article_impl
                             (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar6);
  if (pvVar8 == (void *)0x0) {
    lib::L2CValue::L2CValue
              (aLStack144,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
  }
  else {
    lib::L2CValue::L2CValue(aLStack144,pvVar8);
  }
  uVar9 = lib::L2CValue::operator==
                    (aLStack144,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X)
  ;
  if ((uVar9 & 1) != 0) goto LAB_710003b778;
  pAVar10 = (Article *)lib::L2CValue::as_pointer(aLStack144);
  uVar7 = app::lua_bind::Article__get_battle_object_id_impl(pAVar10);
  lib::L2CValue::L2CValue(aLStack128,uVar7);
  uVar7 = lib::L2CValue::as_integer(aLStack128);
  pvVar8 = (void *)app::sv_battle_object::module_accessor(uVar7);
  if (pvVar8 == (void *)0x0) {
    lib::L2CValue::L2CValue
              (aLStack160,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
  }
  else {
    lib::L2CValue::L2CValue(aLStack160,pvVar8);
  }
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack176,0x5c86412ff);
  lib::L2CValue::L2CValue(aLStack128,false);
  uVar9 = lib::L2CValue::operator==(param_3,aLStack128);
  lib::L2CValue::~L2CValue(aLStack128);
  if ((uVar9 & 1) == 0) {
LAB_710003b5fc:
    lib::L2CValue::L2CValue(aLStack128,_WEAPON_TANTAN_SPIRALLEFT_MOTION_PART_SET_KIND_FLARE);
    lib::L2CValue::L2CValue(aLStack192,0.0);
    lib::L2CValue::L2CValue(aLStack208,1.0);
    lib::L2CValue::L2CValue(aLStack224,false);
    lib::L2CValue::L2CValue(aLStack240,false);
    lib::L2CValue::L2CValue(aLStack256,0.0);
    lib::L2CValue::L2CValue(aLStack272,false);
    lib::L2CValue::L2CValue(aLStack288,false);
    lib::L2CValue::L2CValue(aLStack304,false);
    iVar6 = lib::L2CValue::as_integer(aLStack128);
    HVar12 = lib::L2CValue::as_hash(aLStack176);
    fVar13 = (float)lib::L2CValue::as_number(aLStack192);
    fVar14 = (float)lib::L2CValue::as_number(aLStack208);
    bVar1 = lib::L2CValue::as_bool(aLStack224);
    bVar2 = lib::L2CValue::as_bool(aLStack240);
    fVar15 = (float)lib::L2CValue::as_number(aLStack256);
    bVar3 = lib::L2CValue::as_bool(aLStack272);
    bVar4 = lib::L2CValue::as_bool(aLStack288);
    bVar5 = lib::L2CValue::as_bool(aLStack304);
    pBVar11 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack160);
    app::lua_bind::MotionModule__add_motion_partial_impl
              (pBVar11,iVar6,HVar12,fVar13,fVar14,(bool)(bVar1 & 1),(bool)(bVar2 & 1),fVar15,
               (bool)(bVar3 & 1),(bool)(bVar4 & 1),(bool)(bVar5 & 1));
    lib::L2CValue::~L2CValue(aLStack304);
    lib::L2CValue::~L2CValue(aLStack288);
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CValue::~L2CValue(aLStack256);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack128);
  }
  else {
    lib::L2CValue::L2CValue(aLStack208,_WEAPON_TANTAN_SPIRALLEFT_MOTION_PART_SET_KIND_FLARE);
    iVar6 = lib::L2CValue::as_integer(aLStack208);
    pBVar11 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack160);
    HVar12 = app::lua_bind::MotionModule__motion_kind_partial_impl(pBVar11,iVar6);
    lib::L2CValue::L2CValue(aLStack192,HVar12);
    lib::L2CValue::L2CValue(aLStack128,0x5c86412ff);
    uVar9 = lib::L2CValue::operator==(aLStack192,aLStack128);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack208);
    if ((uVar9 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack128,0xeb8da7432);
      lib::L2CValue::operator=(aLStack176,aLStack128);
      lib::L2CValue::~L2CValue(aLStack128);
      goto LAB_710003b5fc;
    }
  }
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
LAB_710003b778:
  lib::L2CValue::~L2CValue(aLStack144);
  return;
}

