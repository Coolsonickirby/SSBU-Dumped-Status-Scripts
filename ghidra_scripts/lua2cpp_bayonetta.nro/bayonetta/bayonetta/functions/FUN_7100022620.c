
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100022620(L2CValue *param_1,long param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  HitStatus HVar4;
  int iVar5;
  ulong uVar6;
  float fVar7;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BAYONETTA_STATUS_WORK_ID_BATWITHIN_INT_STEP);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  iVar3 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack80,iVar3);
  lib::L2CValue::L2CValue(aLStack64,0);
  uVar6 = lib::L2CValue::operator==(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BAYONETTA_STATUS_WORK_ID_BATWITHIN_FLAG_RETURN);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack64,_HIT_STATUS_NORMAL);
      HVar4 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::HitModule__set_whole_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),HVar4,0);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,true);
      bVar1 = lib::L2CValue::as_bool(aLStack64);
      app::lua_bind::VisibilityModule__set_whole_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),(bool)(bVar1 & 1));
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,true);
      bVar1 = lib::L2CValue::as_bool(aLStack64);
      app::lua_bind::ItemModule__set_have_item_visibility_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),(bool)(bVar1 & 1),0);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,true);
      bVar1 = lib::L2CValue::as_bool(aLStack64);
      app::lua_bind::ItemModule__set_attach_item_visibility_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),(bool)(bVar1 & 1),0xff);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,1.0);
      fVar7 = (float)lib::L2CValue::as_number(aLStack64);
      app::lua_bind::MotionModule__set_rate_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),fVar7);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_BAYONETTA_GENERATE_ARTICLE_BAT);
      lib::L2CValue::L2CValue(aLStack80,_WEAPON_BAYONETTA_BAT_STATUS_KIND_BATWITHIN_END);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      iVar5 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::ArticleModule__change_status_exist_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3,iVar5);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_BAYONETTA_STATUS_WORK_ID_BATWITHIN_FLAG_RETURN);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__off_flag_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,1);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BAYONETTA_STATUS_WORK_ID_BATWITHIN_INT_STEP);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      iVar5 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__set_int_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3,iVar5);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack64);
    }
  }
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

