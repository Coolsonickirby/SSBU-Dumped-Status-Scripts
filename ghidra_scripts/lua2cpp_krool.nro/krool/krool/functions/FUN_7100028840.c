
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100028840(long param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KROOL_INSTANCE_WORK_ID_FLAG_DROP_CROWN);
  iVar3 = lib::L2CValue::as_integer(aLStack64);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack48,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack48);
  lib::L2CValue::~L2CValue(aLStack48);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack48,0x55079bde4);
    lib::L2CValue::L2CValue(aLStack64,0xa2a6b42e3);
    lVar4 = lib::L2CValue::as_integer(aLStack48);
    lVar5 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::VisibilityModule__set_int64_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),lVar4,lVar5);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack48);
  }
  return;
}

