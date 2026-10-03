
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710020c790(L2CValue *param_1,long param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CValue *this;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_FOX_BLASTER_STATUS_WORK_ID_FLAG_LOOP_ACCEPT);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((bVar2 & 1U) != 0) {
    this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_2 + 200),0x1f);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PAD_FLAG_SPECIAL_TRIGGER);
    lib::L2CValue::operator&(this,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_FOX_BLASTER_STATUS_WORK_ID_FLAG_LOOP);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__on_flag_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
      lib::L2CValue::~L2CValue(aLStack64);
    }
  }
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

