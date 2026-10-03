
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001e780(long param_1)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  ArticleOperationTarget AVar5;
  L2CValue *pLVar6;
  ulong uVar7;
  ulong uVar8;
  L2CValue *pLVar9;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  pLVar9 = (L2CValue *)(param_1 + 200);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](pLVar9,9);
  lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_KIND_SPECIAL_S);
  uVar7 = lib::L2CValue::operator==(pLVar6,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar7 & 1) != 0) goto LAB_710001ec78;
  lib::L2CValue::L2CValue(aLStack80,0);
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,0);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](pLVar9,3);
  uVar3 = lib::L2CValue::as_integer(pLVar6);
  uVar3 = app::sv_battle_object::kind(uVar3);
  lib::L2CValue::L2CValue(aLStack128,uVar3);
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_SAMUS_STATUS_SPECIAL_S_WORK_FLAG_WEAPON);
  iVar4 = lib::L2CValue::as_integer(aLStack160);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4);
  lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack144);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::~L2CValue(aLStack144);
    pLVar9 = aLStack160;
LAB_710001ec54:
    lib::L2CValue::~L2CValue(pLVar9);
  }
  else {
    lib::L2CValue::L2CValue(aLStack192,_FIGHTER_SAMUS_STATUS_SPECIAL_S_WORK_FLAG_WEAPON_GENERATED);
    iVar4 = lib::L2CValue::as_integer(aLStack192);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4);
    lib::L2CValue::L2CValue(aLStack176,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack64,false);
    uVar7 = lib::L2CValue::operator==(aLStack176,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack160);
    if ((uVar7 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_SAMUS_GENERATE_ARTICLE_MISSILE);
      lib::L2CValue::operator=(aLStack112,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIND_SAMUSD);
      uVar7 = lib::L2CValue::operator==(aLStack128,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar7 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_SAMUSD_GENERATE_ARTICLE_MISSILE);
        lib::L2CValue::operator=(aLStack112,aLStack64);
        lib::L2CValue::~L2CValue(aLStack64);
      }
      lib::L2CValue::L2CValue(aLStack144,0xfea97fe73);
      lib::L2CValue::L2CValue(aLStack160,0xf7eca49bb);
      uVar7 = lib::L2CValue::as_integer(aLStack144);
      uVar8 = lib::L2CValue::as_integer(aLStack160);
      iVar4 = app::lua_bind::WorkModule__get_param_int_impl
                        (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar7,uVar8);
      lib::L2CValue::L2CValue(aLStack64,iVar4);
      lib::L2CValue::operator=(aLStack96,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack144);
      iVar4 = lib::L2CValue::as_integer(aLStack112);
      iVar4 = app::lua_bind::ArticleModule__get_active_num_impl
                        (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4);
      lib::L2CValue::L2CValue(aLStack64,iVar4);
      lib::L2CValue::operator=(aLStack80,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      pLVar6 = (L2CValue *)lib::L2CValue::operator[](pLVar9,9);
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_SAMUS_STATUS_KIND_SPECIAL_S2G);
      uVar7 = lib::L2CValue::operator==(pLVar6,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar7 & 1) == 0) {
        pLVar9 = (L2CValue *)lib::L2CValue::operator[](pLVar9,9);
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_SAMUS_STATUS_KIND_SPECIAL_S2A);
        uVar7 = lib::L2CValue::operator==(pLVar9,aLStack64);
        lib::L2CValue::~L2CValue(aLStack64);
        if ((uVar7 & 1) != 0) goto LAB_710001ea54;
      }
      else {
LAB_710001ea54:
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_SAMUS_GENERATE_ARTICLE_SUPERMISSILE);
        lib::L2CValue::operator=(aLStack112,aLStack64);
        lib::L2CValue::~L2CValue(aLStack64);
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIND_SAMUSD);
        uVar7 = lib::L2CValue::operator==(aLStack128,aLStack64);
        lib::L2CValue::~L2CValue(aLStack64);
        if ((uVar7 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_SAMUSD_GENERATE_ARTICLE_SUPERMISSILE);
          lib::L2CValue::operator=(aLStack112,aLStack64);
          lib::L2CValue::~L2CValue(aLStack64);
        }
        lib::L2CValue::L2CValue(aLStack144,0xfea97fe73);
        lib::L2CValue::L2CValue(aLStack160,0x149606521f);
        uVar7 = lib::L2CValue::as_integer(aLStack144);
        uVar8 = lib::L2CValue::as_integer(aLStack160);
        iVar4 = app::lua_bind::WorkModule__get_param_int_impl
                          (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar7,uVar8);
        lib::L2CValue::L2CValue(aLStack64,iVar4);
        lib::L2CValue::operator=(aLStack96,aLStack64);
        lib::L2CValue::~L2CValue(aLStack64);
        lib::L2CValue::~L2CValue(aLStack160);
        lib::L2CValue::~L2CValue(aLStack144);
        iVar4 = lib::L2CValue::as_integer(aLStack112);
        iVar4 = app::lua_bind::ArticleModule__get_active_num_impl
                          (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4);
        lib::L2CValue::L2CValue(aLStack64,iVar4);
        lib::L2CValue::operator=(aLStack80,aLStack64);
        lib::L2CValue::~L2CValue(aLStack64);
      }
      uVar7 = lib::L2CValue::operator<(aLStack80,aLStack96);
      if ((uVar7 & 1) != 0) {
        iVar4 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::ArticleModule__generate_article_enable_impl
                  (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4,false,-1);
        lib::L2CValue::L2CValue(aLStack64,_ARTICLE_OPE_TARGET_ALL);
        lib::L2CValue::L2CValue(aLStack144,false);
        iVar4 = lib::L2CValue::as_integer(aLStack112);
        AVar5 = lib::L2CValue::as_integer(aLStack64);
        bVar1 = lib::L2CValue::as_bool(aLStack144);
        app::lua_bind::ArticleModule__shoot_exist_impl
                  (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4,AVar5,(bool)(bVar1 & 1));
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack64);
        lib::L2CValue::L2CValue
                  (aLStack64,_FIGHTER_SAMUS_STATUS_SPECIAL_S_WORK_FLAG_GENERATE_SUCCESS);
        iVar4 = lib::L2CValue::as_integer(aLStack64);
        app::lua_bind::WorkModule__on_flag_impl
                  (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4);
        lib::L2CValue::~L2CValue(aLStack64);
      }
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_SAMUS_STATUS_SPECIAL_S_WORK_FLAG_WEAPON_GENERATED);
      iVar4 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__on_flag_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4);
      pLVar9 = aLStack64;
      goto LAB_710001ec54;
    }
  }
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
LAB_710001ec78:
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SAMUS_STATUS_SPECIAL_S_WORK_FLAG_MATERIAL_MOTION);
  iVar4 = lib::L2CValue::as_integer(aLStack80);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SAMUS_MOTION_PART_SET_KIND_VISOR);
    iVar4 = lib::L2CValue::as_integer(aLStack80);
    bVar1 = app::lua_bind::MotionModule__is_end_partial_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((bVar2 & 1U) != 0) {
      FUN_710001dd60(param_1);
    }
  }
  return;
}

