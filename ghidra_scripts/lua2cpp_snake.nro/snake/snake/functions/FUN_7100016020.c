
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100016020(L2CValue *param_1,long param_2,L2CValue *param_3)

{
  bool bVar1;
  int iVar2;
  L2CValue *this;
  BattleObjectModuleAccessor *pBVar3;
  L2CValue aLStack64 [16];
  
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar1 & 1U) != 0) {
    this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_2 + 200),5);
    pBVar3 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(this);
    app::FighterSnakeFinalModule::lock_on_ready(pBVar3);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_SNAKE_STATUS_FINAL_INT_FRAME);
    iVar2 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__dec_int_impl(*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_SNAKE_STATUS_FINAL_INT_FLASH_FRAME);
    iVar2 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__dec_int_impl(*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
    lib::L2CValue::~L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

