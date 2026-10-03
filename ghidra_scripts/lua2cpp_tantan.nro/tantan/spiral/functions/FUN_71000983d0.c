
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000983d0(long param_1,L2CValue *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  Hash40 HVar7;
  ulong uVar8;
  void *pvVar9;
  Article *pAVar10;
  BattleObjectModuleAccessor *pBVar11;
  float fVar12;
  float fVar13;
  float fVar14;
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
  
  lib::L2CValue::L2CValue(aLStack144,_WEAPON_TANTAN_SPIRALLEFT_MOTION_PART_SET_KIND_FLARE);
  iVar5 = lib::L2CValue::as_integer(aLStack144);
  HVar7 = app::lua_bind::MotionModule__motion_kind_partial_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar5);
  lib::L2CValue::L2CValue(aLStack128,HVar7);
  lib::L2CValue::L2CValue(aLStack112,0x5c86412ff);
  uVar8 = lib::L2CValue::operator==(aLStack128,aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack144);
  if ((uVar8 & 1) != 0) {
    iVar5 = lib::L2CValue::as_integer(param_2);
    pvVar9 = (void *)app::lua_bind::ArticleModule__get_article_impl
                               (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar5);
    if (pvVar9 == (void *)0x0) {
      lib::L2CValue::L2CValue
                (aLStack128,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
    }
    else {
      lib::L2CValue::L2CValue(aLStack128,pvVar9);
    }
    uVar8 = lib::L2CValue::operator==
                      (aLStack128,
                       (L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
    if ((uVar8 & 1) == 0) {
      pAVar10 = (Article *)lib::L2CValue::as_pointer(aLStack128);
      uVar6 = app::lua_bind::Article__get_battle_object_id_impl(pAVar10);
      lib::L2CValue::L2CValue(aLStack112,uVar6);
      uVar6 = lib::L2CValue::as_integer(aLStack112);
      pvVar9 = (void *)app::sv_battle_object::module_accessor(uVar6);
      if (pvVar9 == (void *)0x0) {
        lib::L2CValue::L2CValue
                  (aLStack144,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
      }
      else {
        lib::L2CValue::L2CValue(aLStack144,pvVar9);
      }
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack176,0);
      lib::L2CValue::L2CValue(aLStack192,false);
      iVar5 = lib::L2CValue::as_integer(aLStack176);
      bVar1 = lib::L2CValue::as_bool(aLStack192);
      pBVar11 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack144);
      bVar1 = app::lua_bind::AttackModule__is_attack_impl(pBVar11,iVar5,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack160,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack112,false);
      uVar8 = lib::L2CValue::operator==(aLStack160,aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::~L2CValue(aLStack176);
      if ((uVar8 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack112,_WEAPON_TANTAN_SPIRALLEFT_MOTION_PART_SET_KIND_FLARE);
        lib::L2CValue::L2CValue(aLStack160,0xeb8da7432);
        lib::L2CValue::L2CValue(aLStack176,0.0);
        lib::L2CValue::L2CValue(aLStack192,1.0);
        lib::L2CValue::L2CValue(aLStack208,false);
        lib::L2CValue::L2CValue(aLStack224,false);
        lib::L2CValue::L2CValue(aLStack240,0.0);
        lib::L2CValue::L2CValue(aLStack256,false);
        lib::L2CValue::L2CValue(aLStack272,false);
        iVar5 = lib::L2CValue::as_integer(aLStack112);
        HVar7 = lib::L2CValue::as_hash(aLStack160);
        fVar12 = (float)lib::L2CValue::as_number(aLStack176);
        fVar13 = (float)lib::L2CValue::as_number(aLStack192);
        bVar1 = lib::L2CValue::as_bool(aLStack208);
        bVar2 = lib::L2CValue::as_bool(aLStack224);
        fVar14 = (float)lib::L2CValue::as_number(aLStack240);
        bVar3 = lib::L2CValue::as_bool(aLStack256);
        bVar4 = lib::L2CValue::as_bool(aLStack272);
        app::lua_bind::MotionModule__add_motion_partial_impl
                  (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar5,HVar7,fVar12,fVar13,
                   (bool)(bVar1 & 1),(bool)(bVar2 & 1),fVar14,(bool)(bVar3 & 1),(bool)(bVar4 & 1),
                   false);
        lib::L2CValue::~L2CValue(aLStack272);
        lib::L2CValue::~L2CValue(aLStack256);
        lib::L2CValue::~L2CValue(aLStack240);
        lib::L2CValue::~L2CValue(aLStack224);
        lib::L2CValue::~L2CValue(aLStack208);
        lib::L2CValue::~L2CValue(aLStack192);
        lib::L2CValue::~L2CValue(aLStack176);
        lib::L2CValue::~L2CValue(aLStack160);
        lib::L2CValue::~L2CValue(aLStack112);
      }
      lib::L2CValue::~L2CValue(aLStack144);
    }
    lib::L2CValue::~L2CValue(aLStack128);
  }
  return;
}

