
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100039a40(L2CValue *param_1,long param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  ulong uVar5;
  Article *pAVar6;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PICKEL_GENERATE_ARTICLE_PICKELBOMB);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  pvVar4 = (void *)app::lua_bind::ArticleModule__get_article_impl
                             (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
  if (pvVar4 == (void *)0x0) {
    lib::L2CValue::L2CValue(aLStack80,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,pvVar4);
  }
  lib::L2CValue::~L2CValue(aLStack64);
  uVar5 = lib::L2CValue::operator==(aLStack80,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
  if ((uVar5 & 1) == 0) {
    pAVar6 = (Article *)lib::L2CValue::as_pointer(aLStack80);
    uVar3 = app::lua_bind::Article__get_battle_object_id_impl(pAVar6);
    lib::L2CValue::L2CValue(aLStack64,uVar3);
    uVar3 = lib::L2CValue::as_integer(aLStack64);
    pvVar4 = (void *)app::sv_battle_object::module_accessor(uVar3);
    if (pvVar4 == (void *)0x0) {
      lib::L2CValue::L2CValue(aLStack96,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,pvVar4);
    }
    lib::L2CValue::~L2CValue(aLStack64);
    uVar5 = lib::L2CValue::operator==(aLStack96,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PICKEL_GENERATE_ARTICLE_PLATE);
      iVar2 = lib::L2CValue::as_integer(aLStack128);
      bVar1 = app::lua_bind::ArticleModule__is_generatable_impl
                        (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack64,false);
      uVar5 = lib::L2CValue::operator==(aLStack112,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack128);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(param_1,true);
      }
      else {
        lib::L2CValue::L2CValue(param_1,false);
      }
    }
    else {
      lib::L2CValue::L2CValue(param_1,false);
    }
    lib::L2CValue::~L2CValue(aLStack96);
  }
  else {
    lib::L2CValue::L2CValue(param_1,false);
  }
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

