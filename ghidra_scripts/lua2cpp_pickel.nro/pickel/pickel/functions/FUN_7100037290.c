
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100037290(L2CValue *param_1,long param_2,L2CValue *param_3,L2CValue *param_4)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  ulong uVar4;
  Article *pAVar5;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PICKEL_GENERATE_ARTICLE_PLATE);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  pvVar3 = (void *)app::lua_bind::ArticleModule__get_article_impl
                             (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar1);
  if (pvVar3 == (void *)0x0) {
    lib::L2CValue::L2CValue(aLStack96,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,pvVar3);
  }
  lib::L2CValue::~L2CValue(aLStack80);
  uVar4 = lib::L2CValue::operator==(aLStack96,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
  if ((uVar4 & 1) == 0) {
    pAVar5 = (Article *)lib::L2CValue::as_pointer(aLStack96);
    uVar2 = app::lua_bind::Article__get_battle_object_id_impl(pAVar5);
    lib::L2CValue::L2CValue(aLStack112,uVar2);
    lib::L2CValue::L2CValue(aLStack80,0x50000000);
    uVar4 = lib::L2CValue::operator==(aLStack112,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack144,aLStack112);
      lib::L2CValue::L2CValue(aLStack160,false);
      FUN_7100036970(aLStack128,param_2,aLStack144,aLStack160);
      lib::L2CValue::L2CValue(aLStack176,param_3);
      lib::L2CValue::L2CValue(aLStack192,param_4);
      FUN_7100035f40(param_1,aLStack128,aLStack176,aLStack192);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack144);
    }
    else {
      lib::L2CValue::L2CValue(param_1,false);
    }
    lib::L2CValue::~L2CValue(aLStack112);
  }
  else {
    lib::L2CValue::L2CValue(param_1,false);
  }
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

