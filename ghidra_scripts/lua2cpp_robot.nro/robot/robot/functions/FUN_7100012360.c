
void FUN_7100012360(L2CValue *param_1,long param_2,L2CValue *param_3,L2CValue *param_4)

{
  int iVar1;
  L2CValue *this;
  code *pcVar2;
  long *plVar3;
  L2CValue aLStack80 [16];
  
  iVar1 = lib::L2CValue::as_integer(param_3);
  this = (L2CValue *)lib::L2CValue::operator[](param_4,0x11f63699bf);
  pcVar2 = (code *)lib::L2CValue::as_pointer(this);
  plVar3 = (long *)(*pcVar2)();
  app::lua_bind::LinkEvent__load_from_l2c_table_impl((LinkEvent *)plVar3,param_4);
  app::lua_bind::LinkModule__send_event_nodes_struct_impl
            (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar1,(LinkEvent *)plVar3,0);
  app::lua_bind::LinkEvent__store_l2c_table_impl((LinkEvent *)plVar3);
  lib::L2CValue::L2CValue(param_1,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  (**(code **)(*plVar3 + 8))(plVar3);
  return;
}

