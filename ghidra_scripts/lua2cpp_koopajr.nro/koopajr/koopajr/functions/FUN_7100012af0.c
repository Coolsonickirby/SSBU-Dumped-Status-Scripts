
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100012af0(long param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  float fVar6;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KOOPAJR_STATUS_SPECIAL_S_FLAG_REMOVE_KART);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KOOPAJR_GENERATE_ARTICLE_KART);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    bVar1 = app::lua_bind::ArticleModule__is_exist_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KOOPAJR_GENERATE_ARTICLE_KART);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::ArticleModule__remove_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,0);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,0x5e0bf9d48);
      lVar4 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::VisibilityModule__set_default_int64_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),lVar4);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,0xaefe46b4c);
      lVar4 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::VisibilityModule__set_default_int64_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),lVar4);
      lib::L2CValue::~L2CValue(aLStack64);
      fVar6 = (float)app::lua_bind::PostureModule__lr_impl
                               (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
      lib::L2CValue::L2CValue(aLStack80,fVar6);
      lib::L2CValue::L2CValue(aLStack64,-1.0);
      uVar5 = lib::L2CValue::operator==(aLStack80,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack64,false);
        bVar1 = lib::L2CValue::as_bool(aLStack64);
        app::lua_bind::MotionModule__set_flip_impl
                  (*(BattleObjectModuleAccessor **)(param_1 + 0x40),(bool)(bVar1 & 1),true,false);
      }
      else {
        lib::L2CValue::L2CValue(aLStack64,true);
        bVar1 = lib::L2CValue::as_bool(aLStack64);
        app::lua_bind::MotionModule__set_flip_impl
                  (*(BattleObjectModuleAccessor **)(param_1 + 0x40),(bool)(bVar1 & 1),true,false);
      }
      lib::L2CValue::~L2CValue(aLStack64);
    }
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KOOPAJR_STATUS_SPECIAL_S_FLAG_REMOVE_KART);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__off_flag_impl(*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3)
    ;
    lib::L2CValue::~L2CValue(aLStack64);
  }
  return;
}

