
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001c770(long param_1)

{
  byte bVar1;
  int iVar2;
  ArticleOperationTarget AVar3;
  L2CValue *this;
  ulong uVar4;
  ulong uVar5;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,0);
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,0);
  this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),9);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_SAMUS_STATUS_KIND_BOMB_JUMP_A);
  uVar4 = lib::L2CValue::operator==(this,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_SAMUS_STATUS_SPECIAL_LW_FLAG_WEAPON);
    iVar2 = lib::L2CValue::as_integer(aLStack144);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
    lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack64,false);
    uVar4 = lib::L2CValue::operator==(aLStack128,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack144);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_SAMUS_GENERATE_ARTICLE_BOMB);
      lib::L2CValue::operator=(aLStack96,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack128,0x1018dfb2f4);
      lib::L2CValue::L2CValue(aLStack144,0xcbde2b6d8);
      uVar4 = lib::L2CValue::as_integer(aLStack128);
      uVar5 = lib::L2CValue::as_integer(aLStack144);
      iVar2 = app::lua_bind::WorkModule__get_param_int_impl
                        (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar4,uVar5);
      lib::L2CValue::L2CValue(aLStack64,iVar2);
      lib::L2CValue::operator=(aLStack112,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack128);
      iVar2 = lib::L2CValue::as_integer(aLStack96);
      iVar2 = app::lua_bind::ArticleModule__get_active_num_impl
                        (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
      lib::L2CValue::L2CValue(aLStack64,iVar2);
      lib::L2CValue::operator=(aLStack80,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      uVar4 = lib::L2CValue::operator<(aLStack80,aLStack112);
      if ((uVar4 & 1) != 0) {
        iVar2 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::ArticleModule__generate_article_enable_impl
                  (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2,false,-1);
        lib::L2CValue::L2CValue(aLStack64,_ARTICLE_OPE_TARGET_ALL);
        lib::L2CValue::L2CValue(aLStack128,false);
        iVar2 = lib::L2CValue::as_integer(aLStack96);
        AVar3 = lib::L2CValue::as_integer(aLStack64);
        bVar1 = lib::L2CValue::as_bool(aLStack128);
        app::lua_bind::ArticleModule__shoot_exist_impl
                  (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2,AVar3,(bool)(bVar1 & 1));
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue(aLStack64);
      }
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_SAMUS_STATUS_SPECIAL_LW_FLAG_WEAPON);
      iVar2 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__off_flag_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
      lib::L2CValue::~L2CValue(aLStack64);
    }
  }
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

