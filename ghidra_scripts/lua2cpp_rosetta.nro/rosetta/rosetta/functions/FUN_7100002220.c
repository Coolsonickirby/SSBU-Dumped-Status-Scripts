
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100002220(long param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CValue *pLVar4;
  code *pcVar5;
  long *plVar6;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_ROSETTA_STATUS_REBIRTH_FLAG_REBIRTH_TICO);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::operator!(aLStack80);
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROSETTA_LINK_NO_TICO);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    bVar1 = app::lua_bind::LinkModule__is_link_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((bVar2 & 1U) != 0) {
      app::LinkEvent::new_l2c_table();
      pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack80,0x105a79305b);
      lib::L2CValue::L2CValue(aLStack64,0x22c9a5a2fd);
      lib::L2CValue::operator=(pLVar4,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_ROSETTA_LINK_NO_TICO);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack80,0x11f63699bf);
      pcVar5 = (code *)lib::L2CValue::as_pointer(pLVar4);
      plVar6 = (long *)(*pcVar5)();
      app::lua_bind::LinkEvent__load_from_l2c_table_impl((LinkEvent *)plVar6,aLStack80);
      app::lua_bind::LinkModule__send_event_parents_struct_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,(LinkEvent *)plVar6);
      app::lua_bind::LinkEvent__store_l2c_table_impl((LinkEvent *)plVar6);
      lib::L2CValue::L2CValue(aLStack96,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      (**(code **)(*plVar6 + 8))(plVar6);
      lib::L2CValue::operator=(aLStack80,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack80);
    }
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_ROSETTA_STATUS_REBIRTH_FLAG_REBIRTH_TICO);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__on_flag_impl(*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    lib::L2CValue::~L2CValue(aLStack64);
  }
  return;
}

