
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001e7c0(long param_1)

{
  long lVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  L2CValue *pLVar6;
  ulong uVar7;
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
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),2);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIND_MURABITO);
  uVar7 = lib::L2CValue::operator==(pLVar6,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar7 & 1) == 0) {
    pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),2);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIND_SHIZUE);
    uVar7 = lib::L2CValue::operator==(pLVar6,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar7 & 1) == 0) {
      return;
    }
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_SHIZUE_GENERATE_ARTICLE_SWING);
    iVar4 = lib::L2CValue::as_integer(aLStack112);
    bVar2 = app::lua_bind::ArticleModule__is_exist_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
    bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack96);
    if ((bVar3 & 1U) != 0) {
      lib::L2CValue::L2CValue
                (aLStack144,_FIGHTER_MURABITO_STATUS_SPECIAL_HI_COMMON_FLAG_EFFECT_SMOKE);
      iVar4 = lib::L2CValue::as_integer(aLStack144);
      bVar2 = app::lua_bind::WorkModule__is_flag_impl
                        (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4);
      lib::L2CValue::L2CValue(aLStack128,(bool)(bVar2 & 1));
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar7 = lib::L2CValue::operator==(aLStack128,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar7 & 1) == 0) {
        return;
      }
      lib::L2CValue::L2CValue
                (aLStack80,_FIGHTER_MURABITO_STATUS_SPECIAL_HI_COMMON_FLAG_EFFECT_SMOKE);
      iVar4 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__on_flag_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4);
      goto LAB_710001ec38;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MURABITO_GENERATE_ARTICLE_HELMET);
    iVar4 = lib::L2CValue::as_integer(aLStack112);
    bVar2 = app::lua_bind::ArticleModule__is_exist_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
    bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack96);
    if ((bVar3 & 1U) != 0) {
      lib::L2CValue::L2CValue
                (aLStack144,_FIGHTER_MURABITO_STATUS_SPECIAL_HI_COMMON_FLAG_EFFECT_SMOKE);
      iVar4 = lib::L2CValue::as_integer(aLStack144);
      bVar2 = app::lua_bind::WorkModule__is_flag_impl
                        (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4);
      lib::L2CValue::L2CValue(aLStack128,(bool)(bVar2 & 1));
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar7 = lib::L2CValue::operator==(aLStack128,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar7 & 1) == 0) {
        return;
      }
      lib::L2CValue::L2CValue(aLStack80,_MA_MSC_CMD_EFFECT_EFFECT);
      lib::L2CValue::L2CValue(aLStack96,0x14e7f3855b);
      lib::L2CValue::L2CValue(aLStack112,0x4a7f3f69c);
      lib::L2CValue::L2CValue(aLStack128,4.0);
      lib::L2CValue::L2CValue(aLStack144,-2.0);
      lib::L2CValue::L2CValue(aLStack176,0.0);
      lib::L2CValue::L2CValue(aLStack192,0.0);
      lib::L2CValue::L2CValue(aLStack208,0.0);
      lib::L2CValue::L2CValue(aLStack224,-90.0);
      lib::L2CValue::L2CValue(aLStack240,0.9);
      lib::L2CValue::L2CValue(aLStack256,0.0);
      lib::L2CValue::L2CValue(aLStack272,0.0);
      lib::L2CValue::L2CValue(aLStack288,0.0);
      lib::L2CValue::L2CValue(aLStack304,0.0);
      lib::L2CValue::L2CValue(aLStack320,0.0);
      lib::L2CValue::L2CValue(aLStack336,0.0);
      lib::L2CValue::L2CValue(aLStack352,true);
      FUN_7100002eb0(aLStack160,param_1,aLStack80,aLStack96,aLStack112,aLStack128,aLStack144,
                     aLStack176,aLStack192,aLStack208,aLStack224,aLStack240,aLStack256,aLStack272,
                     aLStack288,aLStack304,aLStack320,aLStack336,aLStack352);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack352);
      lib::L2CValue::~L2CValue(aLStack336);
      lib::L2CValue::~L2CValue(aLStack320);
      lib::L2CValue::~L2CValue(aLStack304);
      lib::L2CValue::~L2CValue(aLStack288);
      lib::L2CValue::~L2CValue(aLStack272);
      lib::L2CValue::~L2CValue(aLStack256);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::~L2CValue(aLStack224);
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,6);
      lib::L2CValue::L2CValue
                (aLStack96,_FIGHTER_MURABITO_INSTANCE_WORK_ID_INT_SPECIAL_HI_HIDE_HELMET_FRAME);
      iVar4 = lib::L2CValue::as_integer(aLStack80);
      iVar5 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__set_int_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4,iVar5);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue
                (aLStack80,_FIGHTER_MURABITO_STATUS_SPECIAL_HI_COMMON_FLAG_EFFECT_SMOKE);
      iVar4 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__on_flag_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4);
LAB_710001ec38:
      lVar1 = -0x40;
      goto LAB_710001ec4c;
    }
  }
  lib::L2CValue::~L2CValue(aLStack96);
  lVar1 = -0x60;
LAB_710001ec4c:
  lib::L2CValue::~L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar1));
  return;
}

