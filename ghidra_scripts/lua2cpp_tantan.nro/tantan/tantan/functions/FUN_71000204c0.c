
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000204c0(long param_1,L2CValue *param_2,L2CValue *param_3,L2CValue *param_4,
                   L2CValue *param_5)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  Hash40 HVar5;
  float fVar6;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack96,0);
  uVar4 = lib::L2CValue::operator<=(param_4,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack96,-1.0);
    lib::L2CValue::operator=(param_4,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue(aLStack96,0);
  uVar4 = lib::L2CValue::operator<=(param_5,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack96,1.0);
    lib::L2CValue::operator=(param_5,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_TANTAN_GENERATE_ARTICLE_SPIRALLEFT);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::ArticleModule__is_exist_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_GENERATE_ARTICLE_SPIRALLEFT);
    lib::L2CValue::L2CValue(aLStack112,false);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    HVar5 = lib::L2CValue::as_hash(param_2);
    bVar1 = lib::L2CValue::as_bool(aLStack112);
    fVar6 = (float)lib::L2CValue::as_number(param_4);
    app::lua_bind::ArticleModule__change_motion_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,HVar5,(bool)(bVar1 & 1),fVar6)
    ;
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_GENERATE_ARTICLE_SPIRALLEFT);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    fVar6 = (float)lib::L2CValue::as_number(param_5);
    app::lua_bind::ArticleModule__set_rate_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,fVar6);
    lib::L2CValue::~L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_TANTAN_GENERATE_ARTICLE_SPIRALRIGHT);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::ArticleModule__is_exist_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_GENERATE_ARTICLE_SPIRALRIGHT);
    lib::L2CValue::L2CValue(aLStack112,false);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    HVar5 = lib::L2CValue::as_hash(param_3);
    bVar1 = lib::L2CValue::as_bool(aLStack112);
    fVar6 = (float)lib::L2CValue::as_number(param_4);
    app::lua_bind::ArticleModule__change_motion_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,HVar5,(bool)(bVar1 & 1),fVar6)
    ;
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_GENERATE_ARTICLE_SPIRALRIGHT);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    fVar6 = (float)lib::L2CValue::as_number(param_5);
    app::lua_bind::ArticleModule__set_rate_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,fVar6);
    lib::L2CValue::~L2CValue(aLStack96);
  }
  return;
}

