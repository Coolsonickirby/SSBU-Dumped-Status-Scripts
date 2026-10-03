
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100011ee0(L2CValue *param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  L2CValue *this;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_2 + 200),0x1f);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PAD_FLAG_SPECIAL_TRIGGER);
  lib::L2CValue::operator&(this,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_DONKEY_STATUS_SPECIAL_LW_FLAG_LOOP);
    iVar2 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__on_flag_impl(*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
    lib::L2CValue::~L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

