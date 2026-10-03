
void FUN_710001ff70(L2CValue *param_1,L2CValue *param_2,L2CValue *param_3,L2CValue *param_4,
                   L2CValue *param_5)

{
  int iVar1;
  uint uVar2;
  L2CValue *this;
  code *pcVar3;
  long *plVar4;
  BattleObjectModuleAccessor *pBVar5;
  L2CValue aLStack80 [16];
  
  iVar1 = lib::L2CValue::as_integer(param_2);
  this = (L2CValue *)lib::L2CValue::operator[](param_3,0x11f63699bf);
  pcVar3 = (code *)lib::L2CValue::as_pointer(this);
  plVar4 = (long *)(*pcVar3)();
  app::lua_bind::LinkEvent__load_from_l2c_table_impl((LinkEvent *)plVar4,param_3);
  uVar2 = lib::L2CValue::as_integer(param_4);
  pBVar5 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(param_5);
  app::lua_bind::LinkModule__send_event_nodes_struct_impl(pBVar5,iVar1,(LinkEvent *)plVar4,uVar2);
  app::lua_bind::LinkEvent__store_l2c_table_impl((LinkEvent *)plVar4);
  lib::L2CValue::L2CValue(param_1,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  (**(code **)(*plVar4 + 8))(plVar4);
  return;
}

