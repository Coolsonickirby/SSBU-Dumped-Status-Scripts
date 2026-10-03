
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710003dd10(long param_1,L2CValue *param_2,L2CValue *param_3,L2CValue *param_4)

{
  byte bVar1;
  int iVar2;
  L2CValue *this;
  ulong uVar3;
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
  
  lib::L2CValue::L2CValue(aLStack112);
  this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),0x16);
  lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
  uVar3 = lib::L2CValue::operator==(this,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::operator=(aLStack112,param_3);
  }
  else {
    lib::L2CValue::operator=(aLStack112,param_2);
  }
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_DEMON_GENERATE_ARTICLE_DEMONP);
  iVar2 = lib::L2CValue::as_integer(aLStack144);
  bVar1 = app::lua_bind::ArticleModule__is_exist_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar3 = lib::L2CValue::operator==(aLStack128,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack144);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_DEMON_GENERATE_ARTICLE_DEMONP);
    lib::L2CValue::L2CValue(aLStack176,aLStack112);
    lib::L2CValue::L2CValue(aLStack192,param_4);
    FUN_710003efb0(param_1,aLStack160,aLStack176,aLStack192);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack160);
  }
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_DEMON_GENERATE_ARTICLE_BLASTERCHEST);
  iVar2 = lib::L2CValue::as_integer(aLStack144);
  bVar1 = app::lua_bind::ArticleModule__is_exist_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar3 = lib::L2CValue::operator==(aLStack128,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack144);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack208,_FIGHTER_DEMON_GENERATE_ARTICLE_BLASTERCHEST);
    lib::L2CValue::L2CValue(aLStack224,aLStack112);
    lib::L2CValue::L2CValue(aLStack240,param_4);
    FUN_710003efb0(param_1,aLStack208,aLStack224,aLStack240);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue(aLStack208);
  }
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_DEMON_GENERATE_ARTICLE_BLASTERHEAD);
  iVar2 = lib::L2CValue::as_integer(aLStack144);
  bVar1 = app::lua_bind::ArticleModule__is_exist_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar3 = lib::L2CValue::operator==(aLStack128,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack144);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack256,_FIGHTER_DEMON_GENERATE_ARTICLE_BLASTERHEAD);
    lib::L2CValue::L2CValue(aLStack272,aLStack112);
    lib::L2CValue::L2CValue(aLStack288,param_4);
    FUN_710003efb0(param_1,aLStack256,aLStack272,aLStack288);
    lib::L2CValue::~L2CValue(aLStack288);
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CValue::~L2CValue(aLStack256);
  }
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_DEMON_GENERATE_ARTICLE_BLASTERWING);
  iVar2 = lib::L2CValue::as_integer(aLStack144);
  bVar1 = app::lua_bind::ArticleModule__is_exist_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar3 = lib::L2CValue::operator==(aLStack128,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack144);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack304,_FIGHTER_DEMON_GENERATE_ARTICLE_BLASTERWING);
    lib::L2CValue::L2CValue(aLStack320,aLStack112);
    lib::L2CValue::L2CValue(aLStack336,param_4);
    FUN_710003efb0(param_1,aLStack304,aLStack320,aLStack336);
    lib::L2CValue::~L2CValue(aLStack336);
    lib::L2CValue::~L2CValue(aLStack320);
    lib::L2CValue::~L2CValue(aLStack304);
  }
  lib::L2CValue::~L2CValue(aLStack112);
  return;
}

