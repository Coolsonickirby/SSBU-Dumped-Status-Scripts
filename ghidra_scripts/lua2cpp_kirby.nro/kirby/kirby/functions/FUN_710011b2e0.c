
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710011b2e0(long param_1)

{
  byte bVar1;
  int iVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  iVar2 = FIGHTER_KIND_KIRBY;
  pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),2);
  lib::L2CValue::L2CValue(aLStack64,iVar2);
  uVar4 = lib::L2CValue::operator==(aLStack64,pLVar3);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_EFLAME_GENERATE_ARTICLE_ESWORD);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = app::lua_bind::ArticleModule__is_exist_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack64,true);
    uVar4 = lib::L2CValue::operator==(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIRBY_INSTANCE_WORK_ID_INT_COPY_CHARA);
      iVar2 = lib::L2CValue::as_integer(aLStack64);
      iVar2 = app::lua_bind::WorkModule__get_int_impl
                        (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
      lib::L2CValue::L2CValue(aLStack80,iVar2);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIND_EFLAME);
      uVar4 = lib::L2CValue::operator==(aLStack80,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_ELIGHT_GENERATE_ARTICLE_ESWORD);
        lib::L2CValue::L2CValue(aLStack96,false);
        iVar2 = lib::L2CValue::as_integer(aLStack64);
        bVar1 = lib::L2CValue::as_bool(aLStack96);
        app::lua_bind::ArticleModule__set_visibility_whole_impl
                  (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2,(bool)(bVar1 & 1),0);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack64);
      }
      lib::L2CValue::~L2CValue(aLStack80);
    }
  }
  return;
}

