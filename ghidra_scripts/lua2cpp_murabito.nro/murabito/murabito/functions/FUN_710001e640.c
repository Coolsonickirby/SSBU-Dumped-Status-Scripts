
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001e640(long param_1)

{
  int iVar1;
  int iVar2;
  L2CValue *this;
  ulong uVar3;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  FUN_710001e7c0();
  lib::L2CValue::L2CValue(aLStack64,0);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MURABITO_INSTANCE_WORK_ID_INT_SPECIAL_HI_BALLOON_NUM);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_int_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1,iVar2);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0);
  lib::L2CValue::L2CValue
            (aLStack80,_FIGHTER_MURABITO_INSTANCE_WORK_ID_INT_SPECIAL_HI_INVINCIBLE_FRAME);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_int_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1,iVar2);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
  this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),2);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIND_SHIZUE);
  uVar3 = lib::L2CValue::operator==(this,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_SHIZUE_GENERATE_ARTICLE_SWING);
    iVar1 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::ArticleModule__remove_exist_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1,0);
    lib::L2CValue::~L2CValue(aLStack64);
  }
  return;
}

